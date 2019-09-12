// python wrapper for vtkH5PartReader
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
#include "vtkH5PartReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkH5PartReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkH5PartReader_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkH5PartReader_Doc =
  "vtkH5PartReader - Read H5Part particle files\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkH5PartReader reads compatible with H5Part : documented here\n"
  "http://amas.web.psi.ch/docs/H5Part-doc/h5part.html\n\n"
  "ote Thanks to John Bidiscombe of CSCS - Swiss National Supercomputing\n"
  "Centre for creating and contributing the original implementation of\n"
  "this class.\n\n";


static PyObject *
PyvtkH5PartReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkH5PartReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkH5PartReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkH5PartReader *tempr = vtkH5PartReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkH5PartReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkH5PartReader::NewInstance());

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
PyvtkH5PartReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetFileName(temp0);
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
PyvtkH5PartReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkH5PartReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetXarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXarray() :
      op->vtkH5PartReader::GetXarray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetXarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXarray(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetXarray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetYarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYarray() :
      op->vtkH5PartReader::GetYarray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetYarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYarray(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetYarray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetZarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZarray() :
      op->vtkH5PartReader::GetZarray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetZarray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZarray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZarray(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetZarray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetGenerateVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertexCells(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetGenerateVertexCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetGenerateVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertexCells() :
      op->vtkH5PartReader::GetGenerateVertexCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GenerateVertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexCellsOn();
    }
    else
    {
      op->vtkH5PartReader::GenerateVertexCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GenerateVertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexCellsOff();
    }
    else
    {
      op->vtkH5PartReader::GenerateVertexCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetCombineVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCombineVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCombineVectorComponents(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetCombineVectorComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetCombineVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCombineVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCombineVectorComponents() :
      op->vtkH5PartReader::GetCombineVectorComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_CombineVectorComponentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CombineVectorComponentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CombineVectorComponentsOn();
    }
    else
    {
      op->vtkH5PartReader::CombineVectorComponentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_CombineVectorComponentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CombineVectorComponentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CombineVectorComponentsOff();
    }
    else
    {
      op->vtkH5PartReader::CombineVectorComponentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetMaskOutOfTimeRangeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskOutOfTimeRangeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskOutOfTimeRangeOutput(temp0);
    }
    else
    {
      op->vtkH5PartReader::SetMaskOutOfTimeRangeOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetMaskOutOfTimeRangeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskOutOfTimeRangeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskOutOfTimeRangeOutput() :
      op->vtkH5PartReader::GetMaskOutOfTimeRangeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_MaskOutOfTimeRangeOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOutOfTimeRangeOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOutOfTimeRangeOutputOn();
    }
    else
    {
      op->vtkH5PartReader::MaskOutOfTimeRangeOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_MaskOutOfTimeRangeOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOutOfTimeRangeOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOutOfTimeRangeOutputOff();
    }
    else
    {
      op->vtkH5PartReader::MaskOutOfTimeRangeOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkH5PartReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkH5PartReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkH5PartReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

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
      op->vtkH5PartReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_DisableAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAll();
    }
    else
    {
      op->vtkH5PartReader::DisableAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_EnableAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAll();
    }
    else
    {
      op->vtkH5PartReader::EnableAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Disable(temp0);
    }
    else
    {
      op->vtkH5PartReader::Disable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Enable(temp0);
    }
    else
    {
      op->vtkH5PartReader::Enable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetNumberOfPointArrayStatusArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrayStatusArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrayStatusArrays() :
      op->vtkH5PartReader::GetNumberOfPointArrayStatusArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetPointArrayStatusArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatusArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayStatusArrayName(temp0) :
      op->vtkH5PartReader::GetPointArrayStatusArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetPointArrayStatusArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatusArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatusArrayStatus(temp0) :
      op->vtkH5PartReader::GetPointArrayStatusArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetPointArrayStatusArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatusArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatusArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkH5PartReader::SetPointArrayStatusArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetNumberOfCoordinateArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCoordinateArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCoordinateArrays() :
      op->vtkH5PartReader::GetNumberOfCoordinateArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetCoordinateArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCoordinateArrayName(temp0) :
      op->vtkH5PartReader::GetCoordinateArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_GetCoordinateArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateArrayStatus(temp0) :
      op->vtkH5PartReader::GetCoordinateArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkH5PartReader_SetCoordinateArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkH5PartReader *op = static_cast<vtkH5PartReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkH5PartReader::SetCoordinateArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkH5PartReader_Methods[] = {
  {"IsTypeOf", PyvtkH5PartReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkH5PartReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkH5PartReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkH5PartReader\nC++: static vtkH5PartReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkH5PartReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkH5PartReader\nC++: vtkH5PartReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkH5PartReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(char *filename)\n\nSpecify file name.\n"},
  {"GetFileName", PyvtkH5PartReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name.\n"},
  {"GetXarray", PyvtkH5PartReader_GetXarray, METH_VARARGS,
   "V.GetXarray() -> string\nC++: virtual char *GetXarray()\n\nSet/Get the array that will be used for the X coordinates\n"},
  {"SetXarray", PyvtkH5PartReader_SetXarray, METH_VARARGS,
   "V.SetXarray(string)\nC++: virtual void SetXarray(const char *_arg)\n\nSet/Get the array that will be used for the X coordinates\n"},
  {"GetYarray", PyvtkH5PartReader_GetYarray, METH_VARARGS,
   "V.GetYarray() -> string\nC++: virtual char *GetYarray()\n\nSet/Get the array that will be used for the Y coordinates\n"},
  {"SetYarray", PyvtkH5PartReader_SetYarray, METH_VARARGS,
   "V.SetYarray(string)\nC++: virtual void SetYarray(const char *_arg)\n\nSet/Get the array that will be used for the Y coordinates\n"},
  {"GetZarray", PyvtkH5PartReader_GetZarray, METH_VARARGS,
   "V.GetZarray() -> string\nC++: virtual char *GetZarray()\n\nSet/Get the array that will be used for the Z coordinates\n"},
  {"SetZarray", PyvtkH5PartReader_SetZarray, METH_VARARGS,
   "V.SetZarray(string)\nC++: virtual void SetZarray(const char *_arg)\n\nSet/Get the array that will be used for the Z coordinates\n"},
  {"SetGenerateVertexCells", PyvtkH5PartReader_SetGenerateVertexCells, METH_VARARGS,
   "V.SetGenerateVertexCells(int)\nC++: virtual void SetGenerateVertexCells(int _arg)\n\nWhen set (default no), the reader will generate a vertex cell for\neach point/particle read. When using the points directly this is\nunnecessary and time can be saved by omitting cell generation\nvtkPointSpriteMapper does not require them. When using ParaView,\ncell generation is recommended, without them many filter\noperations are unavailable\n"},
  {"GetGenerateVertexCells", PyvtkH5PartReader_GetGenerateVertexCells, METH_VARARGS,
   "V.GetGenerateVertexCells() -> int\nC++: virtual int GetGenerateVertexCells()\n\nWhen set (default no), the reader will generate a vertex cell for\neach point/particle read. When using the points directly this is\nunnecessary and time can be saved by omitting cell generation\nvtkPointSpriteMapper does not require them. When using ParaView,\ncell generation is recommended, without them many filter\noperations are unavailable\n"},
  {"GenerateVertexCellsOn", PyvtkH5PartReader_GenerateVertexCellsOn, METH_VARARGS,
   "V.GenerateVertexCellsOn()\nC++: virtual void GenerateVertexCellsOn()\n\nWhen set (default no), the reader will generate a vertex cell for\neach point/particle read. When using the points directly this is\nunnecessary and time can be saved by omitting cell generation\nvtkPointSpriteMapper does not require them. When using ParaView,\ncell generation is recommended, without them many filter\noperations are unavailable\n"},
  {"GenerateVertexCellsOff", PyvtkH5PartReader_GenerateVertexCellsOff, METH_VARARGS,
   "V.GenerateVertexCellsOff()\nC++: virtual void GenerateVertexCellsOff()\n\nWhen set (default no), the reader will generate a vertex cell for\neach point/particle read. When using the points directly this is\nunnecessary and time can be saved by omitting cell generation\nvtkPointSpriteMapper does not require them. When using ParaView,\ncell generation is recommended, without them many filter\noperations are unavailable\n"},
  {"SetCombineVectorComponents", PyvtkH5PartReader_SetCombineVectorComponents, METH_VARARGS,
   "V.SetCombineVectorComponents(int)\nC++: virtual void SetCombineVectorComponents(int _arg)\n\nWhen this option is set, scalar fields with names which form a\npattern of the form scalar_0, scalar_1, scalar_2 will be combined\ninto a single vector field with N components\n"},
  {"GetCombineVectorComponents", PyvtkH5PartReader_GetCombineVectorComponents, METH_VARARGS,
   "V.GetCombineVectorComponents() -> int\nC++: virtual int GetCombineVectorComponents()\n\nWhen this option is set, scalar fields with names which form a\npattern of the form scalar_0, scalar_1, scalar_2 will be combined\ninto a single vector field with N components\n"},
  {"CombineVectorComponentsOn", PyvtkH5PartReader_CombineVectorComponentsOn, METH_VARARGS,
   "V.CombineVectorComponentsOn()\nC++: virtual void CombineVectorComponentsOn()\n\nWhen this option is set, scalar fields with names which form a\npattern of the form scalar_0, scalar_1, scalar_2 will be combined\ninto a single vector field with N components\n"},
  {"CombineVectorComponentsOff", PyvtkH5PartReader_CombineVectorComponentsOff, METH_VARARGS,
   "V.CombineVectorComponentsOff()\nC++: virtual void CombineVectorComponentsOff()\n\nWhen this option is set, scalar fields with names which form a\npattern of the form scalar_0, scalar_1, scalar_2 will be combined\ninto a single vector field with N components\n"},
  {"SetMaskOutOfTimeRangeOutput", PyvtkH5PartReader_SetMaskOutOfTimeRangeOutput, METH_VARARGS,
   "V.SetMaskOutOfTimeRangeOutput(int)\nC++: virtual void SetMaskOutOfTimeRangeOutput(int _arg)\n\nNormally, a request for data at time t=x, where x is either\nbefore the start of time for the data, or after the end, will\nresult in the first or last timestep of data to be retrieved\n(time is clamped to max/min values). Forsome\napplications/animations, it may be desirable to not display data\nfor invalid times. When MaskOutOfTimeRangeOutput is set to ON,\nthe reader will return an empty dataset for out of range\nrequests. This helps avoid corruption of animations.\n"},
  {"GetMaskOutOfTimeRangeOutput", PyvtkH5PartReader_GetMaskOutOfTimeRangeOutput, METH_VARARGS,
   "V.GetMaskOutOfTimeRangeOutput() -> int\nC++: virtual int GetMaskOutOfTimeRangeOutput()\n\nNormally, a request for data at time t=x, where x is either\nbefore the start of time for the data, or after the end, will\nresult in the first or last timestep of data to be retrieved\n(time is clamped to max/min values). Forsome\napplications/animations, it may be desirable to not display data\nfor invalid times. When MaskOutOfTimeRangeOutput is set to ON,\nthe reader will return an empty dataset for out of range\nrequests. This helps avoid corruption of animations.\n"},
  {"MaskOutOfTimeRangeOutputOn", PyvtkH5PartReader_MaskOutOfTimeRangeOutputOn, METH_VARARGS,
   "V.MaskOutOfTimeRangeOutputOn()\nC++: virtual void MaskOutOfTimeRangeOutputOn()\n\nNormally, a request for data at time t=x, where x is either\nbefore the start of time for the data, or after the end, will\nresult in the first or last timestep of data to be retrieved\n(time is clamped to max/min values). Forsome\napplications/animations, it may be desirable to not display data\nfor invalid times. When MaskOutOfTimeRangeOutput is set to ON,\nthe reader will return an empty dataset for out of range\nrequests. This helps avoid corruption of animations.\n"},
  {"MaskOutOfTimeRangeOutputOff", PyvtkH5PartReader_MaskOutOfTimeRangeOutputOff, METH_VARARGS,
   "V.MaskOutOfTimeRangeOutputOff()\nC++: virtual void MaskOutOfTimeRangeOutputOff()\n\nNormally, a request for data at time t=x, where x is either\nbefore the start of time for the data, or after the end, will\nresult in the first or last timestep of data to be retrieved\n(time is clamped to max/min values). Forsome\napplications/animations, it may be desirable to not display data\nfor invalid times. When MaskOutOfTimeRangeOutput is set to ON,\nthe reader will return an empty dataset for out of range\nrequests. This helps avoid corruption of animations.\n"},
  {"GetNumberOfPointArrays", PyvtkH5PartReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetPointArrayName", PyvtkH5PartReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetPointArrayStatus", PyvtkH5PartReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"SetPointArrayStatus", PyvtkH5PartReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"DisableAll", PyvtkH5PartReader_DisableAll, METH_VARARGS,
   "V.DisableAll()\nC++: void DisableAll()\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"EnableAll", PyvtkH5PartReader_EnableAll, METH_VARARGS,
   "V.EnableAll()\nC++: void EnableAll()\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"Disable", PyvtkH5PartReader_Disable, METH_VARARGS,
   "V.Disable(string)\nC++: void Disable(const char *name)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"Enable", PyvtkH5PartReader_Enable, METH_VARARGS,
   "V.Enable(string)\nC++: void Enable(const char *name)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetNumberOfPointArrayStatusArrays", PyvtkH5PartReader_GetNumberOfPointArrayStatusArrays, METH_VARARGS,
   "V.GetNumberOfPointArrayStatusArrays() -> int\nC++: int GetNumberOfPointArrayStatusArrays()\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetPointArrayStatusArrayName", PyvtkH5PartReader_GetPointArrayStatusArrayName, METH_VARARGS,
   "V.GetPointArrayStatusArrayName(int) -> string\nC++: const char *GetPointArrayStatusArrayName(int index)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetPointArrayStatusArrayStatus", PyvtkH5PartReader_GetPointArrayStatusArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatusArrayStatus(string) -> int\nC++: int GetPointArrayStatusArrayStatus(const char *name)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"SetPointArrayStatusArrayStatus", PyvtkH5PartReader_SetPointArrayStatusArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatusArrayStatus(string, int)\nC++: void SetPointArrayStatusArrayStatus(const char *name,\n    int status)\n\nAn H5Part file may contain multiple arrays a GUI (eg Paraview)\ncan provide a mechanism for selecting which data arrays are to be\nread from the file. The PointArray variables and members can be\nused to query the names and number of arrays available and set\nthe status (on/off) for each array, thereby controlling which\nshould be read from the file. Paraview queries these point arrays\nafter the (update) information part of the pipeline has been\nupdated, and before the (update) data part is updated.\n"},
  {"GetNumberOfCoordinateArrays", PyvtkH5PartReader_GetNumberOfCoordinateArrays, METH_VARARGS,
   "V.GetNumberOfCoordinateArrays() -> int\nC++: int GetNumberOfCoordinateArrays()\n\n"},
  {"GetCoordinateArrayName", PyvtkH5PartReader_GetCoordinateArrayName, METH_VARARGS,
   "V.GetCoordinateArrayName(int) -> string\nC++: const char *GetCoordinateArrayName(int index)\n\n"},
  {"GetCoordinateArrayStatus", PyvtkH5PartReader_GetCoordinateArrayStatus, METH_VARARGS,
   "V.GetCoordinateArrayStatus(string) -> int\nC++: int GetCoordinateArrayStatus(const char *name)\n\n"},
  {"SetCoordinateArrayStatus", PyvtkH5PartReader_SetCoordinateArrayStatus, METH_VARARGS,
   "V.SetCoordinateArrayStatus(string, int)\nC++: void SetCoordinateArrayStatus(const char *name, int status)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkH5PartReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsH5PartReaderPython.vtkH5PartReader", // tp_name
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
  PyvtkH5PartReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkH5PartReader_StaticNew()
{
  return vtkH5PartReader::New();
}

PyObject *PyvtkH5PartReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkH5PartReader_Type, PyvtkH5PartReader_Methods,
    "vtkH5PartReader",
 &PyvtkH5PartReader_StaticNew);

  PyTypeObject *pytype = &PyvtkH5PartReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkH5PartReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkH5PartReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkH5PartReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

