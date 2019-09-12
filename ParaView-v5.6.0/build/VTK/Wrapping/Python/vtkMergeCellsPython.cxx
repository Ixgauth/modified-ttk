// python wrapper for vtkMergeCells
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
#include "vtkMergeCells.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeCells(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeCells_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMergeCells_Doc =
  "vtkMergeCells - merges any number of vtkDataSets back into a single\n  vtkUnstructuredGrid\n\n"
  "Superclass: vtkObject\n\n"
  "Designed to work with distributed vtkDataSets, this class will take\n"
  "   vtkDataSets and merge them back into a single vtkUnstructuredGrid.\n\n\n"
  "   The vtkPoints object of the unstructured grid will have data type\n"
  "   VTK_FLOAT, regardless of the data type of the points of the\n"
  "   input vtkDataSets.  If this is a problem, someone must let me\n"
  "know.\n\n\n"
  "   It is assumed the different DataSets have the same field arrays. \n"
  "If\n"
  "   the name of a global point ID array is provided, this class will\n"
  "   refrain from including duplicate points in the merged Ugrid.  This\n"
  "   class differs from vtkAppendFilter in these ways: (1) it uses less\n"
  "   memory than that class (which uses memory equal to twice the size\n"
  "   of the final Ugrid) but requires that you know the size of the\n"
  "   final Ugrid in advance (2) this class assumes the individual\n"
  "DataSets have\n"
  "   the same field arrays, while vtkAppendFilter intersects the field\n"
  "   arrays (3) this class knows duplicate points may be appearing in\n"
  "   the DataSets and can filter those out, (4) this class is not a\n"
  "filter.\n\n";


static PyObject *
PyvtkMergeCells_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeCells *tempr = vtkMergeCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeCells::NewInstance());

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
PyvtkMergeCells_SetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->SetUnstructuredGrid(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUnstructuredGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGrid() :
      op->vtkMergeCells::GetUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfCells(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfCells() :
      op->vtkMergeCells::GetTotalNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfPoints() :
      op->vtkMergeCells::GetTotalNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalIds(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUseGlobalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalIds() :
      op->vtkMergeCells::GetUseGlobalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMergeTolerance(temp0);
    }
    else
    {
      op->vtkMergeCells::SetPointMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMinValue() :
      op->vtkMergeCells::GetPointMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMaxValue() :
      op->vtkMergeCells::GetPointMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointMergeTolerance() :
      op->vtkMergeCells::GetPointMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalCellIds(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUseGlobalCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalCellIds() :
      op->vtkMergeCells::GetUseGlobalCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeDuplicatePoints(temp0);
    }
    else
    {
      op->vtkMergeCells::SetMergeDuplicatePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergeDuplicatePoints() :
      op->vtkMergeCells::GetMergeDuplicatePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOn();
    }
    else
    {
      op->vtkMergeCells::MergeDuplicatePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOff();
    }
    else
    {
      op->vtkMergeCells::MergeDuplicatePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfDataSets(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfDataSets() :
      op->vtkMergeCells::GetTotalNumberOfDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    int tempr = (ap.IsBound() ?
      op->MergeDataSet(temp0) :
      op->vtkMergeCells::MergeDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finish();
    }
    else
    {
      op->vtkMergeCells::Finish();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeCells_Methods[] = {
  {"IsTypeOf", PyvtkMergeCells_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeCells_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeCells_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeCells\nC++: static vtkMergeCells *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeCells_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeCells\nC++: vtkMergeCells *NewInstance()\n\n"},
  {"SetUnstructuredGrid", PyvtkMergeCells_SetUnstructuredGrid, METH_VARARGS,
   "V.SetUnstructuredGrid(vtkUnstructuredGrid)\nC++: virtual void SetUnstructuredGrid(vtkUnstructuredGrid *)\n\nSet the vtkUnstructuredGrid object that will become the union of\nthe DataSets specified in MergeDataSet calls. vtkMergeCells\nassumes this grid is empty at first.\n"},
  {"GetUnstructuredGrid", PyvtkMergeCells_GetUnstructuredGrid, METH_VARARGS,
   "V.GetUnstructuredGrid() -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetUnstructuredGrid()\n\n"},
  {"SetTotalNumberOfCells", PyvtkMergeCells_SetTotalNumberOfCells, METH_VARARGS,
   "V.SetTotalNumberOfCells(int)\nC++: virtual void SetTotalNumberOfCells(vtkIdType _arg)\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid. Make this call before any call to\nMergeDataSet().\n"},
  {"GetTotalNumberOfCells", PyvtkMergeCells_GetTotalNumberOfCells, METH_VARARGS,
   "V.GetTotalNumberOfCells() -> int\nC++: virtual vtkIdType GetTotalNumberOfCells()\n\n"},
  {"SetTotalNumberOfPoints", PyvtkMergeCells_SetTotalNumberOfPoints, METH_VARARGS,
   "V.SetTotalNumberOfPoints(int)\nC++: virtual void SetTotalNumberOfPoints(vtkIdType _arg)\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid Make this call before any call to\nMergeDataSet().  This is an upper bound, since some points may be\nduplicates.\n"},
  {"GetTotalNumberOfPoints", PyvtkMergeCells_GetTotalNumberOfPoints, METH_VARARGS,
   "V.GetTotalNumberOfPoints() -> int\nC++: virtual vtkIdType GetTotalNumberOfPoints()\n\n"},
  {"SetUseGlobalIds", PyvtkMergeCells_SetUseGlobalIds, METH_VARARGS,
   "V.SetUseGlobalIds(int)\nC++: virtual void SetUseGlobalIds(int _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  This is done most efficiently if a global point ID\nfield array is available.  Set the name of the point array if you\nhave one.\n"},
  {"GetUseGlobalIds", PyvtkMergeCells_GetUseGlobalIds, METH_VARARGS,
   "V.GetUseGlobalIds() -> int\nC++: virtual int GetUseGlobalIds()\n\n"},
  {"SetPointMergeTolerance", PyvtkMergeCells_SetPointMergeTolerance, METH_VARARGS,
   "V.SetPointMergeTolerance(float)\nC++: virtual void SetPointMergeTolerance(float _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  If no global point ID field array name is provided,\nit will use a point locator to find duplicate points.  You can\nset a tolerance for that locator here.  The default tolerance is\n10e-4.\n"},
  {"GetPointMergeToleranceMinValue", PyvtkMergeCells_GetPointMergeToleranceMinValue, METH_VARARGS,
   "V.GetPointMergeToleranceMinValue() -> float\nC++: virtual float GetPointMergeToleranceMinValue()\n\n"},
  {"GetPointMergeToleranceMaxValue", PyvtkMergeCells_GetPointMergeToleranceMaxValue, METH_VARARGS,
   "V.GetPointMergeToleranceMaxValue() -> float\nC++: virtual float GetPointMergeToleranceMaxValue()\n\n"},
  {"GetPointMergeTolerance", PyvtkMergeCells_GetPointMergeTolerance, METH_VARARGS,
   "V.GetPointMergeTolerance() -> float\nC++: virtual float GetPointMergeTolerance()\n\n"},
  {"SetUseGlobalCellIds", PyvtkMergeCells_SetUseGlobalCellIds, METH_VARARGS,
   "V.SetUseGlobalCellIds(int)\nC++: virtual void SetUseGlobalCellIds(int _arg)\n\nvtkMergeCells will detect and filter out duplicate cells if you\nprovide it the name of a global cell ID array.\n"},
  {"GetUseGlobalCellIds", PyvtkMergeCells_GetUseGlobalCellIds, METH_VARARGS,
   "V.GetUseGlobalCellIds() -> int\nC++: virtual int GetUseGlobalCellIds()\n\n"},
  {"SetMergeDuplicatePoints", PyvtkMergeCells_SetMergeDuplicatePoints, METH_VARARGS,
   "V.SetMergeDuplicatePoints(int)\nC++: virtual void SetMergeDuplicatePoints(vtkTypeBool _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  If for some reason you don't want it to do this, than\nMergeDuplicatePointsOff().\n"},
  {"GetMergeDuplicatePoints", PyvtkMergeCells_GetMergeDuplicatePoints, METH_VARARGS,
   "V.GetMergeDuplicatePoints() -> int\nC++: virtual vtkTypeBool GetMergeDuplicatePoints()\n\n"},
  {"MergeDuplicatePointsOn", PyvtkMergeCells_MergeDuplicatePointsOn, METH_VARARGS,
   "V.MergeDuplicatePointsOn()\nC++: virtual void MergeDuplicatePointsOn()\n\n"},
  {"MergeDuplicatePointsOff", PyvtkMergeCells_MergeDuplicatePointsOff, METH_VARARGS,
   "V.MergeDuplicatePointsOff()\nC++: virtual void MergeDuplicatePointsOff()\n\n"},
  {"SetTotalNumberOfDataSets", PyvtkMergeCells_SetTotalNumberOfDataSets, METH_VARARGS,
   "V.SetTotalNumberOfDataSets(int)\nC++: virtual void SetTotalNumberOfDataSets(int _arg)\n\nWe need to know the number of different data sets that will be\nmerged into one so we can pre-allocate some arrays. This can be\nan upper bound, not necessarily exact.\n"},
  {"GetTotalNumberOfDataSets", PyvtkMergeCells_GetTotalNumberOfDataSets, METH_VARARGS,
   "V.GetTotalNumberOfDataSets() -> int\nC++: virtual int GetTotalNumberOfDataSets()\n\n"},
  {"MergeDataSet", PyvtkMergeCells_MergeDataSet, METH_VARARGS,
   "V.MergeDataSet(vtkDataSet) -> int\nC++: int MergeDataSet(vtkDataSet *set)\n\nProvide a DataSet to be merged in to the final UnstructuredGrid.\nThis call returns after the merge has completed.  Be sure to call\nSetTotalNumberOfCells, SetTotalNumberOfPoints, and\nSetTotalNumberOfDataSets before making this call.  Return 0 if\nOK, -1 if error.\n"},
  {"Finish", PyvtkMergeCells_Finish, METH_VARARGS,
   "V.Finish()\nC++: void Finish()\n\nCall Finish() after merging last DataSet to free unneeded memory\nand to make sure the ugrid's GetNumberOfPoints() reflects the\nactual number of points set, not the number allocated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkMergeCells", // tp_name
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
  PyvtkMergeCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeCells_StaticNew()
{
  return vtkMergeCells::New();
}

PyObject *PyvtkMergeCells_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeCells_Type, PyvtkMergeCells_Methods,
    "vtkMergeCells",
 &PyvtkMergeCells_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeCells_Type;

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

void PyVTKAddFile_vtkMergeCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeCells", o) != 0)
  {
    Py_DECREF(o);
  }

}

