// python wrapper for vtkResampleWithDataSet
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
#include "vtkResampleWithDataSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResampleWithDataSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkResampleWithDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkResampleWithDataSet_Doc =
  "vtkResampleWithDataSet - sample point and cell data of a dataset on\npoints from another dataset.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Similar to vtkCompositeDataProbeFilter, vtkResampleWithDataSet takes\n"
  "two inputs - Input and Source, and samples the point and cell values\n"
  "of Source on to the point locations of Input. The output has the same\n"
  "structure as Input but its point data have the resampled values from\n"
  "Source. Unlike vtkCompositeDataProbeFilter, this filter support\n"
  "composite datasets for both Input and Source.\n"
  "@sa\n"
  "vtkCompositeDataProbeFilter vtkResampleToImage\n\n";


static PyObject *
PyvtkResampleWithDataSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResampleWithDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampleWithDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResampleWithDataSet *tempr = vtkResampleWithDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResampleWithDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampleWithDataSet::NewInstance());

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
PyvtkResampleWithDataSet_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoricalData(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetCategoricalData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCategoricalData() :
      op->vtkResampleWithDataSet::GetCategoricalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkResampleWithDataSet::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkResampleWithDataSet::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkResampleWithDataSet::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResampleWithDataSet::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTolerance(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetComputeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkResampleWithDataSet::GetComputeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_ComputeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOn();
    }
    else
    {
      op->vtkResampleWithDataSet::ComputeToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_ComputeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOff();
    }
    else
    {
      op->vtkResampleWithDataSet::ComputeToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetMarkBlankPointsAndCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkBlankPointsAndCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkBlankPointsAndCells(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetMarkBlankPointsAndCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetMarkBlankPointsAndCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkBlankPointsAndCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMarkBlankPointsAndCells() :
      op->vtkResampleWithDataSet::GetMarkBlankPointsAndCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkBlankPointsAndCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkBlankPointsAndCellsOn();
    }
    else
    {
      op->vtkResampleWithDataSet::MarkBlankPointsAndCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkBlankPointsAndCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkBlankPointsAndCellsOff();
    }
    else
    {
      op->vtkResampleWithDataSet::MarkBlankPointsAndCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocatorPrototype(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetCellLocatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocatorPrototype() :
      op->vtkResampleWithDataSet::GetCellLocatorPrototype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResampleWithDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResampleWithDataSet_Methods[] = {
  {"IsTypeOf", PyvtkResampleWithDataSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResampleWithDataSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResampleWithDataSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkResampleWithDataSet\nC++: static vtkResampleWithDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResampleWithDataSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkResampleWithDataSet\nC++: vtkResampleWithDataSet *NewInstance()\n\n"},
  {"SetSourceData", PyvtkResampleWithDataSet_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkDataObject)\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetSourceConnection", PyvtkResampleWithDataSet_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetCategoricalData", PyvtkResampleWithDataSet_SetCategoricalData, METH_VARARGS,
   "V.SetCategoricalData(bool)\nC++: void SetCategoricalData(bool arg)\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"GetCategoricalData", PyvtkResampleWithDataSet_GetCategoricalData, METH_VARARGS,
   "V.GetCategoricalData() -> bool\nC++: bool GetCategoricalData()\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"SetPassCellArrays", PyvtkResampleWithDataSet_SetPassCellArrays, METH_VARARGS,
   "V.SetPassCellArrays(bool)\nC++: void SetPassCellArrays(bool arg)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"GetPassCellArrays", PyvtkResampleWithDataSet_GetPassCellArrays, METH_VARARGS,
   "V.GetPassCellArrays() -> bool\nC++: bool GetPassCellArrays()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOn", PyvtkResampleWithDataSet_PassCellArraysOn, METH_VARARGS,
   "V.PassCellArraysOn()\nC++: virtual void PassCellArraysOn()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"PassCellArraysOff", PyvtkResampleWithDataSet_PassCellArraysOff, METH_VARARGS,
   "V.PassCellArraysOff()\nC++: virtual void PassCellArraysOff()\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"SetPassPointArrays", PyvtkResampleWithDataSet_SetPassPointArrays, METH_VARARGS,
   "V.SetPassPointArrays(bool)\nC++: void SetPassPointArrays(bool arg)\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"GetPassPointArrays", PyvtkResampleWithDataSet_GetPassPointArrays, METH_VARARGS,
   "V.GetPassPointArrays() -> bool\nC++: bool GetPassPointArrays()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"PassPointArraysOn", PyvtkResampleWithDataSet_PassPointArraysOn, METH_VARARGS,
   "V.PassPointArraysOn()\nC++: virtual void PassPointArraysOn()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"PassPointArraysOff", PyvtkResampleWithDataSet_PassPointArraysOff, METH_VARARGS,
   "V.PassPointArraysOff()\nC++: virtual void PassPointArraysOff()\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"SetPassFieldArrays", PyvtkResampleWithDataSet_SetPassFieldArrays, METH_VARARGS,
   "V.SetPassFieldArrays(bool)\nC++: void SetPassFieldArrays(bool arg)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"GetPassFieldArrays", PyvtkResampleWithDataSet_GetPassFieldArrays, METH_VARARGS,
   "V.GetPassFieldArrays() -> bool\nC++: bool GetPassFieldArrays()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkResampleWithDataSet_PassFieldArraysOn, METH_VARARGS,
   "V.PassFieldArraysOn()\nC++: virtual void PassFieldArraysOn()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"PassFieldArraysOff", PyvtkResampleWithDataSet_PassFieldArraysOff, METH_VARARGS,
   "V.PassFieldArraysOff()\nC++: virtual void PassFieldArraysOff()\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"SetTolerance", PyvtkResampleWithDataSet_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: void SetTolerance(double arg)\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"GetTolerance", PyvtkResampleWithDataSet_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"SetComputeTolerance", PyvtkResampleWithDataSet_SetComputeTolerance, METH_VARARGS,
   "V.SetComputeTolerance(bool)\nC++: void SetComputeTolerance(bool arg)\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"GetComputeTolerance", PyvtkResampleWithDataSet_GetComputeTolerance, METH_VARARGS,
   "V.GetComputeTolerance() -> bool\nC++: bool GetComputeTolerance()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"ComputeToleranceOn", PyvtkResampleWithDataSet_ComputeToleranceOn, METH_VARARGS,
   "V.ComputeToleranceOn()\nC++: virtual void ComputeToleranceOn()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"ComputeToleranceOff", PyvtkResampleWithDataSet_ComputeToleranceOff, METH_VARARGS,
   "V.ComputeToleranceOff()\nC++: virtual void ComputeToleranceOff()\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. Off by default.\n"},
  {"SetMarkBlankPointsAndCells", PyvtkResampleWithDataSet_SetMarkBlankPointsAndCells, METH_VARARGS,
   "V.SetMarkBlankPointsAndCells(bool)\nC++: virtual void SetMarkBlankPointsAndCells(bool _arg)\n\nSet whether points without resampled values, and their\ncorresponding cells, should be marked as Blank. Default is On.\n"},
  {"GetMarkBlankPointsAndCells", PyvtkResampleWithDataSet_GetMarkBlankPointsAndCells, METH_VARARGS,
   "V.GetMarkBlankPointsAndCells() -> bool\nC++: virtual bool GetMarkBlankPointsAndCells()\n\nSet whether points without resampled values, and their\ncorresponding cells, should be marked as Blank. Default is On.\n"},
  {"MarkBlankPointsAndCellsOn", PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOn, METH_VARARGS,
   "V.MarkBlankPointsAndCellsOn()\nC++: virtual void MarkBlankPointsAndCellsOn()\n\nSet whether points without resampled values, and their\ncorresponding cells, should be marked as Blank. Default is On.\n"},
  {"MarkBlankPointsAndCellsOff", PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOff, METH_VARARGS,
   "V.MarkBlankPointsAndCellsOff()\nC++: virtual void MarkBlankPointsAndCellsOff()\n\nSet whether points without resampled values, and their\ncorresponding cells, should be marked as Blank. Default is On.\n"},
  {"SetCellLocatorPrototype", PyvtkResampleWithDataSet_SetCellLocatorPrototype, METH_VARARGS,
   "V.SetCellLocatorPrototype(vtkAbstractCellLocator)\nC++: virtual void SetCellLocatorPrototype(\n    vtkAbstractCellLocator *)\n\n"},
  {"GetCellLocatorPrototype", PyvtkResampleWithDataSet_GetCellLocatorPrototype, METH_VARARGS,
   "V.GetCellLocatorPrototype() -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocatorPrototype()\n\n"},
  {"GetMTime", PyvtkResampleWithDataSet_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkResampleWithDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkResampleWithDataSet", // tp_name
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
  PyvtkResampleWithDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResampleWithDataSet_StaticNew()
{
  return vtkResampleWithDataSet::New();
}

PyObject *PyvtkResampleWithDataSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkResampleWithDataSet_Type, PyvtkResampleWithDataSet_Methods,
    "vtkResampleWithDataSet",
 &PyvtkResampleWithDataSet_StaticNew);

  PyTypeObject *pytype = &PyvtkResampleWithDataSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPassInputTypeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResampleWithDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResampleWithDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResampleWithDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

