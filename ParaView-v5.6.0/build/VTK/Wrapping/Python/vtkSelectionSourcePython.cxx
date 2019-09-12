// python wrapper for vtkSelectionSource
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
#include "vtkSelectionSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectionSource_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkSelectionSource_Doc =
  "vtkSelectionSource - Generate selection from given set of ids\nvtkSelectionSource generates a vtkSelection from a set of (piece id,\ncell id) pairs.\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "It will only generate the selection values that match\n"
  "UPDATE_PIECE_NUMBER (i.e. piece == UPDATE_PIECE_NUMBER).\n\n"
  "User-supplied, application-specific selections (with a ContentType of\n"
  "vtkSelectionNode::USER) are not supported.\n\n";


static PyObject *
PyvtkSelectionSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionSource *tempr = vtkSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionSource::NewInstance());

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
PyvtkSelectionSource_AddID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddID(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddStringID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddStringID(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddStringID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionSource::AddLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddThreshold(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFrustum(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetFrustum(temp0);
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
PyvtkSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddBlock(temp0);
    }
    else
    {
      op->vtkSelectionSource::AddBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIDs();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllStringIDs();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllStringIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllThresholds();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllThresholds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocations();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllLocations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlocks();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllBlocks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentType(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetContentType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionSource::GetContentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainingCells(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetContainingCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkSelectionSource::GetContainingCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkSelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkSelectionSource::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSelectionSource::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIndex(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex() :
      op->vtkSelectionSource::GetCompositeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalLevel(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel() :
      op->vtkSelectionSource::GetHierarchicalLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalIndex(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex() :
      op->vtkSelectionSource::GetHierarchicalIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQueryString(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionSource_Methods[] = {
  {"IsTypeOf", PyvtkSelectionSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectionSource\nC++: static vtkSelectionSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectionSource\nC++: vtkSelectionSource *NewInstance()\n\n"},
  {"AddID", PyvtkSelectionSource_AddID, METH_VARARGS,
   "V.AddID(int, int)\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {"AddStringID", PyvtkSelectionSource_AddStringID, METH_VARARGS,
   "V.AddStringID(int, string)\nC++: void AddStringID(vtkIdType piece, const char *id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {"AddLocation", PyvtkSelectionSource_AddLocation, METH_VARARGS,
   "V.AddLocation(float, float, float)\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {"AddThreshold", PyvtkSelectionSource_AddThreshold, METH_VARARGS,
   "V.AddThreshold(float, float)\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {"SetFrustum", PyvtkSelectionSource_SetFrustum, METH_VARARGS,
   "V.SetFrustum([float, ...])\nC++: void SetFrustum(double *vertices)\n\nSet a frustum to choose within.\n"},
  {"AddBlock", PyvtkSelectionSource_AddBlock, METH_VARARGS,
   "V.AddBlock(int)\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {"RemoveAllIDs", PyvtkSelectionSource_RemoveAllIDs, METH_VARARGS,
   "V.RemoveAllIDs()\nC++: void RemoveAllIDs()\n\nRemoves all IDs.\n"},
  {"RemoveAllStringIDs", PyvtkSelectionSource_RemoveAllStringIDs, METH_VARARGS,
   "V.RemoveAllStringIDs()\nC++: void RemoveAllStringIDs()\n\nRemoves all IDs.\n"},
  {"RemoveAllThresholds", PyvtkSelectionSource_RemoveAllThresholds, METH_VARARGS,
   "V.RemoveAllThresholds()\nC++: void RemoveAllThresholds()\n\nRemove all thresholds added with AddThreshold.\n"},
  {"RemoveAllLocations", PyvtkSelectionSource_RemoveAllLocations, METH_VARARGS,
   "V.RemoveAllLocations()\nC++: void RemoveAllLocations()\n\nRemove all locations added with AddLocation.\n"},
  {"RemoveAllBlocks", PyvtkSelectionSource_RemoveAllBlocks, METH_VARARGS,
   "V.RemoveAllBlocks()\nC++: void RemoveAllBlocks()\n\nRemove all blocks added with AddBlock.\n"},
  {"SetContentType", PyvtkSelectionSource_SetContentType, METH_VARARGS,
   "V.SetContentType(int)\nC++: virtual void SetContentType(int _arg)\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {"GetContentType", PyvtkSelectionSource_GetContentType, METH_VARARGS,
   "V.GetContentType() -> int\nC++: virtual int GetContentType()\n\nSet the content type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionContent.\n"},
  {"SetFieldType", PyvtkSelectionSource_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {"GetFieldType", PyvtkSelectionSource_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {"SetContainingCells", PyvtkSelectionSource_SetContainingCells, METH_VARARGS,
   "V.SetContainingCells(int)\nC++: virtual void SetContainingCells(int _arg)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {"GetContainingCells", PyvtkSelectionSource_GetContainingCells, METH_VARARGS,
   "V.GetContainingCells() -> int\nC++: virtual int GetContainingCells()\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {"SetInverse", PyvtkSelectionSource_SetInverse, METH_VARARGS,
   "V.SetInverse(int)\nC++: virtual void SetInverse(int _arg)\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {"GetInverse", PyvtkSelectionSource_GetInverse, METH_VARARGS,
   "V.GetInverse() -> int\nC++: virtual int GetInverse()\n\nDetermines whether the selection describes what to include or\nexclude. Default is 0, meaning include.\n"},
  {"SetArrayName", PyvtkSelectionSource_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nAccess to the name of the selection's subset description array.\n"},
  {"GetArrayName", PyvtkSelectionSource_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nAccess to the name of the selection's subset description array.\n"},
  {"SetArrayComponent", PyvtkSelectionSource_SetArrayComponent, METH_VARARGS,
   "V.SetArrayComponent(int)\nC++: virtual void SetArrayComponent(int _arg)\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {"GetArrayComponent", PyvtkSelectionSource_GetArrayComponent, METH_VARARGS,
   "V.GetArrayComponent() -> int\nC++: virtual int GetArrayComponent()\n\nAccess to the component number for the array specified by\nArrayName. Default is component 0. Use -1 for magnitude.\n"},
  {"SetCompositeIndex", PyvtkSelectionSource_SetCompositeIndex, METH_VARARGS,
   "V.SetCompositeIndex(int)\nC++: virtual void SetCompositeIndex(int _arg)\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {"GetCompositeIndex", PyvtkSelectionSource_GetCompositeIndex, METH_VARARGS,
   "V.GetCompositeIndex() -> int\nC++: virtual int GetCompositeIndex()\n\nIf CompositeIndex < 0 then COMPOSITE_INDEX() is not added to the\noutput.\n"},
  {"SetHierarchicalLevel", PyvtkSelectionSource_SetHierarchicalLevel, METH_VARARGS,
   "V.SetHierarchicalLevel(int)\nC++: virtual void SetHierarchicalLevel(int _arg)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {"GetHierarchicalLevel", PyvtkSelectionSource_GetHierarchicalLevel, METH_VARARGS,
   "V.GetHierarchicalLevel() -> int\nC++: virtual int GetHierarchicalLevel()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {"SetHierarchicalIndex", PyvtkSelectionSource_SetHierarchicalIndex, METH_VARARGS,
   "V.SetHierarchicalIndex(int)\nC++: virtual void SetHierarchicalIndex(int _arg)\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {"GetHierarchicalIndex", PyvtkSelectionSource_GetHierarchicalIndex, METH_VARARGS,
   "V.GetHierarchicalIndex() -> int\nC++: virtual int GetHierarchicalIndex()\n\nIf HierarchicalLevel or HierarchicalIndex < 0 , then\nHIERARCHICAL_LEVEL() and HIERARCHICAL_INDEX() keys are not added\nto the output.\n"},
  {"SetQueryString", PyvtkSelectionSource_SetQueryString, METH_VARARGS,
   "V.SetQueryString(string)\nC++: virtual void SetQueryString(const char *_arg)\n\nSet/Get the query expression string.\n"},
  {"GetQueryString", PyvtkSelectionSource_GetQueryString, METH_VARARGS,
   "V.GetQueryString() -> string\nC++: virtual char *GetQueryString()\n\nSet/Get the query expression string.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkSelectionSource", // tp_name
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
  PyvtkSelectionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionSource_StaticNew()
{
  return vtkSelectionSource::New();
}

PyObject *PyvtkSelectionSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectionSource_Type, PyvtkSelectionSource_Methods,
    "vtkSelectionSource",
 &PyvtkSelectionSource_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectionSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelectionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

