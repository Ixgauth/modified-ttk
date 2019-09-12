// python wrapper for vtkSpyPlotUniReader
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
#include "vtkSpyPlotUniReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpyPlotUniReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSpyPlotUniReader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSpyPlotUniReader_Doc =
  "vtkSpyPlotUniReader - Read SPCTH Spy Plot file format\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSpyPlotUniReader is a reader that reads SPCTH Spy Plot file binary\n"
  "format that describes part of a dataset (in the case that the\n"
  "simulation consists of more than 1 file) or the entire simulation.\n"
  "The reader supports both Spy dataset types: flat mesh and AMR\n"
  "(Adaptive Mesh Refinement).\n\n"
  "@par Implementation Details: Class was extracted from\n"
  "vtkSpyPlotReader.cxx and is a helper to that class.  Note the grids\n"
  "in the reader may have bad ghost cells that will need to be taken\n"
  "into consideration in terms of both geometry and cell data\n"
  "----------------------------------------------------------------------\n"
  "    -------\n"
  "    ==================================================================\n"
  "    ===========\n\n";


static PyObject *
PyvtkSpyPlotUniReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpyPlotUniReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpyPlotUniReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpyPlotUniReader *tempr = vtkSpyPlotUniReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpyPlotUniReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpyPlotUniReader::NewInstance());

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
PyvtkSpyPlotUniReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSpyPlotUniReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetCellArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->SetCellArraySelection(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetCellArraySelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_ReadInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadInformation() :
      op->vtkSpyPlotUniReader::ReadInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->MakeCurrent() :
      op->vtkSpyPlotUniReader::MakeCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_PrintInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintInformation();
    }
    else
    {
      op->vtkSpyPlotUniReader::PrintInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_PrintMemoryUsage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintMemoryUsage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintMemoryUsage();
    }
    else
    {
      op->vtkSpyPlotUniReader::PrintMemoryUsage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetCurrentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetCurrentTime(temp0) :
      op->vtkSpyPlotUniReader::SetCurrentTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetCurrentTimeStep(temp0) :
      op->vtkSpyPlotUniReader::SetCurrentTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetCurrentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentTime() :
      op->vtkSpyPlotUniReader::GetCurrentTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentTimeStep() :
      op->vtkSpyPlotUniReader::GetCurrentTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkSpyPlotUniReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkSpyPlotUniReader::GetTimeRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetNeedToCheck(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeedToCheck");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeedToCheck(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetNeedToCheck(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTimeStepFromTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepFromTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepFromTime(temp0) :
      op->vtkSpyPlotUniReader::GetTimeStepFromTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTimeFromTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeFromTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeFromTimeStep(temp0) :
      op->vtkSpyPlotUniReader::GetTimeFromTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkSpyPlotUniReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTimeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeArray() :
      op->vtkSpyPlotUniReader::GetTimeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_IsAMR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAMR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAMR() :
      op->vtkSpyPlotUniReader::IsAMR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetNumberOfDataBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataBlocks() :
      op->vtkSpyPlotUniReader::GetNumberOfDataBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetCellFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellFieldName(temp0) :
      op->vtkSpyPlotUniReader::GetCellFieldName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCellFieldData(temp0, temp1, temp2) :
      op->vtkSpyPlotUniReader::GetCellFieldData(temp0, temp1, temp2));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetMaterialMassField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMassField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetMaterialMassField(temp0, temp1) :
      op->vtkSpyPlotUniReader::GetMaterialMassField(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetMaterialVolumeFractionField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialVolumeFractionField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetMaterialVolumeFractionField(temp0, temp1) :
      op->vtkSpyPlotUniReader::GetMaterialVolumeFractionField(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_MarkCellFieldDataFixed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkCellFieldDataFixed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->MarkCellFieldDataFixed(temp0, temp1) :
      op->vtkSpyPlotUniReader::MarkCellFieldDataFixed(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetTracers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTracers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetTracers() :
      op->vtkSpyPlotUniReader::GetTracers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetNumberOfMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMaterials() :
      op->vtkSpyPlotUniReader::GetNumberOfMaterials());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetNumberOfDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDimensions() :
      op->vtkSpyPlotUniReader::GetNumberOfDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkSpyPlotUniReader::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateMarkers(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetGenerateMarkers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetGenerateMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateMarkers() :
      op->vtkSpyPlotUniReader::GetGenerateMarkers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_GetMarkersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMarkersOn() :
      op->vtkSpyPlotUniReader::GetMarkersOn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetDataTypeChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeChanged(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetDataTypeChanged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpyPlotUniReader_SetDownConvertVolumeFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDownConvertVolumeFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpyPlotUniReader *op = static_cast<vtkSpyPlotUniReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDownConvertVolumeFraction(temp0);
    }
    else
    {
      op->vtkSpyPlotUniReader::SetDownConvertVolumeFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpyPlotUniReader_Methods[] = {
  {"IsTypeOf", PyvtkSpyPlotUniReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpyPlotUniReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpyPlotUniReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSpyPlotUniReader\nC++: static vtkSpyPlotUniReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpyPlotUniReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSpyPlotUniReader\nC++: vtkSpyPlotUniReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkSpyPlotUniReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet and get the Binary SpyPlot File name the reader will process\n"},
  {"GetFileName", PyvtkSpyPlotUniReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet and get the Binary SpyPlot File name the reader will process\n"},
  {"SetCellArraySelection", PyvtkSpyPlotUniReader_SetCellArraySelection, METH_VARARGS,
   "V.SetCellArraySelection(vtkDataArraySelection)\nC++: virtual void SetCellArraySelection(vtkDataArraySelection *da)\n\nSet and get the Binary SpyPlot File name the reader will process\n"},
  {"ReadInformation", PyvtkSpyPlotUniReader_ReadInformation, METH_VARARGS,
   "V.ReadInformation() -> int\nC++: virtual int ReadInformation()\n\nReads the basic information from the file such as the header,\nnumber of fields, etc.\n"},
  {"MakeCurrent", PyvtkSpyPlotUniReader_MakeCurrent, METH_VARARGS,
   "V.MakeCurrent() -> int\nC++: int MakeCurrent()\n\nMake sure that actual data (including grid blocks) is current\nelse it will read in the required data from file\n"},
  {"PrintInformation", PyvtkSpyPlotUniReader_PrintInformation, METH_VARARGS,
   "V.PrintInformation()\nC++: void PrintInformation()\n\n"},
  {"PrintMemoryUsage", PyvtkSpyPlotUniReader_PrintMemoryUsage, METH_VARARGS,
   "V.PrintMemoryUsage()\nC++: void PrintMemoryUsage()\n\n"},
  {"SetCurrentTime", PyvtkSpyPlotUniReader_SetCurrentTime, METH_VARARGS,
   "V.SetCurrentTime(float) -> int\nC++: int SetCurrentTime(double time)\n\nSet and get the current time step to process\n"},
  {"SetCurrentTimeStep", PyvtkSpyPlotUniReader_SetCurrentTimeStep, METH_VARARGS,
   "V.SetCurrentTimeStep(int) -> int\nC++: int SetCurrentTimeStep(int timeStep)\n\nSet and get the current time step to process\n"},
  {"GetCurrentTime", PyvtkSpyPlotUniReader_GetCurrentTime, METH_VARARGS,
   "V.GetCurrentTime() -> float\nC++: virtual double GetCurrentTime()\n\nSet and get the current time step to process\n"},
  {"GetCurrentTimeStep", PyvtkSpyPlotUniReader_GetCurrentTimeStep, METH_VARARGS,
   "V.GetCurrentTimeStep() -> int\nC++: virtual int GetCurrentTimeStep()\n\nSet and get the current time step to process\n"},
  {"GetTimeStepRange", PyvtkSpyPlotUniReader_GetTimeStepRange, METH_VARARGS,
   "V.GetTimeStepRange() -> (int, int)\nC++: int *GetTimeStepRange()\n\n"},
  {"GetTimeRange", PyvtkSpyPlotUniReader_GetTimeRange, METH_VARARGS,
   "V.GetTimeRange() -> (float, float)\nC++: double *GetTimeRange()\n\n"},
  {"SetNeedToCheck", PyvtkSpyPlotUniReader_SetNeedToCheck, METH_VARARGS,
   "V.SetNeedToCheck(int)\nC++: virtual void SetNeedToCheck(int _arg)\n\n"},
  {"GetTimeStepFromTime", PyvtkSpyPlotUniReader_GetTimeStepFromTime, METH_VARARGS,
   "V.GetTimeStepFromTime(float) -> int\nC++: int GetTimeStepFromTime(double time)\n\nFunctions that map from time to time step and vice versa\n"},
  {"GetTimeFromTimeStep", PyvtkSpyPlotUniReader_GetTimeFromTimeStep, METH_VARARGS,
   "V.GetTimeFromTimeStep(int) -> float\nC++: double GetTimeFromTimeStep(int timeStep)\n\nFunctions that map from time to time step and vice versa\n"},
  {"GetNumberOfCellFields", PyvtkSpyPlotUniReader_GetNumberOfCellFields, METH_VARARGS,
   "V.GetNumberOfCellFields() -> int\nC++: virtual int GetNumberOfCellFields()\n\n"},
  {"GetTimeArray", PyvtkSpyPlotUniReader_GetTimeArray, METH_VARARGS,
   "V.GetTimeArray() -> (float, ...)\nC++: double *GetTimeArray()\n\n"},
  {"IsAMR", PyvtkSpyPlotUniReader_IsAMR, METH_VARARGS,
   "V.IsAMR() -> int\nC++: int IsAMR()\n\nReturns 1 if the grid information contained in the file has\nAdaptive Mesh Refinement (AMR) else it returns 0\n"},
  {"GetNumberOfDataBlocks", PyvtkSpyPlotUniReader_GetNumberOfDataBlocks, METH_VARARGS,
   "V.GetNumberOfDataBlocks() -> int\nC++: int GetNumberOfDataBlocks()\n\nReturn the number of grids in the reader\n"},
  {"GetCellFieldName", PyvtkSpyPlotUniReader_GetCellFieldName, METH_VARARGS,
   "V.GetCellFieldName(int) -> string\nC++: const char *GetCellFieldName(int field)\n\nReturn the name of the ith field\n"},
  {"GetCellFieldData", PyvtkSpyPlotUniReader_GetCellFieldData, METH_VARARGS,
   "V.GetCellFieldData(int, int, [int, ...]) -> vtkDataArray\nC++: vtkDataArray *GetCellFieldData(int block, int field,\n    int *fixed)\n\nReturn the data array of the block's field.  The \"fixed\" argument\nis set to 1 if the array has been corrected for bad ghost cells\nelse it is set to 0\n"},
  {"GetMaterialMassField", PyvtkSpyPlotUniReader_GetMaterialMassField, METH_VARARGS,
   "V.GetMaterialMassField(int, int) -> vtkDataArray\nC++: vtkDataArray *GetMaterialMassField(const int &block,\n    const int &materialIndex)\n\nReturn the mass data array for the material index passed in for\nthe passed in block\n"},
  {"GetMaterialVolumeFractionField", PyvtkSpyPlotUniReader_GetMaterialVolumeFractionField, METH_VARARGS,
   "V.GetMaterialVolumeFractionField(int, int) -> vtkDataArray\nC++: vtkDataArray *GetMaterialVolumeFractionField(\n    const int &block, const int &materialIndex)\n\nReturn the volume fraction data array for the material index\npassed in for the passed in block\n"},
  {"MarkCellFieldDataFixed", PyvtkSpyPlotUniReader_MarkCellFieldDataFixed, METH_VARARGS,
   "V.MarkCellFieldDataFixed(int, int) -> int\nC++: int MarkCellFieldDataFixed(int block, int field)\n\nMark the block's field to have been fixed w/r bad ghost cells\n"},
  {"GetTracers", PyvtkSpyPlotUniReader_GetTracers, METH_VARARGS,
   "V.GetTracers() -> vtkFloatArray\nC++: vtkFloatArray *GetTracers()\n\nReturn the data array for the tracer positions.\n"},
  {"GetNumberOfMaterials", PyvtkSpyPlotUniReader_GetNumberOfMaterials, METH_VARARGS,
   "V.GetNumberOfMaterials() -> int\nC++: int GetNumberOfMaterials()\n\n"},
  {"GetNumberOfDimensions", PyvtkSpyPlotUniReader_GetNumberOfDimensions, METH_VARARGS,
   "V.GetNumberOfDimensions() -> int\nC++: int GetNumberOfDimensions()\n\n"},
  {"GetCoordinateSystem", PyvtkSpyPlotUniReader_GetCoordinateSystem, METH_VARARGS,
   "V.GetCoordinateSystem() -> int\nC++: int GetCoordinateSystem()\n\n"},
  {"SetGenerateMarkers", PyvtkSpyPlotUniReader_SetGenerateMarkers, METH_VARARGS,
   "V.SetGenerateMarkers(int)\nC++: virtual void SetGenerateMarkers(int _arg)\n\n"},
  {"GetGenerateMarkers", PyvtkSpyPlotUniReader_GetGenerateMarkers, METH_VARARGS,
   "V.GetGenerateMarkers() -> int\nC++: virtual int GetGenerateMarkers()\n\n"},
  {"GetMarkersOn", PyvtkSpyPlotUniReader_GetMarkersOn, METH_VARARGS,
   "V.GetMarkersOn() -> int\nC++: virtual int GetMarkersOn()\n\n"},
  {"SetDataTypeChanged", PyvtkSpyPlotUniReader_SetDataTypeChanged, METH_VARARGS,
   "V.SetDataTypeChanged(int)\nC++: virtual void SetDataTypeChanged(int _arg)\n\n"},
  {"SetDownConvertVolumeFraction", PyvtkSpyPlotUniReader_SetDownConvertVolumeFraction, METH_VARARGS,
   "V.SetDownConvertVolumeFraction(int)\nC++: void SetDownConvertVolumeFraction(int vf)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSpyPlotUniReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkSpyPlotUniReader", // tp_name
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
  PyvtkSpyPlotUniReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpyPlotUniReader_StaticNew()
{
  return vtkSpyPlotUniReader::New();
}

PyObject *PyvtkSpyPlotUniReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSpyPlotUniReader_Type, PyvtkSpyPlotUniReader_Methods,
    "vtkSpyPlotUniReader",
 &PyvtkSpyPlotUniReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSpyPlotUniReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpyPlotUniReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpyPlotUniReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpyPlotUniReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

