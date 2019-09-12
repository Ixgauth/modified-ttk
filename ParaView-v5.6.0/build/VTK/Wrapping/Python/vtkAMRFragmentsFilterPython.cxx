// python wrapper for vtkAMRFragmentsFilter
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
#include "vtkAMRFragmentsFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRFragmentsFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRFragmentsFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRFragmentsFilter_Doc =
  "vtkAMRFragmentsFilter - A meta filter that combines\nvtkAMRConnectivity, vtkAMRFragmentIntegration, vtkAMRDualContour,\nvtkExtractCTHPart to allow all the fragment analysis in one easy UI\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Input 0: The AMR Volume\n\n\n"
  "  Output 0: A multiblock containing tables of fragments, one block\n"
  "            for each requested material\n\n";


static PyObject *
PyvtkAMRFragmentsFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRFragmentsFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFragmentsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRFragmentsFilter *tempr = vtkAMRFragmentsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRFragmentsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFragmentsFilter::NewInstance());

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
PyvtkAMRFragmentsFilter_AddInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputVolumeArrayToProcess(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::AddInputVolumeArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputVolumeArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputVolumeArrayToProcess();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ClearInputVolumeArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputMassArrayToProcess(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::AddInputMassArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputMassArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputMassArrayToProcess();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ClearInputMassArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputVolumeWeightedArrayToProcess(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::AddInputVolumeWeightedArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputVolumeWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputVolumeWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputVolumeWeightedArrayToProcess();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ClearInputVolumeWeightedArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_AddInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddInputMassWeightedArrayToProcess(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::AddInputMassWeightedArrayToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ClearInputMassWeightedArrayToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputMassWeightedArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputMassWeightedArrayToProcess();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ClearInputMassWeightedArrayToProcess();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetExtractSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractSurface(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::SetExtractSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetExtractSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtractSurface() :
      op->vtkAMRFragmentsFilter::GetExtractSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ExtractSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractSurfaceOn();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ExtractSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_ExtractSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractSurfaceOff();
    }
    else
    {
      op->vtkAMRFragmentsFilter::ExtractSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetUseWatertightSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseWatertightSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseWatertightSurface(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::SetUseWatertightSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetUseWatertightSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseWatertightSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseWatertightSurface() :
      op->vtkAMRFragmentsFilter::GetUseWatertightSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_UseWatertightSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWatertightSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseWatertightSurfaceOn();
    }
    else
    {
      op->vtkAMRFragmentsFilter::UseWatertightSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_UseWatertightSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseWatertightSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseWatertightSurfaceOff();
    }
    else
    {
      op->vtkAMRFragmentsFilter::UseWatertightSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetIntegrateFragments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrateFragments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrateFragments(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::SetIntegrateFragments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetIntegrateFragments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrateFragments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntegrateFragments() :
      op->vtkAMRFragmentsFilter::GetIntegrateFragments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IntegrateFragmentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateFragmentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntegrateFragmentsOn();
    }
    else
    {
      op->vtkAMRFragmentsFilter::IntegrateFragmentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_IntegrateFragmentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntegrateFragmentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntegrateFragmentsOff();
    }
    else
    {
      op->vtkAMRFragmentsFilter::IntegrateFragmentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_GetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeFractionSurfaceValue() :
      op->vtkAMRFragmentsFilter::GetVolumeFractionSurfaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFragmentsFilter_SetVolumeFractionSurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeFractionSurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFragmentsFilter *op = static_cast<vtkAMRFragmentsFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeFractionSurfaceValue(temp0);
    }
    else
    {
      op->vtkAMRFragmentsFilter::SetVolumeFractionSurfaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRFragmentsFilter_Methods[] = {
  {"IsTypeOf", PyvtkAMRFragmentsFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRFragmentsFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRFragmentsFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRFragmentsFilter\nC++: static vtkAMRFragmentsFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRFragmentsFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRFragmentsFilter\nC++: vtkAMRFragmentsFilter *NewInstance()\n\n"},
  {"AddInputVolumeArrayToProcess", PyvtkAMRFragmentsFilter_AddInputVolumeArrayToProcess, METH_VARARGS,
   "V.AddInputVolumeArrayToProcess(string)\nC++: void AddInputVolumeArrayToProcess(const char *name)\n\nAdd to list of volume arrays to find connected fragments\n"},
  {"ClearInputVolumeArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputVolumeArrayToProcess, METH_VARARGS,
   "V.ClearInputVolumeArrayToProcess()\nC++: void ClearInputVolumeArrayToProcess()\n\nAdd to list of volume arrays to find connected fragments\n"},
  {"AddInputMassArrayToProcess", PyvtkAMRFragmentsFilter_AddInputMassArrayToProcess, METH_VARARGS,
   "V.AddInputMassArrayToProcess(string)\nC++: void AddInputMassArrayToProcess(const char *name)\n\nAdd to list of mass arrays\n"},
  {"ClearInputMassArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputMassArrayToProcess, METH_VARARGS,
   "V.ClearInputMassArrayToProcess()\nC++: void ClearInputMassArrayToProcess()\n\nAdd to list of mass arrays\n"},
  {"AddInputVolumeWeightedArrayToProcess", PyvtkAMRFragmentsFilter_AddInputVolumeWeightedArrayToProcess, METH_VARARGS,
   "V.AddInputVolumeWeightedArrayToProcess(string)\nC++: void AddInputVolumeWeightedArrayToProcess(const char *name)\n\nAdd to list of volume weighted arrays\n"},
  {"ClearInputVolumeWeightedArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputVolumeWeightedArrayToProcess, METH_VARARGS,
   "V.ClearInputVolumeWeightedArrayToProcess()\nC++: void ClearInputVolumeWeightedArrayToProcess()\n\nAdd to list of volume weighted arrays\n"},
  {"AddInputMassWeightedArrayToProcess", PyvtkAMRFragmentsFilter_AddInputMassWeightedArrayToProcess, METH_VARARGS,
   "V.AddInputMassWeightedArrayToProcess(string)\nC++: void AddInputMassWeightedArrayToProcess(const char *name)\n\nAdd to list of mass weighted arrays\n"},
  {"ClearInputMassWeightedArrayToProcess", PyvtkAMRFragmentsFilter_ClearInputMassWeightedArrayToProcess, METH_VARARGS,
   "V.ClearInputMassWeightedArrayToProcess()\nC++: void ClearInputMassWeightedArrayToProcess()\n\nAdd to list of mass weighted arrays\n"},
  {"SetExtractSurface", PyvtkAMRFragmentsFilter_SetExtractSurface, METH_VARARGS,
   "V.SetExtractSurface(bool)\nC++: virtual void SetExtractSurface(bool _arg)\n\nWhether or not to extract a surface\n"},
  {"GetExtractSurface", PyvtkAMRFragmentsFilter_GetExtractSurface, METH_VARARGS,
   "V.GetExtractSurface() -> bool\nC++: virtual bool GetExtractSurface()\n\nWhether or not to extract a surface\n"},
  {"ExtractSurfaceOn", PyvtkAMRFragmentsFilter_ExtractSurfaceOn, METH_VARARGS,
   "V.ExtractSurfaceOn()\nC++: virtual void ExtractSurfaceOn()\n\nWhether or not to extract a surface\n"},
  {"ExtractSurfaceOff", PyvtkAMRFragmentsFilter_ExtractSurfaceOff, METH_VARARGS,
   "V.ExtractSurfaceOff()\nC++: virtual void ExtractSurfaceOff()\n\nWhether or not to extract a surface\n"},
  {"SetUseWatertightSurface", PyvtkAMRFragmentsFilter_SetUseWatertightSurface, METH_VARARGS,
   "V.SetUseWatertightSurface(bool)\nC++: virtual void SetUseWatertightSurface(bool _arg)\n\nWhether or not to use water-tight algorithm for the surface\n"},
  {"GetUseWatertightSurface", PyvtkAMRFragmentsFilter_GetUseWatertightSurface, METH_VARARGS,
   "V.GetUseWatertightSurface() -> bool\nC++: virtual bool GetUseWatertightSurface()\n\nWhether or not to use water-tight algorithm for the surface\n"},
  {"UseWatertightSurfaceOn", PyvtkAMRFragmentsFilter_UseWatertightSurfaceOn, METH_VARARGS,
   "V.UseWatertightSurfaceOn()\nC++: virtual void UseWatertightSurfaceOn()\n\nWhether or not to use water-tight algorithm for the surface\n"},
  {"UseWatertightSurfaceOff", PyvtkAMRFragmentsFilter_UseWatertightSurfaceOff, METH_VARARGS,
   "V.UseWatertightSurfaceOff()\nC++: virtual void UseWatertightSurfaceOff()\n\nWhether or not to use water-tight algorithm for the surface\n"},
  {"SetIntegrateFragments", PyvtkAMRFragmentsFilter_SetIntegrateFragments, METH_VARARGS,
   "V.SetIntegrateFragments(bool)\nC++: virtual void SetIntegrateFragments(bool _arg)\n\nWhether or not to perform fragment integration\n"},
  {"GetIntegrateFragments", PyvtkAMRFragmentsFilter_GetIntegrateFragments, METH_VARARGS,
   "V.GetIntegrateFragments() -> bool\nC++: virtual bool GetIntegrateFragments()\n\nWhether or not to perform fragment integration\n"},
  {"IntegrateFragmentsOn", PyvtkAMRFragmentsFilter_IntegrateFragmentsOn, METH_VARARGS,
   "V.IntegrateFragmentsOn()\nC++: virtual void IntegrateFragmentsOn()\n\nWhether or not to perform fragment integration\n"},
  {"IntegrateFragmentsOff", PyvtkAMRFragmentsFilter_IntegrateFragmentsOff, METH_VARARGS,
   "V.IntegrateFragmentsOff()\nC++: virtual void IntegrateFragmentsOff()\n\nWhether or not to perform fragment integration\n"},
  {"GetVolumeFractionSurfaceValue", PyvtkAMRFragmentsFilter_GetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.GetVolumeFractionSurfaceValue() -> float\nC++: virtual double GetVolumeFractionSurfaceValue()\n\nGet / Set volume fraction value.\n"},
  {"SetVolumeFractionSurfaceValue", PyvtkAMRFragmentsFilter_SetVolumeFractionSurfaceValue, METH_VARARGS,
   "V.SetVolumeFractionSurfaceValue(float)\nC++: virtual void SetVolumeFractionSurfaceValue(double _arg)\n\nGet / Set volume fraction value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRFragmentsFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRFragmentsFilter", // tp_name
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
  PyvtkAMRFragmentsFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRFragmentsFilter_StaticNew()
{
  return vtkAMRFragmentsFilter::New();
}

PyObject *PyvtkAMRFragmentsFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRFragmentsFilter_Type, PyvtkAMRFragmentsFilter_Methods,
    "vtkAMRFragmentsFilter",
 &PyvtkAMRFragmentsFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRFragmentsFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRFragmentsFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRFragmentsFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRFragmentsFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

