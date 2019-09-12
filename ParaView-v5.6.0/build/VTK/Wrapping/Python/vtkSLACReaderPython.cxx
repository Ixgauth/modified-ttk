// python wrapper for vtkSLACReader
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
#include "vtkSLACReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSLACReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSLACReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSLACReader_Doc =
  "vtkSLACReader - A reader for a data format used by Omega3p, Tau3p,\nand several other tools used at the Standford Linear Accelerator\nCenter (SLAC).\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The underlying format uses netCDF to store arrays, but also imposes\n"
  "several conventions to form an unstructured grid of elements.\n\n";


static PyObject *
PyvtkSLACReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSLACReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSLACReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSLACReader *tempr = vtkSLACReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSLACReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSLACReader::NewInstance());

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
PyvtkSLACReader_GetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMeshFileName() :
      op->vtkSLACReader::GetMeshFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshFileName(temp0);
    }
    else
    {
      op->vtkSLACReader::SetMeshFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_AddModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddModeFileName(temp0);
    }
    else
    {
      op->vtkSLACReader::AddModeFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_RemoveAllModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllModeFileNames();
    }
    else
    {
      op->vtkSLACReader::RemoveAllModeFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfModeFileNames() :
      op->vtkSLACReader::GetNumberOfModeFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModeFileName(temp0) :
      op->vtkSLACReader::GetModeFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadInternalVolume() :
      op->vtkSLACReader::GetReadInternalVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadInternalVolume(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadInternalVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadInternalVolumeOn();
    }
    else
    {
      op->vtkSLACReader::ReadInternalVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadInternalVolumeOff();
    }
    else
    {
      op->vtkSLACReader::ReadInternalVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadExternalSurface() :
      op->vtkSLACReader::GetReadExternalSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadExternalSurface(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadExternalSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadExternalSurfaceOn();
    }
    else
    {
      op->vtkSLACReader::ReadExternalSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadExternalSurfaceOff();
    }
    else
    {
      op->vtkSLACReader::ReadExternalSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadMidpoints() :
      op->vtkSLACReader::GetReadMidpoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadMidpoints(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadMidpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadMidpointsOn();
    }
    else
    {
      op->vtkSLACReader::ReadMidpointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadMidpointsOff();
    }
    else
    {
      op->vtkSLACReader::ReadMidpointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkSLACReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkSLACReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkSLACReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFrequencyScales();
    }
    else
    {
      op->vtkSLACReader::ResetFrequencyScales();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetFrequencyScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequencyScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFrequencyScale(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetFrequencyScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPhaseShifts();
    }
    else
    {
      op->vtkSLACReader::ResetPhaseShifts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetPhaseShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhaseShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPhaseShift(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetPhaseShift(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetFrequencyScales() :
      op->vtkSLACReader::GetFrequencyScales());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetPhaseShifts() :
      op->vtkSLACReader::GetPhaseShifts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSLACReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_INTERNAL_VOLUME(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_INTERNAL_VOLUME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_INTERNAL_VOLUME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_EXTERNAL_SURFACE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_EXTERNAL_SURFACE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_EXTERNAL_SURFACE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_POINTS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINTS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINTS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_POINT_DATA(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINT_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSLACReader_Methods[] = {
  {"IsTypeOf", PyvtkSLACReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSLACReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSLACReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSLACReader\nC++: static vtkSLACReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSLACReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSLACReader\nC++: vtkSLACReader *NewInstance()\n\n"},
  {"GetMeshFileName", PyvtkSLACReader_GetMeshFileName, METH_VARARGS,
   "V.GetMeshFileName() -> string\nC++: virtual char *GetMeshFileName()\n\n"},
  {"SetMeshFileName", PyvtkSLACReader_SetMeshFileName, METH_VARARGS,
   "V.SetMeshFileName(string)\nC++: virtual void SetMeshFileName(const char *_arg)\n\n"},
  {"AddModeFileName", PyvtkSLACReader_AddModeFileName, METH_VARARGS,
   "V.AddModeFileName(string)\nC++: virtual void AddModeFileName(const char *fname)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {"RemoveAllModeFileNames", PyvtkSLACReader_RemoveAllModeFileNames, METH_VARARGS,
   "V.RemoveAllModeFileNames()\nC++: virtual void RemoveAllModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {"GetNumberOfModeFileNames", PyvtkSLACReader_GetNumberOfModeFileNames, METH_VARARGS,
   "V.GetNumberOfModeFileNames() -> int\nC++: virtual unsigned int GetNumberOfModeFileNames()\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {"GetModeFileName", PyvtkSLACReader_GetModeFileName, METH_VARARGS,
   "V.GetModeFileName(int) -> string\nC++: virtual const char *GetModeFileName(unsigned int idx)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {"GetReadInternalVolume", PyvtkSLACReader_GetReadInternalVolume, METH_VARARGS,
   "V.GetReadInternalVolume() -> int\nC++: virtual vtkTypeBool GetReadInternalVolume()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {"SetReadInternalVolume", PyvtkSLACReader_SetReadInternalVolume, METH_VARARGS,
   "V.SetReadInternalVolume(int)\nC++: virtual void SetReadInternalVolume(vtkTypeBool _arg)\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {"ReadInternalVolumeOn", PyvtkSLACReader_ReadInternalVolumeOn, METH_VARARGS,
   "V.ReadInternalVolumeOn()\nC++: virtual void ReadInternalVolumeOn()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {"ReadInternalVolumeOff", PyvtkSLACReader_ReadInternalVolumeOff, METH_VARARGS,
   "V.ReadInternalVolumeOff()\nC++: virtual void ReadInternalVolumeOff()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {"GetReadExternalSurface", PyvtkSLACReader_GetReadExternalSurface, METH_VARARGS,
   "V.GetReadExternalSurface() -> int\nC++: virtual vtkTypeBool GetReadExternalSurface()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {"SetReadExternalSurface", PyvtkSLACReader_SetReadExternalSurface, METH_VARARGS,
   "V.SetReadExternalSurface(int)\nC++: virtual void SetReadExternalSurface(vtkTypeBool _arg)\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {"ReadExternalSurfaceOn", PyvtkSLACReader_ReadExternalSurfaceOn, METH_VARARGS,
   "V.ReadExternalSurfaceOn()\nC++: virtual void ReadExternalSurfaceOn()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {"ReadExternalSurfaceOff", PyvtkSLACReader_ReadExternalSurfaceOff, METH_VARARGS,
   "V.ReadExternalSurfaceOff()\nC++: virtual void ReadExternalSurfaceOff()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {"GetReadMidpoints", PyvtkSLACReader_GetReadMidpoints, METH_VARARGS,
   "V.GetReadMidpoints() -> int\nC++: virtual vtkTypeBool GetReadMidpoints()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {"SetReadMidpoints", PyvtkSLACReader_SetReadMidpoints, METH_VARARGS,
   "V.SetReadMidpoints(int)\nC++: virtual void SetReadMidpoints(vtkTypeBool _arg)\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {"ReadMidpointsOn", PyvtkSLACReader_ReadMidpointsOn, METH_VARARGS,
   "V.ReadMidpointsOn()\nC++: virtual void ReadMidpointsOn()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {"ReadMidpointsOff", PyvtkSLACReader_ReadMidpointsOff, METH_VARARGS,
   "V.ReadMidpointsOff()\nC++: virtual void ReadMidpointsOff()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {"GetNumberOfVariableArrays", PyvtkSLACReader_GetNumberOfVariableArrays, METH_VARARGS,
   "V.GetNumberOfVariableArrays() -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkSLACReader_GetVariableArrayName, METH_VARARGS,
   "V.GetVariableArrayName(int) -> string\nC++: virtual const char *GetVariableArrayName(int idx)\n\nVariable array selection.\n"},
  {"GetVariableArrayStatus", PyvtkSLACReader_GetVariableArrayStatus, METH_VARARGS,
   "V.GetVariableArrayStatus(string) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\nVariable array selection.\n"},
  {"SetVariableArrayStatus", PyvtkSLACReader_SetVariableArrayStatus, METH_VARARGS,
   "V.SetVariableArrayStatus(string, int)\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\nVariable array selection.\n"},
  {"ResetFrequencyScales", PyvtkSLACReader_ResetFrequencyScales, METH_VARARGS,
   "V.ResetFrequencyScales()\nC++: virtual void ResetFrequencyScales()\n\nSets the scale factor for each mode. Each scale factor is reset\nto 1.\n"},
  {"SetFrequencyScale", PyvtkSLACReader_SetFrequencyScale, METH_VARARGS,
   "V.SetFrequencyScale(int, float)\nC++: virtual void SetFrequencyScale(int index, double scale)\n\nSets the scale factor for each mode. Each scale factor is reset\nto 1.\n"},
  {"ResetPhaseShifts", PyvtkSLACReader_ResetPhaseShifts, METH_VARARGS,
   "V.ResetPhaseShifts()\nC++: virtual void ResetPhaseShifts()\n\nSets the phase offset for each mode. Each shift is reset to 0.\n"},
  {"SetPhaseShift", PyvtkSLACReader_SetPhaseShift, METH_VARARGS,
   "V.SetPhaseShift(int, float)\nC++: virtual void SetPhaseShift(int index, double shift)\n\nSets the phase offset for each mode. Each shift is reset to 0.\n"},
  {"GetFrequencyScales", PyvtkSLACReader_GetFrequencyScales, METH_VARARGS,
   "V.GetFrequencyScales() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetFrequencyScales()\n\nNOTE: This is not thread-safe.\n"},
  {"GetPhaseShifts", PyvtkSLACReader_GetPhaseShifts, METH_VARARGS,
   "V.GetPhaseShifts() -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetPhaseShifts()\n\nNOTE: This is not thread-safe.\n"},
  {"CanReadFile", PyvtkSLACReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read by this reader.\n"},
  {"IS_INTERNAL_VOLUME", PyvtkSLACReader_IS_INTERNAL_VOLUME, METH_VARARGS,
   "V.IS_INTERNAL_VOLUME() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_INTERNAL_VOLUME()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the internal volume.\n"},
  {"IS_EXTERNAL_SURFACE", PyvtkSLACReader_IS_EXTERNAL_SURFACE, METH_VARARGS,
   "V.IS_EXTERNAL_SURFACE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_EXTERNAL_SURFACE()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the external surface.\n"},
  {"POINTS", PyvtkSLACReader_POINTS, METH_VARARGS,
   "V.POINTS() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINTS()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convenience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {"POINT_DATA", PyvtkSLACReader_POINT_DATA, METH_VARARGS,
   "V.POINT_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINT_DATA()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convenience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSLACReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkSLACReader", // tp_name
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
  PyvtkSLACReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSLACReader_StaticNew()
{
  return vtkSLACReader::New();
}

PyObject *PyvtkSLACReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSLACReader_Type, PyvtkSLACReader_Methods,
    "vtkSLACReader",
 &PyvtkSLACReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSLACReader_Type;

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

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SURFACE_OUTPUT", vtkSLACReader::SURFACE_OUTPUT },
        { "VOLUME_OUTPUT", vtkSLACReader::VOLUME_OUTPUT },
        { "NUM_OUTPUTS", vtkSLACReader::NUM_OUTPUTS },
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

void PyVTKAddFile_vtkSLACReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSLACReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSLACReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

