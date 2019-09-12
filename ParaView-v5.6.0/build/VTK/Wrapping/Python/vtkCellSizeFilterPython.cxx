// python wrapper for vtkCellSizeFilter
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
#include "vtkCellSizeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellSizeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellSizeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPassInputTypeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPassInputTypeAlgorithm_ClassNew
#endif

static const char *PyvtkCellSizeFilter_Doc =
  "vtkCellSizeFilter - Computes cell sizes.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Computes the cell sizes for all types of cells in VTK. For triangles,\n"
  "quads, tets and hexes the static methods in vtkMeshQuality are used.\n"
  "This is done through Verdict for higher accuracy. Other cell types\n"
  "are individually done analytically where possible and breaking into\n"
  "triangles or tets when not possible. When cells are broken into\n"
  "triangles or tets the accuracy may be diminished. By default all\n"
  "sizes are computed but vertex count, length, area and volumetric\n"
  "cells can each be optionally ignored. Individual arrays are used for\n"
  "each requested size (e.g. if length and volume are requested there\n"
  "will be two arrays outputted from this filter). The 4 arrays can be\n"
  "individually named with defaults of VertexCount, Length, Area and\n"
  "Volme. For dimensions of cells that do not have their size computed,\n"
  "a value of 0 will be given. For cells that should have their size\n"
  "computed but can't, the filter will return -1. The ComputeSum option\n"
  "will sum the cell sizes (excluding ghost cells) and put the value\n"
  "into vtkFieldData arrays named with the corresponding cell data array\n"
  "name. For composite datasets the total sum over all blocks will also\n"
  "be added to the top-level block's field data for the summation.\n\n";


static PyObject *
PyvtkCellSizeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellSizeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellSizeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellSizeFilter *tempr = vtkCellSizeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellSizeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellSizeFilter::NewInstance());

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
PyvtkCellSizeFilter_SetComputeVertexCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVertexCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVertexCount(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeVertexCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeVertexCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVertexCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVertexCount() :
      op->vtkCellSizeFilter::GetComputeVertexCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVertexCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVertexCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVertexCountOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVertexCountOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVertexCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVertexCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVertexCountOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVertexCountOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeLength(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeLength() :
      op->vtkCellSizeFilter::GetComputeLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeLengthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLengthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLengthOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeLengthOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeLengthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLengthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLengthOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeLengthOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeArea(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeArea() :
      op->vtkCellSizeFilter::GetComputeArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeAreaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAreaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAreaOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeAreaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeAreaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAreaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAreaOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeAreaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVolume(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVolume() :
      op->vtkCellSizeFilter::GetComputeVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVolumeOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVolumeOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeSum(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetComputeSum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeSum() :
      op->vtkCellSizeFilter::GetComputeSum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeSumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOn();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeSumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_ComputeSumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOff();
    }
    else
    {
      op->vtkCellSizeFilter::ComputeSumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetVertexCountArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCountArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexCountArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetVertexCountArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetVertexCountArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCountArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexCountArrayName() :
      op->vtkCellSizeFilter::GetVertexCountArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetLengthArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLengthArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLengthArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetLengthArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetLengthArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLengthArrayName() :
      op->vtkCellSizeFilter::GetLengthArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetAreaArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetAreaArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAreaArrayName() :
      op->vtkCellSizeFilter::GetAreaArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_SetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeArrayName(temp0);
    }
    else
    {
      op->vtkCellSizeFilter::SetVolumeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellSizeFilter_GetVolumeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellSizeFilter *op = static_cast<vtkCellSizeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVolumeArrayName() :
      op->vtkCellSizeFilter::GetVolumeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellSizeFilter_Methods[] = {
  {"IsTypeOf", PyvtkCellSizeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellSizeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellSizeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellSizeFilter\nC++: static vtkCellSizeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellSizeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellSizeFilter\nC++: vtkCellSizeFilter *NewInstance()\n\n"},
  {"SetComputeVertexCount", PyvtkCellSizeFilter_SetComputeVertexCount, METH_VARARGS,
   "V.SetComputeVertexCount(bool)\nC++: virtual void SetComputeVertexCount(bool _arg)\n\nSpecify whether or not to compute sizes for vertex and polyvertex\ncells. The computed value is the number of points in the cell.\nThis option is enabled by default.\n"},
  {"GetComputeVertexCount", PyvtkCellSizeFilter_GetComputeVertexCount, METH_VARARGS,
   "V.GetComputeVertexCount() -> bool\nC++: virtual bool GetComputeVertexCount()\n\nSpecify whether or not to compute sizes for vertex and polyvertex\ncells. The computed value is the number of points in the cell.\nThis option is enabled by default.\n"},
  {"ComputeVertexCountOn", PyvtkCellSizeFilter_ComputeVertexCountOn, METH_VARARGS,
   "V.ComputeVertexCountOn()\nC++: virtual void ComputeVertexCountOn()\n\nSpecify whether or not to compute sizes for vertex and polyvertex\ncells. The computed value is the number of points in the cell.\nThis option is enabled by default.\n"},
  {"ComputeVertexCountOff", PyvtkCellSizeFilter_ComputeVertexCountOff, METH_VARARGS,
   "V.ComputeVertexCountOff()\nC++: virtual void ComputeVertexCountOff()\n\nSpecify whether or not to compute sizes for vertex and polyvertex\ncells. The computed value is the number of points in the cell.\nThis option is enabled by default.\n"},
  {"SetComputeLength", PyvtkCellSizeFilter_SetComputeLength, METH_VARARGS,
   "V.SetComputeLength(bool)\nC++: virtual void SetComputeLength(bool _arg)\n\nSpecify whether or not to compute sizes for 1D cells cells. The\ncomputed value is the length of the cell. This option is enabled\nby default.\n"},
  {"GetComputeLength", PyvtkCellSizeFilter_GetComputeLength, METH_VARARGS,
   "V.GetComputeLength() -> bool\nC++: virtual bool GetComputeLength()\n\nSpecify whether or not to compute sizes for 1D cells cells. The\ncomputed value is the length of the cell. This option is enabled\nby default.\n"},
  {"ComputeLengthOn", PyvtkCellSizeFilter_ComputeLengthOn, METH_VARARGS,
   "V.ComputeLengthOn()\nC++: virtual void ComputeLengthOn()\n\nSpecify whether or not to compute sizes for 1D cells cells. The\ncomputed value is the length of the cell. This option is enabled\nby default.\n"},
  {"ComputeLengthOff", PyvtkCellSizeFilter_ComputeLengthOff, METH_VARARGS,
   "V.ComputeLengthOff()\nC++: virtual void ComputeLengthOff()\n\nSpecify whether or not to compute sizes for 1D cells cells. The\ncomputed value is the length of the cell. This option is enabled\nby default.\n"},
  {"SetComputeArea", PyvtkCellSizeFilter_SetComputeArea, METH_VARARGS,
   "V.SetComputeArea(bool)\nC++: virtual void SetComputeArea(bool _arg)\n\nSpecify whether or not to compute sizes for 2D cells cells. The\ncomputed value is the area of the cell. This option is enabled by\ndefault.\n"},
  {"GetComputeArea", PyvtkCellSizeFilter_GetComputeArea, METH_VARARGS,
   "V.GetComputeArea() -> bool\nC++: virtual bool GetComputeArea()\n\nSpecify whether or not to compute sizes for 2D cells cells. The\ncomputed value is the area of the cell. This option is enabled by\ndefault.\n"},
  {"ComputeAreaOn", PyvtkCellSizeFilter_ComputeAreaOn, METH_VARARGS,
   "V.ComputeAreaOn()\nC++: virtual void ComputeAreaOn()\n\nSpecify whether or not to compute sizes for 2D cells cells. The\ncomputed value is the area of the cell. This option is enabled by\ndefault.\n"},
  {"ComputeAreaOff", PyvtkCellSizeFilter_ComputeAreaOff, METH_VARARGS,
   "V.ComputeAreaOff()\nC++: virtual void ComputeAreaOff()\n\nSpecify whether or not to compute sizes for 2D cells cells. The\ncomputed value is the area of the cell. This option is enabled by\ndefault.\n"},
  {"SetComputeVolume", PyvtkCellSizeFilter_SetComputeVolume, METH_VARARGS,
   "V.SetComputeVolume(bool)\nC++: virtual void SetComputeVolume(bool _arg)\n\nSpecify whether or not to compute sizes for 3D cells cells. The\ncomputed value is the volume of the cell. This option is enabled\nby default.\n"},
  {"GetComputeVolume", PyvtkCellSizeFilter_GetComputeVolume, METH_VARARGS,
   "V.GetComputeVolume() -> bool\nC++: virtual bool GetComputeVolume()\n\nSpecify whether or not to compute sizes for 3D cells cells. The\ncomputed value is the volume of the cell. This option is enabled\nby default.\n"},
  {"ComputeVolumeOn", PyvtkCellSizeFilter_ComputeVolumeOn, METH_VARARGS,
   "V.ComputeVolumeOn()\nC++: virtual void ComputeVolumeOn()\n\nSpecify whether or not to compute sizes for 3D cells cells. The\ncomputed value is the volume of the cell. This option is enabled\nby default.\n"},
  {"ComputeVolumeOff", PyvtkCellSizeFilter_ComputeVolumeOff, METH_VARARGS,
   "V.ComputeVolumeOff()\nC++: virtual void ComputeVolumeOff()\n\nSpecify whether or not to compute sizes for 3D cells cells. The\ncomputed value is the volume of the cell. This option is enabled\nby default.\n"},
  {"SetComputeSum", PyvtkCellSizeFilter_SetComputeSum, METH_VARARGS,
   "V.SetComputeSum(bool)\nC++: virtual void SetComputeSum(bool _arg)\n\nSpecify whether to sum the computed sizes and put the result in a\nfield data array. This option is disabled by default.\n"},
  {"GetComputeSum", PyvtkCellSizeFilter_GetComputeSum, METH_VARARGS,
   "V.GetComputeSum() -> bool\nC++: virtual bool GetComputeSum()\n\nSpecify whether to sum the computed sizes and put the result in a\nfield data array. This option is disabled by default.\n"},
  {"ComputeSumOn", PyvtkCellSizeFilter_ComputeSumOn, METH_VARARGS,
   "V.ComputeSumOn()\nC++: virtual void ComputeSumOn()\n\nSpecify whether to sum the computed sizes and put the result in a\nfield data array. This option is disabled by default.\n"},
  {"ComputeSumOff", PyvtkCellSizeFilter_ComputeSumOff, METH_VARARGS,
   "V.ComputeSumOff()\nC++: virtual void ComputeSumOff()\n\nSpecify whether to sum the computed sizes and put the result in a\nfield data array. This option is disabled by default.\n"},
  {"SetVertexCountArrayName", PyvtkCellSizeFilter_SetVertexCountArrayName, METH_VARARGS,
   "V.SetVertexCountArrayName(string)\nC++: virtual void SetVertexCountArrayName(const char *_arg)\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"GetVertexCountArrayName", PyvtkCellSizeFilter_GetVertexCountArrayName, METH_VARARGS,
   "V.GetVertexCountArrayName() -> string\nC++: virtual char *GetVertexCountArrayName()\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"SetLengthArrayName", PyvtkCellSizeFilter_SetLengthArrayName, METH_VARARGS,
   "V.SetLengthArrayName(string)\nC++: virtual void SetLengthArrayName(const char *_arg)\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"GetLengthArrayName", PyvtkCellSizeFilter_GetLengthArrayName, METH_VARARGS,
   "V.GetLengthArrayName() -> string\nC++: virtual char *GetLengthArrayName()\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"SetAreaArrayName", PyvtkCellSizeFilter_SetAreaArrayName, METH_VARARGS,
   "V.SetAreaArrayName(string)\nC++: virtual void SetAreaArrayName(const char *_arg)\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"GetAreaArrayName", PyvtkCellSizeFilter_GetAreaArrayName, METH_VARARGS,
   "V.GetAreaArrayName() -> string\nC++: virtual char *GetAreaArrayName()\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"SetVolumeArrayName", PyvtkCellSizeFilter_SetVolumeArrayName, METH_VARARGS,
   "V.SetVolumeArrayName(string)\nC++: virtual void SetVolumeArrayName(const char *_arg)\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {"GetVolumeArrayName", PyvtkCellSizeFilter_GetVolumeArrayName, METH_VARARGS,
   "V.GetVolumeArrayName() -> string\nC++: virtual char *GetVolumeArrayName()\n\nSet/Get the name of the computed arrays. Default names are\nVertexCount, Length, Area and Volume.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellSizeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersVerdictPython.vtkCellSizeFilter", // tp_name
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
  PyvtkCellSizeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellSizeFilter_StaticNew()
{
  return vtkCellSizeFilter::New();
}

PyObject *PyvtkCellSizeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellSizeFilter_Type, PyvtkCellSizeFilter_Methods,
    "vtkCellSizeFilter",
 &PyvtkCellSizeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkCellSizeFilter_Type;

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

void PyVTKAddFile_vtkCellSizeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellSizeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellSizeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

