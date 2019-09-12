// python wrapper for vtkSurfaceLICInterface
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
#include "vtkSurfaceLICInterface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceLICInterface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSurfaceLICInterface_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSurfaceLICInterface_Doc =
  "vtkSurfaceLICInterface - public API for surface lic parameters\n arbitrary geometry.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSurfaceLICInterface performs LIC on the surface of arbitrary\n"
  " geometry. Point vectors are used as the vector field for generating\n"
  "the LIC.\n"
  " The implementation was originallu  based on \"Image Space Based\n"
  "Visualization\n"
  " on Unsteady Flow on Surfaces\" by Laramee, Jobard and Hauser appeared\n"
  "in\n"
  " proceedings of IEEE Visualization '03, pages 131-138.\n\n\n"
  " Internal pipeline:\n\n"
  "noise\n"
  "    |\n"
  "    [ PROJ (GAT) (COMP) LIC2D (SCAT) SHADE (CCE) DEP]\n"
  "    |                                               | vectors        \n"
  "                                surface LIC  PROj  - prject vectors\n"
  "onto surface GAT   - gather data for compositing and guard pixel\n"
  "generation  (parallel only) COMP  - composite gathered data LIC2D -\n"
  "line intengral convolution, see vtkLineIntegralConvolution2D. SCAT  -\n"
  "scatter result (parallel only, not all compositors use it) SHADE -\n"
  "combine LIC and scalar colors CCE   - color contrast enhancement\n"
  "(optional) DEP   - depth test and copy to back buffer\n\n"
  "The result of each stage is cached in a texture so that during\n"
  "interaction a stage may be skipped if the user has not modified its\n"
  "parameters or input data.\n\n"
  "The parallel parts of algorithm are implemented in\n"
  "vtkPSurfaceLICInterface. Note that for MPI enabled builds this class\n"
  "will be automatically created by the object factory.\n\n"
  "@sa\n"
  "vtkLineIntegralConvolution2D\n\n";


static PyObject *
PyvtkSurfaceLICInterface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceLICInterface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceLICInterface *tempr = vtkSurfaceLICInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICInterface::NewInstance());

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
PyvtkSurfaceLICInterface_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSteps(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSteps() :
      op->vtkSurfaceLICInterface::GetNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkSurfaceLICInterface::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeVectors(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNormalizeVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NormalizeVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeVectorsOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::NormalizeVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NormalizeVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeVectorsOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::NormalizeVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeVectors() :
      op->vtkSurfaceLICInterface::GetNormalizeVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskOnSurface(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskOnSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_MaskOnSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOnSurfaceOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::MaskOnSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_MaskOnSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOnSurfaceOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::MaskOnSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskOnSurface() :
      op->vtkSurfaceLICInterface::GetMaskOnSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskThreshold(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskThreshold() :
      op->vtkSurfaceLICInterface::GetMaskThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMaskColor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskColor(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceLICInterface_SetMaskColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

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
      op->SetMaskColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceLICInterface_SetMaskColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSurfaceLICInterface_SetMaskColor_s1(self, args);
    case 3:
      return PyvtkSurfaceLICInterface_SetMaskColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskColor");
  return nullptr;
}



static PyObject *
PyvtkSurfaceLICInterface_GetMaskColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaskColor() :
      op->vtkSurfaceLICInterface::GetMaskColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskIntensity(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskIntensity() :
      op->vtkSurfaceLICInterface::GetMaskIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhancedLIC(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnhancedLIC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLIC() :
      op->vtkSurfaceLICInterface::GetEnhancedLIC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnhancedLICOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnhancedLICOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhanceContrast(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnhanceContrast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrast() :
      op->vtkSurfaceLICInterface::GetEnhanceContrast());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowLICContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetLowLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighLICContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetHighLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowLICContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLowLICContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighLICContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHighLICContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowColorContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetLowColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighColorContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetHighColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowColorContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLowColorContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighColorContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHighColorContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAntiAlias(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetAntiAlias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_AntiAliasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::AntiAliasOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_AntiAliasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::AntiAliasOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAntiAlias() :
      op->vtkSurfaceLICInterface::GetAntiAlias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkSurfaceLICInterface::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLICIntensity(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLICIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLICIntensity() :
      op->vtkSurfaceLICInterface::GetLICIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapModeBias(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMapModeBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMapModeBias() :
      op->vtkSurfaceLICInterface::GetMapModeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetNoiseDataSet(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetNoiseDataSet() :
      op->vtkSurfaceLICInterface::GetNoiseDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNoiseTexture(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetGenerateNoiseTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNoiseTexture() :
      op->vtkSurfaceLICInterface::GetGenerateNoiseTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseType(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseType() :
      op->vtkSurfaceLICInterface::GetNoiseType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseTextureSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseTextureSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseTextureSize() :
      op->vtkSurfaceLICInterface::GetNoiseTextureSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseGrainSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseGrainSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGrainSize() :
      op->vtkSurfaceLICInterface::GetNoiseGrainSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinNoiseValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMinNoiseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNoiseValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaxNoiseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinNoiseValue() :
      op->vtkSurfaceLICInterface::GetMinNoiseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValue() :
      op->vtkSurfaceLICInterface::GetMaxNoiseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNoiseLevels(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNumberOfNoiseLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNoiseLevels() :
      op->vtkSurfaceLICInterface::GetNumberOfNoiseLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImpulseNoiseProbability(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetImpulseNoiseProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseProbability() :
      op->vtkSurfaceLICInterface::GetImpulseNoiseProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImpulseNoiseBackgroundValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetImpulseNoiseBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseBackgroundValue() :
      op->vtkSurfaceLICInterface::GetImpulseNoiseBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseGeneratorSeed(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseGeneratorSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGeneratorSeed() :
      op->vtkSurfaceLICInterface::GetNoiseGeneratorSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStrategy(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetCompositeStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeStrategy() :
      op->vtkSurfaceLICInterface::GetCompositeStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkSurfaceLICInterface::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_WriteTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteTimerLog(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::WriteTimerLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkSurfaceLICInterface *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSurfaceLICInterface"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CanRenderSurfaceLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanRenderSurfaceLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanRenderSurfaceLIC(temp0) :
      op->vtkSurfaceLICInterface::CanRenderSurfaceLIC(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ValidateContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->ValidateContext(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ValidateContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CreateCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CreateCommunicator(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::CreateCommunicator(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_UpdateCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->UpdateCommunicator(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::UpdateCommunicator(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHasVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasVectors(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHasVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHasVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasVectors() :
      op->vtkSurfaceLICInterface::GetHasVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_InitializeResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeResources();
    }
    else
    {
      op->vtkSurfaceLICInterface::InitializeResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_PrepareForGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForGeometry();
    }
    else
    {
      op->vtkSurfaceLICInterface::PrepareForGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CompletedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompletedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompletedGeometry();
    }
    else
    {
      op->vtkSurfaceLICInterface::CompletedGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GatherVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GatherVectors();
    }
    else
    {
      op->vtkSurfaceLICInterface::GatherVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ApplyLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyLIC();
    }
    else
    {
      op->vtkSurfaceLICInterface::ApplyLIC();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CombineColorsAndLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CombineColorsAndLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CombineColorsAndLIC();
    }
    else
    {
      op->vtkSurfaceLICInterface::CombineColorsAndLIC();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CopyToScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyToScreen();
    }
    else
    {
      op->vtkSurfaceLICInterface::CopyToScreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnable(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnable() :
      op->vtkSurfaceLICInterface::GetEnable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceLICInterface_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceLICInterface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceLICInterface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceLICInterface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSurfaceLICInterface\nC++: static vtkSurfaceLICInterface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceLICInterface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSurfaceLICInterface\nC++: vtkSurfaceLICInterface *NewInstance()\n\n"},
  {"SetNumberOfSteps", PyvtkSurfaceLICInterface_SetNumberOfSteps, METH_VARARGS,
   "V.SetNumberOfSteps(int)\nC++: void SetNumberOfSteps(int val)\n\nGet/Set the number of integration steps in each direction.\n"},
  {"GetNumberOfSteps", PyvtkSurfaceLICInterface_GetNumberOfSteps, METH_VARARGS,
   "V.GetNumberOfSteps() -> int\nC++: virtual int GetNumberOfSteps()\n\nGet/Set the number of integration steps in each direction.\n"},
  {"SetStepSize", PyvtkSurfaceLICInterface_SetStepSize, METH_VARARGS,
   "V.SetStepSize(float)\nC++: void SetStepSize(double val)\n\nGet/Set the step size (in pixels).\n"},
  {"GetStepSize", PyvtkSurfaceLICInterface_GetStepSize, METH_VARARGS,
   "V.GetStepSize() -> float\nC++: virtual double GetStepSize()\n\nGet/Set the step size (in pixels).\n"},
  {"SetNormalizeVectors", PyvtkSurfaceLICInterface_SetNormalizeVectors, METH_VARARGS,
   "V.SetNormalizeVectors(int)\nC++: void SetNormalizeVectors(int val)\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {"NormalizeVectorsOn", PyvtkSurfaceLICInterface_NormalizeVectorsOn, METH_VARARGS,
   "V.NormalizeVectorsOn()\nC++: virtual void NormalizeVectorsOn()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {"NormalizeVectorsOff", PyvtkSurfaceLICInterface_NormalizeVectorsOff, METH_VARARGS,
   "V.NormalizeVectorsOff()\nC++: virtual void NormalizeVectorsOff()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {"GetNormalizeVectors", PyvtkSurfaceLICInterface_GetNormalizeVectors, METH_VARARGS,
   "V.GetNormalizeVectors() -> int\nC++: virtual int GetNormalizeVectors()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {"SetMaskOnSurface", PyvtkSurfaceLICInterface_SetMaskOnSurface, METH_VARARGS,
   "V.SetMaskOnSurface(int)\nC++: void SetMaskOnSurface(int val)\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {"MaskOnSurfaceOn", PyvtkSurfaceLICInterface_MaskOnSurfaceOn, METH_VARARGS,
   "V.MaskOnSurfaceOn()\nC++: virtual void MaskOnSurfaceOn()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {"MaskOnSurfaceOff", PyvtkSurfaceLICInterface_MaskOnSurfaceOff, METH_VARARGS,
   "V.MaskOnSurfaceOff()\nC++: virtual void MaskOnSurfaceOff()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {"GetMaskOnSurface", PyvtkSurfaceLICInterface_GetMaskOnSurface, METH_VARARGS,
   "V.GetMaskOnSurface() -> int\nC++: virtual int GetMaskOnSurface()\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {"SetMaskThreshold", PyvtkSurfaceLICInterface_SetMaskThreshold, METH_VARARGS,
   "V.SetMaskThreshold(float)\nC++: void SetMaskThreshold(double val)\n\nThe MaskThreshold controls the rendering of fragments in stagnant\nregions of flow.  // In these regions LIC noise texture will be\nmasked, where |V| < MaskThreshold is satisfied. The masking\nprocess blends a the MaskColor with the scalar color of the\nsurface proportional to MaskIntesnsity. See MaskIntensity for\nmore information on the blending algorithm. This blending allows\none control over the masking process so that masked fragments may\nbe: highlighted (by setting a unique mask color and mask\nintensity > 0), made invisible with and without passing the\nun-convolved noise texture (by setting mask intensity 0), made to\nblend into the LIC.\n\n* MaskThreshold units are in the original vector space. Note that\nthe\n* threshold can be applied to the original vector field or to the\nsurface\n* projected vector field. See MaskOnSurface.\n"},
  {"GetMaskThreshold", PyvtkSurfaceLICInterface_GetMaskThreshold, METH_VARARGS,
   "V.GetMaskThreshold() -> float\nC++: virtual double GetMaskThreshold()\n\nThe MaskThreshold controls the rendering of fragments in stagnant\nregions of flow.  // In these regions LIC noise texture will be\nmasked, where |V| < MaskThreshold is satisfied. The masking\nprocess blends a the MaskColor with the scalar color of the\nsurface proportional to MaskIntesnsity. See MaskIntensity for\nmore information on the blending algorithm. This blending allows\none control over the masking process so that masked fragments may\nbe: highlighted (by setting a unique mask color and mask\nintensity > 0), made invisible with and without passing the\nun-convolved noise texture (by setting mask intensity 0), made to\nblend into the LIC.\n\n* MaskThreshold units are in the original vector space. Note that\nthe\n* threshold can be applied to the original vector field or to the\nsurface\n* projected vector field. See MaskOnSurface.\n"},
  {"SetMaskColor", PyvtkSurfaceLICInterface_SetMaskColor, METH_VARARGS,
   "V.SetMaskColor([float, ...])\nC++: void SetMaskColor(double *val)\nV.SetMaskColor(float, float, float)\nC++: void SetMaskColor(double r, double g, double b)\n\nThe MaskColor is used on masked fragments. The default of (0.5,\n0.5, 0.5) makes the masked fragments look similar to the LIC'd\nfragments. The mask color is applied only when MaskIntensity > 0.\n"},
  {"GetMaskColor", PyvtkSurfaceLICInterface_GetMaskColor, METH_VARARGS,
   "V.GetMaskColor() -> (float, float, float)\nC++: double *GetMaskColor()\n\n"},
  {"SetMaskIntensity", PyvtkSurfaceLICInterface_SetMaskIntensity, METH_VARARGS,
   "V.SetMaskIntensity(float)\nC++: void SetMaskIntensity(double val)\n\nThe MaskIntensity controls the blending of the mask color and the\ngeometry color. The color of masked fragments is given by:\n\n* c = maskColor * maskIntensity + geomColor * (1 - maskIntensity)\n\n* The default value of 0.0 results in the geometry color being\n  used.\n"},
  {"GetMaskIntensity", PyvtkSurfaceLICInterface_GetMaskIntensity, METH_VARARGS,
   "V.GetMaskIntensity() -> float\nC++: virtual double GetMaskIntensity()\n\nThe MaskIntensity controls the blending of the mask color and the\ngeometry color. The color of masked fragments is given by:\n\n* c = maskColor * maskIntensity + geomColor * (1 - maskIntensity)\n\n* The default value of 0.0 results in the geometry color being\n  used.\n"},
  {"SetEnhancedLIC", PyvtkSurfaceLICInterface_SetEnhancedLIC, METH_VARARGS,
   "V.SetEnhancedLIC(int)\nC++: void SetEnhancedLIC(int val)\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"GetEnhancedLIC", PyvtkSurfaceLICInterface_GetEnhancedLIC, METH_VARARGS,
   "V.GetEnhancedLIC() -> int\nC++: virtual int GetEnhancedLIC()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"EnhancedLICOn", PyvtkSurfaceLICInterface_EnhancedLICOn, METH_VARARGS,
   "V.EnhancedLICOn()\nC++: virtual void EnhancedLICOn()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"EnhancedLICOff", PyvtkSurfaceLICInterface_EnhancedLICOff, METH_VARARGS,
   "V.EnhancedLICOff()\nC++: virtual void EnhancedLICOff()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"SetEnhanceContrast", PyvtkSurfaceLICInterface_SetEnhanceContrast, METH_VARARGS,
   "V.SetEnhanceContrast(int)\nC++: void SetEnhanceContrast(int val)\n\nEnable/Disable contrast and dynamic range correction stages.\nContrast enhancement can be enabled during LIC computations (See\nvtkLineINtegralComvolution2D) and after the scalar colors have\nbeen combined with the LIC.\n\n* The best approach for using this feature is to enable LIC\n  enhancement,\n* and only if the image is to dark or dull enable COLOR\n  enhancement.\n\n* Both stages are implemented by a histogram stretching\n  algorithm. During\n* LIC stages the contrast enhancement is applied to gray scale\n  LIC image.\n* During the scalar coloring stage the contrast enhancement is\n  applied to\n* the lightness channel of the color image in HSL color space.\n  The\n* histogram stretching is implemented as follows:\n\n* L = (L-m)/(M-m)\n\n* where, L is the fragment intensity/lightness, m is the\n  intensity/lightness\n* to map to 0, M is the intensity/lightness to map to 1. The\n  default values\n* of m and M are the min and max taken over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of\n* which are natuarly attenuated by the convolution process.\n\n* Values\n\n* ENHANCE_CONTRAST_OFF   -- don't enhance LIC or scalar colors\n* ENHANCE_CONTRAST_LIC   -- enhance in LIC high-pass input and\n  output\n* ENHANCE_CONTRAST_COLOR -- enhance after scalars are combined\n  with LIC\n* ENHANCE_CONTRAST_BOTH  -- enhance in LIC stages and after\n  scalar colors\n\n* This feature is disabled by default.\n"},
  {"GetEnhanceContrast", PyvtkSurfaceLICInterface_GetEnhanceContrast, METH_VARARGS,
   "V.GetEnhanceContrast() -> int\nC++: virtual int GetEnhanceContrast()\n\nEnable/Disable contrast and dynamic range correction stages.\nContrast enhancement can be enabled during LIC computations (See\nvtkLineINtegralComvolution2D) and after the scalar colors have\nbeen combined with the LIC.\n\n* The best approach for using this feature is to enable LIC\n  enhancement,\n* and only if the image is to dark or dull enable COLOR\n  enhancement.\n\n* Both stages are implemented by a histogram stretching\n  algorithm. During\n* LIC stages the contrast enhancement is applied to gray scale\n  LIC image.\n* During the scalar coloring stage the contrast enhancement is\n  applied to\n* the lightness channel of the color image in HSL color space.\n  The\n* histogram stretching is implemented as follows:\n\n* L = (L-m)/(M-m)\n\n* where, L is the fragment intensity/lightness, m is the\n  intensity/lightness\n* to map to 0, M is the intensity/lightness to map to 1. The\n  default values\n* of m and M are the min and max taken over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of\n* which are natuarly attenuated by the convolution process.\n\n* Values\n\n* ENHANCE_CONTRAST_OFF   -- don't enhance LIC or scalar colors\n* ENHANCE_CONTRAST_LIC   -- enhance in LIC high-pass input and\n  output\n* ENHANCE_CONTRAST_COLOR -- enhance after scalars are combined\n  with LIC\n* ENHANCE_CONTRAST_BOTH  -- enhance in LIC stages and after\n  scalar colors\n\n* This feature is disabled by default.\n"},
  {"GetLowLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetLowLICContrastEnhancementFactor, METH_VARARGS,
   "V.GetLowLICContrastEnhancementFactor() -> float\nC++: virtual double GetLowLICContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n* m = min(C) + mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), taken over the entire image. Modifying\n  mFactor and\n* MFactor above or below zero provide control over the\n  saturation/\n* de-saturation during contrast enhancement.\n"},
  {"GetHighLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetHighLICContrastEnhancementFactor, METH_VARARGS,
   "V.GetHighLICContrastEnhancementFactor() -> float\nC++: virtual double GetHighLICContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n* m = min(C) + mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), taken over the entire image. Modifying\n  mFactor and\n* MFactor above or below zero provide control over the\n  saturation/\n* de-saturation during contrast enhancement.\n"},
  {"SetLowLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetLowLICContrastEnhancementFactor, METH_VARARGS,
   "V.SetLowLICContrastEnhancementFactor(float)\nC++: void SetLowLICContrastEnhancementFactor(double val)\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n* m = min(C) + mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), taken over the entire image. Modifying\n  mFactor and\n* MFactor above or below zero provide control over the\n  saturation/\n* de-saturation during contrast enhancement.\n"},
  {"SetHighLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetHighLICContrastEnhancementFactor, METH_VARARGS,
   "V.SetHighLICContrastEnhancementFactor(float)\nC++: void SetHighLICContrastEnhancementFactor(double val)\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n* m = min(C) + mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), taken over the entire image. Modifying\n  mFactor and\n* MFactor above or below zero provide control over the\n  saturation/\n* de-saturation during contrast enhancement.\n"},
  {"GetLowColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetLowColorContrastEnhancementFactor, METH_VARARGS,
   "V.GetLowColorContrastEnhancementFactor() -> float\nC++: virtual double GetLowColorContrastEnhancementFactor()\n\n"},
  {"GetHighColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetHighColorContrastEnhancementFactor, METH_VARARGS,
   "V.GetHighColorContrastEnhancementFactor() -> float\nC++: virtual double GetHighColorContrastEnhancementFactor()\n\n"},
  {"SetLowColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetLowColorContrastEnhancementFactor, METH_VARARGS,
   "V.SetLowColorContrastEnhancementFactor(float)\nC++: void SetLowColorContrastEnhancementFactor(double val)\n\n"},
  {"SetHighColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetHighColorContrastEnhancementFactor, METH_VARARGS,
   "V.SetHighColorContrastEnhancementFactor(float)\nC++: void SetHighColorContrastEnhancementFactor(double val)\n\n"},
  {"SetAntiAlias", PyvtkSurfaceLICInterface_SetAntiAlias, METH_VARARGS,
   "V.SetAntiAlias(int)\nC++: void SetAntiAlias(int val)\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {"AntiAliasOn", PyvtkSurfaceLICInterface_AntiAliasOn, METH_VARARGS,
   "V.AntiAliasOn()\nC++: virtual void AntiAliasOn()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {"AntiAliasOff", PyvtkSurfaceLICInterface_AntiAliasOff, METH_VARARGS,
   "V.AntiAliasOff()\nC++: virtual void AntiAliasOff()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {"GetAntiAlias", PyvtkSurfaceLICInterface_GetAntiAlias, METH_VARARGS,
   "V.GetAntiAlias() -> int\nC++: virtual int GetAntiAlias()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {"SetColorMode", PyvtkSurfaceLICInterface_SetColorMode, METH_VARARGS,
   "V.SetColorMode(int)\nC++: void SetColorMode(int val)\n\nSet/Get the color mode. The color mode controls how scalar colors\nare combined with the LIC in the final image. The BLEND mode\ncombines scalar colors with LIC intensities with proportional\nblending controlled by the LICIntensity parameter. The MAP mode\ncombines scalar colors with LIC, by multiplication the HSL\nrepresntation of color's lightness.\n\n* The default is COLOR_MODE_BLEND.\n"},
  {"GetColorMode", PyvtkSurfaceLICInterface_GetColorMode, METH_VARARGS,
   "V.GetColorMode() -> int\nC++: virtual int GetColorMode()\n\nSet/Get the color mode. The color mode controls how scalar colors\nare combined with the LIC in the final image. The BLEND mode\ncombines scalar colors with LIC intensities with proportional\nblending controlled by the LICIntensity parameter. The MAP mode\ncombines scalar colors with LIC, by multiplication the HSL\nrepresntation of color's lightness.\n\n* The default is COLOR_MODE_BLEND.\n"},
  {"SetLICIntensity", PyvtkSurfaceLICInterface_SetLICIntensity, METH_VARARGS,
   "V.SetLICIntensity(float)\nC++: void SetLICIntensity(double val)\n\nFactor used when blend mode is set to COLOR_MODE_BLEND. This\ncontrols the contribution of the LIC in the final output image as\nfollows:\n\n* c = LIC * LICIntensity + scalar * (1 - LICIntensity);\n\n* 0.0 produces same result as disabling LIC altogether, while 1.0\nimplies\n* show LIC result alone.\n"},
  {"GetLICIntensity", PyvtkSurfaceLICInterface_GetLICIntensity, METH_VARARGS,
   "V.GetLICIntensity() -> float\nC++: virtual double GetLICIntensity()\n\nFactor used when blend mode is set to COLOR_MODE_BLEND. This\ncontrols the contribution of the LIC in the final output image as\nfollows:\n\n* c = LIC * LICIntensity + scalar * (1 - LICIntensity);\n\n* 0.0 produces same result as disabling LIC altogether, while 1.0\nimplies\n* show LIC result alone.\n"},
  {"SetMapModeBias", PyvtkSurfaceLICInterface_SetMapModeBias, METH_VARARGS,
   "V.SetMapModeBias(float)\nC++: void SetMapModeBias(double val)\n\nFactor used when blend mode is set to COLOR_MODE_MAP. This adds a\nbias to the LIC image. The purpose of this is to adjust the\nbrightness when a brighter image is desired. The default of 0.0\nresults in no change. Values gretaer than 0.0 will brighten the\nimage while values less than 0.0 darken the image.\n"},
  {"GetMapModeBias", PyvtkSurfaceLICInterface_GetMapModeBias, METH_VARARGS,
   "V.GetMapModeBias() -> float\nC++: virtual double GetMapModeBias()\n\nFactor used when blend mode is set to COLOR_MODE_MAP. This adds a\nbias to the LIC image. The purpose of this is to adjust the\nbrightness when a brighter image is desired. The default of 0.0\nresults in no change. Values gretaer than 0.0 will brighten the\nimage while values less than 0.0 darken the image.\n"},
  {"SetNoiseDataSet", PyvtkSurfaceLICInterface_SetNoiseDataSet, METH_VARARGS,
   "V.SetNoiseDataSet(vtkImageData)\nC++: void SetNoiseDataSet(vtkImageData *data)\n\nSet the data containing a noise array as active scalars. Active\nscalars array will be converted into a texture for use as noise\nin the LIC process. Noise datasets are expected to be gray scale.\n"},
  {"GetNoiseDataSet", PyvtkSurfaceLICInterface_GetNoiseDataSet, METH_VARARGS,
   "V.GetNoiseDataSet() -> vtkImageData\nC++: vtkImageData *GetNoiseDataSet()\n\nSet the data containing a noise array as active scalars. Active\nscalars array will be converted into a texture for use as noise\nin the LIC process. Noise datasets are expected to be gray scale.\n"},
  {"SetGenerateNoiseTexture", PyvtkSurfaceLICInterface_SetGenerateNoiseTexture, METH_VARARGS,
   "V.SetGenerateNoiseTexture(int)\nC++: void SetGenerateNoiseTexture(int shouldGenerate)\n\nSet/Get the noise texture source. When not set the default\n200x200 white noise texture is used (see\nVTKData/Data/Data/noise.png). When set a noise texture is\ngenerated based on the following parameters:\n\n* NoiseType               - select noise type. Gaussian, Uniform,\netc\n* NoiseTextureSize        - number of pixels in square noise\n  texture(side)\n* NoiseGrainSize          - number of pixels each noise value\n  spans(side)\n* MinNoiseValue           - minimum noise color >=0 && <\n  MaxNoiseValue\n* MaxNoiseValue           - maximum noise color <=1 ** >\n  MinNoiseValue\n* NumberOfNoiseLevels     - number of discrete noise colors\n* ImpulseNoiseProbability - impulse noise is generated when < 1\n* ImpulseNoiseBackgroundValue  - the background color for\n  untouched pixels\n* NoiseGeneratorSeed      - seed the random number generators\n\n* Changing the noise texture gives one greater control over the\n  look of the\n* final image. The default is 0 which results in the use of a\n  static 200x200\n* Gaussian noise texture. See VTKData/Data/Data/noise.png.\n"},
  {"GetGenerateNoiseTexture", PyvtkSurfaceLICInterface_GetGenerateNoiseTexture, METH_VARARGS,
   "V.GetGenerateNoiseTexture() -> int\nC++: virtual int GetGenerateNoiseTexture()\n\nSet/Get the noise texture source. When not set the default\n200x200 white noise texture is used (see\nVTKData/Data/Data/noise.png). When set a noise texture is\ngenerated based on the following parameters:\n\n* NoiseType               - select noise type. Gaussian, Uniform,\netc\n* NoiseTextureSize        - number of pixels in square noise\n  texture(side)\n* NoiseGrainSize          - number of pixels each noise value\n  spans(side)\n* MinNoiseValue           - minimum noise color >=0 && <\n  MaxNoiseValue\n* MaxNoiseValue           - maximum noise color <=1 ** >\n  MinNoiseValue\n* NumberOfNoiseLevels     - number of discrete noise colors\n* ImpulseNoiseProbability - impulse noise is generated when < 1\n* ImpulseNoiseBackgroundValue  - the background color for\n  untouched pixels\n* NoiseGeneratorSeed      - seed the random number generators\n\n* Changing the noise texture gives one greater control over the\n  look of the\n* final image. The default is 0 which results in the use of a\n  static 200x200\n* Gaussian noise texture. See VTKData/Data/Data/noise.png.\n"},
  {"SetNoiseType", PyvtkSurfaceLICInterface_SetNoiseType, METH_VARARGS,
   "V.SetNoiseType(int)\nC++: void SetNoiseType(int type)\n\nSelect the statistical distribution of randomly generated noise\nvalues. With uniform noise there is greater control over the\nrange of values in the noise texture. The Default is\nNOISE_TYPE_GAUSSIAN.\n"},
  {"GetNoiseType", PyvtkSurfaceLICInterface_GetNoiseType, METH_VARARGS,
   "V.GetNoiseType() -> int\nC++: virtual int GetNoiseType()\n\nSelect the statistical distribution of randomly generated noise\nvalues. With uniform noise there is greater control over the\nrange of values in the noise texture. The Default is\nNOISE_TYPE_GAUSSIAN.\n"},
  {"SetNoiseTextureSize", PyvtkSurfaceLICInterface_SetNoiseTextureSize, METH_VARARGS,
   "V.SetNoiseTextureSize(int)\nC++: void SetNoiseTextureSize(int length)\n\nSet/Get the side length in pixels of the noise texture. The\ntexture will be length^2 pixels in area.\n"},
  {"GetNoiseTextureSize", PyvtkSurfaceLICInterface_GetNoiseTextureSize, METH_VARARGS,
   "V.GetNoiseTextureSize() -> int\nC++: virtual int GetNoiseTextureSize()\n\nSet/Get the side length in pixels of the noise texture. The\ntexture will be length^2 pixels in area.\n"},
  {"SetNoiseGrainSize", PyvtkSurfaceLICInterface_SetNoiseGrainSize, METH_VARARGS,
   "V.SetNoiseGrainSize(int)\nC++: void SetNoiseGrainSize(int val)\n\nEach noise value will be length^2 pixels in area.\n"},
  {"GetNoiseGrainSize", PyvtkSurfaceLICInterface_GetNoiseGrainSize, METH_VARARGS,
   "V.GetNoiseGrainSize() -> int\nC++: virtual int GetNoiseGrainSize()\n\nEach noise value will be length^2 pixels in area.\n"},
  {"SetMinNoiseValue", PyvtkSurfaceLICInterface_SetMinNoiseValue, METH_VARARGS,
   "V.SetMinNoiseValue(float)\nC++: void SetMinNoiseValue(double val)\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {"SetMaxNoiseValue", PyvtkSurfaceLICInterface_SetMaxNoiseValue, METH_VARARGS,
   "V.SetMaxNoiseValue(float)\nC++: void SetMaxNoiseValue(double val)\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {"GetMinNoiseValue", PyvtkSurfaceLICInterface_GetMinNoiseValue, METH_VARARGS,
   "V.GetMinNoiseValue() -> float\nC++: virtual double GetMinNoiseValue()\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {"GetMaxNoiseValue", PyvtkSurfaceLICInterface_GetMaxNoiseValue, METH_VARARGS,
   "V.GetMaxNoiseValue() -> float\nC++: virtual double GetMaxNoiseValue()\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {"SetNumberOfNoiseLevels", PyvtkSurfaceLICInterface_SetNumberOfNoiseLevels, METH_VARARGS,
   "V.SetNumberOfNoiseLevels(int)\nC++: void SetNumberOfNoiseLevels(int val)\n\nSet/Get the number of discrete values a noise pixel may take on.\nDefault 1024.\n"},
  {"GetNumberOfNoiseLevels", PyvtkSurfaceLICInterface_GetNumberOfNoiseLevels, METH_VARARGS,
   "V.GetNumberOfNoiseLevels() -> int\nC++: virtual int GetNumberOfNoiseLevels()\n\nSet/Get the number of discrete values a noise pixel may take on.\nDefault 1024.\n"},
  {"SetImpulseNoiseProbability", PyvtkSurfaceLICInterface_SetImpulseNoiseProbability, METH_VARARGS,
   "V.SetImpulseNoiseProbability(float)\nC++: void SetImpulseNoiseProbability(double val)\n\nControl the density of of the noise. A value of 1.0 produces\nuniform random noise while values < 1.0 produce impulse noise\nwith the given probability.\n"},
  {"GetImpulseNoiseProbability", PyvtkSurfaceLICInterface_GetImpulseNoiseProbability, METH_VARARGS,
   "V.GetImpulseNoiseProbability() -> float\nC++: virtual double GetImpulseNoiseProbability()\n\nControl the density of of the noise. A value of 1.0 produces\nuniform random noise while values < 1.0 produce impulse noise\nwith the given probability.\n"},
  {"SetImpulseNoiseBackgroundValue", PyvtkSurfaceLICInterface_SetImpulseNoiseBackgroundValue, METH_VARARGS,
   "V.SetImpulseNoiseBackgroundValue(float)\nC++: void SetImpulseNoiseBackgroundValue(double val)\n\nThe color to use for untouched pixels when impulse noise\nprobability < 1.\n"},
  {"GetImpulseNoiseBackgroundValue", PyvtkSurfaceLICInterface_GetImpulseNoiseBackgroundValue, METH_VARARGS,
   "V.GetImpulseNoiseBackgroundValue() -> float\nC++: virtual double GetImpulseNoiseBackgroundValue()\n\nThe color to use for untouched pixels when impulse noise\nprobability < 1.\n"},
  {"SetNoiseGeneratorSeed", PyvtkSurfaceLICInterface_SetNoiseGeneratorSeed, METH_VARARGS,
   "V.SetNoiseGeneratorSeed(int)\nC++: void SetNoiseGeneratorSeed(int val)\n\nSet/Get the seed value used by the random number generator.\n"},
  {"GetNoiseGeneratorSeed", PyvtkSurfaceLICInterface_GetNoiseGeneratorSeed, METH_VARARGS,
   "V.GetNoiseGeneratorSeed() -> int\nC++: virtual int GetNoiseGeneratorSeed()\n\nSet/Get the seed value used by the random number generator.\n"},
  {"SetCompositeStrategy", PyvtkSurfaceLICInterface_SetCompositeStrategy, METH_VARARGS,
   "V.SetCompositeStrategy(int)\nC++: void SetCompositeStrategy(int val)\n\nControl the screen space decomposition where LIC is computed.\n"},
  {"GetCompositeStrategy", PyvtkSurfaceLICInterface_GetCompositeStrategy, METH_VARARGS,
   "V.GetCompositeStrategy() -> int\nC++: virtual int GetCompositeStrategy()\n\nControl the screen space decomposition where LIC is computed.\n"},
  {"IsSupported", PyvtkSurfaceLICInterface_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *context)\n\nReturns true if the rendering context supports extensions needed\nby this painter.\n"},
  {"WriteTimerLog", PyvtkSurfaceLICInterface_WriteTimerLog, METH_VARARGS,
   "V.WriteTimerLog(string)\nC++: virtual void WriteTimerLog(const char *)\n\nMethods used for parallel benchmarks. Use cmake to define\nvtkSurfaceLICMapperTIME to enable benchmarks. During each update\ntiming information is stored, it can be written to disk by\ncalling WriteLog.\n"},
  {"ShallowCopy", PyvtkSurfaceLICInterface_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkSurfaceLICInterface)\nC++: void ShallowCopy(vtkSurfaceLICInterface *m)\n\nMake a shallow copy of this interface\n"},
  {"ReleaseGraphicsResources", PyvtkSurfaceLICInterface_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {"CanRenderSurfaceLIC", PyvtkSurfaceLICInterface_CanRenderSurfaceLIC, METH_VARARGS,
   "V.CanRenderSurfaceLIC(vtkActor) -> bool\nC++: bool CanRenderSurfaceLIC(vtkActor *actor)\n\nReturns true when rendering LIC is possible.\n"},
  {"ValidateContext", PyvtkSurfaceLICInterface_ValidateContext, METH_VARARGS,
   "V.ValidateContext(vtkRenderer)\nC++: void ValidateContext(vtkRenderer *renderer)\n\nLook for changes that would trigger stage updates\n"},
  {"CreateCommunicator", PyvtkSurfaceLICInterface_CreateCommunicator, METH_VARARGS,
   "V.CreateCommunicator(vtkRenderer, vtkActor, vtkDataObject)\nC++: void CreateCommunicator(vtkRenderer *, vtkActor *,\n    vtkDataObject *data)\n\nCreates a new communicator for internal use based on this rank's\nvisible data.\n"},
  {"UpdateCommunicator", PyvtkSurfaceLICInterface_UpdateCommunicator, METH_VARARGS,
   "V.UpdateCommunicator(vtkRenderer, vtkActor, vtkDataObject)\nC++: void UpdateCommunicator(vtkRenderer *renderer,\n    vtkActor *actor, vtkDataObject *data)\n\nCalled from a mapper, does what is needed to make sure the\ncommunicators are ready\n"},
  {"SetHasVectors", PyvtkSurfaceLICInterface_SetHasVectors, METH_VARARGS,
   "V.SetHasVectors(bool)\nC++: void SetHasVectors(bool val)\n\nDoes the data have vectors which we require\n"},
  {"GetHasVectors", PyvtkSurfaceLICInterface_GetHasVectors, METH_VARARGS,
   "V.GetHasVectors() -> bool\nC++: bool GetHasVectors()\n\nDoes the data have vectors which we require\n"},
  {"InitializeResources", PyvtkSurfaceLICInterface_InitializeResources, METH_VARARGS,
   "V.InitializeResources()\nC++: void InitializeResources()\n\nresoucre allocators\n"},
  {"PrepareForGeometry", PyvtkSurfaceLICInterface_PrepareForGeometry, METH_VARARGS,
   "V.PrepareForGeometry()\nC++: void PrepareForGeometry()\n\n"},
  {"CompletedGeometry", PyvtkSurfaceLICInterface_CompletedGeometry, METH_VARARGS,
   "V.CompletedGeometry()\nC++: void CompletedGeometry()\n\n"},
  {"GatherVectors", PyvtkSurfaceLICInterface_GatherVectors, METH_VARARGS,
   "V.GatherVectors()\nC++: void GatherVectors()\n\n"},
  {"ApplyLIC", PyvtkSurfaceLICInterface_ApplyLIC, METH_VARARGS,
   "V.ApplyLIC()\nC++: void ApplyLIC()\n\n"},
  {"CombineColorsAndLIC", PyvtkSurfaceLICInterface_CombineColorsAndLIC, METH_VARARGS,
   "V.CombineColorsAndLIC()\nC++: void CombineColorsAndLIC()\n\n"},
  {"CopyToScreen", PyvtkSurfaceLICInterface_CopyToScreen, METH_VARARGS,
   "V.CopyToScreen()\nC++: void CopyToScreen()\n\n"},
  {"SetEnable", PyvtkSurfaceLICInterface_SetEnable, METH_VARARGS,
   "V.SetEnable(int)\nC++: virtual void SetEnable(int _arg)\n\nEnable/Disable LIC.\n"},
  {"GetEnable", PyvtkSurfaceLICInterface_GetEnable, METH_VARARGS,
   "V.GetEnable() -> int\nC++: virtual int GetEnable()\n\nEnable/Disable LIC.\n"},
  {"EnableOn", PyvtkSurfaceLICInterface_EnableOn, METH_VARARGS,
   "V.EnableOn()\nC++: virtual void EnableOn()\n\nEnable/Disable LIC.\n"},
  {"EnableOff", PyvtkSurfaceLICInterface_EnableOff, METH_VARARGS,
   "V.EnableOff()\nC++: virtual void EnableOff()\n\nEnable/Disable LIC.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSurfaceLICInterface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkSurfaceLICInterface", // tp_name
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
  PyvtkSurfaceLICInterface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceLICInterface_StaticNew()
{
  return vtkSurfaceLICInterface::New();
}

PyObject *PyvtkSurfaceLICInterface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSurfaceLICInterface_Type, PyvtkSurfaceLICInterface_Methods,
    "vtkSurfaceLICInterface",
 &PyvtkSurfaceLICInterface_StaticNew);

  PyTypeObject *pytype = &PyvtkSurfaceLICInterface_Type;

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

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "ENHANCE_CONTRAST_OFF", vtkSurfaceLICInterface::ENHANCE_CONTRAST_OFF },
        { "ENHANCE_CONTRAST_LIC", vtkSurfaceLICInterface::ENHANCE_CONTRAST_LIC },
        { "ENHANCE_CONTRAST_COLOR", vtkSurfaceLICInterface::ENHANCE_CONTRAST_COLOR },
        { "ENHANCE_CONTRAST_BOTH", vtkSurfaceLICInterface::ENHANCE_CONTRAST_BOTH },
        { "COLOR_MODE_BLEND", vtkSurfaceLICInterface::COLOR_MODE_BLEND },
        { "COLOR_MODE_MAP", vtkSurfaceLICInterface::COLOR_MODE_MAP },
        { "NOISE_TYPE_UNIFORM", vtkSurfaceLICInterface::NOISE_TYPE_UNIFORM },
        { "NOISE_TYPE_GAUSSIAN", vtkSurfaceLICInterface::NOISE_TYPE_GAUSSIAN },
        { "NOISE_TYPE_PERLIN", vtkSurfaceLICInterface::NOISE_TYPE_PERLIN },
        { "COMPOSITE_INPLACE", vtkSurfaceLICInterface::COMPOSITE_INPLACE },
        { "COMPOSITE_INPLACE_DISJOINT", vtkSurfaceLICInterface::COMPOSITE_INPLACE_DISJOINT },
        { "COMPOSITE_BALANCED", vtkSurfaceLICInterface::COMPOSITE_BALANCED },
        { "COMPOSITE_AUTO", vtkSurfaceLICInterface::COMPOSITE_AUTO },
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

void PyVTKAddFile_vtkSurfaceLICInterface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceLICInterface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceLICInterface", o) != 0)
  {
    Py_DECREF(o);
  }

}

