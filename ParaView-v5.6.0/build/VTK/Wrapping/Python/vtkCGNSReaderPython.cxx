// python wrapper for vtkCGNSReader
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
#include "vtkCGNSReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCGNSReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCGNSReader_Doc =
  "vtkCGNSReader - vtkCGNSReader creates a multi-block dataset and reads\nunstructured grids, and structured meshes from binary files stored in\nCGNS file format, with data stored at the nodes or at the cells.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkCGNSReader is inspired by the VisIt CGNS reader originally written\n"
  "by B. Whitlock. vtkCGNSReader relies on the low level CGNS API to\n"
  "load DataSet and reduce memory footprint.\n\n"
  "@warning\n"
  "  ...\n\n"
  "@par Thanks: Thanks to .\n\n";


static PyObject *
PyvtkCGNSReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSReader *tempr = vtkCGNSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSReader::NewInstance());

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
PyvtkCGNSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

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
      op->vtkCGNSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCGNSReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCGNSReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetBaseArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBaseArrayStatus(temp0) :
      op->vtkCGNSReader::GetBaseArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetBaseArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBaseArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetBaseArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllBases();
    }
    else
    {
      op->vtkCGNSReader::DisableAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllBases();
    }
    else
    {
      op->vtkCGNSReader::EnableAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfBaseArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBaseArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBaseArrays() :
      op->vtkCGNSReader::GetNumberOfBaseArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetBaseArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBaseArrayName(temp0) :
      op->vtkCGNSReader::GetBaseArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfFamilyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFamilyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFamilyArrays() :
      op->vtkCGNSReader::GetNumberOfFamilyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFamilyArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFamilyArrayName(temp0) :
      op->vtkCGNSReader::GetFamilyArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetFamilyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFamilyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFamilyArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetFamilyArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetFamilyArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFamilyArrayStatus(temp0) :
      op->vtkCGNSReader::GetFamilyArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllFamilies();
    }
    else
    {
      op->vtkCGNSReader::EnableAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllFamilies();
    }
    else
    {
      op->vtkCGNSReader::DisableAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSSubsetInclusionLattice *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkCGNSReader::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetBlockStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetBlockStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_ClearBlockStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBlockStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearBlockStatus();
    }
    else
    {
      op->vtkCGNSReader::ClearBlockStatus();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkCGNSReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkCGNSReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkCGNSReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkCGNSReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkCGNSReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkCGNSReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkCGNSReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkCGNSReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkCGNSReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkCGNSReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkCGNSReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetDoublePrecisionMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoublePrecisionMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoublePrecisionMesh(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetDoublePrecisionMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDoublePrecisionMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoublePrecisionMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDoublePrecisionMesh() :
      op->vtkCGNSReader::GetDoublePrecisionMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DoublePrecisionMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionMeshOn();
    }
    else
    {
      op->vtkCGNSReader::DoublePrecisionMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DoublePrecisionMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DoublePrecisionMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DoublePrecisionMeshOff();
    }
    else
    {
      op->vtkCGNSReader::DoublePrecisionMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_SetLoadBndPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadBndPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadBndPatch(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetLoadBndPatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_GetLoadBndPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadBndPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoadBndPatch() :
      op->vtkCGNSReader::GetLoadBndPatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_LoadBndPatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadBndPatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadBndPatchOn();
    }
    else
    {
      op->vtkCGNSReader::LoadBndPatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_LoadBndPatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadBndPatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadBndPatchOff();
    }
    else
    {
      op->vtkCGNSReader::LoadBndPatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_SetLoadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadMesh(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetLoadMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_GetLoadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLoadMesh() :
      op->vtkCGNSReader::GetLoadMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_LoadMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadMeshOn();
    }
    else
    {
      op->vtkCGNSReader::LoadMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkCGNSReader_LoadMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadMeshOff();
    }
    else
    {
      op->vtkCGNSReader::LoadMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}
#endif


static PyObject *
PyvtkCGNSReader_SetCreateEachSolutionAsBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateEachSolutionAsBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateEachSolutionAsBlock(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetCreateEachSolutionAsBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetCreateEachSolutionAsBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateEachSolutionAsBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateEachSolutionAsBlock() :
      op->vtkCGNSReader::GetCreateEachSolutionAsBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CreateEachSolutionAsBlockOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEachSolutionAsBlockOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateEachSolutionAsBlockOn();
    }
    else
    {
      op->vtkCGNSReader::CreateEachSolutionAsBlockOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_CreateEachSolutionAsBlockOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateEachSolutionAsBlockOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateEachSolutionAsBlockOff();
    }
    else
    {
      op->vtkCGNSReader::CreateEachSolutionAsBlockOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetIgnoreFlowSolutionPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreFlowSolutionPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreFlowSolutionPointers(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetIgnoreFlowSolutionPointers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetIgnoreFlowSolutionPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreFlowSolutionPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreFlowSolutionPointers() :
      op->vtkCGNSReader::GetIgnoreFlowSolutionPointers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IgnoreFlowSolutionPointersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFlowSolutionPointersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFlowSolutionPointersOn();
    }
    else
    {
      op->vtkCGNSReader::IgnoreFlowSolutionPointersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_IgnoreFlowSolutionPointersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreFlowSolutionPointersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreFlowSolutionPointersOff();
    }
    else
    {
      op->vtkCGNSReader::IgnoreFlowSolutionPointersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetDistributeBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributeBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistributeBlocks(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetDistributeBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetDistributeBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistributeBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDistributeBlocks() :
      op->vtkCGNSReader::GetDistributeBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DistributeBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeBlocksOn();
    }
    else
    {
      op->vtkCGNSReader::DistributeBlocksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_DistributeBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistributeBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DistributeBlocksOff();
    }
    else
    {
      op->vtkCGNSReader::DistributeBlocksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkCGNSReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCGNSReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->Broadcast(temp0);
    }
    else
    {
      op->vtkCGNSReader::Broadcast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSReader_GetSILUpdateStamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSILUpdateStamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSReader *op = static_cast<vtkCGNSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSILUpdateStamp() :
      op->vtkCGNSReader::GetSILUpdateStamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSReader_Methods[] = {
  {"IsTypeOf", PyvtkCGNSReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCGNSReader\nC++: static vtkCGNSReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCGNSReader\nC++: vtkCGNSReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkCGNSReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of CGNS datafile to read\n"},
  {"GetFileName", PyvtkCGNSReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of CGNS datafile to read\n"},
  {"CanReadFile", PyvtkCGNSReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *filename)\n\nIs the given file name a CGNS file?\n"},
  {"GetBaseArrayStatus", PyvtkCGNSReader_GetBaseArrayStatus, METH_VARARGS,
   "V.GetBaseArrayStatus(string) -> int\nC++: int GetBaseArrayStatus(const char *name)\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"SetBaseArrayStatus", PyvtkCGNSReader_SetBaseArrayStatus, METH_VARARGS,
   "V.SetBaseArrayStatus(string, int)\nC++: void SetBaseArrayStatus(const char *name, int status)\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"DisableAllBases", PyvtkCGNSReader_DisableAllBases, METH_VARARGS,
   "V.DisableAllBases()\nC++: void DisableAllBases()\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"EnableAllBases", PyvtkCGNSReader_EnableAllBases, METH_VARARGS,
   "V.EnableAllBases()\nC++: void EnableAllBases()\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetNumberOfBaseArrays", PyvtkCGNSReader_GetNumberOfBaseArrays, METH_VARARGS,
   "V.GetNumberOfBaseArrays() -> int\nC++: int GetNumberOfBaseArrays()\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetBaseArrayName", PyvtkCGNSReader_GetBaseArrayName, METH_VARARGS,
   "V.GetBaseArrayName(int) -> string\nC++: const char *GetBaseArrayName(int index)\n\nConvenience API to query information about bases and\nenable/disable loading of bases. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetNumberOfFamilyArrays", PyvtkCGNSReader_GetNumberOfFamilyArrays, METH_VARARGS,
   "V.GetNumberOfFamilyArrays() -> int\nC++: int GetNumberOfFamilyArrays()\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetFamilyArrayName", PyvtkCGNSReader_GetFamilyArrayName, METH_VARARGS,
   "V.GetFamilyArrayName(int) -> string\nC++: const char *GetFamilyArrayName(int index)\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"SetFamilyArrayStatus", PyvtkCGNSReader_SetFamilyArrayStatus, METH_VARARGS,
   "V.SetFamilyArrayStatus(string, int)\nC++: void SetFamilyArrayStatus(const char *name, int status)\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetFamilyArrayStatus", PyvtkCGNSReader_GetFamilyArrayStatus, METH_VARARGS,
   "V.GetFamilyArrayStatus(string) -> int\nC++: int GetFamilyArrayStatus(const char *name)\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"EnableAllFamilies", PyvtkCGNSReader_EnableAllFamilies, METH_VARARGS,
   "V.EnableAllFamilies()\nC++: void EnableAllFamilies()\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"DisableAllFamilies", PyvtkCGNSReader_DisableAllFamilies, METH_VARARGS,
   "V.DisableAllFamilies()\nC++: void DisableAllFamilies()\n\nConvenience API to query information about families and\nenable/disable loading of families. One can also get the sil\n(`vtkCGNSReader::GetSIL()`) and then use API on\nvtkCGNSSubsetInclusionLattice to enable/disable blocks with\nadditional flexibility.\n"},
  {"GetSIL", PyvtkCGNSReader_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkCGNSSubsetInclusionLattice\nC++: vtkCGNSSubsetInclusionLattice *GetSIL()\n\nProvides access to the SIL. The SIL is populated in\n`RequestInformation`. Once populated, one can use API on\nvtkCGNSSubsetInclusionLattice to query information about\nbases/zones/families etc. and enable/disable loading of those.\n"},
  {"SetBlockStatus", PyvtkCGNSReader_SetBlockStatus, METH_VARARGS,
   "V.SetBlockStatus(string, bool)\nC++: void SetBlockStatus(const char *nodepath, bool enable)\n\nAPI to select blocks to read. A more expressive API is provided\nby vtkCGNSSubsetInclusionLattice which can be access using\n`GetSIL` method. These methods provide some rudimentary API on\nthe reader itself.\n"},
  {"ClearBlockStatus", PyvtkCGNSReader_ClearBlockStatus, METH_VARARGS,
   "V.ClearBlockStatus()\nC++: void ClearBlockStatus()\n\nAPI to select blocks to read. A more expressive API is provided\nby vtkCGNSSubsetInclusionLattice which can be access using\n`GetSIL` method. These methods provide some rudimentary API on\nthe reader itself.\n"},
  {"GetNumberOfPointArrays", PyvtkCGNSReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"GetPointArrayName", PyvtkCGNSReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"GetPointArrayStatus", PyvtkCGNSReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"SetPointArrayStatus", PyvtkCGNSReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"DisableAllPointArrays", PyvtkCGNSReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"EnableAllPointArrays", PyvtkCGNSReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nAPI to get information of point arrays and enable/disable loading\nof a particular arrays.\n"},
  {"GetNumberOfCellArrays", PyvtkCGNSReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"GetCellArrayName", PyvtkCGNSReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"GetCellArrayStatus", PyvtkCGNSReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"SetCellArrayStatus", PyvtkCGNSReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"DisableAllCellArrays", PyvtkCGNSReader_DisableAllCellArrays, METH_VARARGS,
   "V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"EnableAllCellArrays", PyvtkCGNSReader_EnableAllCellArrays, METH_VARARGS,
   "V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\nAPI to get information of cell arrays and enable/disable loading\nof a particular arrays.\n"},
  {"SetDoublePrecisionMesh", PyvtkCGNSReader_SetDoublePrecisionMesh, METH_VARARGS,
   "V.SetDoublePrecisionMesh(int)\nC++: virtual void SetDoublePrecisionMesh(int _arg)\n\n"},
  {"GetDoublePrecisionMesh", PyvtkCGNSReader_GetDoublePrecisionMesh, METH_VARARGS,
   "V.GetDoublePrecisionMesh() -> int\nC++: virtual int GetDoublePrecisionMesh()\n\n"},
  {"DoublePrecisionMeshOn", PyvtkCGNSReader_DoublePrecisionMeshOn, METH_VARARGS,
   "V.DoublePrecisionMeshOn()\nC++: virtual void DoublePrecisionMeshOn()\n\n"},
  {"DoublePrecisionMeshOff", PyvtkCGNSReader_DoublePrecisionMeshOff, METH_VARARGS,
   "V.DoublePrecisionMeshOff()\nC++: virtual void DoublePrecisionMeshOff()\n\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"SetLoadBndPatch", PyvtkCGNSReader_SetLoadBndPatch, METH_VARARGS,
   "V.SetLoadBndPatch(int)\nC++: void SetLoadBndPatch(int)\n\nEnable/disable loading of boundary condition patches. Defaults to\noff.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetLoadBndPatch", PyvtkCGNSReader_GetLoadBndPatch, METH_VARARGS,
   "V.GetLoadBndPatch() -> int\nC++: virtual int GetLoadBndPatch()\n\nEnable/disable loading of boundary condition patches. Defaults to\noff.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"LoadBndPatchOn", PyvtkCGNSReader_LoadBndPatchOn, METH_VARARGS,
   "V.LoadBndPatchOn()\nC++: void LoadBndPatchOn()\n\nEnable/disable loading of boundary condition patches. Defaults to\noff.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"LoadBndPatchOff", PyvtkCGNSReader_LoadBndPatchOff, METH_VARARGS,
   "V.LoadBndPatchOff()\nC++: void LoadBndPatchOff()\n\nEnable/disable loading of boundary condition patches. Defaults to\noff.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"SetLoadMesh", PyvtkCGNSReader_SetLoadMesh, METH_VARARGS,
   "V.SetLoadMesh(bool)\nC++: void SetLoadMesh(bool)\n\nEnable/disable loading of zone mesh. Defaults to on. It may be\nturned off to load only boundary patches (when LoadBndPatch if\nON), for example.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"GetLoadMesh", PyvtkCGNSReader_GetLoadMesh, METH_VARARGS,
   "V.GetLoadMesh() -> bool\nC++: virtual bool GetLoadMesh()\n\nEnable/disable loading of zone mesh. Defaults to on. It may be\nturned off to load only boundary patches (when LoadBndPatch if\nON), for example.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"LoadMeshOn", PyvtkCGNSReader_LoadMeshOn, METH_VARARGS,
   "V.LoadMeshOn()\nC++: void LoadMeshOn()\n\nEnable/disable loading of zone mesh. Defaults to on. It may be\nturned off to load only boundary patches (when LoadBndPatch if\nON), for example.@deprecated Use SIL instead.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {"LoadMeshOff", PyvtkCGNSReader_LoadMeshOff, METH_VARARGS,
   "V.LoadMeshOff()\nC++: void LoadMeshOff()\n\nEnable/disable loading of zone mesh. Defaults to on. It may be\nturned off to load only boundary patches (when LoadBndPatch if\nON), for example.@deprecated Use SIL instead.\n"},
#endif
  {"SetCreateEachSolutionAsBlock", PyvtkCGNSReader_SetCreateEachSolutionAsBlock, METH_VARARGS,
   "V.SetCreateEachSolutionAsBlock(int)\nC++: virtual void SetCreateEachSolutionAsBlock(int _arg)\n\nThis option is provided for debugging and should not be used for\nproduction runs as the output data produced may not be correct.\nWhen set to true, the read will simply read each solution\n(`FlowSolution_t`) node encountered in a zone and create a\nseparate block under the block corresponding to the zone in the\noutput.\n"},
  {"GetCreateEachSolutionAsBlock", PyvtkCGNSReader_GetCreateEachSolutionAsBlock, METH_VARARGS,
   "V.GetCreateEachSolutionAsBlock() -> int\nC++: virtual int GetCreateEachSolutionAsBlock()\n\n"},
  {"CreateEachSolutionAsBlockOn", PyvtkCGNSReader_CreateEachSolutionAsBlockOn, METH_VARARGS,
   "V.CreateEachSolutionAsBlockOn()\nC++: virtual void CreateEachSolutionAsBlockOn()\n\n"},
  {"CreateEachSolutionAsBlockOff", PyvtkCGNSReader_CreateEachSolutionAsBlockOff, METH_VARARGS,
   "V.CreateEachSolutionAsBlockOff()\nC++: virtual void CreateEachSolutionAsBlockOff()\n\n"},
  {"SetIgnoreFlowSolutionPointers", PyvtkCGNSReader_SetIgnoreFlowSolutionPointers, METH_VARARGS,
   "V.SetIgnoreFlowSolutionPointers(bool)\nC++: virtual void SetIgnoreFlowSolutionPointers(bool _arg)\n\nWhen set to true (default is false), the reader will simply\nignore `FlowSolutionPointers` since they are either incomplete or\ninvalid and instead will rely on FlowSolution_t nodes being\nlabelled as \"...AtStep<tsindex>\" to locate solution nodes for a\nspecific timestep. Note, tsindex starts with 1 (not zero).\n\nWhen set to false, the reader will still try to confirm that at\nleast one valid FlowSolution_t node is referred to in\nFlowSolutionPointers nodes for the current timestep. If none is\nfound, then the reader will print out a warning and act as if\nIgnoreFlowSolutionPointers was set to true. To avoid this\nwarning, one should set IgnoreFlowSolutionPointers to true.\n"},
  {"GetIgnoreFlowSolutionPointers", PyvtkCGNSReader_GetIgnoreFlowSolutionPointers, METH_VARARGS,
   "V.GetIgnoreFlowSolutionPointers() -> bool\nC++: virtual bool GetIgnoreFlowSolutionPointers()\n\n"},
  {"IgnoreFlowSolutionPointersOn", PyvtkCGNSReader_IgnoreFlowSolutionPointersOn, METH_VARARGS,
   "V.IgnoreFlowSolutionPointersOn()\nC++: virtual void IgnoreFlowSolutionPointersOn()\n\n"},
  {"IgnoreFlowSolutionPointersOff", PyvtkCGNSReader_IgnoreFlowSolutionPointersOff, METH_VARARGS,
   "V.IgnoreFlowSolutionPointersOff()\nC++: virtual void IgnoreFlowSolutionPointersOff()\n\n"},
  {"SetDistributeBlocks", PyvtkCGNSReader_SetDistributeBlocks, METH_VARARGS,
   "V.SetDistributeBlocks(bool)\nC++: virtual void SetDistributeBlocks(bool _arg)\n\nThis reader can support piece requests by distributing each block\nin each zone across ranks (default). To make the reader disregard\npiece request and read all blocks in the zone, set this to false\n(default is true).\n"},
  {"GetDistributeBlocks", PyvtkCGNSReader_GetDistributeBlocks, METH_VARARGS,
   "V.GetDistributeBlocks() -> bool\nC++: virtual bool GetDistributeBlocks()\n\n"},
  {"DistributeBlocksOn", PyvtkCGNSReader_DistributeBlocksOn, METH_VARARGS,
   "V.DistributeBlocksOn()\nC++: virtual void DistributeBlocksOn()\n\n"},
  {"DistributeBlocksOff", PyvtkCGNSReader_DistributeBlocksOff, METH_VARARGS,
   "V.DistributeBlocksOff()\nC++: virtual void DistributeBlocksOff()\n\n"},
  {"SetController", PyvtkCGNSReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {"GetController", PyvtkCGNSReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/get the communication object used to relay a list of files\nfrom the rank 0 process to all others. This is the only\ninterprocess communication required by vtkPExodusIIReader.\n"},
  {"Broadcast", PyvtkCGNSReader_Broadcast, METH_VARARGS,
   "V.Broadcast(vtkMultiProcessController)\nC++: void Broadcast(vtkMultiProcessController *ctrl)\n\nSends metadata (that read from the input file, not settings\nmodified through this API) from the rank 0 node to all other\nprocesses in a job.\n"},
  {"GetSILUpdateStamp", PyvtkCGNSReader_GetSILUpdateStamp, METH_VARARGS,
   "V.GetSILUpdateStamp() -> int\nC++: vtkIdType GetSILUpdateStamp()\n\nReturn the timestamp for the rebuilding of the SIL.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCGNSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCGNSReaderPython.vtkCGNSReader", // tp_name
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
  PyvtkCGNSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSReader_StaticNew()
{
  return vtkCGNSReader::New();
}

PyObject *PyvtkCGNSReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCGNSReader_Type, PyvtkCGNSReader_Methods,
    "vtkCGNSReader",
 &PyvtkCGNSReader_StaticNew);

  PyTypeObject *pytype = &PyvtkCGNSReader_Type;

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

void PyVTKAddFile_vtkCGNSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

