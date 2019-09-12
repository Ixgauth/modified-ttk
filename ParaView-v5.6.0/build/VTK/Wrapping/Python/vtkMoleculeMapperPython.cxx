// python wrapper for vtkMoleculeMapper
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
#include "vtkMoleculeMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMoleculeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static const char *PyvtkMoleculeMapper_Doc =
  "vtkMoleculeMapper - Mapper that draws vtkMolecule objects\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkMoleculeMapper uses glyphs (display lists) to quickly render a\n"
  "molecule.\n\n";


static PyObject *
PyvtkMoleculeMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeMapper *tempr = vtkMoleculeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeMapper::NewInstance());

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
PyvtkMoleculeMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMoleculeMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseBallAndStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBallAndStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBallAndStickSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseBallAndStickSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseVDWSpheresSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVDWSpheresSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVDWSpheresSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseVDWSpheresSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseLiquoriceStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLiquoriceStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLiquoriceStickSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseLiquoriceStickSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseFastSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFastSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFastSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseFastSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderAtoms() :
      op->vtkMoleculeMapper::GetRenderAtoms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderAtoms(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderAtoms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderAtomsOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderAtomsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderAtomsOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderAtomsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderBonds() :
      op->vtkMoleculeMapper::GetRenderBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderBonds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderBonds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderBondsOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderBondsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderBondsOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderBondsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderLattice() :
      op->vtkMoleculeMapper::GetRenderLattice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLattice(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderLattice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderLatticeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLatticeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLatticeOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderLatticeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderLatticeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLatticeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLatticeOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderLatticeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAtomicRadiusType() :
      op->vtkMoleculeMapper::GetAtomicRadiusType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusType(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAtomicRadiusTypeAsString() :
      op->vtkMoleculeMapper::GetAtomicRadiusTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToCovalentRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToCovalentRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToVDWRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToVDWRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToUnitRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToUnitRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToUnitRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToCustomArrayRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToCustomArrayRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToCustomArrayRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToCustomArrayRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAtomicRadiusScaleFactor() :
      op->vtkMoleculeMapper::GetAtomicRadiusScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusScaleFactor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMultiCylindersForBonds() :
      op->vtkMoleculeMapper::GetUseMultiCylindersForBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMultiCylindersForBonds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetUseMultiCylindersForBonds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMultiCylindersForBondsOn();
    }
    else
    {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMultiCylindersForBondsOff();
    }
    else
    {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBondColorMode() :
      op->vtkMoleculeMapper::GetBondColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorMode(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBondColorModeAsString() :
      op->vtkMoleculeMapper::GetBondColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToSingleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToSingleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorModeToSingleColor();
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorModeToSingleColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToDiscreteByAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorModeToDiscreteByAtom();
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorModeToDiscreteByAtom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBondColor() :
      op->vtkMoleculeMapper::GetBondColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetBondColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBondColor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMoleculeMapper_SetBondColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetBondColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBondColor");
  return nullptr;
}



static PyObject *
PyvtkMoleculeMapper_GetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBondRadius() :
      op->vtkMoleculeMapper::GetBondRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBondRadius(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetLatticeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetLatticeColor() :
      op->vtkMoleculeMapper::GetLatticeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetLatticeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLatticeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::SetLatticeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetLatticeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLatticeColor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetLatticeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetLatticeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMoleculeMapper_SetLatticeColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetLatticeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLatticeColor");
  return nullptr;
}



static PyObject *
PyvtkMoleculeMapper_GetSelectedAtomsAndBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtomsAndBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedAtomsAndBonds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedAtomsAndBonds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedAtoms(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedAtoms(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedBonds(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedBonds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

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
      op->vtkMoleculeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMoleculeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::GetBounds(temp0);
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
PyvtkMoleculeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMoleculeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkMoleculeMapper_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkMoleculeMapper::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkMoleculeMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeMapper_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMoleculeMapper\nC++: static vtkMoleculeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMoleculeMapper\nC++: vtkMoleculeMapper *NewInstance()\n\n"},
  {"SetInputData", PyvtkMoleculeMapper_SetInputData, METH_VARARGS,
   "V.SetInputData(vtkMolecule)\nC++: void SetInputData(vtkMolecule *in)\n\nGet/Set the input vtkMolecule.\n"},
  {"GetInput", PyvtkMoleculeMapper_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkMolecule\nC++: vtkMolecule *GetInput()\n\nGet/Set the input vtkMolecule.\n"},
  {"UseBallAndStickSettings", PyvtkMoleculeMapper_UseBallAndStickSettings, METH_VARARGS,
   "V.UseBallAndStickSettings()\nC++: void UseBallAndStickSettings()\n\nSet ivars to default ball-and-stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 0.3 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {"UseVDWSpheresSettings", PyvtkMoleculeMapper_UseVDWSpheresSettings, METH_VARARGS,
   "V.UseVDWSpheresSettings()\nC++: void UseVDWSpheresSettings()\n\nSet ivars to default van der Waals spheres settings. This is\nequivalent to the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 1.0 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {"UseLiquoriceStickSettings", PyvtkMoleculeMapper_UseLiquoriceStickSettings, METH_VARARGS,
   "V.UseLiquoriceStickSettings()\nC++: void UseLiquoriceStickSettings()\n\nSet ivars to default liquorice stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.1 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.1 )\n"},
  {"UseFastSettings", PyvtkMoleculeMapper_UseFastSettings, METH_VARARGS,
   "V.UseFastSettings()\nC++: void UseFastSettings()\n\nSet ivars to use fast settings that may be useful for rendering\nextremely large molecules where the overall shape is more\nimportant than the details of the atoms/bond. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.60 )\n- SetBondColorMode( SingleColor )\n- SetBondColor( 50, 50, 50 )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.075 )\n"},
  {"GetRenderAtoms", PyvtkMoleculeMapper_GetRenderAtoms, METH_VARARGS,
   "V.GetRenderAtoms() -> bool\nC++: virtual bool GetRenderAtoms()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {"SetRenderAtoms", PyvtkMoleculeMapper_SetRenderAtoms, METH_VARARGS,
   "V.SetRenderAtoms(bool)\nC++: virtual void SetRenderAtoms(bool _arg)\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {"RenderAtomsOn", PyvtkMoleculeMapper_RenderAtomsOn, METH_VARARGS,
   "V.RenderAtomsOn()\nC++: virtual void RenderAtomsOn()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {"RenderAtomsOff", PyvtkMoleculeMapper_RenderAtomsOff, METH_VARARGS,
   "V.RenderAtomsOff()\nC++: virtual void RenderAtomsOff()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {"GetRenderBonds", PyvtkMoleculeMapper_GetRenderBonds, METH_VARARGS,
   "V.GetRenderBonds() -> bool\nC++: virtual bool GetRenderBonds()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {"SetRenderBonds", PyvtkMoleculeMapper_SetRenderBonds, METH_VARARGS,
   "V.SetRenderBonds(bool)\nC++: virtual void SetRenderBonds(bool _arg)\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {"RenderBondsOn", PyvtkMoleculeMapper_RenderBondsOn, METH_VARARGS,
   "V.RenderBondsOn()\nC++: virtual void RenderBondsOn()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {"RenderBondsOff", PyvtkMoleculeMapper_RenderBondsOff, METH_VARARGS,
   "V.RenderBondsOff()\nC++: virtual void RenderBondsOff()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {"GetRenderLattice", PyvtkMoleculeMapper_GetRenderLattice, METH_VARARGS,
   "V.GetRenderLattice() -> bool\nC++: virtual bool GetRenderLattice()\n\nGet/Set whether or not to render the unit cell lattice, if\npresent. Default: On.\n"},
  {"SetRenderLattice", PyvtkMoleculeMapper_SetRenderLattice, METH_VARARGS,
   "V.SetRenderLattice(bool)\nC++: virtual void SetRenderLattice(bool _arg)\n\nGet/Set whether or not to render the unit cell lattice, if\npresent. Default: On.\n"},
  {"RenderLatticeOn", PyvtkMoleculeMapper_RenderLatticeOn, METH_VARARGS,
   "V.RenderLatticeOn()\nC++: virtual void RenderLatticeOn()\n\nGet/Set whether or not to render the unit cell lattice, if\npresent. Default: On.\n"},
  {"RenderLatticeOff", PyvtkMoleculeMapper_RenderLatticeOff, METH_VARARGS,
   "V.RenderLatticeOff()\nC++: virtual void RenderLatticeOff()\n\nGet/Set whether or not to render the unit cell lattice, if\npresent. Default: On.\n"},
  {"GetAtomicRadiusType", PyvtkMoleculeMapper_GetAtomicRadiusType, METH_VARARGS,
   "V.GetAtomicRadiusType() -> int\nC++: virtual int GetAtomicRadiusType()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusType", PyvtkMoleculeMapper_SetAtomicRadiusType, METH_VARARGS,
   "V.SetAtomicRadiusType(int)\nC++: virtual void SetAtomicRadiusType(int _arg)\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"GetAtomicRadiusTypeAsString", PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString, METH_VARARGS,
   "V.GetAtomicRadiusTypeAsString() -> string\nC++: const char *GetAtomicRadiusTypeAsString()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusTypeToCovalentRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius, METH_VARARGS,
   "V.SetAtomicRadiusTypeToCovalentRadius()\nC++: void SetAtomicRadiusTypeToCovalentRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusTypeToVDWRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius, METH_VARARGS,
   "V.SetAtomicRadiusTypeToVDWRadius()\nC++: void SetAtomicRadiusTypeToVDWRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusTypeToUnitRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius, METH_VARARGS,
   "V.SetAtomicRadiusTypeToUnitRadius()\nC++: void SetAtomicRadiusTypeToUnitRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusTypeToCustomArrayRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToCustomArrayRadius, METH_VARARGS,
   "V.SetAtomicRadiusTypeToCustomArrayRadius()\nC++: void SetAtomicRadiusTypeToCustomArrayRadius()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"GetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor, METH_VARARGS,
   "V.GetAtomicRadiusScaleFactor() -> float\nC++: virtual float GetAtomicRadiusScaleFactor()\n\nGet/Set the uniform scaling factor applied to the atoms. This is\nignored when AtomicRadiusType == CustomArrayRadius. Default: 0.3.\n"},
  {"SetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor, METH_VARARGS,
   "V.SetAtomicRadiusScaleFactor(float)\nC++: virtual void SetAtomicRadiusScaleFactor(float _arg)\n\nGet/Set the uniform scaling factor applied to the atoms. This is\nignored when AtomicRadiusType == CustomArrayRadius. Default: 0.3.\n"},
  {"GetUseMultiCylindersForBonds", PyvtkMoleculeMapper_GetUseMultiCylindersForBonds, METH_VARARGS,
   "V.GetUseMultiCylindersForBonds() -> bool\nC++: virtual bool GetUseMultiCylindersForBonds()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {"SetUseMultiCylindersForBonds", PyvtkMoleculeMapper_SetUseMultiCylindersForBonds, METH_VARARGS,
   "V.SetUseMultiCylindersForBonds(bool)\nC++: virtual void SetUseMultiCylindersForBonds(bool _arg)\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {"UseMultiCylindersForBondsOn", PyvtkMoleculeMapper_UseMultiCylindersForBondsOn, METH_VARARGS,
   "V.UseMultiCylindersForBondsOn()\nC++: virtual void UseMultiCylindersForBondsOn()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {"UseMultiCylindersForBondsOff", PyvtkMoleculeMapper_UseMultiCylindersForBondsOff, METH_VARARGS,
   "V.UseMultiCylindersForBondsOff()\nC++: virtual void UseMultiCylindersForBondsOff()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {"GetBondColorMode", PyvtkMoleculeMapper_GetBondColorMode, METH_VARARGS,
   "V.GetBondColorMode() -> int\nC++: virtual int GetBondColorMode()\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"SetBondColorMode", PyvtkMoleculeMapper_SetBondColorMode, METH_VARARGS,
   "V.SetBondColorMode(int)\nC++: virtual void SetBondColorMode(int _arg)\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"GetBondColorModeAsString", PyvtkMoleculeMapper_GetBondColorModeAsString, METH_VARARGS,
   "V.GetBondColorModeAsString() -> string\nC++: const char *GetBondColorModeAsString()\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"SetBondColorModeToSingleColor", PyvtkMoleculeMapper_SetBondColorModeToSingleColor, METH_VARARGS,
   "V.SetBondColorModeToSingleColor()\nC++: void SetBondColorModeToSingleColor()\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"SetBondColorModeToDiscreteByAtom", PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom, METH_VARARGS,
   "V.SetBondColorModeToDiscreteByAtom()\nC++: void SetBondColorModeToDiscreteByAtom()\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"GetBondColor", PyvtkMoleculeMapper_GetBondColor, METH_VARARGS,
   "V.GetBondColor() -> (int, int, int)\nC++: unsigned char *GetBondColor()\n\n"},
  {"SetBondColor", PyvtkMoleculeMapper_SetBondColor, METH_VARARGS,
   "V.SetBondColor(int, int, int)\nC++: void SetBondColor(unsigned char, unsigned char,\n    unsigned char)\nV.SetBondColor((int, int, int))\nC++: void SetBondColor(unsigned char a[3])\n\n"},
  {"GetBondRadius", PyvtkMoleculeMapper_GetBondRadius, METH_VARARGS,
   "V.GetBondRadius() -> float\nC++: virtual float GetBondRadius()\n\nGet/Set the radius of the bond cylinders. Default: 0.075\n"},
  {"SetBondRadius", PyvtkMoleculeMapper_SetBondRadius, METH_VARARGS,
   "V.SetBondRadius(float)\nC++: virtual void SetBondRadius(float _arg)\n\nGet/Set the radius of the bond cylinders. Default: 0.075\n"},
  {"GetLatticeColor", PyvtkMoleculeMapper_GetLatticeColor, METH_VARARGS,
   "V.GetLatticeColor() -> (int, int, int)\nC++: unsigned char *GetLatticeColor()\n\n"},
  {"SetLatticeColor", PyvtkMoleculeMapper_SetLatticeColor, METH_VARARGS,
   "V.SetLatticeColor(int, int, int)\nC++: void SetLatticeColor(unsigned char, unsigned char,\n    unsigned char)\nV.SetLatticeColor((int, int, int))\nC++: void SetLatticeColor(unsigned char a[3])\n\n"},
  {"GetSelectedAtomsAndBonds", PyvtkMoleculeMapper_GetSelectedAtomsAndBonds, METH_VARARGS,
   "V.GetSelectedAtomsAndBonds(vtkSelection, vtkIdTypeArray,\n    vtkIdTypeArray)\nC++: virtual void GetSelectedAtomsAndBonds(\n    vtkSelection *selection, vtkIdTypeArray *atomIds,\n    vtkIdTypeArray *bondIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {"GetSelectedAtoms", PyvtkMoleculeMapper_GetSelectedAtoms, METH_VARARGS,
   "V.GetSelectedAtoms(vtkSelection, vtkIdTypeArray)\nC++: virtual void GetSelectedAtoms(vtkSelection *selection,\n    vtkIdTypeArray *atomIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {"GetSelectedBonds", PyvtkMoleculeMapper_GetSelectedBonds, METH_VARARGS,
   "V.GetSelectedBonds(vtkSelection, vtkIdTypeArray)\nC++: virtual void GetSelectedBonds(vtkSelection *selection,\n    vtkIdTypeArray *bondIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {"Render", PyvtkMoleculeMapper_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkActor)\nC++: void Render(vtkRenderer *, vtkActor *) override;\n\nReimplemented from base class\n"},
  {"ReleaseGraphicsResources", PyvtkMoleculeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nReimplemented from base class\n"},
  {"GetBounds", PyvtkMoleculeMapper_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6]) override;\n\nReimplemented from base class\n"},
  {"FillInputPortInformation", PyvtkMoleculeMapper_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nReimplemented from base class\n"},
  {"GetSupportsSelection", PyvtkMoleculeMapper_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nReimplemented from base class\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMoleculeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryPython.vtkMoleculeMapper", // tp_name
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
  PyvtkMoleculeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeMapper_StaticNew()
{
  return vtkMoleculeMapper::New();
}

PyObject *PyvtkMoleculeMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMoleculeMapper_Type, PyvtkMoleculeMapper_Methods,
    "vtkMoleculeMapper",
 &PyvtkMoleculeMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkMoleculeMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "CovalentRadius", vtkMoleculeMapper::CovalentRadius },
        { "VDWRadius", vtkMoleculeMapper::VDWRadius },
        { "UnitRadius", vtkMoleculeMapper::UnitRadius },
        { "CustomArrayRadius", vtkMoleculeMapper::CustomArrayRadius },
        { "SingleColor", vtkMoleculeMapper::SingleColor },
        { "DiscreteByAtom", vtkMoleculeMapper::DiscreteByAtom },
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

void PyVTKAddFile_vtkMoleculeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

