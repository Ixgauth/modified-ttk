// python wrapper for vtkModelMetadata
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
#include "vtkModelMetadata.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkModelMetadata(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkModelMetadata_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkModelMetadata_Doc =
  "vtkModelMetadata - This class encapsulates the metadata\n  that appear in mesh-based file formats but do not appear in\n  vtkUnstructuredGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "This class is inspired by the Exodus II file format, but\n"
  "  because this class does not depend on the Exodus library, it\n"
  "  should be possible to use it to represent metadata for other\n"
  "  dataset file formats.  Sandia Labs uses it in their Exodus II\n"
  "  reader, their Exodus II writer and their EnSight writer.\n"
  "  vtkDistributedDataFilter looks for metadata attached to\n"
  "  it's input and redistributes the metadata with the grid.\n\n\n"
  "  The fields in this class are those described in the document\n"
  "  \"EXODUS II: A Finite Element Data Model\", SAND92-2137, November\n"
  "1995.\n\n\n"
  "  Element and node IDs stored in this object must be global IDs,\n"
  "  in the event that the original dataset was partitioned across\n"
  "  many files.\n\n\n"
  "  One way to initialize this object is by using vtkExodusModel\n"
  "  (a Sandia class used by the Sandia Exodus reader).\n"
  "  That class will take an open Exodus II file and a\n"
  "  vtkUnstructuredGrid drawn from it and will set the required fields.\n\n\n"
  "  Alternatively, you can use all the Set*\n"
  "  methods to set the individual fields. This class does not\n"
  "  copy the data, it simply uses your pointer. This\n"
  "  class will free the storage associated with your pointer\n"
  "  when the class is deleted.  Most fields have sensible defaults.\n"
  "  The only requirement is that if you are using this ModelMetadata\n"
  "  to write out an Exodus or EnSight file in parallel, you must\n"
  "  SetBlockIds and SetBlockIdArrayName.  Your vtkUnstructuredGrid must\n"
  "  have a cell array giving the block ID for each cell.\n\n"
  "@warning\n"
  "  The Exodus II library supports an optimized element order map\n"
  "  (section 3.7 in the SAND document).  It contains all the element\n"
  "  IDs, listed in the order in which a solver should process them.\n"
  "  We don't include this, and won't unless there is a request.\n\n"
  "@warning\n"
  "  There is an assumption in some classes that the name of the cell\n"
  "  array containing global element ids is \"GlobalElementId\" and the\n"
  "  name of the point array containing global node ids is\n"
  "\"GlobalNodeId\".\n"
  "  (element == cell) and (node == point).\n\n"
  "@sa\n"
  "  vtkDistributedDataFilter vtkExtractCells\n\n";


static PyObject *
PyvtkModelMetadata_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkModelMetadata::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkModelMetadata::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkModelMetadata *tempr = vtkModelMetadata::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkModelMetadata *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkModelMetadata::NewInstance());

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
PyvtkModelMetadata_PrintGlobalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintGlobalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintGlobalInformation();
    }
    else
    {
      op->vtkModelMetadata::PrintGlobalInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_PrintLocalInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintLocalInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintLocalInformation();
    }
    else
    {
      op->vtkModelMetadata::PrintLocalInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkModelMetadata::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfInformationLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInformationLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInformationLines() :
      op->vtkModelMetadata::GetNumberOfInformationLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepIndex(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIndex() :
      op->vtkModelMetadata::GetTimeStepIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetTimeSteps(temp0, temp1);
    }
    else
    {
      op->vtkModelMetadata::SetTimeSteps(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkModelMetadata::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetTimeStepValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTimeStepValues() :
      op->vtkModelMetadata::GetTimeStepValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkModelMetadata::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBlocks(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNumberOfBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkModelMetadata::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockIds(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetBlockIds(temp0);
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
PyvtkModelMetadata_GetBlockIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockIds() :
      op->vtkModelMetadata::GetBlockIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetBlockNumberOfElements(temp0) :
      op->vtkModelMetadata::SetBlockNumberOfElements(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNumberOfElements() :
      op->vtkModelMetadata::GetBlockNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNodesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNodesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockNodesPerElement(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetBlockNodesPerElement(temp0);
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
PyvtkModelMetadata_GetBlockNodesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNodesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNodesPerElement() :
      op->vtkModelMetadata::GetBlockNodesPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockElementIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockElementIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockElementIdList(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetBlockElementIdList(temp0);
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
PyvtkModelMetadata_GetBlockElementIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockElementIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockElementIdList() :
      op->vtkModelMetadata::GetBlockElementIdList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumElementsPerBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumElementsPerBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSumElementsPerBlock() :
      op->vtkModelMetadata::GetSumElementsPerBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockElementIdListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockElementIdListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockElementIdListIndex() :
      op->vtkModelMetadata::GetBlockElementIdListIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockNumberOfAttributesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockNumberOfAttributesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetBlockNumberOfAttributesPerElement(temp0) :
      op->vtkModelMetadata::SetBlockNumberOfAttributesPerElement(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockNumberOfAttributesPerElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockNumberOfAttributesPerElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockNumberOfAttributesPerElement() :
      op->vtkModelMetadata::GetBlockNumberOfAttributesPerElement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockAttributes(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetBlockAttributes(temp0);
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
PyvtkModelMetadata_GetBlockAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBlockAttributes() :
      op->vtkModelMetadata::GetBlockAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSizeBlockAttributeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeBlockAttributeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeBlockAttributeArray() :
      op->vtkModelMetadata::GetSizeBlockAttributeArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetBlockAttributesIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockAttributesIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockAttributesIndex() :
      op->vtkModelMetadata::GetBlockAttributesIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNodeSets(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNumberOfNodeSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSets() :
      op->vtkModelMetadata::GetNumberOfNodeSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetNodeSetNames(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNodeSetNames() :
      op->vtkModelMetadata::GetNodeSetNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetIds(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetIds(temp0);
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
PyvtkModelMetadata_GetNodeSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetIds() :
      op->vtkModelMetadata::GetNodeSetIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetSize(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetSize(temp0);
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
PyvtkModelMetadata_GetNodeSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetSize() :
      op->vtkModelMetadata::GetNodeSetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetNodeIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetNodeIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetNodeIdList(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetNodeIdList(temp0);
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
PyvtkModelMetadata_GetNodeSetNodeIdList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNodeIdList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNodeIdList() :
      op->vtkModelMetadata::GetNodeSetNodeIdList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetNumberOfDistributionFactors(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetNumberOfDistributionFactors(temp0);
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
PyvtkModelMetadata_GetNodeSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNumberOfDistributionFactors() :
      op->vtkModelMetadata::GetNodeSetNumberOfDistributionFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetDistributionFactors(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetDistributionFactors(temp0);
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
PyvtkModelMetadata_GetNodeSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNodeSetDistributionFactors() :
      op->vtkModelMetadata::GetNodeSetDistributionFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSumNodesPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSumNodesPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSumNodesPerNodeSet(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSumNodesPerNodeSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumNodesPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumNodesPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSumNodesPerNodeSet() :
      op->vtkModelMetadata::GetSumNodesPerNodeSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerNodeSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerNodeSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSumDistFactPerNodeSet() :
      op->vtkModelMetadata::GetSumDistFactPerNodeSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetNodeIdListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetNodeIdListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetNodeIdListIndex() :
      op->vtkModelMetadata::GetNodeSetNodeIdListIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeSetDistributionFactorIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetDistributionFactorIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetDistributionFactorIndex() :
      op->vtkModelMetadata::GetNodeSetDistributionFactorIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSideSets(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNumberOfSideSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSets() :
      op->vtkModelMetadata::GetNumberOfSideSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetSideSetNames(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSideSetNames() :
      op->vtkModelMetadata::GetSideSetNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetIds(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetIds(temp0);
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
PyvtkModelMetadata_GetSideSetIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetIds() :
      op->vtkModelMetadata::GetSideSetIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetSideSetSize(temp0) :
      op->vtkModelMetadata::SetSideSetSize(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetSize() :
      op->vtkModelMetadata::GetSideSetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetSideSetNumberOfDistributionFactors(temp0) :
      op->vtkModelMetadata::SetSideSetNumberOfDistributionFactors(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetNumberOfDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetNumberOfDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetNumberOfDistributionFactors() :
      op->vtkModelMetadata::GetSideSetNumberOfDistributionFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetElementList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetElementList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetElementList(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetElementList(temp0);
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
PyvtkModelMetadata_GetSideSetElementList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetElementList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetElementList() :
      op->vtkModelMetadata::GetSideSetElementList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetSideList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetSideList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetSideList(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetSideList(temp0);
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
PyvtkModelMetadata_GetSideSetSideList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSideList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetSideList() :
      op->vtkModelMetadata::GetSideSetSideList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetNumDFPerSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetNumDFPerSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetNumDFPerSide(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetNumDFPerSide(temp0);
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
PyvtkModelMetadata_GetSideSetNumDFPerSide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetNumDFPerSide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetNumDFPerSide() :
      op->vtkModelMetadata::GetSideSetNumDFPerSide());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetDistributionFactors(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetDistributionFactors(temp0);
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
PyvtkModelMetadata_GetSideSetDistributionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetDistributionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetSideSetDistributionFactors() :
      op->vtkModelMetadata::GetSideSetDistributionFactors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSumSidesPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSumSidesPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSumSidesPerSideSet(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSumSidesPerSideSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumSidesPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumSidesPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSumSidesPerSideSet() :
      op->vtkModelMetadata::GetSumSidesPerSideSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSumDistFactPerSideSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSumDistFactPerSideSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSumDistFactPerSideSet() :
      op->vtkModelMetadata::GetSumDistFactPerSideSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetListIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetListIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetListIndex() :
      op->vtkModelMetadata::GetSideSetListIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetSideSetDistributionFactorIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetDistributionFactorIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetDistributionFactorIndex() :
      op->vtkModelMetadata::GetSideSetDistributionFactorIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfBlockProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlockProperties() :
      op->vtkModelMetadata::GetNumberOfBlockProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetBlockPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockPropertyValue(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetBlockPropertyValue(temp0);
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
PyvtkModelMetadata_GetBlockPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockPropertyValue() :
      op->vtkModelMetadata::GetBlockPropertyValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSetProperties() :
      op->vtkModelMetadata::GetNumberOfNodeSetProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetNodeSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNodeSetPropertyValue(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetNodeSetPropertyValue(temp0);
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
PyvtkModelMetadata_GetNodeSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeSetPropertyValue() :
      op->vtkModelMetadata::GetNodeSetPropertyValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfSideSetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSetProperties() :
      op->vtkModelMetadata::GetNumberOfSideSetProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetSideSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSideSetPropertyValue(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetSideSetPropertyValue(temp0);
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
PyvtkModelMetadata_GetSideSetPropertyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetPropertyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSideSetPropertyValue() :
      op->vtkModelMetadata::GetSideSetPropertyValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfGlobalVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGlobalVariables() :
      op->vtkModelMetadata::GetNumberOfGlobalVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetGlobalVariableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGlobalVariableValue(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetGlobalVariableValue(temp0);
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
PyvtkModelMetadata_GetGlobalVariableValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGlobalVariableValue() :
      op->vtkModelMetadata::GetGlobalVariableValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetElementVariableTruthTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementVariableTruthTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetElementVariableTruthTable(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetElementVariableTruthTable(temp0);
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
PyvtkModelMetadata_GetElementVariableTruthTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementVariableTruthTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetElementVariableTruthTable() :
      op->vtkModelMetadata::GetElementVariableTruthTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllVariablesDefinedInAllBlocks(temp0);
    }
    else
    {
      op->vtkModelMetadata::SetAllVariablesDefinedInAllBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllVariablesDefinedInAllBlocksOn();
    }
    else
    {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllVariablesDefinedInAllBlocksOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllVariablesDefinedInAllBlocksOff();
    }
    else
    {
      op->vtkModelMetadata::AllVariablesDefinedInAllBlocksOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllVariablesDefinedInAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllVariablesDefinedInAllBlocks() :
      op->vtkModelMetadata::GetAllVariablesDefinedInAllBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOriginalNumberOfElementVariables() :
      op->vtkModelMetadata::GetOriginalNumberOfElementVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementVariables() :
      op->vtkModelMetadata::GetNumberOfElementVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetElementVariableNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementVariableNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetElementVariableNumberOfComponents() :
      op->vtkModelMetadata::GetElementVariableNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetMapToOriginalElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapToOriginalElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMapToOriginalElementVariableNames() :
      op->vtkModelMetadata::GetMapToOriginalElementVariableNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetOriginalNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOriginalNumberOfNodeVariables() :
      op->vtkModelMetadata::GetOriginalNumberOfNodeVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNumberOfNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeVariables() :
      op->vtkModelMetadata::GetNumberOfNodeVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetNodeVariableNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeVariableNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNodeVariableNumberOfComponents() :
      op->vtkModelMetadata::GetNodeVariableNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_GetMapToOriginalNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapToOriginalNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMapToOriginalNodeVariableNames() :
      op->vtkModelMetadata::GetMapToOriginalNodeVariableNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllGlobalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllGlobalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeAllGlobalData();
    }
    else
    {
      op->vtkModelMetadata::FreeAllGlobalData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeAllLocalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeAllLocalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeAllLocalData();
    }
    else
    {
      op->vtkModelMetadata::FreeAllLocalData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeBlockDependentData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeBlockDependentData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeBlockDependentData();
    }
    else
    {
      op->vtkModelMetadata::FreeBlockDependentData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeOriginalElementVariableNames();
    }
    else
    {
      op->vtkModelMetadata::FreeOriginalElementVariableNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeOriginalNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeOriginalNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeOriginalNodeVariableNames();
    }
    else
    {
      op->vtkModelMetadata::FreeOriginalNodeVariableNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeUsedElementVariableNames();
    }
    else
    {
      op->vtkModelMetadata::FreeUsedElementVariableNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariableNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariableNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeUsedNodeVariableNames();
    }
    else
    {
      op->vtkModelMetadata::FreeUsedNodeVariableNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedElementVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedElementVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeUsedElementVariables();
    }
    else
    {
      op->vtkModelMetadata::FreeUsedElementVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_FreeUsedNodeVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeUsedNodeVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeUsedNodeVariables();
    }
    else
    {
      op->vtkModelMetadata::FreeUsedNodeVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModelMetadata_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModelMetadata *op = static_cast<vtkModelMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkModelMetadata::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkModelMetadata_Methods[] = {
  {"IsTypeOf", PyvtkModelMetadata_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkModelMetadata_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkModelMetadata_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkModelMetadata\nC++: static vtkModelMetadata *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkModelMetadata_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkModelMetadata\nC++: vtkModelMetadata *NewInstance()\n\n"},
  {"PrintGlobalInformation", PyvtkModelMetadata_PrintGlobalInformation, METH_VARARGS,
   "V.PrintGlobalInformation()\nC++: virtual void PrintGlobalInformation()\n\nThe global fields are those which pertain to the whole file. \nExamples are the title, information lines, and list of block IDs.\n This method prints out all the global information.\n"},
  {"PrintLocalInformation", PyvtkModelMetadata_PrintLocalInformation, METH_VARARGS,
   "V.PrintLocalInformation()\nC++: virtual void PrintLocalInformation()\n\nThe local fields are those which depend on exactly which blocks,\nwhich time step, and which variables you read in from the file. \nExamples are the number of cells in each block, and the list of\nnodes in a node set, or the value of the global variables at a\ntime step.  If VERBOSE_TESTING is defined in your execution\nenvironment, this method will print more than mere counts, and\nactually print a few of the IDs, distribution factors and so on. \nIf VERY_VERBOSE_TESTING is defined, it will print out all ID\nlists, distribution factor lists, and so on.\n"},
  {"SetTitle", PyvtkModelMetadata_SetTitle, METH_VARARGS,
   "V.SetTitle(string)\nC++: virtual void SetTitle(const char *_arg)\n\nThe title of the dataset.\n"},
  {"GetTitle", PyvtkModelMetadata_GetTitle, METH_VARARGS,
   "V.GetTitle() -> string\nC++: const char *GetTitle()\n\nThe title of the dataset.\n"},
  {"GetNumberOfInformationLines", PyvtkModelMetadata_GetNumberOfInformationLines, METH_VARARGS,
   "V.GetNumberOfInformationLines() -> int\nC++: int GetNumberOfInformationLines()\n\nGet the number of information lines.\n"},
  {"SetTimeStepIndex", PyvtkModelMetadata_SetTimeStepIndex, METH_VARARGS,
   "V.SetTimeStepIndex(int)\nC++: virtual void SetTimeStepIndex(int _arg)\n\nSet the index of the time step represented by the results data in\nthe file attached to this ModelMetadata object.  Time step\nindices start at 0 in this file, they start at 1 in an Exodus\nfile.\n"},
  {"GetTimeStepIndex", PyvtkModelMetadata_GetTimeStepIndex, METH_VARARGS,
   "V.GetTimeStepIndex() -> int\nC++: int GetTimeStepIndex()\n\nSet the index of the time step represented by the results data in\nthe file attached to this ModelMetadata object.  Time step\nindices start at 0 in this file, they start at 1 in an Exodus\nfile.\n"},
  {"SetTimeSteps", PyvtkModelMetadata_SetTimeSteps, METH_VARARGS,
   "V.SetTimeSteps(int, [float, ...])\nC++: void SetTimeSteps(int numberOfTimeSteps,\n    float *timeStepValues)\n\nSet the total number of time steps in the file, and the value at\neach time step.  We use your time step value array and delete it\nwhen we're done.\n"},
  {"GetNumberOfTimeSteps", PyvtkModelMetadata_GetNumberOfTimeSteps, METH_VARARGS,
   "V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\n"},
  {"GetTimeStepValues", PyvtkModelMetadata_GetTimeStepValues, METH_VARARGS,
   "V.GetTimeStepValues() -> (float, ...)\nC++: float *GetTimeStepValues()\n\nGet the time step values\n"},
  {"GetDimension", PyvtkModelMetadata_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: int GetDimension()\n\nGet the dimension of the model.  This is also the number of\ncoordinate names.\n"},
  {"SetNumberOfBlocks", PyvtkModelMetadata_SetNumberOfBlocks, METH_VARARGS,
   "V.SetNumberOfBlocks(int)\nC++: virtual void SetNumberOfBlocks(int _arg)\n\nThe number of blocks in the file.  Set this before setting any of\nthe block arrays.\n"},
  {"GetNumberOfBlocks", PyvtkModelMetadata_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks()\n\nThe number of blocks in the file.  Set this before setting any of\nthe block arrays.\n"},
  {"SetBlockIds", PyvtkModelMetadata_SetBlockIds, METH_VARARGS,
   "V.SetBlockIds([int, ...])\nC++: void SetBlockIds(int *)\n\nAn arbitrary integer ID for each block. We use your pointer, and\nfree the memory when the object is freed.\n"},
  {"GetBlockIds", PyvtkModelMetadata_GetBlockIds, METH_VARARGS,
   "V.GetBlockIds() -> (int, ...)\nC++: int *GetBlockIds()\n\n"},
  {"SetBlockNumberOfElements", PyvtkModelMetadata_SetBlockNumberOfElements, METH_VARARGS,
   "V.SetBlockNumberOfElements([int, ...]) -> int\nC++: int SetBlockNumberOfElements(int *nelts)\n\nSet or get a pointer to a list of the number of elements in each\nblock. We use your pointers, and free the memory when the object\nis freed.\n"},
  {"GetBlockNumberOfElements", PyvtkModelMetadata_GetBlockNumberOfElements, METH_VARARGS,
   "V.GetBlockNumberOfElements() -> (int, ...)\nC++: int *GetBlockNumberOfElements()\n\n"},
  {"SetBlockNodesPerElement", PyvtkModelMetadata_SetBlockNodesPerElement, METH_VARARGS,
   "V.SetBlockNodesPerElement([int, ...])\nC++: void SetBlockNodesPerElement(int *)\n\nSet or get a pointer to a list of the number of nodes in the\nelements of each block. We use your pointers, and free the memory\nwhen the object is freed.\n"},
  {"GetBlockNodesPerElement", PyvtkModelMetadata_GetBlockNodesPerElement, METH_VARARGS,
   "V.GetBlockNodesPerElement() -> (int, ...)\nC++: int *GetBlockNodesPerElement()\n\n"},
  {"SetBlockElementIdList", PyvtkModelMetadata_SetBlockElementIdList, METH_VARARGS,
   "V.SetBlockElementIdList([int, ...])\nC++: void SetBlockElementIdList(int *)\n\nSet or get a pointer to a list global element IDs for the\nelements in each block. We use your pointers, and free the memory\nwhen the object is freed.\n"},
  {"GetBlockElementIdList", PyvtkModelMetadata_GetBlockElementIdList, METH_VARARGS,
   "V.GetBlockElementIdList() -> (int, ...)\nC++: int *GetBlockElementIdList()\n\n"},
  {"GetSumElementsPerBlock", PyvtkModelMetadata_GetSumElementsPerBlock, METH_VARARGS,
   "V.GetSumElementsPerBlock() -> int\nC++: int GetSumElementsPerBlock()\n\nGet the length of the list of elements in every block.\n"},
  {"GetBlockElementIdListIndex", PyvtkModelMetadata_GetBlockElementIdListIndex, METH_VARARGS,
   "V.GetBlockElementIdListIndex() -> (int, ...)\nC++: int *GetBlockElementIdListIndex()\n\nGet a list of the index into the BlockElementIdList of the start\nof each block's elements.\n"},
  {"SetBlockNumberOfAttributesPerElement", PyvtkModelMetadata_SetBlockNumberOfAttributesPerElement, METH_VARARGS,
   "V.SetBlockNumberOfAttributesPerElement([int, ...]) -> int\nC++: int SetBlockNumberOfAttributesPerElement(int *natts)\n\nSet or get a pointer to a list of the number of attributes stored\nfor the elements in each block. We use your pointers, and free\nthe memory when the object is freed.\n"},
  {"GetBlockNumberOfAttributesPerElement", PyvtkModelMetadata_GetBlockNumberOfAttributesPerElement, METH_VARARGS,
   "V.GetBlockNumberOfAttributesPerElement() -> (int, ...)\nC++: int *GetBlockNumberOfAttributesPerElement()\n\n"},
  {"SetBlockAttributes", PyvtkModelMetadata_SetBlockAttributes, METH_VARARGS,
   "V.SetBlockAttributes([float, ...])\nC++: void SetBlockAttributes(float *)\n\nSet or get a pointer to a list of the attributes for all blocks. \nThe order of the list should be by block, by element within the\nblock, by attribute.  Omit blocks that don't have element\nattributes.\n"},
  {"GetBlockAttributes", PyvtkModelMetadata_GetBlockAttributes, METH_VARARGS,
   "V.GetBlockAttributes() -> (float, ...)\nC++: float *GetBlockAttributes()\n\n"},
  {"GetSizeBlockAttributeArray", PyvtkModelMetadata_GetSizeBlockAttributeArray, METH_VARARGS,
   "V.GetSizeBlockAttributeArray() -> int\nC++: int GetSizeBlockAttributeArray()\n\nGet the length of the list of floating point block attributes.\n"},
  {"GetBlockAttributesIndex", PyvtkModelMetadata_GetBlockAttributesIndex, METH_VARARGS,
   "V.GetBlockAttributesIndex() -> (int, ...)\nC++: int *GetBlockAttributesIndex()\n\nGet a list of the index into the BlockAttributes of the start of\neach block's element attribute list.\n"},
  {"SetNumberOfNodeSets", PyvtkModelMetadata_SetNumberOfNodeSets, METH_VARARGS,
   "V.SetNumberOfNodeSets(int)\nC++: virtual void SetNumberOfNodeSets(int _arg)\n\nThe number of node sets in the file.  Set this value before\nsetting the various node set arrays.\n"},
  {"GetNumberOfNodeSets", PyvtkModelMetadata_GetNumberOfNodeSets, METH_VARARGS,
   "V.GetNumberOfNodeSets() -> int\nC++: int GetNumberOfNodeSets()\n\nThe number of node sets in the file.  Set this value before\nsetting the various node set arrays.\n"},
  {"SetNodeSetNames", PyvtkModelMetadata_SetNodeSetNames, METH_VARARGS,
   "V.SetNodeSetNames(vtkStringArray)\nC++: void SetNodeSetNames(vtkStringArray *names)\n\n"},
  {"GetNodeSetNames", PyvtkModelMetadata_GetNodeSetNames, METH_VARARGS,
   "V.GetNodeSetNames() -> vtkStringArray\nC++: vtkStringArray *GetNodeSetNames()\n\n"},
  {"SetNodeSetIds", PyvtkModelMetadata_SetNodeSetIds, METH_VARARGS,
   "V.SetNodeSetIds([int, ...])\nC++: void SetNodeSetIds(int *)\n\nSet or get the list the IDs for each node set. Length of list is\nthe number of node sets. We use your pointer, and free the memory\nwhen the object is freed.\n"},
  {"GetNodeSetIds", PyvtkModelMetadata_GetNodeSetIds, METH_VARARGS,
   "V.GetNodeSetIds() -> (int, ...)\nC++: int *GetNodeSetIds()\n\n"},
  {"SetNodeSetSize", PyvtkModelMetadata_SetNodeSetSize, METH_VARARGS,
   "V.SetNodeSetSize([int, ...])\nC++: void SetNodeSetSize(int *)\n\nSet or get a pointer to a list of the number of nodes in each\nnode set. We use your pointer, and free the memory when the\nobject is freed.\n"},
  {"GetNodeSetSize", PyvtkModelMetadata_GetNodeSetSize, METH_VARARGS,
   "V.GetNodeSetSize() -> (int, ...)\nC++: int *GetNodeSetSize()\n\n"},
  {"SetNodeSetNodeIdList", PyvtkModelMetadata_SetNodeSetNodeIdList, METH_VARARGS,
   "V.SetNodeSetNodeIdList([int, ...])\nC++: void SetNodeSetNodeIdList(int *)\n\nSet or get a pointer to a concatenated list of the IDs of all\nnodes in each node set.  First list all IDs in node set 0, then\nall IDs in node set 1, and so on. We use your pointer, and free\nthe memory when the object is freed.\n"},
  {"GetNodeSetNodeIdList", PyvtkModelMetadata_GetNodeSetNodeIdList, METH_VARARGS,
   "V.GetNodeSetNodeIdList() -> (int, ...)\nC++: int *GetNodeSetNodeIdList()\n\n"},
  {"SetNodeSetNumberOfDistributionFactors", PyvtkModelMetadata_SetNodeSetNumberOfDistributionFactors, METH_VARARGS,
   "V.SetNodeSetNumberOfDistributionFactors([int, ...])\nC++: void SetNodeSetNumberOfDistributionFactors(int *)\n\nSet or get a list of the number of distribution factors stored by\neach node set.  This is either 0 or equal to the number of nodes\nin the node set. Length of list is number of node sets. We use\nyour pointer, and free the memory when the object is freed.\n"},
  {"GetNodeSetNumberOfDistributionFactors", PyvtkModelMetadata_GetNodeSetNumberOfDistributionFactors, METH_VARARGS,
   "V.GetNodeSetNumberOfDistributionFactors() -> (int, ...)\nC++: int *GetNodeSetNumberOfDistributionFactors()\n\n"},
  {"SetNodeSetDistributionFactors", PyvtkModelMetadata_SetNodeSetDistributionFactors, METH_VARARGS,
   "V.SetNodeSetDistributionFactors([float, ...])\nC++: void SetNodeSetDistributionFactors(float *)\n\nSet or get a list of the distribution factors for the node sets.\nThe list is organized by node set, and within node set by node.\nWe use your pointer, and free the memory when the object is\nfreed.\n"},
  {"GetNodeSetDistributionFactors", PyvtkModelMetadata_GetNodeSetDistributionFactors, METH_VARARGS,
   "V.GetNodeSetDistributionFactors() -> (float, ...)\nC++: float *GetNodeSetDistributionFactors()\n\n"},
  {"SetSumNodesPerNodeSet", PyvtkModelMetadata_SetSumNodesPerNodeSet, METH_VARARGS,
   "V.SetSumNodesPerNodeSet(int)\nC++: virtual void SetSumNodesPerNodeSet(int _arg)\n\nGet the total number of nodes in all node sets\n"},
  {"GetSumNodesPerNodeSet", PyvtkModelMetadata_GetSumNodesPerNodeSet, METH_VARARGS,
   "V.GetSumNodesPerNodeSet() -> int\nC++: int GetSumNodesPerNodeSet()\n\nGet the total number of nodes in all node sets\n"},
  {"GetSumDistFactPerNodeSet", PyvtkModelMetadata_GetSumDistFactPerNodeSet, METH_VARARGS,
   "V.GetSumDistFactPerNodeSet() -> int\nC++: int GetSumDistFactPerNodeSet()\n\nGet the total number of distribution factors stored for all node\nsets\n"},
  {"GetNodeSetNodeIdListIndex", PyvtkModelMetadata_GetNodeSetNodeIdListIndex, METH_VARARGS,
   "V.GetNodeSetNodeIdListIndex() -> (int, ...)\nC++: int *GetNodeSetNodeIdListIndex()\n\nGet a list of the index of the starting entry for each node set\nin the list of node set node IDs.\n"},
  {"GetNodeSetDistributionFactorIndex", PyvtkModelMetadata_GetNodeSetDistributionFactorIndex, METH_VARARGS,
   "V.GetNodeSetDistributionFactorIndex() -> (int, ...)\nC++: int *GetNodeSetDistributionFactorIndex()\n\nGet a list of the index of the starting entry for each node set\nin the list of node set distribution factors.\n"},
  {"SetNumberOfSideSets", PyvtkModelMetadata_SetNumberOfSideSets, METH_VARARGS,
   "V.SetNumberOfSideSets(int)\nC++: virtual void SetNumberOfSideSets(int _arg)\n\nSet or get the number of side sets.  Set this value before\nsetting any of the other side set arrays.\n"},
  {"GetNumberOfSideSets", PyvtkModelMetadata_GetNumberOfSideSets, METH_VARARGS,
   "V.GetNumberOfSideSets() -> int\nC++: int GetNumberOfSideSets()\n\nSet or get the number of side sets.  Set this value before\nsetting any of the other side set arrays.\n"},
  {"SetSideSetNames", PyvtkModelMetadata_SetSideSetNames, METH_VARARGS,
   "V.SetSideSetNames(vtkStringArray)\nC++: void SetSideSetNames(vtkStringArray *names)\n\n"},
  {"GetSideSetNames", PyvtkModelMetadata_GetSideSetNames, METH_VARARGS,
   "V.GetSideSetNames() -> vtkStringArray\nC++: vtkStringArray *GetSideSetNames()\n\n"},
  {"SetSideSetIds", PyvtkModelMetadata_SetSideSetIds, METH_VARARGS,
   "V.SetSideSetIds([int, ...])\nC++: void SetSideSetIds(int *)\n\nSet or get a pointer to a list giving the ID of each side set. We\nuse your pointer, and free the memory when the object is freed.\n"},
  {"GetSideSetIds", PyvtkModelMetadata_GetSideSetIds, METH_VARARGS,
   "V.GetSideSetIds() -> (int, ...)\nC++: int *GetSideSetIds()\n\n"},
  {"SetSideSetSize", PyvtkModelMetadata_SetSideSetSize, METH_VARARGS,
   "V.SetSideSetSize([int, ...]) -> int\nC++: int SetSideSetSize(int *sizes)\n\nSet or get a pointer to a list of the number of sides in each\nside set. We use your pointer, and free the memory when the\nobject is freed.\n"},
  {"GetSideSetSize", PyvtkModelMetadata_GetSideSetSize, METH_VARARGS,
   "V.GetSideSetSize() -> (int, ...)\nC++: int *GetSideSetSize()\n\n"},
  {"SetSideSetNumberOfDistributionFactors", PyvtkModelMetadata_SetSideSetNumberOfDistributionFactors, METH_VARARGS,
   "V.SetSideSetNumberOfDistributionFactors([int, ...]) -> int\nC++: int SetSideSetNumberOfDistributionFactors(int *df)\n\nSet or get a pointer to a list of the number of distribution\nfactors stored by each side set.   Each side set has either no\ndistribution factors, or 1 per node in the side set. We use your\npointer, and free the memory when the object is freed.\n"},
  {"GetSideSetNumberOfDistributionFactors", PyvtkModelMetadata_GetSideSetNumberOfDistributionFactors, METH_VARARGS,
   "V.GetSideSetNumberOfDistributionFactors() -> (int, ...)\nC++: int *GetSideSetNumberOfDistributionFactors()\n\n"},
  {"SetSideSetElementList", PyvtkModelMetadata_SetSideSetElementList, METH_VARARGS,
   "V.SetSideSetElementList([int, ...])\nC++: void SetSideSetElementList(int *)\n\nSet or get a pointer to a list of the elements containing each\nside in each side set.  The list is organized by side set, and\nwithin side set by element. We use your pointer, and free the\nmemory when the object is freed.\n"},
  {"GetSideSetElementList", PyvtkModelMetadata_GetSideSetElementList, METH_VARARGS,
   "V.GetSideSetElementList() -> (int, ...)\nC++: int *GetSideSetElementList()\n\n"},
  {"SetSideSetSideList", PyvtkModelMetadata_SetSideSetSideList, METH_VARARGS,
   "V.SetSideSetSideList([int, ...])\nC++: void SetSideSetSideList(int *)\n\nSet or get a pointer to the element side for each side in the\nside set. (See the manual for the convention for numbering sides\nin different types of cells.)  Side Ids are arranged by side set\nand within side set by side, and correspond to the\nSideSetElementList. We use your pointer, and free the memory when\nthe object is freed.\n"},
  {"GetSideSetSideList", PyvtkModelMetadata_GetSideSetSideList, METH_VARARGS,
   "V.GetSideSetSideList() -> (int, ...)\nC++: int *GetSideSetSideList()\n\n"},
  {"SetSideSetNumDFPerSide", PyvtkModelMetadata_SetSideSetNumDFPerSide, METH_VARARGS,
   "V.SetSideSetNumDFPerSide([int, ...])\nC++: void SetSideSetNumDFPerSide(int *numNodes)\n\nSet or get a pointer to a list of the number of nodes in each\nside of each side set.  This list is organized by side set, and\nwithin side set by side. We use your pointer, and free the memory\nwhen the object is freed.\n"},
  {"GetSideSetNumDFPerSide", PyvtkModelMetadata_GetSideSetNumDFPerSide, METH_VARARGS,
   "V.GetSideSetNumDFPerSide() -> (int, ...)\nC++: int *GetSideSetNumDFPerSide()\n\n"},
  {"SetSideSetDistributionFactors", PyvtkModelMetadata_SetSideSetDistributionFactors, METH_VARARGS,
   "V.SetSideSetDistributionFactors([float, ...])\nC++: void SetSideSetDistributionFactors(float *)\n\nSet or get a pointer to a list of all the distribution factors.\nFor every side set that has distribution factors, the number of\nfactors per node was given in the\nSideSetNumberOfDistributionFactors array.  If this number for a\ngiven side set is N, then for that side set we have N floating\npoint values for each node for each side in the side set.  If\nnodes are repeated in more than one side, we repeat the\ndistribution factors.  So this list is in order by side set, by\nnode. We use your pointer, and free the memory when the object is\nfreed.\n"},
  {"GetSideSetDistributionFactors", PyvtkModelMetadata_GetSideSetDistributionFactors, METH_VARARGS,
   "V.GetSideSetDistributionFactors() -> (float, ...)\nC++: float *GetSideSetDistributionFactors()\n\n"},
  {"SetSumSidesPerSideSet", PyvtkModelMetadata_SetSumSidesPerSideSet, METH_VARARGS,
   "V.SetSumSidesPerSideSet(int)\nC++: virtual void SetSumSidesPerSideSet(int _arg)\n\nGet the total number of sides in all side sets\n"},
  {"GetSumSidesPerSideSet", PyvtkModelMetadata_GetSumSidesPerSideSet, METH_VARARGS,
   "V.GetSumSidesPerSideSet() -> int\nC++: int GetSumSidesPerSideSet()\n\nGet the total number of sides in all side sets\n"},
  {"GetSumDistFactPerSideSet", PyvtkModelMetadata_GetSumDistFactPerSideSet, METH_VARARGS,
   "V.GetSumDistFactPerSideSet() -> int\nC++: int GetSumDistFactPerSideSet()\n\nGet the total number of distribution factors stored for all side\nsets\n"},
  {"GetSideSetListIndex", PyvtkModelMetadata_GetSideSetListIndex, METH_VARARGS,
   "V.GetSideSetListIndex() -> (int, ...)\nC++: int *GetSideSetListIndex()\n\nGet a list of the index of the starting entry for each side set\nin the list of side set side IDs.\n"},
  {"GetSideSetDistributionFactorIndex", PyvtkModelMetadata_GetSideSetDistributionFactorIndex, METH_VARARGS,
   "V.GetSideSetDistributionFactorIndex() -> (int, ...)\nC++: int *GetSideSetDistributionFactorIndex()\n\nGet a list of the index of the starting entry for each side set\nin the list of side set distribution factors.\n"},
  {"GetNumberOfBlockProperties", PyvtkModelMetadata_GetNumberOfBlockProperties, METH_VARARGS,
   "V.GetNumberOfBlockProperties() -> int\nC++: int GetNumberOfBlockProperties()\n\nThe number of block properties (global variables)\n"},
  {"SetBlockPropertyValue", PyvtkModelMetadata_SetBlockPropertyValue, METH_VARARGS,
   "V.SetBlockPropertyValue([int, ...])\nC++: void SetBlockPropertyValue(int *)\n\nSet or get value for each variable for each block.  List the\ninteger values in order by variable and within variable by block.\n"},
  {"GetBlockPropertyValue", PyvtkModelMetadata_GetBlockPropertyValue, METH_VARARGS,
   "V.GetBlockPropertyValue() -> (int, ...)\nC++: int *GetBlockPropertyValue()\n\n"},
  {"GetNumberOfNodeSetProperties", PyvtkModelMetadata_GetNumberOfNodeSetProperties, METH_VARARGS,
   "V.GetNumberOfNodeSetProperties() -> int\nC++: int GetNumberOfNodeSetProperties()\n\nThe number of node set properties (global variables)\n"},
  {"SetNodeSetPropertyValue", PyvtkModelMetadata_SetNodeSetPropertyValue, METH_VARARGS,
   "V.SetNodeSetPropertyValue([int, ...])\nC++: void SetNodeSetPropertyValue(int *)\n\nSet or get value for each variable for each node set.  List the\ninteger values in order by variable and within variable by node\nset.\n"},
  {"GetNodeSetPropertyValue", PyvtkModelMetadata_GetNodeSetPropertyValue, METH_VARARGS,
   "V.GetNodeSetPropertyValue() -> (int, ...)\nC++: int *GetNodeSetPropertyValue()\n\n"},
  {"GetNumberOfSideSetProperties", PyvtkModelMetadata_GetNumberOfSideSetProperties, METH_VARARGS,
   "V.GetNumberOfSideSetProperties() -> int\nC++: int GetNumberOfSideSetProperties()\n\nThe number of side set properties (global variables)\n"},
  {"SetSideSetPropertyValue", PyvtkModelMetadata_SetSideSetPropertyValue, METH_VARARGS,
   "V.SetSideSetPropertyValue([int, ...])\nC++: void SetSideSetPropertyValue(int *)\n\nSet or get value for each variable for each side set.  List the\ninteger values in order by variable and within variable by side\nset.\n"},
  {"GetSideSetPropertyValue", PyvtkModelMetadata_GetSideSetPropertyValue, METH_VARARGS,
   "V.GetSideSetPropertyValue() -> (int, ...)\nC++: int *GetSideSetPropertyValue()\n\n"},
  {"GetNumberOfGlobalVariables", PyvtkModelMetadata_GetNumberOfGlobalVariables, METH_VARARGS,
   "V.GetNumberOfGlobalVariables() -> int\nC++: int GetNumberOfGlobalVariables()\n\nGet the number of global variables per time step\n"},
  {"SetGlobalVariableValue", PyvtkModelMetadata_SetGlobalVariableValue, METH_VARARGS,
   "V.SetGlobalVariableValue([float, ...])\nC++: void SetGlobalVariableValue(float *f)\n\nSet or get the values of the global variables at the current time\nstep.\n"},
  {"GetGlobalVariableValue", PyvtkModelMetadata_GetGlobalVariableValue, METH_VARARGS,
   "V.GetGlobalVariableValue() -> (float, ...)\nC++: float *GetGlobalVariableValue()\n\n"},
  {"SetElementVariableTruthTable", PyvtkModelMetadata_SetElementVariableTruthTable, METH_VARARGS,
   "V.SetElementVariableTruthTable([int, ...])\nC++: void SetElementVariableTruthTable(int *)\n\nA truth table indicating which element variables are defined for\nwhich blocks. The variables are all the original element\nvariables that were in the file. The table is by block ID and\nwithin block ID by variable.\n"},
  {"GetElementVariableTruthTable", PyvtkModelMetadata_GetElementVariableTruthTable, METH_VARARGS,
   "V.GetElementVariableTruthTable() -> (int, ...)\nC++: int *GetElementVariableTruthTable()\n\n"},
  {"SetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_SetAllVariablesDefinedInAllBlocks, METH_VARARGS,
   "V.SetAllVariablesDefinedInAllBlocks(int)\nC++: virtual void SetAllVariablesDefinedInAllBlocks(\n    vtkTypeBool _arg)\n\nInstead of a truth table of all \"1\"s, you can set this instance\nvariable to indicate that all variables are defined in all\nblocks.\n"},
  {"AllVariablesDefinedInAllBlocksOn", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOn, METH_VARARGS,
   "V.AllVariablesDefinedInAllBlocksOn()\nC++: virtual void AllVariablesDefinedInAllBlocksOn()\n\nInstead of a truth table of all \"1\"s, you can set this instance\nvariable to indicate that all variables are defined in all\nblocks.\n"},
  {"AllVariablesDefinedInAllBlocksOff", PyvtkModelMetadata_AllVariablesDefinedInAllBlocksOff, METH_VARARGS,
   "V.AllVariablesDefinedInAllBlocksOff()\nC++: virtual void AllVariablesDefinedInAllBlocksOff()\n\nInstead of a truth table of all \"1\"s, you can set this instance\nvariable to indicate that all variables are defined in all\nblocks.\n"},
  {"GetAllVariablesDefinedInAllBlocks", PyvtkModelMetadata_GetAllVariablesDefinedInAllBlocks, METH_VARARGS,
   "V.GetAllVariablesDefinedInAllBlocks() -> int\nC++: vtkTypeBool GetAllVariablesDefinedInAllBlocks()\n\nInstead of a truth table of all \"1\"s, you can set this instance\nvariable to indicate that all variables are defined in all\nblocks.\n"},
  {"GetOriginalNumberOfElementVariables", PyvtkModelMetadata_GetOriginalNumberOfElementVariables, METH_VARARGS,
   "V.GetOriginalNumberOfElementVariables() -> int\nC++: int GetOriginalNumberOfElementVariables()\n\nThe ModelMetadata object may contain these lists: o  the\nvariables in the original data file o  the variables created in\nthe u grid from those original variables o  a mapping from the\ngrid variable names to the original names o  a list of the number\nof components each grid variable has\n\n* (Example: Variables in Exodus II files are all scalars.  Some\n  are\n* combined by the ExodusReader into vector variables in the\n  grid.)\n\n* These methods return names of the original variables, the names\n* of the grid variables, a list of the number of components in\n* each grid variable, and a list of the index into the list of\n* original variable names where the original name of the first\n* component of a grid variable may be found.  The names of\n  subsequent\n* components would immediately follow the name of the first\n* component.\n"},
  {"GetNumberOfElementVariables", PyvtkModelMetadata_GetNumberOfElementVariables, METH_VARARGS,
   "V.GetNumberOfElementVariables() -> int\nC++: int GetNumberOfElementVariables()\n\n"},
  {"GetElementVariableNumberOfComponents", PyvtkModelMetadata_GetElementVariableNumberOfComponents, METH_VARARGS,
   "V.GetElementVariableNumberOfComponents() -> (int, ...)\nC++: int *GetElementVariableNumberOfComponents()\n\n"},
  {"GetMapToOriginalElementVariableNames", PyvtkModelMetadata_GetMapToOriginalElementVariableNames, METH_VARARGS,
   "V.GetMapToOriginalElementVariableNames() -> (int, ...)\nC++: int *GetMapToOriginalElementVariableNames()\n\n"},
  {"GetOriginalNumberOfNodeVariables", PyvtkModelMetadata_GetOriginalNumberOfNodeVariables, METH_VARARGS,
   "V.GetOriginalNumberOfNodeVariables() -> int\nC++: int GetOriginalNumberOfNodeVariables()\n\n"},
  {"GetNumberOfNodeVariables", PyvtkModelMetadata_GetNumberOfNodeVariables, METH_VARARGS,
   "V.GetNumberOfNodeVariables() -> int\nC++: int GetNumberOfNodeVariables()\n\n"},
  {"GetNodeVariableNumberOfComponents", PyvtkModelMetadata_GetNodeVariableNumberOfComponents, METH_VARARGS,
   "V.GetNodeVariableNumberOfComponents() -> (int, ...)\nC++: int *GetNodeVariableNumberOfComponents()\n\n"},
  {"GetMapToOriginalNodeVariableNames", PyvtkModelMetadata_GetMapToOriginalNodeVariableNames, METH_VARARGS,
   "V.GetMapToOriginalNodeVariableNames() -> (int, ...)\nC++: int *GetMapToOriginalNodeVariableNames()\n\n"},
  {"FreeAllGlobalData", PyvtkModelMetadata_FreeAllGlobalData, METH_VARARGS,
   "V.FreeAllGlobalData()\nC++: void FreeAllGlobalData()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeAllLocalData", PyvtkModelMetadata_FreeAllLocalData, METH_VARARGS,
   "V.FreeAllLocalData()\nC++: void FreeAllLocalData()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeBlockDependentData", PyvtkModelMetadata_FreeBlockDependentData, METH_VARARGS,
   "V.FreeBlockDependentData()\nC++: void FreeBlockDependentData()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeOriginalElementVariableNames", PyvtkModelMetadata_FreeOriginalElementVariableNames, METH_VARARGS,
   "V.FreeOriginalElementVariableNames()\nC++: void FreeOriginalElementVariableNames()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeOriginalNodeVariableNames", PyvtkModelMetadata_FreeOriginalNodeVariableNames, METH_VARARGS,
   "V.FreeOriginalNodeVariableNames()\nC++: void FreeOriginalNodeVariableNames()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeUsedElementVariableNames", PyvtkModelMetadata_FreeUsedElementVariableNames, METH_VARARGS,
   "V.FreeUsedElementVariableNames()\nC++: void FreeUsedElementVariableNames()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeUsedNodeVariableNames", PyvtkModelMetadata_FreeUsedNodeVariableNames, METH_VARARGS,
   "V.FreeUsedNodeVariableNames()\nC++: void FreeUsedNodeVariableNames()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeUsedElementVariables", PyvtkModelMetadata_FreeUsedElementVariables, METH_VARARGS,
   "V.FreeUsedElementVariables()\nC++: void FreeUsedElementVariables()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"FreeUsedNodeVariables", PyvtkModelMetadata_FreeUsedNodeVariables, METH_VARARGS,
   "V.FreeUsedNodeVariables()\nC++: void FreeUsedNodeVariables()\n\nFree selected portions of the metadata when updating values in\nthe vtkModelMetadata object.  Resetting a particular field, (i.e.\nSetNodeSetIds) frees the previous setting, but if you are not\nsetting every field, you may want to do a wholesale \"Free\" first.\n\n* FreeAllGlobalData frees all the fields which don't depend on\n* which time step, which blocks, or which variables are in the\n  input.\n* FreeAllLocalData frees all the fields which do depend on which\n* time step, blocks or variables are in the input.\n* FreeBlockDependentData frees all metadata fields which depend\n  on\n* which blocks were read in.\n"},
  {"Reset", PyvtkModelMetadata_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nSet the object back to it's initial state\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkModelMetadata_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExodusPython.vtkModelMetadata", // tp_name
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
  PyvtkModelMetadata_Doc, // tp_doc
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

static vtkObjectBase *PyvtkModelMetadata_StaticNew()
{
  return vtkModelMetadata::New();
}

PyObject *PyvtkModelMetadata_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkModelMetadata_Type, PyvtkModelMetadata_Methods,
    "vtkModelMetadata",
 &PyvtkModelMetadata_StaticNew);

  PyTypeObject *pytype = &PyvtkModelMetadata_Type;

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

void PyVTKAddFile_vtkModelMetadata(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkModelMetadata_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkModelMetadata", o) != 0)
  {
    Py_DECREF(o);
  }

}

