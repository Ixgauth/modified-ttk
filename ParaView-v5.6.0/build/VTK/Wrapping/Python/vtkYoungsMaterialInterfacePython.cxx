// python wrapper for vtkYoungsMaterialInterface
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
#include "vtkYoungsMaterialInterface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkYoungsMaterialInterface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkYoungsMaterialInterface_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkYoungsMaterialInterface_Doc =
  "vtkYoungsMaterialInterface - reconstructs material interfaces\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Reconstructs material interfaces from a mesh containing mixed cells\n"
  "(where several materials are mixed) this implementation is based on\n"
  "the youngs algorithm, generalized to arbitrary cell types and works\n"
  "on both 2D and 3D meshes. the main advantage of the youngs algorithm\n"
  "is it guarantees the material volume correctness. for 2D meshes, the\n"
  "AxisSymetric flag allows to switch between a pure 2D (planar)\n"
  "algorithm and an axis symmetric 2D algorithm handling volumes of\n"
  "revolution.\n\n"
  "@par Thanks: This file is part of the generalized Youngs material\n"
  "interface reconstruction algorithm contributed by\n\n"
  "CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\n"
  "BP12, F-91297 Arpajon, France.\n\n"
  "Implementation by Thierry Carrard (thierry.carrard@cea.fr)\n"
  "Modification by Philippe Pebay (philippe.pebay@kitware.com)\n\n";


static PyObject *
PyvtkYoungsMaterialInterface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkYoungsMaterialInterface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkYoungsMaterialInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkYoungsMaterialInterface *tempr = vtkYoungsMaterialInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkYoungsMaterialInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkYoungsMaterialInterface::NewInstance());

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
PyvtkYoungsMaterialInterface_SetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverseNormal(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetInverseNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetInverseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseNormal() :
      op->vtkYoungsMaterialInterface::GetInverseNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseNormalOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::InverseNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_InverseNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseNormalOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::InverseNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseMaterialOrder(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetReverseMaterialOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetReverseMaterialOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseMaterialOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseMaterialOrder() :
      op->vtkYoungsMaterialInterface::GetReverseMaterialOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseMaterialOrderOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseMaterialOrderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseMaterialOrderOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::ReverseMaterialOrderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnionPeel(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetOnionPeel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetOnionPeel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnionPeel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnionPeel() :
      op->vtkYoungsMaterialInterface::GetOnionPeel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnionPeelOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::OnionPeelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_OnionPeelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnionPeelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnionPeelOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::OnionPeelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisSymetric(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetAxisSymetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetAxisSymetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisSymetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisSymetric() :
      op->vtkYoungsMaterialInterface::GetAxisSymetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisSymetricOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::AxisSymetricOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AxisSymetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisSymetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisSymetricOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::AxisSymetricOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFractionAsDistance(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetUseFractionAsDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetUseFractionAsDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFractionAsDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseFractionAsDistance() :
      op->vtkYoungsMaterialInterface::GetUseFractionAsDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFractionAsDistanceOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFractionAsDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFractionAsDistanceOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::UseFractionAsDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillMaterial(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetFillMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetFillMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFillMaterial() :
      op->vtkYoungsMaterialInterface::GetFillMaterial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillMaterialOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::FillMaterialOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_FillMaterialOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillMaterialOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillMaterialOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::FillMaterialOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionRange(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionRange(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetVolumeFractionRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetVolumeFractionRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s1(self, args);
    case 1:
      return PyvtkYoungsMaterialInterface_SetVolumeFractionRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVolumeFractionRange");
  return nullptr;
}



static PyObject *
PyvtkYoungsMaterialInterface_GetVolumeFractionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVolumeFractionRange() :
      op->vtkYoungsMaterialInterface::GetVolumeFractionRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfMaterials(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetNumberOfMaterials(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterials() :
      op->vtkYoungsMaterialInterface::GetNumberOfMaterials());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetUseAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAllBlocks(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetUseAllBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetUseAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAllBlocks() :
      op->vtkYoungsMaterialInterface::GetUseAllBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseAllBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAllBlocksOn();
    }
    else
    {
      op->vtkYoungsMaterialInterface::UseAllBlocksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_UseAllBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAllBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAllBlocksOff();
    }
    else
    {
      op->vtkYoungsMaterialInterface::UseAllBlocksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_GetNumberOfDomains(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDomains");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDomains() :
      op->vtkYoungsMaterialInterface::GetNumberOfDomains());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  const char *temp5 = nullptr;
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
      op->SetMaterialArrays(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialArrays(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrays(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialArrays(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialArrays(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkYoungsMaterialInterface_SetMaterialArrays_s1(self, args);
    case 4:
      return PyvtkYoungsMaterialInterface_SetMaterialArrays_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialArrays");
  return nullptr;
}



static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialVolumeFractionArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialVolumeFractionArray(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialVolumeFractionArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialNormalArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialNormalArray(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialNormalArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialNormalArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialNormalArray(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialNormalArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_SetMaterialNormalArray_Methods[] = {
  {nullptr, PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkYoungsMaterialInterface_SetMaterialNormalArray_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialNormalArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkYoungsMaterialInterface_SetMaterialNormalArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialNormalArray");
  return nullptr;
}



static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialOrderingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialOrderingArray(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialOrderingArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialOrderingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaterialOrderingArray(temp0, temp1);
    }
    else
    {
      op->vtkYoungsMaterialInterface::SetMaterialOrderingArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_Methods[] = {
  {nullptr, PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s1, METH_VARARGS,
   "@iz"},
  {nullptr, PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkYoungsMaterialInterface_SetMaterialOrderingArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkYoungsMaterialInterface_SetMaterialOrderingArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaterialOrderingArray");
  return nullptr;
}



static PyObject *
PyvtkYoungsMaterialInterface_RemoveAllMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMaterials();
    }
    else
    {
      op->vtkYoungsMaterialInterface::RemoveAllMaterials();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_RemoveAllMaterialBlockMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMaterialBlockMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMaterialBlockMappings();
    }
    else
    {
      op->vtkYoungsMaterialInterface::RemoveAllMaterialBlockMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkYoungsMaterialInterface_AddMaterialBlockMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMaterialBlockMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkYoungsMaterialInterface *op = static_cast<vtkYoungsMaterialInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddMaterialBlockMapping(temp0);
    }
    else
    {
      op->vtkYoungsMaterialInterface::AddMaterialBlockMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkYoungsMaterialInterface_Methods[] = {
  {"IsTypeOf", PyvtkYoungsMaterialInterface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkYoungsMaterialInterface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkYoungsMaterialInterface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkYoungsMaterialInterface\nC++: static vtkYoungsMaterialInterface *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkYoungsMaterialInterface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkYoungsMaterialInterface\nC++: vtkYoungsMaterialInterface *NewInstance()\n\n"},
  {"SetInverseNormal", PyvtkYoungsMaterialInterface_SetInverseNormal, METH_VARARGS,
   "V.SetInverseNormal(int)\nC++: virtual void SetInverseNormal(vtkTypeBool _arg)\n\nSet/Get whether the normal vector has to be flipped.\n"},
  {"GetInverseNormal", PyvtkYoungsMaterialInterface_GetInverseNormal, METH_VARARGS,
   "V.GetInverseNormal() -> int\nC++: virtual vtkTypeBool GetInverseNormal()\n\nSet/Get whether the normal vector has to be flipped.\n"},
  {"InverseNormalOn", PyvtkYoungsMaterialInterface_InverseNormalOn, METH_VARARGS,
   "V.InverseNormalOn()\nC++: virtual void InverseNormalOn()\n\nSet/Get whether the normal vector has to be flipped.\n"},
  {"InverseNormalOff", PyvtkYoungsMaterialInterface_InverseNormalOff, METH_VARARGS,
   "V.InverseNormalOff()\nC++: virtual void InverseNormalOff()\n\nSet/Get whether the normal vector has to be flipped.\n"},
  {"SetReverseMaterialOrder", PyvtkYoungsMaterialInterface_SetReverseMaterialOrder, METH_VARARGS,
   "V.SetReverseMaterialOrder(int)\nC++: virtual void SetReverseMaterialOrder(vtkTypeBool _arg)\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {"GetReverseMaterialOrder", PyvtkYoungsMaterialInterface_GetReverseMaterialOrder, METH_VARARGS,
   "V.GetReverseMaterialOrder() -> int\nC++: virtual vtkTypeBool GetReverseMaterialOrder()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {"ReverseMaterialOrderOn", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOn, METH_VARARGS,
   "V.ReverseMaterialOrderOn()\nC++: virtual void ReverseMaterialOrderOn()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {"ReverseMaterialOrderOff", PyvtkYoungsMaterialInterface_ReverseMaterialOrderOff, METH_VARARGS,
   "V.ReverseMaterialOrderOff()\nC++: virtual void ReverseMaterialOrderOff()\n\nIf this flag is on, material order in reversed. Otherwise,\nmaterials are sorted in ascending order depending on the given\nordering array.\n"},
  {"SetOnionPeel", PyvtkYoungsMaterialInterface_SetOnionPeel, METH_VARARGS,
   "V.SetOnionPeel(int)\nC++: virtual void SetOnionPeel(vtkTypeBool _arg)\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {"GetOnionPeel", PyvtkYoungsMaterialInterface_GetOnionPeel, METH_VARARGS,
   "V.GetOnionPeel() -> int\nC++: virtual vtkTypeBool GetOnionPeel()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {"OnionPeelOn", PyvtkYoungsMaterialInterface_OnionPeelOn, METH_VARARGS,
   "V.OnionPeelOn()\nC++: virtual void OnionPeelOn()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {"OnionPeelOff", PyvtkYoungsMaterialInterface_OnionPeelOff, METH_VARARGS,
   "V.OnionPeelOff()\nC++: virtual void OnionPeelOff()\n\nSet/Get OnionPeel flag. if this flag is on, the normal vector of\nthe first material (which depends on material ordering) is used\nfor all materials.\n"},
  {"SetAxisSymetric", PyvtkYoungsMaterialInterface_SetAxisSymetric, METH_VARARGS,
   "V.SetAxisSymetric(int)\nC++: virtual void SetAxisSymetric(vtkTypeBool _arg)\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"GetAxisSymetric", PyvtkYoungsMaterialInterface_GetAxisSymetric, METH_VARARGS,
   "V.GetAxisSymetric() -> int\nC++: virtual vtkTypeBool GetAxisSymetric()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"AxisSymetricOn", PyvtkYoungsMaterialInterface_AxisSymetricOn, METH_VARARGS,
   "V.AxisSymetricOn()\nC++: virtual void AxisSymetricOn()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"AxisSymetricOff", PyvtkYoungsMaterialInterface_AxisSymetricOff, METH_VARARGS,
   "V.AxisSymetricOff()\nC++: virtual void AxisSymetricOff()\n\nTurns on/off AxisSymetric computation of 2D interfaces. in axis\nsymmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"SetUseFractionAsDistance", PyvtkYoungsMaterialInterface_SetUseFractionAsDistance, METH_VARARGS,
   "V.SetUseFractionAsDistance(int)\nC++: virtual void SetUseFractionAsDistance(vtkTypeBool _arg)\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"GetUseFractionAsDistance", PyvtkYoungsMaterialInterface_GetUseFractionAsDistance, METH_VARARGS,
   "V.GetUseFractionAsDistance() -> int\nC++: virtual vtkTypeBool GetUseFractionAsDistance()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"UseFractionAsDistanceOn", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOn, METH_VARARGS,
   "V.UseFractionAsDistanceOn()\nC++: virtual void UseFractionAsDistanceOn()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"UseFractionAsDistanceOff", PyvtkYoungsMaterialInterface_UseFractionAsDistanceOff, METH_VARARGS,
   "V.UseFractionAsDistanceOff()\nC++: virtual void UseFractionAsDistanceOff()\n\nwhen UseFractionAsDistance is true, the volume fraction is\ninterpreted as the distance of the cutting plane from the origin.\nin axis symmetric mode, 2D meshes are understood as volumes of\nrevolution.\n"},
  {"SetFillMaterial", PyvtkYoungsMaterialInterface_SetFillMaterial, METH_VARARGS,
   "V.SetFillMaterial(int)\nC++: virtual void SetFillMaterial(vtkTypeBool _arg)\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {"GetFillMaterial", PyvtkYoungsMaterialInterface_GetFillMaterial, METH_VARARGS,
   "V.GetFillMaterial() -> int\nC++: virtual vtkTypeBool GetFillMaterial()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {"FillMaterialOn", PyvtkYoungsMaterialInterface_FillMaterialOn, METH_VARARGS,
   "V.FillMaterialOn()\nC++: virtual void FillMaterialOn()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {"FillMaterialOff", PyvtkYoungsMaterialInterface_FillMaterialOff, METH_VARARGS,
   "V.FillMaterialOff()\nC++: virtual void FillMaterialOff()\n\nWhen FillMaterial is set to 1, the volume containing material is\noutput and not only the interface surface.\n"},
  {"SetVolumeFractionRange", PyvtkYoungsMaterialInterface_SetVolumeFractionRange, METH_VARARGS,
   "V.SetVolumeFractionRange(float, float)\nC++: void SetVolumeFractionRange(double, double)\nV.SetVolumeFractionRange((float, float))\nC++: void SetVolumeFractionRange(double a[2])\n\n"},
  {"GetVolumeFractionRange", PyvtkYoungsMaterialInterface_GetVolumeFractionRange, METH_VARARGS,
   "V.GetVolumeFractionRange() -> (float, float)\nC++: double *GetVolumeFractionRange()\n\nSet/Get minimum and maximum volume fraction value. if a material\nfills a volume above the minimum value, the material is\nconsidered to be void. if a material fills a volume fraction\nbeyond the maximum value it is considered as filling the whole\nvolume\n"},
  {"SetNumberOfMaterials", PyvtkYoungsMaterialInterface_SetNumberOfMaterials, METH_VARARGS,
   "V.SetNumberOfMaterials(int)\nC++: virtual void SetNumberOfMaterials(int n)\n\nSets/Gets the number of materials.\n"},
  {"GetNumberOfMaterials", PyvtkYoungsMaterialInterface_GetNumberOfMaterials, METH_VARARGS,
   "V.GetNumberOfMaterials() -> int\nC++: virtual int GetNumberOfMaterials()\n\nSets/Gets the number of materials.\n"},
  {"SetUseAllBlocks", PyvtkYoungsMaterialInterface_SetUseAllBlocks, METH_VARARGS,
   "V.SetUseAllBlocks(bool)\nC++: virtual void SetUseAllBlocks(bool _arg)\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {"GetUseAllBlocks", PyvtkYoungsMaterialInterface_GetUseAllBlocks, METH_VARARGS,
   "V.GetUseAllBlocks() -> bool\nC++: virtual bool GetUseAllBlocks()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {"UseAllBlocksOn", PyvtkYoungsMaterialInterface_UseAllBlocksOn, METH_VARARGS,
   "V.UseAllBlocksOn()\nC++: virtual void UseAllBlocksOn()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {"UseAllBlocksOff", PyvtkYoungsMaterialInterface_UseAllBlocksOff, METH_VARARGS,
   "V.UseAllBlocksOff()\nC++: virtual void UseAllBlocksOff()\n\nSet/Get whether all material blocks should be used, irrespective\nof the material block mapping.\n"},
  {"GetNumberOfDomains", PyvtkYoungsMaterialInterface_GetNumberOfDomains, METH_VARARGS,
   "V.GetNumberOfDomains() -> int\nC++: virtual int GetNumberOfDomains()\n\nOnly meaningful for LOVE software. returns the maximum number of\nblocks containing the same material\n"},
  {"SetMaterialArrays", PyvtkYoungsMaterialInterface_SetMaterialArrays, METH_VARARGS,
   "V.SetMaterialArrays(int, string, string, string, string, string)\nC++: virtual void SetMaterialArrays(int i, const char *volume,\n    const char *normalX, const char *normalY, const char *normalZ,\n     const char *ordering)\nV.SetMaterialArrays(int, string, string, string)\nC++: virtual void SetMaterialArrays(int i, const char *volume,\n    const char *normal, const char *ordering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {"SetMaterialVolumeFractionArray", PyvtkYoungsMaterialInterface_SetMaterialVolumeFractionArray, METH_VARARGS,
   "V.SetMaterialVolumeFractionArray(int, string)\nC++: virtual void SetMaterialVolumeFractionArray(int i,\n    const char *volume)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {"SetMaterialNormalArray", PyvtkYoungsMaterialInterface_SetMaterialNormalArray, METH_VARARGS,
   "V.SetMaterialNormalArray(int, string)\nC++: virtual void SetMaterialNormalArray(int i,\n    const char *normal)\nV.SetMaterialNormalArray(string, string)\nC++: virtual void SetMaterialNormalArray(const char *volume,\n    const char *normal)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {"SetMaterialOrderingArray", PyvtkYoungsMaterialInterface_SetMaterialOrderingArray, METH_VARARGS,
   "V.SetMaterialOrderingArray(int, string)\nC++: virtual void SetMaterialOrderingArray(int i,\n    const char *ordering)\nV.SetMaterialOrderingArray(string, string)\nC++: virtual void SetMaterialOrderingArray(const char *volume,\n    const char *ordering)\n\nSet ith Material arrays to be used as volume fraction, interface\nnormal and material ordering. Each parameter name a cell array.\n"},
  {"RemoveAllMaterials", PyvtkYoungsMaterialInterface_RemoveAllMaterials, METH_VARARGS,
   "V.RemoveAllMaterials()\nC++: virtual void RemoveAllMaterials()\n\nRemoves all materials previously added.\n"},
  {"RemoveAllMaterialBlockMappings", PyvtkYoungsMaterialInterface_RemoveAllMaterialBlockMappings, METH_VARARGS,
   "V.RemoveAllMaterialBlockMappings()\nC++: virtual void RemoveAllMaterialBlockMappings()\n\nselect blocks to be processed for each described material.\n"},
  {"AddMaterialBlockMapping", PyvtkYoungsMaterialInterface_AddMaterialBlockMapping, METH_VARARGS,
   "V.AddMaterialBlockMapping(int)\nC++: virtual void AddMaterialBlockMapping(int b)\n\nselect blocks to be processed for each described material.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkYoungsMaterialInterface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkYoungsMaterialInterface", // tp_name
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
  PyvtkYoungsMaterialInterface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkYoungsMaterialInterface_StaticNew()
{
  return vtkYoungsMaterialInterface::New();
}

PyObject *PyvtkYoungsMaterialInterface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkYoungsMaterialInterface_Type, PyvtkYoungsMaterialInterface_Methods,
    "vtkYoungsMaterialInterface",
 &PyvtkYoungsMaterialInterface_StaticNew);

  PyTypeObject *pytype = &PyvtkYoungsMaterialInterface_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(vtkYoungsMaterialInterface::MAX_CELL_POINTS);
  if (o)
  {
    PyDict_SetItemString(d, "MAX_CELL_POINTS", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkYoungsMaterialInterface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkYoungsMaterialInterface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkYoungsMaterialInterface", o) != 0)
  {
    Py_DECREF(o);
  }

}

