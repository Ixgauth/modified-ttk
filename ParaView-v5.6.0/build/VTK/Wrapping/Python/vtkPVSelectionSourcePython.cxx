// python wrapper for vtkPVSelectionSource
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
#include "vtkPVSelectionSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVSelectionSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVSelectionSource_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkPVSelectionSource_Doc =
  "vtkPVSelectionSource - selection source used to produce different\ntypes of vtkSelections.\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkPVSelectionSource is used to create different types of selections.\n"
  "It provides different APIs for different types of selections to\n"
  "create. The output selection type depends on the API used most\n"
  "recently.\n\n";


static PyObject *
PyvtkPVSelectionSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVSelectionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVSelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVSelectionSource *tempr = vtkPVSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVSelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVSelectionSource::NewInstance());

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
PyvtkPVSelectionSource_AddFrustum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  const size_t size0 = 32;
  double temp0[32];
  double save0[32];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddFrustum(temp0);
    }
    else
    {
      op->vtkPVSelectionSource::AddFrustum(temp0);
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
PyvtkPVSelectionSource_AddGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddGlobalID(temp0);
    }
    else
    {
      op->vtkPVSelectionSource::AddGlobalID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllGlobalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllGlobalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllGlobalIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllGlobalIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  const char *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddPedigreeID(temp0, temp1);
    }
    else
    {
      op->vtkPVSelectionSource::AddPedigreeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllPedigreeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPedigreeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPedigreeIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllPedigreeIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddPedigreeStringID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPedigreeStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddPedigreeStringID(temp0, temp1);
    }
    else
    {
      op->vtkPVSelectionSource::AddPedigreeStringID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllPedigreeStringIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPedigreeStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPedigreeStringIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllPedigreeStringIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddCompositeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCompositeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  unsigned int temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddCompositeID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSelectionSource::AddCompositeID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllCompositeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCompositeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCompositeIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllCompositeIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddHierarhicalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddHierarhicalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddHierarhicalID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVSelectionSource::AddHierarhicalID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllHierarchicalIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllHierarchicalIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllHierarchicalIDs();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllHierarchicalIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllThresholds();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllThresholds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlocks();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllBlocks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::AddLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocations();
    }
    else
    {
      op->vtkPVSelectionSource::RemoveAllLocations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkPVSelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetContainingCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkPVSelectionSource::GetContainingCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkPVSelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

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
      op->vtkPVSelectionSource::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVSelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVSelectionSource *op = static_cast<vtkPVSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkPVSelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVSelectionSource_Methods[] = {
  {"IsTypeOf", PyvtkPVSelectionSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVSelectionSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVSelectionSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVSelectionSource\nC++: static vtkPVSelectionSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVSelectionSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVSelectionSource\nC++: vtkPVSelectionSource *NewInstance()\n\n"},
  {"AddFrustum", PyvtkPVSelectionSource_AddFrustum, METH_VARARGS,
   "V.AddFrustum([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void AddFrustum(double vertices[32])\n\nSet a frustum to choose within.\n"},
  {"AddGlobalID", PyvtkPVSelectionSource_AddGlobalID, METH_VARARGS,
   "V.AddGlobalID(int)\nC++: void AddGlobalID(vtkIdType id)\n\nAdd global IDs.\n"},
  {"RemoveAllGlobalIDs", PyvtkPVSelectionSource_RemoveAllGlobalIDs, METH_VARARGS,
   "V.RemoveAllGlobalIDs()\nC++: void RemoveAllGlobalIDs()\n\nAdd global IDs.\n"},
  {"AddPedigreeID", PyvtkPVSelectionSource_AddPedigreeID, METH_VARARGS,
   "V.AddPedigreeID(string, int)\nC++: void AddPedigreeID(const char *domain, vtkIdType id)\n\nAdd integer pedigree IDs in a particular domain.\n"},
  {"RemoveAllPedigreeIDs", PyvtkPVSelectionSource_RemoveAllPedigreeIDs, METH_VARARGS,
   "V.RemoveAllPedigreeIDs()\nC++: void RemoveAllPedigreeIDs()\n\nAdd integer pedigree IDs in a particular domain.\n"},
  {"AddPedigreeStringID", PyvtkPVSelectionSource_AddPedigreeStringID, METH_VARARGS,
   "V.AddPedigreeStringID(string, string)\nC++: void AddPedigreeStringID(const char *domain, const char *id)\n\nAdd string pedigree IDs in a particular domain.\n"},
  {"RemoveAllPedigreeStringIDs", PyvtkPVSelectionSource_RemoveAllPedigreeStringIDs, METH_VARARGS,
   "V.RemoveAllPedigreeStringIDs()\nC++: void RemoveAllPedigreeStringIDs()\n\nAdd string pedigree IDs in a particular domain.\n"},
  {"AddID", PyvtkPVSelectionSource_AddID, METH_VARARGS,
   "V.AddID(int, int)\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {"RemoveAllIDs", PyvtkPVSelectionSource_RemoveAllIDs, METH_VARARGS,
   "V.RemoveAllIDs()\nC++: void RemoveAllIDs()\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {"AddCompositeID", PyvtkPVSelectionSource_AddCompositeID, METH_VARARGS,
   "V.AddCompositeID(int, int, int)\nC++: void AddCompositeID(unsigned int composite_index,\n    vtkIdType piece, vtkIdType id)\n\nAdd IDs that will be added to the selection produced by the\nselection source. The source will generate only the ids for which\npiece == UPDATE_PIECE_NUMBER. If piece == -1, the id applies to\nall pieces.\n"},
  {"RemoveAllCompositeIDs", PyvtkPVSelectionSource_RemoveAllCompositeIDs, METH_VARARGS,
   "V.RemoveAllCompositeIDs()\nC++: void RemoveAllCompositeIDs()\n\nAdd IDs that will be added to the selection produced by the\nselection source. The source will generate only the ids for which\npiece == UPDATE_PIECE_NUMBER. If piece == -1, the id applies to\nall pieces.\n"},
  {"AddHierarhicalID", PyvtkPVSelectionSource_AddHierarhicalID, METH_VARARGS,
   "V.AddHierarhicalID(int, int, int)\nC++: void AddHierarhicalID(unsigned int level,\n    unsigned int dataset, vtkIdType id)\n\nThe list of IDs that will be added to the selection produced by\nthe selection source.\n"},
  {"RemoveAllHierarchicalIDs", PyvtkPVSelectionSource_RemoveAllHierarchicalIDs, METH_VARARGS,
   "V.RemoveAllHierarchicalIDs()\nC++: void RemoveAllHierarchicalIDs()\n\nThe list of IDs that will be added to the selection produced by\nthe selection source.\n"},
  {"AddThreshold", PyvtkPVSelectionSource_AddThreshold, METH_VARARGS,
   "V.AddThreshold(float, float)\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {"RemoveAllThresholds", PyvtkPVSelectionSource_RemoveAllThresholds, METH_VARARGS,
   "V.RemoveAllThresholds()\nC++: void RemoveAllThresholds()\n\nAdd a value range to threshold within.\n"},
  {"AddBlock", PyvtkPVSelectionSource_AddBlock, METH_VARARGS,
   "V.AddBlock(int)\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {"RemoveAllBlocks", PyvtkPVSelectionSource_RemoveAllBlocks, METH_VARARGS,
   "V.RemoveAllBlocks()\nC++: void RemoveAllBlocks()\n\nAdd the flat-index/composite index for a block.\n"},
  {"SetArrayName", PyvtkPVSelectionSource_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: void SetArrayName(const char *arrayName)\n\nFor threshold and value selection, this controls the name of the\nscalar array that will be thresholded within.\n"},
  {"AddLocation", PyvtkPVSelectionSource_AddLocation, METH_VARARGS,
   "V.AddLocation(float, float, float)\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {"RemoveAllLocations", PyvtkPVSelectionSource_RemoveAllLocations, METH_VARARGS,
   "V.RemoveAllLocations()\nC++: void RemoveAllLocations()\n\nAdd a point in world space to probe at.\n"},
  {"SetFieldType", PyvtkPVSelectionSource_SetFieldType, METH_VARARGS,
   "V.SetFieldType(int)\nC++: virtual void SetFieldType(int _arg)\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {"GetFieldType", PyvtkPVSelectionSource_GetFieldType, METH_VARARGS,
   "V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nSet the field type for the generated selection. Possible values\nare as defined by vtkSelection::SelectionField.\n"},
  {"SetContainingCells", PyvtkPVSelectionSource_SetContainingCells, METH_VARARGS,
   "V.SetContainingCells(int)\nC++: virtual void SetContainingCells(int _arg)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {"GetContainingCells", PyvtkPVSelectionSource_GetContainingCells, METH_VARARGS,
   "V.GetContainingCells() -> int\nC++: virtual int GetContainingCells()\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n"},
  {"SetInverse", PyvtkPVSelectionSource_SetInverse, METH_VARARGS,
   "V.SetInverse(int)\nC++: virtual void SetInverse(int _arg)\n\n"},
  {"GetInverse", PyvtkPVSelectionSource_GetInverse, METH_VARARGS,
   "V.GetInverse() -> int\nC++: virtual int GetInverse()\n\n"},
  {"SetQueryString", PyvtkPVSelectionSource_SetQueryString, METH_VARARGS,
   "V.SetQueryString(string)\nC++: virtual void SetQueryString(const char *_arg)\n\nSet/get the query expression string.\n"},
  {"GetQueryString", PyvtkPVSelectionSource_GetQueryString, METH_VARARGS,
   "V.GetQueryString() -> string\nC++: virtual char *GetQueryString()\n\nSet/get the query expression string.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVSelectionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVSelectionSource", // tp_name
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
  PyvtkPVSelectionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVSelectionSource_StaticNew()
{
  return vtkPVSelectionSource::New();
}

PyObject *PyvtkPVSelectionSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVSelectionSource_Type, PyvtkPVSelectionSource_Methods,
    "vtkPVSelectionSource",
 &PyvtkPVSelectionSource_StaticNew);

  PyTypeObject *pytype = &PyvtkPVSelectionSource_Type;

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

void PyVTKAddFile_vtkPVSelectionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVSelectionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVSelectionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

