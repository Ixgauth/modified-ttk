// python wrapper for vtkMPASReader
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
#include "vtkMPASReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMPASReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMPASReader_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkMPASReader_Doc =
  "vtkMPASReader - Read an MPAS netCDF file\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "This program reads an MPAS netCDF data file to allow paraview to\n"
  "display a dual-grid sphere or latlon projection.  Also allows display\n"
  "of primal-grid sphere. The variables that have time dim are available\n"
  "to ParaView.\n\n"
  "Assume all variables are of interest if they have dims (Time,\n"
  "nCells|nVertices, nVertLevels, [nTracers]). Does not deal with edge\n"
  "data.\n\n"
  "When using this reader, it is important that you remember to do the\n"
  "following:\n"
  "1.  When changing a selected variable, remember to select it also in\n"
  "   the drop down box to \"color by\".  It doesn't color by that\n"
  "   variable automatically.\n"
  "2.  When selecting multilayer sphere view, make layer thickness\n"
  "   around 100,000.\n"
  "3.  When selecting multilayer lat/lon view, make layer thickness\n"
  "   around 10.\n"
  "4.  Always click the -Z orientation after making a switch from\n"
  "   lat/lon to sphere, from single to multilayer or changing\n"
  "   thickness.\n"
  "5.  Be conservative on the number of changes you make before hitting\n"
  "   Apply, since there may be bugs in this reader.  Just make one\n"
  "   change and then hit Apply.\n\n"
  "Christine Ahrens (cahrens@lanl.gov) Version 1.3\n\n";


static PyObject *
PyvtkMPASReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPASReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMPASReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMPASReader *tempr = vtkMPASReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMPASReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMPASReader::NewInstance());

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
PyvtkMPASReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

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
      op->vtkMPASReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMPASReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetMaximumCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCells() :
      op->vtkMPASReader::GetMaximumCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetMaximumPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumPoints() :
      op->vtkMPASReader::GetMaximumPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfCellVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellVars() :
      op->vtkMPASReader::GetNumberOfCellVars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfPointVars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointVars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointVars() :
      op->vtkMPASReader::GetNumberOfPointVars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkMPASReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkMPASReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMPASReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMPASReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkMPASReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}



static PyObject *
PyvtkMPASReader_SetUseDimensionedArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDimensionedArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDimensionedArrayNames(temp0);
    }
    else
    {
      op->vtkMPASReader::SetUseDimensionedArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetUseDimensionedArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDimensionedArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDimensionedArrayNames() :
      op->vtkMPASReader::GetUseDimensionedArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_UseDimensionedArrayNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDimensionedArrayNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDimensionedArrayNamesOn();
    }
    else
    {
      op->vtkMPASReader::UseDimensionedArrayNamesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_UseDimensionedArrayNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDimensionedArrayNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDimensionedArrayNamesOff();
    }
    else
    {
      op->vtkMPASReader::UseDimensionedArrayNamesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkMPASReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkMPASReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkMPASReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

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
      op->vtkMPASReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkMPASReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkMPASReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkMPASReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkMPASReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkMPASReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

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
      op->vtkMPASReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkMPASReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkMPASReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetNumberOfDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDimensions() :
      op->vtkMPASReader::GetNumberOfDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetDimensionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDimensionName(temp0) :
      op->vtkMPASReader::GetDimensionName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetAllDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetAllDimensions() :
      op->vtkMPASReader::GetAllDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetDimensionCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionCurrentIndex(temp0) :
      op->vtkMPASReader::GetDimensionCurrentIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetDimensionCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDimensionCurrentIndex(temp0, temp1);
    }
    else
    {
      op->vtkMPASReader::SetDimensionCurrentIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetDimensionSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionSize(temp0) :
      op->vtkMPASReader::GetDimensionSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetVerticalDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalDimension(temp0);
    }
    else
    {
      op->vtkMPASReader::SetVerticalDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetVerticalDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetVerticalDimension() :
      op->vtkMPASReader::GetVerticalDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetVerticalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalLevel(temp0);
    }
    else
    {
      op->vtkMPASReader::SetVerticalLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetVerticalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalLevel() :
      op->vtkMPASReader::GetVerticalLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetVerticalLevelRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalLevelRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVerticalLevelRange() :
      op->vtkMPASReader::GetVerticalLevelRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayerThickness(temp0);
    }
    else
    {
      op->vtkMPASReader::SetLayerThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayerThickness() :
      op->vtkMPASReader::GetLayerThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetLayerThicknessRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThicknessRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLayerThicknessRange() :
      op->vtkMPASReader::GetLayerThicknessRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetCenterLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterLon(temp0);
    }
    else
    {
      op->vtkMPASReader::SetCenterLon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetCenterLonRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterLonRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCenterLonRange() :
      op->vtkMPASReader::GetCenterLonRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectLatLon(temp0);
    }
    else
    {
      op->vtkMPASReader::SetProjectLatLon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetProjectLatLon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectLatLon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProjectLatLon() :
      op->vtkMPASReader::GetProjectLatLon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsAtmosphere(temp0);
    }
    else
    {
      op->vtkMPASReader::SetIsAtmosphere(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsAtmosphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsAtmosphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsAtmosphere() :
      op->vtkMPASReader::GetIsAtmosphere());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsZeroCentered(temp0);
    }
    else
    {
      op->vtkMPASReader::SetIsZeroCentered(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetIsZeroCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsZeroCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsZeroCentered() :
      op->vtkMPASReader::GetIsZeroCentered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_SetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowMultilayerView(temp0);
    }
    else
    {
      op->vtkMPASReader::SetShowMultilayerView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetShowMultilayerView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowMultilayerView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowMultilayerView() :
      op->vtkMPASReader::GetShowMultilayerView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMPASReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMPASReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMPASReader *op = static_cast<vtkMPASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMPASReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMPASReader_Methods[] = {
  {"IsTypeOf", PyvtkMPASReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMPASReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMPASReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMPASReader\nC++: static vtkMPASReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMPASReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMPASReader\nC++: vtkMPASReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkMPASReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of MPAS data file to read.\n"},
  {"GetFileName", PyvtkMPASReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of MPAS data file to read.\n"},
  {"GetMaximumCells", PyvtkMPASReader_GetMaximumCells, METH_VARARGS,
   "V.GetMaximumCells() -> int\nC++: virtual int GetMaximumCells()\n\nGet the number of data cells\n"},
  {"GetMaximumPoints", PyvtkMPASReader_GetMaximumPoints, METH_VARARGS,
   "V.GetMaximumPoints() -> int\nC++: virtual int GetMaximumPoints()\n\nGet the number of points\n"},
  {"GetNumberOfCellVars", PyvtkMPASReader_GetNumberOfCellVars, METH_VARARGS,
   "V.GetNumberOfCellVars() -> int\nC++: virtual int GetNumberOfCellVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {"GetNumberOfPointVars", PyvtkMPASReader_GetNumberOfPointVars, METH_VARARGS,
   "V.GetNumberOfPointVars() -> int\nC++: virtual int GetNumberOfPointVars()\n\nGet the number of data variables at the cell centers and points\n"},
  {"GetOutput", PyvtkMPASReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int index)\n\nGet the reader's output\n"},
  {"SetUseDimensionedArrayNames", PyvtkMPASReader_SetUseDimensionedArrayNames, METH_VARARGS,
   "V.SetUseDimensionedArrayNames(bool)\nC++: virtual void SetUseDimensionedArrayNames(bool _arg)\n\nIf true, dimension info is included in the array name. For\ninstance, \"tracers\" will become \"tracers(Time, nCells, nVertLevels,\nnTracers)\". This is useful for user-visible array selection, but\nis disabled by default for backwards compatibility.\n"},
  {"GetUseDimensionedArrayNames", PyvtkMPASReader_GetUseDimensionedArrayNames, METH_VARARGS,
   "V.GetUseDimensionedArrayNames() -> bool\nC++: virtual bool GetUseDimensionedArrayNames()\n\nIf true, dimension info is included in the array name. For\ninstance, \"tracers\" will become \"tracers(Time, nCells, nVertLevels,\nnTracers)\". This is useful for user-visible array selection, but\nis disabled by default for backwards compatibility.\n"},
  {"UseDimensionedArrayNamesOn", PyvtkMPASReader_UseDimensionedArrayNamesOn, METH_VARARGS,
   "V.UseDimensionedArrayNamesOn()\nC++: virtual void UseDimensionedArrayNamesOn()\n\nIf true, dimension info is included in the array name. For\ninstance, \"tracers\" will become \"tracers(Time, nCells, nVertLevels,\nnTracers)\". This is useful for user-visible array selection, but\nis disabled by default for backwards compatibility.\n"},
  {"UseDimensionedArrayNamesOff", PyvtkMPASReader_UseDimensionedArrayNamesOff, METH_VARARGS,
   "V.UseDimensionedArrayNamesOff()\nC++: virtual void UseDimensionedArrayNamesOff()\n\nIf true, dimension info is included in the array name. For\ninstance, \"tracers\" will become \"tracers(Time, nCells, nVertLevels,\nnTracers)\". This is useful for user-visible array selection, but\nis disabled by default for backwards compatibility.\n"},
  {"GetNumberOfPointArrays", PyvtkMPASReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayName", PyvtkMPASReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetPointArrayStatus", PyvtkMPASReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"SetPointArrayStatus", PyvtkMPASReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"DisableAllPointArrays", PyvtkMPASReader_DisableAllPointArrays, METH_VARARGS,
   "V.DisableAllPointArrays()\nC++: void DisableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"EnableAllPointArrays", PyvtkMPASReader_EnableAllPointArrays, METH_VARARGS,
   "V.EnableAllPointArrays()\nC++: void EnableAllPointArrays()\n\nThe following methods allow selective reading of solutions\nfields. By default, ALL data fields on the nodes are read, but\nthis can be modified.\n"},
  {"GetNumberOfCellArrays", PyvtkMPASReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {"GetCellArrayName", PyvtkMPASReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\n"},
  {"GetCellArrayStatus", PyvtkMPASReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {"SetCellArrayStatus", PyvtkMPASReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllCellArrays", PyvtkMPASReader_DisableAllCellArrays, METH_VARARGS,
   "V.DisableAllCellArrays()\nC++: void DisableAllCellArrays()\n\n"},
  {"EnableAllCellArrays", PyvtkMPASReader_EnableAllCellArrays, METH_VARARGS,
   "V.EnableAllCellArrays()\nC++: void EnableAllCellArrays()\n\n"},
  {"GetNumberOfDimensions", PyvtkMPASReader_GetNumberOfDimensions, METH_VARARGS,
   "V.GetNumberOfDimensions() -> int\nC++: int GetNumberOfDimensions()\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"GetDimensionName", PyvtkMPASReader_GetDimensionName, METH_VARARGS,
   "V.GetDimensionName(int) -> string\nC++: std::string GetDimensionName(int idx)\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"GetAllDimensions", PyvtkMPASReader_GetAllDimensions, METH_VARARGS,
   "V.GetAllDimensions() -> vtkStringArray\nC++: vtkStringArray *GetAllDimensions()\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"GetDimensionCurrentIndex", PyvtkMPASReader_GetDimensionCurrentIndex, METH_VARARGS,
   "V.GetDimensionCurrentIndex(string) -> int\nC++: int GetDimensionCurrentIndex(const std::string &dim)\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"SetDimensionCurrentIndex", PyvtkMPASReader_SetDimensionCurrentIndex, METH_VARARGS,
   "V.SetDimensionCurrentIndex(string, int)\nC++: void SetDimensionCurrentIndex(const std::string &dim,\n    int idx)\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"GetDimensionSize", PyvtkMPASReader_GetDimensionSize, METH_VARARGS,
   "V.GetDimensionSize(string) -> int\nC++: int GetDimensionSize(const std::string &dim)\n\nIf the point/cell arrays contain dimensions other than Time,\nnCells, or nVertices, they are configured here. Use\nGetNumberOfDimensions to get the number of arbitrary dimensions\nin the loaded arrays and GetDimensionName to retrieve the\ndimension names. GetDimensionSize returns the number of values in\nthe dimensions, and Set/GetDimensionCurrentIndex controls the\nvalue to fix a given dimension at when extracting slices of data.\n"},
  {"SetVerticalDimension", PyvtkMPASReader_SetVerticalDimension, METH_VARARGS,
   "V.SetVerticalDimension(string)\nC++: virtual void SetVerticalDimension(std::string _arg)\n\nGet/Set the name to the dimension that identifies the vertical\ndimension. Defaults to \"nVertLevels\".\n"},
  {"GetVerticalDimension", PyvtkMPASReader_GetVerticalDimension, METH_VARARGS,
   "V.GetVerticalDimension() -> string\nC++: virtual std::string GetVerticalDimension()\n\nGet/Set the name to the dimension that identifies the vertical\ndimension. Defaults to \"nVertLevels\".\n"},
  {"SetVerticalLevel", PyvtkMPASReader_SetVerticalLevel, METH_VARARGS,
   "V.SetVerticalLevel(int)\nC++: void SetVerticalLevel(int level)\n\nConvenience function for setting/querying\n[GS]etDimensionCurrentIndex for the dimension returned by\nGetVerticalDimension.\n"},
  {"GetVerticalLevel", PyvtkMPASReader_GetVerticalLevel, METH_VARARGS,
   "V.GetVerticalLevel() -> int\nC++: int GetVerticalLevel()\n\nConvenience function for setting/querying\n[GS]etDimensionCurrentIndex for the dimension returned by\nGetVerticalDimension.\n"},
  {"GetVerticalLevelRange", PyvtkMPASReader_GetVerticalLevelRange, METH_VARARGS,
   "V.GetVerticalLevelRange() -> (int, int)\nC++: int *GetVerticalLevelRange()\n\n"},
  {"SetLayerThickness", PyvtkMPASReader_SetLayerThickness, METH_VARARGS,
   "V.SetLayerThickness(int)\nC++: virtual void SetLayerThickness(int _arg)\n\n"},
  {"GetLayerThickness", PyvtkMPASReader_GetLayerThickness, METH_VARARGS,
   "V.GetLayerThickness() -> int\nC++: virtual int GetLayerThickness()\n\n"},
  {"GetLayerThicknessRange", PyvtkMPASReader_GetLayerThicknessRange, METH_VARARGS,
   "V.GetLayerThicknessRange() -> (int, int)\nC++: int *GetLayerThicknessRange()\n\n"},
  {"SetCenterLon", PyvtkMPASReader_SetCenterLon, METH_VARARGS,
   "V.SetCenterLon(int)\nC++: void SetCenterLon(int val)\n\n"},
  {"GetCenterLonRange", PyvtkMPASReader_GetCenterLonRange, METH_VARARGS,
   "V.GetCenterLonRange() -> (int, int)\nC++: int *GetCenterLonRange()\n\n"},
  {"SetProjectLatLon", PyvtkMPASReader_SetProjectLatLon, METH_VARARGS,
   "V.SetProjectLatLon(bool)\nC++: virtual void SetProjectLatLon(bool _arg)\n\n"},
  {"GetProjectLatLon", PyvtkMPASReader_GetProjectLatLon, METH_VARARGS,
   "V.GetProjectLatLon() -> bool\nC++: virtual bool GetProjectLatLon()\n\n"},
  {"SetIsAtmosphere", PyvtkMPASReader_SetIsAtmosphere, METH_VARARGS,
   "V.SetIsAtmosphere(bool)\nC++: virtual void SetIsAtmosphere(bool _arg)\n\n"},
  {"GetIsAtmosphere", PyvtkMPASReader_GetIsAtmosphere, METH_VARARGS,
   "V.GetIsAtmosphere() -> bool\nC++: virtual bool GetIsAtmosphere()\n\n"},
  {"SetIsZeroCentered", PyvtkMPASReader_SetIsZeroCentered, METH_VARARGS,
   "V.SetIsZeroCentered(bool)\nC++: virtual void SetIsZeroCentered(bool _arg)\n\n"},
  {"GetIsZeroCentered", PyvtkMPASReader_GetIsZeroCentered, METH_VARARGS,
   "V.GetIsZeroCentered() -> bool\nC++: virtual bool GetIsZeroCentered()\n\n"},
  {"SetShowMultilayerView", PyvtkMPASReader_SetShowMultilayerView, METH_VARARGS,
   "V.SetShowMultilayerView(bool)\nC++: virtual void SetShowMultilayerView(bool _arg)\n\n"},
  {"GetShowMultilayerView", PyvtkMPASReader_GetShowMultilayerView, METH_VARARGS,
   "V.GetShowMultilayerView() -> bool\nC++: virtual bool GetShowMultilayerView()\n\n"},
  {"CanReadFile", PyvtkMPASReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read.\n"},
  {"GetMTime", PyvtkMPASReader_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMPASReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIONetCDFPython.vtkMPASReader", // tp_name
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
  PyvtkMPASReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMPASReader_StaticNew()
{
  return vtkMPASReader::New();
}

PyObject *PyvtkMPASReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMPASReader_Type, PyvtkMPASReader_Methods,
    "vtkMPASReader",
 &PyvtkMPASReader_StaticNew);

  PyTypeObject *pytype = &PyvtkMPASReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMPASReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMPASReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMPASReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

