// python wrapper for vtkOpenFOAMReader
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
#include "vtkStdString.h"
#include "vtkOpenFOAMReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenFOAMReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOpenFOAMReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkOpenFOAMReader_Doc =
  "vtkOpenFOAMReader - reads a dataset in OpenFOAM format\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkOpenFOAMReader creates a multiblock dataset. It reads mesh\n"
  "information and time dependent data.  The polyMesh folders contain\n"
  "mesh information. The time folders contain transient data for the\n"
  "cells. Each folder can contain any number of data files.\n\n"
  "@par Thanks: Thanks to Terry Jordan of SAIC at the National Energy\n"
  "Technology Laboratory who developed this class. Please address all\n"
  "comments to Terry Jordan (terry.jordan@sa.netl.doe.gov). GUI Based\n"
  "selection of mesh regions and fields available in the case, minor bug\n"
  "fixes, strict memory allocation checks, minor performance\n"
  "enhancements by Philippose Rajan (sarith@rocketmail.com).\n\n"
  "Token-based FoamFile format lexer/parser,\n"
  "performance/stability/compatibility enhancements, gzipped file\n"
  "support, lagrangian field support, variable timestep support, builtin\n"
  "cell-to-point filter, pointField support, polyhedron decomposition\n"
  "support, OF 1.5 extended format support, multiregion support, old\n"
  "mesh format support, parallelization support for decomposed cases in\n"
  "conjunction with vtkPOpenFOAMReader, et. al. by Takuya Oshima of\n"
  "Niigata University, Japan (oshima@eng.niigata-u.ac.jp).\n\n"
  "Misc cleanup, bugfixes, improvements Mark Olesen (OpenCFD Ltd.)\n\n";


static PyObject *
PyvtkOpenFOAMReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenFOAMReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenFOAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenFOAMReader *tempr = vtkOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenFOAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenFOAMReader::NewInstance());

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
PyvtkOpenFOAMReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkOpenFOAMReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkOpenFOAMReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkOpenFOAMReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLagrangianArrays() :
      op->vtkOpenFOAMReader::GetNumberOfLagrangianArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLagrangianArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLagrangianArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkOpenFOAMReader::SetLagrangianArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLagrangianArrayName(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllLagrangianArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllLagrangianArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllLagrangianArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllLagrangianArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPatchArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPatchArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatchArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPatchArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkOpenFOAMReader::SetPatchArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatchArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPatchArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllPatchArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPatchArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllPatchArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateCellToPoint(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCreateCellToPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateCellToPoint() :
      op->vtkOpenFOAMReader::GetCreateCellToPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellToPointOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CreateCellToPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellToPointOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CreateCellToPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheMesh(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCacheMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMesh() :
      op->vtkOpenFOAMReader::GetCacheMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CacheMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CacheMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecomposePolyhedra(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetDecomposePolyhedra(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDecomposePolyhedra() :
      op->vtkOpenFOAMReader::GetDecomposePolyhedra());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecomposePolyhedraOn();
    }
    else
    {
      op->vtkOpenFOAMReader::DecomposePolyhedraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecomposePolyhedraOff();
    }
    else
    {
      op->vtkOpenFOAMReader::DecomposePolyhedraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionsIsIn13Format(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetPositionsIsIn13Format(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionsIsIn13Format() :
      op->vtkOpenFOAMReader::GetPositionsIsIn13Format());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsIsIn13FormatOn();
    }
    else
    {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsIsIn13FormatOff();
    }
    else
    {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetSkipZeroTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipZeroTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipZeroTime(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetSkipZeroTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetSkipZeroTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipZeroTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSkipZeroTime() :
      op->vtkOpenFOAMReader::GetSkipZeroTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SkipZeroTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipZeroTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipZeroTimeOn();
    }
    else
    {
      op->vtkOpenFOAMReader::SkipZeroTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SkipZeroTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipZeroTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipZeroTimeOff();
    }
    else
    {
      op->vtkOpenFOAMReader::SkipZeroTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetListTimeStepsByControlDict(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetListTimeStepsByControlDict(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetListTimeStepsByControlDict() :
      op->vtkOpenFOAMReader::GetListTimeStepsByControlDict());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ListTimeStepsByControlDictOn();
    }
    else
    {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ListTimeStepsByControlDictOff();
    }
    else
    {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddDimensionsToArrayNames(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetAddDimensionsToArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddDimensionsToArrayNames() :
      op->vtkOpenFOAMReader::GetAddDimensionsToArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDimensionsToArrayNamesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDimensionsToArrayNamesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadZones(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetReadZones(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadZones() :
      op->vtkOpenFOAMReader::GetReadZones());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadZonesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::ReadZonesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadZonesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::ReadZonesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetUse64BitLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse64BitLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse64BitLabels(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetUse64BitLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetUse64BitLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse64BitLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse64BitLabels() :
      op->vtkOpenFOAMReader::GetUse64BitLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitLabelsOn();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitLabelsOff();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCopyDataToCellZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyDataToCellZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyDataToCellZones() :
      op->vtkOpenFOAMReader::GetCopyDataToCellZones());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCopyDataToCellZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyDataToCellZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyDataToCellZones(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCopyDataToCellZones(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CopyDataToCellZonesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDataToCellZonesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyDataToCellZonesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CopyDataToCellZonesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CopyDataToCellZonesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDataToCellZonesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyDataToCellZonesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CopyDataToCellZonesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetUse64BitFloats(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse64BitFloats");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse64BitFloats(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetUse64BitFloats(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetUse64BitFloats(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse64BitFloats");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse64BitFloats() :
      op->vtkOpenFOAMReader::GetUse64BitFloats());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitFloatsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitFloatsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitFloatsOn();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitFloatsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitFloatsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitFloatsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitFloatsOff();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitFloatsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetRefresh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefresh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRefresh();
    }
    else
    {
      op->vtkOpenFOAMReader::SetRefresh();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkOpenFOAMReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenFOAMReader"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeInformationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeInformationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkInformationVector *temp0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->MakeInformationVector(temp0, temp1) :
      op->vtkOpenFOAMReader::MakeInformationVector(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetTimeValue(temp0) :
      op->vtkOpenFOAMReader::SetTimeValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetTimeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTimeValues() :
      op->vtkOpenFOAMReader::GetTimeValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMetaDataAtTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->MakeMetaDataAtTimeStep(temp0) :
      op->vtkOpenFOAMReader::MakeMetaDataAtTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenFOAMReader_Methods[] = {
  {"IsTypeOf", PyvtkOpenFOAMReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenFOAMReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenFOAMReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOpenFOAMReader\nC++: static vtkOpenFOAMReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenFOAMReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOpenFOAMReader\nC++: vtkOpenFOAMReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkOpenFOAMReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *)\n\nDetermine if the file can be read with this reader.\n"},
  {"SetFileName", PyvtkOpenFOAMReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the filename.\n"},
  {"GetFileName", PyvtkOpenFOAMReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the filename.\n"},
  {"GetNumberOfCellArrays", PyvtkOpenFOAMReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays(void)\n\nGet the number of cell arrays available in the input.\n"},
  {"GetCellArrayStatus", PyvtkOpenFOAMReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {"SetCellArrayStatus", PyvtkOpenFOAMReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"GetCellArrayName", PyvtkOpenFOAMReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the cell array with the given index in the input.\n"},
  {"DisableAllCellArrays", PyvtkOpenFOAMReader_DisableAllCellArrays, METH_VARARGS,
   "V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {"EnableAllCellArrays", PyvtkOpenFOAMReader_EnableAllCellArrays, METH_VARARGS,
   "V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {"GetNumberOfPointArrays", PyvtkOpenFOAMReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays(void)\n\nGet the number of point arrays available in the input.\n"},
  {"GetPointArrayStatus", PyvtkOpenFOAMReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point array with the given name is to be\nread.\n"},
  {"SetPointArrayStatus", PyvtkOpenFOAMReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"GetPointArrayName", PyvtkOpenFOAMReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point array with the given index in the\ninput.\n"},
  {"DisableAllPointArrays", PyvtkOpenFOAMReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nTurn on/off all point arrays.\n"},
  {"EnableAllPointArrays", PyvtkOpenFOAMReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\n"},
  {"GetNumberOfLagrangianArrays", PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays, METH_VARARGS,
   "V.GetNumberOfLagrangianArrays() -> int\nC++: int GetNumberOfLagrangianArrays(void)\n\nGet the number of Lagrangian arrays available in the input.\n"},
  {"GetLagrangianArrayStatus", PyvtkOpenFOAMReader_GetLagrangianArrayStatus, METH_VARARGS,
   "V.GetLagrangianArrayStatus(string) -> int\nC++: int GetLagrangianArrayStatus(const char *name)\n\nGet/Set whether the Lagrangian array with the given name is to be\nread.\n"},
  {"SetLagrangianArrayStatus", PyvtkOpenFOAMReader_SetLagrangianArrayStatus, METH_VARARGS,
   "V.SetLagrangianArrayStatus(string, int)\nC++: void SetLagrangianArrayStatus(const char *name, int status)\n\n"},
  {"GetLagrangianArrayName", PyvtkOpenFOAMReader_GetLagrangianArrayName, METH_VARARGS,
   "V.GetLagrangianArrayName(int) -> string\nC++: const char *GetLagrangianArrayName(int index)\n\nGet the name of the Lagrangian array with the given index in the\ninput.\n"},
  {"DisableAllLagrangianArrays", PyvtkOpenFOAMReader_DisableAllLagrangianArrays, METH_VARARGS,
   "V.DisableAllLagrangianArrays()\nC++: void DisableAllLagrangianArrays()\n\nTurn on/off all Lagrangian arrays.\n"},
  {"EnableAllLagrangianArrays", PyvtkOpenFOAMReader_EnableAllLagrangianArrays, METH_VARARGS,
   "V.EnableAllLagrangianArrays()\nC++: void EnableAllLagrangianArrays()\n\n"},
  {"GetNumberOfPatchArrays", PyvtkOpenFOAMReader_GetNumberOfPatchArrays, METH_VARARGS,
   "V.GetNumberOfPatchArrays() -> int\nC++: int GetNumberOfPatchArrays(void)\n\nGet the number of Patches (including Internal Mesh) available in\nthe input.\n"},
  {"GetPatchArrayStatus", PyvtkOpenFOAMReader_GetPatchArrayStatus, METH_VARARGS,
   "V.GetPatchArrayStatus(string) -> int\nC++: int GetPatchArrayStatus(const char *name)\n\nGet/Set whether the Patch with the given name is to be read.\n"},
  {"SetPatchArrayStatus", PyvtkOpenFOAMReader_SetPatchArrayStatus, METH_VARARGS,
   "V.SetPatchArrayStatus(string, int)\nC++: void SetPatchArrayStatus(const char *name, int status)\n\n"},
  {"GetPatchArrayName", PyvtkOpenFOAMReader_GetPatchArrayName, METH_VARARGS,
   "V.GetPatchArrayName(int) -> string\nC++: const char *GetPatchArrayName(int index)\n\nGet the name of the Patch with the given index in the input.\n"},
  {"DisableAllPatchArrays", PyvtkOpenFOAMReader_DisableAllPatchArrays, METH_VARARGS,
   "V.DisableAllPatchArrays()\nC++: void DisableAllPatchArrays()\n\nTurn on/off all Patches including the Internal Mesh.\n"},
  {"EnableAllPatchArrays", PyvtkOpenFOAMReader_EnableAllPatchArrays, METH_VARARGS,
   "V.EnableAllPatchArrays()\nC++: void EnableAllPatchArrays()\n\n"},
  {"SetCreateCellToPoint", PyvtkOpenFOAMReader_SetCreateCellToPoint, METH_VARARGS,
   "V.SetCreateCellToPoint(int)\nC++: virtual void SetCreateCellToPoint(vtkTypeBool _arg)\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {"GetCreateCellToPoint", PyvtkOpenFOAMReader_GetCreateCellToPoint, METH_VARARGS,
   "V.GetCreateCellToPoint() -> int\nC++: virtual vtkTypeBool GetCreateCellToPoint()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {"CreateCellToPointOn", PyvtkOpenFOAMReader_CreateCellToPointOn, METH_VARARGS,
   "V.CreateCellToPointOn()\nC++: virtual void CreateCellToPointOn()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {"CreateCellToPointOff", PyvtkOpenFOAMReader_CreateCellToPointOff, METH_VARARGS,
   "V.CreateCellToPointOff()\nC++: virtual void CreateCellToPointOff()\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {"SetCacheMesh", PyvtkOpenFOAMReader_SetCacheMesh, METH_VARARGS,
   "V.SetCacheMesh(int)\nC++: virtual void SetCacheMesh(vtkTypeBool _arg)\n\nSet/Get whether mesh is to be cached.\n"},
  {"GetCacheMesh", PyvtkOpenFOAMReader_GetCacheMesh, METH_VARARGS,
   "V.GetCacheMesh() -> int\nC++: virtual vtkTypeBool GetCacheMesh()\n\nSet/Get whether mesh is to be cached.\n"},
  {"CacheMeshOn", PyvtkOpenFOAMReader_CacheMeshOn, METH_VARARGS,
   "V.CacheMeshOn()\nC++: virtual void CacheMeshOn()\n\nSet/Get whether mesh is to be cached.\n"},
  {"CacheMeshOff", PyvtkOpenFOAMReader_CacheMeshOff, METH_VARARGS,
   "V.CacheMeshOff()\nC++: virtual void CacheMeshOff()\n\nSet/Get whether mesh is to be cached.\n"},
  {"SetDecomposePolyhedra", PyvtkOpenFOAMReader_SetDecomposePolyhedra, METH_VARARGS,
   "V.SetDecomposePolyhedra(int)\nC++: virtual void SetDecomposePolyhedra(vtkTypeBool _arg)\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {"GetDecomposePolyhedra", PyvtkOpenFOAMReader_GetDecomposePolyhedra, METH_VARARGS,
   "V.GetDecomposePolyhedra() -> int\nC++: virtual vtkTypeBool GetDecomposePolyhedra()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {"DecomposePolyhedraOn", PyvtkOpenFOAMReader_DecomposePolyhedraOn, METH_VARARGS,
   "V.DecomposePolyhedraOn()\nC++: virtual void DecomposePolyhedraOn()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {"DecomposePolyhedraOff", PyvtkOpenFOAMReader_DecomposePolyhedraOff, METH_VARARGS,
   "V.DecomposePolyhedraOff()\nC++: virtual void DecomposePolyhedraOff()\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {"SetPositionsIsIn13Format", PyvtkOpenFOAMReader_SetPositionsIsIn13Format, METH_VARARGS,
   "V.SetPositionsIsIn13Format(int)\nC++: virtual void SetPositionsIsIn13Format(vtkTypeBool _arg)\n\nSet/Get whether the lagrangian/positions have additional data or\nnot. For historical reasons, PositionsIsIn13Format is used to\ndenote that the positions only have x,y,z value and the cell of\nthe enclosing cell. In OpenFOAM 1.4-2.4, positions included facei\nand stepFraction information.\n"},
  {"GetPositionsIsIn13Format", PyvtkOpenFOAMReader_GetPositionsIsIn13Format, METH_VARARGS,
   "V.GetPositionsIsIn13Format() -> int\nC++: virtual vtkTypeBool GetPositionsIsIn13Format()\n\nSet/Get whether the lagrangian/positions have additional data or\nnot. For historical reasons, PositionsIsIn13Format is used to\ndenote that the positions only have x,y,z value and the cell of\nthe enclosing cell. In OpenFOAM 1.4-2.4, positions included facei\nand stepFraction information.\n"},
  {"PositionsIsIn13FormatOn", PyvtkOpenFOAMReader_PositionsIsIn13FormatOn, METH_VARARGS,
   "V.PositionsIsIn13FormatOn()\nC++: virtual void PositionsIsIn13FormatOn()\n\nSet/Get whether the lagrangian/positions have additional data or\nnot. For historical reasons, PositionsIsIn13Format is used to\ndenote that the positions only have x,y,z value and the cell of\nthe enclosing cell. In OpenFOAM 1.4-2.4, positions included facei\nand stepFraction information.\n"},
  {"PositionsIsIn13FormatOff", PyvtkOpenFOAMReader_PositionsIsIn13FormatOff, METH_VARARGS,
   "V.PositionsIsIn13FormatOff()\nC++: virtual void PositionsIsIn13FormatOff()\n\nSet/Get whether the lagrangian/positions have additional data or\nnot. For historical reasons, PositionsIsIn13Format is used to\ndenote that the positions only have x,y,z value and the cell of\nthe enclosing cell. In OpenFOAM 1.4-2.4, positions included facei\nand stepFraction information.\n"},
  {"SetSkipZeroTime", PyvtkOpenFOAMReader_SetSkipZeroTime, METH_VARARGS,
   "V.SetSkipZeroTime(bool)\nC++: virtual void SetSkipZeroTime(bool _arg)\n\nIgnore 0/ time directory, which is normally missing Lagrangian\nfields and may have many dictionary functionality that we cannot\neasily handle.\n"},
  {"GetSkipZeroTime", PyvtkOpenFOAMReader_GetSkipZeroTime, METH_VARARGS,
   "V.GetSkipZeroTime() -> bool\nC++: virtual bool GetSkipZeroTime()\n\nIgnore 0/ time directory, which is normally missing Lagrangian\nfields and may have many dictionary functionality that we cannot\neasily handle.\n"},
  {"SkipZeroTimeOn", PyvtkOpenFOAMReader_SkipZeroTimeOn, METH_VARARGS,
   "V.SkipZeroTimeOn()\nC++: virtual void SkipZeroTimeOn()\n\nIgnore 0/ time directory, which is normally missing Lagrangian\nfields and may have many dictionary functionality that we cannot\neasily handle.\n"},
  {"SkipZeroTimeOff", PyvtkOpenFOAMReader_SkipZeroTimeOff, METH_VARARGS,
   "V.SkipZeroTimeOff()\nC++: virtual void SkipZeroTimeOff()\n\nIgnore 0/ time directory, which is normally missing Lagrangian\nfields and may have many dictionary functionality that we cannot\neasily handle.\n"},
  {"SetListTimeStepsByControlDict", PyvtkOpenFOAMReader_SetListTimeStepsByControlDict, METH_VARARGS,
   "V.SetListTimeStepsByControlDict(int)\nC++: virtual void SetListTimeStepsByControlDict(vtkTypeBool _arg)\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {"GetListTimeStepsByControlDict", PyvtkOpenFOAMReader_GetListTimeStepsByControlDict, METH_VARARGS,
   "V.GetListTimeStepsByControlDict() -> int\nC++: virtual vtkTypeBool GetListTimeStepsByControlDict()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {"ListTimeStepsByControlDictOn", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn, METH_VARARGS,
   "V.ListTimeStepsByControlDictOn()\nC++: virtual void ListTimeStepsByControlDictOn()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {"ListTimeStepsByControlDictOff", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff, METH_VARARGS,
   "V.ListTimeStepsByControlDictOff()\nC++: virtual void ListTimeStepsByControlDictOff()\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {"SetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames, METH_VARARGS,
   "V.SetAddDimensionsToArrayNames(int)\nC++: virtual void SetAddDimensionsToArrayNames(vtkTypeBool _arg)\n\nAdd dimensions to array names\n"},
  {"GetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames, METH_VARARGS,
   "V.GetAddDimensionsToArrayNames() -> int\nC++: virtual vtkTypeBool GetAddDimensionsToArrayNames()\n\nAdd dimensions to array names\n"},
  {"AddDimensionsToArrayNamesOn", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn, METH_VARARGS,
   "V.AddDimensionsToArrayNamesOn()\nC++: virtual void AddDimensionsToArrayNamesOn()\n\nAdd dimensions to array names\n"},
  {"AddDimensionsToArrayNamesOff", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff, METH_VARARGS,
   "V.AddDimensionsToArrayNamesOff()\nC++: virtual void AddDimensionsToArrayNamesOff()\n\nAdd dimensions to array names\n"},
  {"SetReadZones", PyvtkOpenFOAMReader_SetReadZones, METH_VARARGS,
   "V.SetReadZones(int)\nC++: virtual void SetReadZones(vtkTypeBool _arg)\n\nSet/Get whether zones will be read.\n"},
  {"GetReadZones", PyvtkOpenFOAMReader_GetReadZones, METH_VARARGS,
   "V.GetReadZones() -> int\nC++: virtual vtkTypeBool GetReadZones()\n\nSet/Get whether zones will be read.\n"},
  {"ReadZonesOn", PyvtkOpenFOAMReader_ReadZonesOn, METH_VARARGS,
   "V.ReadZonesOn()\nC++: virtual void ReadZonesOn()\n\nSet/Get whether zones will be read.\n"},
  {"ReadZonesOff", PyvtkOpenFOAMReader_ReadZonesOff, METH_VARARGS,
   "V.ReadZonesOff()\nC++: virtual void ReadZonesOff()\n\nSet/Get whether zones will be read.\n"},
  {"SetUse64BitLabels", PyvtkOpenFOAMReader_SetUse64BitLabels, METH_VARARGS,
   "V.SetUse64BitLabels(bool)\nC++: virtual void SetUse64BitLabels(bool val)\n\nIf true, labels are expected to be 64-bit, rather than 32.\n"},
  {"GetUse64BitLabels", PyvtkOpenFOAMReader_GetUse64BitLabels, METH_VARARGS,
   "V.GetUse64BitLabels() -> bool\nC++: virtual bool GetUse64BitLabels()\n\nIf true, labels are expected to be 64-bit, rather than 32.\n"},
  {"Use64BitLabelsOn", PyvtkOpenFOAMReader_Use64BitLabelsOn, METH_VARARGS,
   "V.Use64BitLabelsOn()\nC++: virtual void Use64BitLabelsOn()\n\nIf true, labels are expected to be 64-bit, rather than 32.\n"},
  {"Use64BitLabelsOff", PyvtkOpenFOAMReader_Use64BitLabelsOff, METH_VARARGS,
   "V.Use64BitLabelsOff()\nC++: virtual void Use64BitLabelsOff()\n\nIf true, labels are expected to be 64-bit, rather than 32.\n"},
  {"GetCopyDataToCellZones", PyvtkOpenFOAMReader_GetCopyDataToCellZones, METH_VARARGS,
   "V.GetCopyDataToCellZones() -> bool\nC++: virtual bool GetCopyDataToCellZones()\n\nIf true, data of the internal mesh are copied to the cell zones.\nDefault is false.\n"},
  {"SetCopyDataToCellZones", PyvtkOpenFOAMReader_SetCopyDataToCellZones, METH_VARARGS,
   "V.SetCopyDataToCellZones(bool)\nC++: virtual void SetCopyDataToCellZones(bool _arg)\n\nIf true, data of the internal mesh are copied to the cell zones.\nDefault is false.\n"},
  {"CopyDataToCellZonesOn", PyvtkOpenFOAMReader_CopyDataToCellZonesOn, METH_VARARGS,
   "V.CopyDataToCellZonesOn()\nC++: virtual void CopyDataToCellZonesOn()\n\nIf true, data of the internal mesh are copied to the cell zones.\nDefault is false.\n"},
  {"CopyDataToCellZonesOff", PyvtkOpenFOAMReader_CopyDataToCellZonesOff, METH_VARARGS,
   "V.CopyDataToCellZonesOff()\nC++: virtual void CopyDataToCellZonesOff()\n\nIf true, data of the internal mesh are copied to the cell zones.\nDefault is false.\n"},
  {"SetUse64BitFloats", PyvtkOpenFOAMReader_SetUse64BitFloats, METH_VARARGS,
   "V.SetUse64BitFloats(bool)\nC++: virtual void SetUse64BitFloats(bool val)\n\nIf true, floats are expected to be 64-bit, rather than 32. Note\nthat vtkFloatArrays may still be used in the output if this is\ntrue. This flag is only used to ensure that binary data is\ncorrectly parsed.\n"},
  {"GetUse64BitFloats", PyvtkOpenFOAMReader_GetUse64BitFloats, METH_VARARGS,
   "V.GetUse64BitFloats() -> bool\nC++: virtual bool GetUse64BitFloats()\n\nIf true, floats are expected to be 64-bit, rather than 32. Note\nthat vtkFloatArrays may still be used in the output if this is\ntrue. This flag is only used to ensure that binary data is\ncorrectly parsed.\n"},
  {"Use64BitFloatsOn", PyvtkOpenFOAMReader_Use64BitFloatsOn, METH_VARARGS,
   "V.Use64BitFloatsOn()\nC++: virtual void Use64BitFloatsOn()\n\nIf true, floats are expected to be 64-bit, rather than 32. Note\nthat vtkFloatArrays may still be used in the output if this is\ntrue. This flag is only used to ensure that binary data is\ncorrectly parsed.\n"},
  {"Use64BitFloatsOff", PyvtkOpenFOAMReader_Use64BitFloatsOff, METH_VARARGS,
   "V.Use64BitFloatsOff()\nC++: virtual void Use64BitFloatsOff()\n\nIf true, floats are expected to be 64-bit, rather than 32. Note\nthat vtkFloatArrays may still be used in the output if this is\ntrue. This flag is only used to ensure that binary data is\ncorrectly parsed.\n"},
  {"SetRefresh", PyvtkOpenFOAMReader_SetRefresh, METH_VARARGS,
   "V.SetRefresh()\nC++: void SetRefresh()\n\n"},
  {"SetParent", PyvtkOpenFOAMReader_SetParent, METH_VARARGS,
   "V.SetParent(vtkOpenFOAMReader)\nC++: void SetParent(vtkOpenFOAMReader *parent)\n\n"},
  {"MakeInformationVector", PyvtkOpenFOAMReader_MakeInformationVector, METH_VARARGS,
   "V.MakeInformationVector(vtkInformationVector, string) -> int\nC++: int MakeInformationVector(vtkInformationVector *,\n    const vtkStdString &)\n\n"},
  {"SetTimeValue", PyvtkOpenFOAMReader_SetTimeValue, METH_VARARGS,
   "V.SetTimeValue(float) -> bool\nC++: bool SetTimeValue(const double)\n\n"},
  {"GetTimeValues", PyvtkOpenFOAMReader_GetTimeValues, METH_VARARGS,
   "V.GetTimeValues() -> vtkDoubleArray\nC++: vtkDoubleArray *GetTimeValues()\n\n"},
  {"MakeMetaDataAtTimeStep", PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep, METH_VARARGS,
   "V.MakeMetaDataAtTimeStep(bool) -> int\nC++: int MakeMetaDataAtTimeStep(const bool)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOpenFOAMReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOGeometryPython.vtkOpenFOAMReader", // tp_name
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
  PyvtkOpenFOAMReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenFOAMReader_StaticNew()
{
  return vtkOpenFOAMReader::New();
}

PyObject *PyvtkOpenFOAMReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOpenFOAMReader_Type, PyvtkOpenFOAMReader_Methods,
    "vtkOpenFOAMReader",
 &PyvtkOpenFOAMReader_StaticNew);

  PyTypeObject *pytype = &PyvtkOpenFOAMReader_Type;

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

void PyVTKAddFile_vtkOpenFOAMReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenFOAMReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenFOAMReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

