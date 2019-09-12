// python wrapper for vtkHyperTreeGrid
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
#include "vtkHyperTreeGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGrid_ClassNew(); }

#ifndef DECLARED_PyvtkDataSet_ClassNew
extern "C" { PyObject *PyvtkDataSet_ClassNew(); }
#define DECLARED_PyvtkDataSet_ClassNew
#endif

static const char *PyvtkHyperTreeGrid_Doc =
  "vtkHyperTreeGrid - A dataset containing a grid of vtkHyperTree\ninstances arranged as a rectilinear grid.\n\n"
  "Superclass: vtkDataSet\n\n"
  "A hypertree grid is a dataset containing a rectilinear grid of root\n"
  "nodes, each of which can be refined as a vtkHyperTree grid. Each root\n"
  "node corresponds to a cell of the rectilinear grid. This organization\n"
  "of the root nodes allows for the definition of tree-based AMR grids\n"
  "that do not have uniform geometry. Some filters can be applied on\n"
  "this dataset: contour, outline, geometry.\n\n"
  "@warning\n"
  "It is not a spatial search object. If you are looking for this kind\n"
  "of octree see vtkCellLocator instead. Extent support is not finished\n"
  "yet.\n\n"
  "@sa\n"
  "vtkHyperTree vtkRectilinearGrid\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was\n"
  "rewritten by Philippe Pebay, 2016 This work was supported by\n"
  "Commissariat a l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGrid_LEVELS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "LEVELS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::LEVELS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DIMENSION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DIMENSION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::DIMENSION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_ORIENTATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIENTATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::ORIENTATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SIZES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SIZES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkHyperTreeGrid::SIZES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGrid::NewInstance());

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
PyvtkHyperTreeGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkHyperTreeGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetGridSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  unsigned int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGridSize(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetGridSize(temp0);
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
PyvtkHyperTreeGrid_SetGridSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::SetGridSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_SetGridSize_s1(self, args);
    case 3:
      return PyvtkHyperTreeGrid_SetGridSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSize");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_GetGridSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetGridSize() :
      op->vtkHyperTreeGrid::GetGridSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetGridExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGridExtent(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetGridExtent(temp0);
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
PyvtkHyperTreeGrid_SetGridExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGrid::SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetGridExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_SetGridExtent_s1(self, args);
    case 6:
      return PyvtkHyperTreeGrid_SetGridExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridExtent");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransposedRootIndexing(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetTransposedRootIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGrid::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToKJI();
    }
    else
    {
      op->vtkHyperTreeGrid::SetIndexingModeToKJI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToIJK();
    }
    else
    {
      op->vtkHyperTreeGrid::SetIndexingModeToIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGrid::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkHyperTreeGrid::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchFactor(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetBranchFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGrid::GetBranchFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTrees() :
      op->vtkHyperTreeGrid::GetNumberOfTrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkHyperTreeGrid::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkHyperTreeGrid::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkHyperTreeGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkHyperTreeGrid::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLevels(temp0) :
      op->vtkHyperTreeGrid::GetNumberOfLevels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHyperTreeGrid::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_GetNumberOfLevels_s1(self, args);
    case 0:
      return PyvtkHyperTreeGrid_GetNumberOfLevels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfLevels");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetXCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetXCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetXCoordinates() :
      op->vtkHyperTreeGrid::GetXCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetYCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetYCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetYCoordinates() :
      op->vtkHyperTreeGrid::GetYCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetZCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetZCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetZCoordinates() :
      op->vtkHyperTreeGrid::GetZCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetMaterialMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetMaterialMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMaterialMask() :
      op->vtkHyperTreeGrid::GetMaterialMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasMaterialMask() :
      op->vtkHyperTreeGrid::HasMaterialMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetMaterialMaskIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialMaskIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetMaterialMaskIndex(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetMaterialMaskIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaterialMaskIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialMaskIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetMaterialMaskIndex() :
      op->vtkHyperTreeGrid::GetMaterialMaskIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetHasInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasInterface(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetHasInterface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetHasInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasInterface() :
      op->vtkHyperTreeGrid::GetHasInterface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasInterfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInterfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasInterfaceOn();
    }
    else
    {
      op->vtkHyperTreeGrid::HasInterfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasInterfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInterfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasInterfaceOff();
    }
    else
    {
      op->vtkHyperTreeGrid::HasInterfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetInterfaceNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceNormalsName(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetInterfaceNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetInterfaceNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceNormalsName() :
      op->vtkHyperTreeGrid::GetInterfaceNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetInterfaceInterceptsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceInterceptsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceInterceptsName(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetInterfaceInterceptsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetInterfaceInterceptsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceInterceptsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceInterceptsName() :
      op->vtkHyperTreeGrid::GetInterfaceInterceptsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GenerateTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrees();
    }
    else
    {
      op->vtkHyperTreeGrid::GenerateTrees();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeCursor *tempr = (ap.IsBound() ?
      op->NewCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewCursor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewGridCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewGridCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->NewGridCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewGridCursor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewGeometricCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewGeometricCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->NewGeometricCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewGeometricCursor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewVonNeumannSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewVonNeumannSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->NewVonNeumannSuperCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewVonNeumannSuperCursor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewMooreSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewMooreSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridCursor *tempr = (ap.IsBound() ?
      op->NewMooreSuperCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewMooreSuperCursor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SubdivideLeaf(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::SubdivideLeaf(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkHyperTreeGrid::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::GetPoint(temp0, temp1);
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
PyvtkHyperTreeGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkHyperTreeGrid_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkHyperTreeGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkHyperTreeGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_GetCell_s1(self, args);
    case 3:
      return PyvtkHyperTreeGrid_GetCell_s2(self, args);
    case 2:
      return PyvtkHyperTreeGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkHyperTreeGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<vtkIdType> store2(2*size2);
  vtkIdType *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCellPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, size2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHyperTreeGrid_GetCellPoints_s1(self, args);
    case 3:
      return PyvtkHyperTreeGrid_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkHyperTreeGrid::FindPoint(temp0));

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
PyvtkHyperTreeGrid_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkIdType temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp5, save5, size5);
    ap.Save(temp6, save6, size6);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkHyperTreeGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  vtkIdType temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp6, save6, size6);
    ap.Save(temp7, save7, size7);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkHyperTreeGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (ap.HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (ap.HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkHyperTreeGrid_FindCell_s1(self, args);
    case 8:
      return PyvtkHyperTreeGrid_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkHyperTreeGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkHyperTreeGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree(temp0) :
      op->vtkHyperTreeGrid::GetTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  vtkHyperTree *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkHyperTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::SetTree(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkHyperTreeGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkHyperTreeGrid::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkHyperTreeGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGrid::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_RecursivelyInitializePureMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecursivelyInitializePureMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridCursor"))
  {
    bool tempr = (ap.IsBound() ?
      op->RecursivelyInitializePureMaterialMask(temp0) :
      op->vtkHyperTreeGrid::RecursivelyInitializePureMaterialMask(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetPureMaterialMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPureMaterialMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetPureMaterialMask() :
      op->vtkHyperTreeGrid::GetPureMaterialMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetChildMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetChildMask(temp0) :
      op->vtkHyperTreeGrid::GetChildMask(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetLevelZeroCoordinatesFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroCoordinatesFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetLevelZeroCoordinatesFromIndex(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGrid::GetLevelZeroCoordinatesFromIndex(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetIndexFromLevelZeroCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexFromLevelZeroCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetIndexFromLevelZeroCoordinates(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGrid::GetIndexFromLevelZeroCoordinates(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetShiftedLevelZeroIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftedLevelZeroIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkIdType temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetShiftedLevelZeroIndex(temp0, temp1, temp2, temp3) :
      op->vtkHyperTreeGrid::GetShiftedLevelZeroIndex(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGrid_GetData_Methods[] = {
  {nullptr, PyvtkHyperTreeGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkHyperTreeGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTreeGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTreeGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkHyperTreeGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkHyperTreeGrid_Methods[] = {
  {"LEVELS", PyvtkHyperTreeGrid_LEVELS, METH_VARARGS,
   "V.LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LEVELS()\n\n"},
  {"DIMENSION", PyvtkHyperTreeGrid_DIMENSION, METH_VARARGS,
   "V.DIMENSION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DIMENSION()\n\n"},
  {"ORIENTATION", PyvtkHyperTreeGrid_ORIENTATION, METH_VARARGS,
   "V.ORIENTATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIENTATION()\n\n"},
  {"SIZES", PyvtkHyperTreeGrid_SIZES, METH_VARARGS,
   "V.SIZES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SIZES()\n\n"},
  {"IsTypeOf", PyvtkHyperTreeGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkHyperTreeGrid_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkHyperTreeGrid_CopyStructure, METH_VARARGS,
   "V.CopyStructure(vtkDataSet)\nC++: void CopyStructure(vtkDataSet *) override;\n\nCopy the internal geometric and topological structure of a\nvtkHyperTreeGrid object.\n"},
  {"SetGridSize", PyvtkHyperTreeGrid_SetGridSize, METH_VARARGS,
   "V.SetGridSize([int, int, int])\nC++: void SetGridSize(unsigned int[3])\nV.SetGridSize(int, int, int)\nC++: void SetGridSize(unsigned int, unsigned int, unsigned int)\n\nSet/Get the number of local cells in each direction for the\nunderlying rectilinear grid dataset.\n"},
  {"GetGridSize", PyvtkHyperTreeGrid_GetGridSize, METH_VARARGS,
   "V.GetGridSize() -> (int, int, int)\nC++: unsigned int *GetGridSize()\n\n"},
  {"SetGridExtent", PyvtkHyperTreeGrid_SetGridExtent, METH_VARARGS,
   "V.SetGridExtent([int, int, int, int, int, int])\nC++: void SetGridExtent(int extent[6])\nV.SetGridExtent(int, int, int, int, int, int)\nC++: void SetGridExtent(int, int, int, int, int, int)\n\nSet/Get extent of the underlying rectilinear grid dataset. This\nis the local extent and is with respect to the points.\n"},
  {"SetTransposedRootIndexing", PyvtkHyperTreeGrid_SetTransposedRootIndexing, METH_VARARGS,
   "V.SetTransposedRootIndexing(bool)\nC++: virtual void SetTransposedRootIndexing(bool _arg)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"GetTransposedRootIndexing", PyvtkHyperTreeGrid_GetTransposedRootIndexing, METH_VARARGS,
   "V.GetTransposedRootIndexing() -> bool\nC++: virtual bool GetTransposedRootIndexing()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetIndexingModeToKJI", PyvtkHyperTreeGrid_SetIndexingModeToKJI, METH_VARARGS,
   "V.SetIndexingModeToKJI()\nC++: void SetIndexingModeToKJI()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetIndexingModeToIJK", PyvtkHyperTreeGrid_SetIndexingModeToIJK, METH_VARARGS,
   "V.SetIndexingModeToIJK()\nC++: void SetIndexingModeToIJK()\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"SetDimension", PyvtkHyperTreeGrid_SetDimension, METH_VARARGS,
   "V.SetDimension(int)\nC++: void SetDimension(unsigned int)\n\nSet/Get the dimensionality of the grid.\n"},
  {"GetDimension", PyvtkHyperTreeGrid_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual unsigned int GetDimension()\n\nSet/Get the dimensionality of the grid.\n"},
  {"SetOrientation", PyvtkHyperTreeGrid_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(unsigned int)\n\nSet/Get the orientation of 1D or 2D grids: . in 1D: 0, 1, 2 =\naligned along X, Y, Z axis . in 2D: 0, 1, 2 = normal to X, Y, Z\naxis NB: Not used in 3D\n"},
  {"GetOrientation", PyvtkHyperTreeGrid_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual unsigned int GetOrientation()\n\nSet/Get the orientation of 1D or 2D grids: . in 1D: 0, 1, 2 =\naligned along X, Y, Z axis . in 2D: 0, 1, 2 = normal to X, Y, Z\naxis NB: Not used in 3D\n"},
  {"SetBranchFactor", PyvtkHyperTreeGrid_SetBranchFactor, METH_VARARGS,
   "V.SetBranchFactor(int)\nC++: void SetBranchFactor(unsigned int)\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactor", PyvtkHyperTreeGrid_GetBranchFactor, METH_VARARGS,
   "V.GetBranchFactor() -> int\nC++: virtual unsigned int GetBranchFactor()\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetNumberOfTrees", PyvtkHyperTreeGrid_GetNumberOfTrees, METH_VARARGS,
   "V.GetNumberOfTrees() -> int\nC++: vtkIdType GetNumberOfTrees()\n\nReturn the number of trees in the level 0 grid.\n"},
  {"GetNumberOfVertices", PyvtkHyperTreeGrid_GetNumberOfVertices, METH_VARARGS,
   "V.GetNumberOfVertices() -> int\nC++: vtkIdType GetNumberOfVertices()\n\nGet the number of vertices in the primal tree grid.\n"},
  {"GetNumberOfLeaves", PyvtkHyperTreeGrid_GetNumberOfLeaves, METH_VARARGS,
   "V.GetNumberOfLeaves() -> int\nC++: vtkIdType GetNumberOfLeaves()\n\nGet the number of leaves in the primal tree grid.\n"},
  {"GetNumberOfCells", PyvtkHyperTreeGrid_GetNumberOfCells, METH_VARARGS,
   "V.GetNumberOfCells() -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nReturn the number of cells in the dual grid.\n"},
  {"GetNumberOfPoints", PyvtkHyperTreeGrid_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nReturn the number of points in the dual grid.\n"},
  {"GetNumberOfLevels", PyvtkHyperTreeGrid_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels(int) -> int\nC++: vtkIdType GetNumberOfLevels(vtkIdType)\nV.GetNumberOfLevels() -> int\nC++: vtkIdType GetNumberOfLevels()\n\nReturn the number of levels in an individual (primal) tree.\n"},
  {"SetXCoordinates", PyvtkHyperTreeGrid_SetXCoordinates, METH_VARARGS,
   "V.SetXCoordinates(vtkDataArray)\nC++: void SetXCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the x-direction.\n"},
  {"GetXCoordinates", PyvtkHyperTreeGrid_GetXCoordinates, METH_VARARGS,
   "V.GetXCoordinates() -> vtkDataArray\nC++: virtual vtkDataArray *GetXCoordinates()\n\nSet/Get the grid coordinates in the x-direction.\n"},
  {"SetYCoordinates", PyvtkHyperTreeGrid_SetYCoordinates, METH_VARARGS,
   "V.SetYCoordinates(vtkDataArray)\nC++: void SetYCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the y-direction.\n"},
  {"GetYCoordinates", PyvtkHyperTreeGrid_GetYCoordinates, METH_VARARGS,
   "V.GetYCoordinates() -> vtkDataArray\nC++: virtual vtkDataArray *GetYCoordinates()\n\nSet/Get the grid coordinates in the y-direction.\n"},
  {"SetZCoordinates", PyvtkHyperTreeGrid_SetZCoordinates, METH_VARARGS,
   "V.SetZCoordinates(vtkDataArray)\nC++: void SetZCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the z-direction.\n"},
  {"GetZCoordinates", PyvtkHyperTreeGrid_GetZCoordinates, METH_VARARGS,
   "V.GetZCoordinates() -> vtkDataArray\nC++: virtual vtkDataArray *GetZCoordinates()\n\nSet/Get the grid coordinates in the z-direction.\n"},
  {"SetMaterialMask", PyvtkHyperTreeGrid_SetMaterialMask, METH_VARARGS,
   "V.SetMaterialMask(vtkBitArray)\nC++: void SetMaterialMask(vtkBitArray *)\n\nSet/Get the blanking mask of primal leaf cells\n"},
  {"GetMaterialMask", PyvtkHyperTreeGrid_GetMaterialMask, METH_VARARGS,
   "V.GetMaterialMask() -> vtkBitArray\nC++: virtual vtkBitArray *GetMaterialMask()\n\nSet/Get the blanking mask of primal leaf cells\n"},
  {"HasMaterialMask", PyvtkHyperTreeGrid_HasMaterialMask, METH_VARARGS,
   "V.HasMaterialMask() -> bool\nC++: bool HasMaterialMask()\n\nDetermine whether blanking mask is empty or not\n"},
  {"SetMaterialMaskIndex", PyvtkHyperTreeGrid_SetMaterialMaskIndex, METH_VARARGS,
   "V.SetMaterialMaskIndex(vtkIdTypeArray)\nC++: virtual void SetMaterialMaskIndex(vtkIdTypeArray *)\n\nSet/Get the visibility mask of primal leaf cells\n"},
  {"GetMaterialMaskIndex", PyvtkHyperTreeGrid_GetMaterialMaskIndex, METH_VARARGS,
   "V.GetMaterialMaskIndex() -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetMaterialMaskIndex()\n\nSet/Get the visibility mask of primal leaf cells\n"},
  {"SetHasInterface", PyvtkHyperTreeGrid_SetHasInterface, METH_VARARGS,
   "V.SetHasInterface(bool)\nC++: virtual void SetHasInterface(bool _arg)\n\nSet/Get presence or absence of interface\n"},
  {"GetHasInterface", PyvtkHyperTreeGrid_GetHasInterface, METH_VARARGS,
   "V.GetHasInterface() -> bool\nC++: virtual bool GetHasInterface()\n\nSet/Get presence or absence of interface\n"},
  {"HasInterfaceOn", PyvtkHyperTreeGrid_HasInterfaceOn, METH_VARARGS,
   "V.HasInterfaceOn()\nC++: virtual void HasInterfaceOn()\n\nSet/Get presence or absence of interface\n"},
  {"HasInterfaceOff", PyvtkHyperTreeGrid_HasInterfaceOff, METH_VARARGS,
   "V.HasInterfaceOff()\nC++: virtual void HasInterfaceOff()\n\nSet/Get presence or absence of interface\n"},
  {"SetInterfaceNormalsName", PyvtkHyperTreeGrid_SetInterfaceNormalsName, METH_VARARGS,
   "V.SetInterfaceNormalsName(string)\nC++: virtual void SetInterfaceNormalsName(const char *_arg)\n\nSet/Get names of interface normal vectors arrays\n"},
  {"GetInterfaceNormalsName", PyvtkHyperTreeGrid_GetInterfaceNormalsName, METH_VARARGS,
   "V.GetInterfaceNormalsName() -> string\nC++: virtual char *GetInterfaceNormalsName()\n\nSet/Get names of interface normal vectors arrays\n"},
  {"SetInterfaceInterceptsName", PyvtkHyperTreeGrid_SetInterfaceInterceptsName, METH_VARARGS,
   "V.SetInterfaceInterceptsName(string)\nC++: virtual void SetInterfaceInterceptsName(const char *_arg)\n\nSet/Get names of interface intercepts arrays\n"},
  {"GetInterfaceInterceptsName", PyvtkHyperTreeGrid_GetInterfaceInterceptsName, METH_VARARGS,
   "V.GetInterfaceInterceptsName() -> string\nC++: virtual char *GetInterfaceInterceptsName()\n\nSet/Get names of interface intercepts arrays\n"},
  {"GenerateTrees", PyvtkHyperTreeGrid_GenerateTrees, METH_VARARGS,
   "V.GenerateTrees()\nC++: virtual void GenerateTrees()\n\nThis method must be called once the tree settings change.\n"},
  {"NewCursor", PyvtkHyperTreeGrid_NewCursor, METH_VARARGS,
   "V.NewCursor(int, bool) -> vtkHyperTreeCursor\nC++: vtkHyperTreeCursor *NewCursor(vtkIdType, bool create=false)\n\nCreate a new hyper tree cursor: an object that can traverse the\ncells of an individual hyper tree at given index. If no hyper\ntree is present at given location, then one will be created only\nif 'create' flag is true.\n"},
  {"NewGridCursor", PyvtkHyperTreeGrid_NewGridCursor, METH_VARARGS,
   "V.NewGridCursor(int, bool) -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *NewGridCursor(vtkIdType,\n    bool create=false)\n\nCreate a new hyper tree grid cursor: an object that can traverse\nthe cells of a hyper tree grid, starting at given tree root\nindex. If no hyper tree is present at given location, then one\nwill be created only if 'create' flag is true.\n"},
  {"NewGeometricCursor", PyvtkHyperTreeGrid_NewGeometricCursor, METH_VARARGS,
   "V.NewGeometricCursor(int, bool) -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *NewGeometricCursor(vtkIdType,\n    bool create=false)\n\nCreate a new hyper tree grid geometric cursor: an object that can\ntraverse the cells of a hyper tree grid, starting at given tree\nroot index, managing the geometric properties. If no hyper tree\nis present at given location, then one will be created only if\n'create' flag is true.\n"},
  {"NewVonNeumannSuperCursor", PyvtkHyperTreeGrid_NewVonNeumannSuperCursor, METH_VARARGS,
   "V.NewVonNeumannSuperCursor(int, bool) -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *NewVonNeumannSuperCursor(vtkIdType,\n    bool create=false)\n\nCreate a new hyper tree grid Von Neumann super cursor: an object\nthat can traverse the cells of a hyper tree grid, starting at\ngiven tree root index, managing geometric properties and von\nNeumann neighborhood with basic hyper tree grid cursors. If no\nhyper tree is present at given location, then one will be created\nonly if 'create' flag is true.\n"},
  {"NewMooreSuperCursor", PyvtkHyperTreeGrid_NewMooreSuperCursor, METH_VARARGS,
   "V.NewMooreSuperCursor(int, bool) -> vtkHyperTreeGridCursor\nC++: vtkHyperTreeGridCursor *NewMooreSuperCursor(vtkIdType,\n    bool create=false)\n\nCreate a new hyper tree grid Moore super cursor: an object that\ncan traverse the cells of a hyper tree grid, starting at given\ntree root index, managing geometric properties and Moore\nneighborhood with basic hyper tree grid cursors. If no hyper tree\nis present at given location, then one will be created only if\n'create' flag is true.\n"},
  {"SubdivideLeaf", PyvtkHyperTreeGrid_SubdivideLeaf, METH_VARARGS,
   "V.SubdivideLeaf(vtkHyperTreeCursor, int)\nC++: void SubdivideLeaf(vtkHyperTreeCursor *, vtkIdType)\n\nSubdivide node pointed by cursor, only if its a leaf. At the end,\ncursor points on the node that used to be leaf.\n\\pre leaf_exists: leaf!=0\n\\pre is_a_leaf: leaf->CurrentIsLeaf()\n"},
  {"GetPoint", PyvtkHyperTreeGrid_GetPoint, METH_VARARGS,
   "V.GetPoint(int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType) override;\nV.GetPoint(int, [float, float, float])\nC++: void GetPoint(vtkIdType, double[3]) override;\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to points requires that arrays are created\nexplicitly. Get point coordinates with ptId such that: 0 <= ptId\n< NumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCell", PyvtkHyperTreeGrid_GetCell, METH_VARARGS,
   "V.GetCell(int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType) override;\nV.GetCell(int, int, int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nV.GetCell(int, vtkGenericCell)\nC++: void GetCell(vtkIdType, vtkGenericCell *) override;\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Get cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCellType", PyvtkHyperTreeGrid_GetCellType, METH_VARARGS,
   "V.GetCellType(int) -> int\nC++: int GetCellType(vtkIdType) override;\n\nAll cell types are 2: quadrilaters,3d: hexahedrons.  They may be\ndegenerate though. Get type of cell with cellId such that: 0 <=\ncellId < NumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST\nCALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellPoints", PyvtkHyperTreeGrid_GetCellPoints, METH_VARARGS,
   "V.GetCellPoints(int, vtkIdList)\nC++: void GetCellPoints(vtkIdType, vtkIdList *) override;\nV.GetCellPoints(int, int, [int, ...])\nC++: void GetCellPoints(vtkIdType, vtkIdType &, vtkIdType *&)\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get points defining\ncell. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE\nTHREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkHyperTreeGrid_GetPointCells, METH_VARARGS,
   "V.GetPointCells(int, vtkIdList)\nC++: void GetPointCells(vtkIdType, vtkIdList *) override;\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get cells using point.\nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellNeighbors", PyvtkHyperTreeGrid_GetCellNeighbors, METH_VARARGS,
   "V.GetCellNeighbors(int, vtkIdList, vtkIdList)\nC++: void GetCellNeighbors(vtkIdType, vtkIdList *, vtkIdList *)\n    override;\n\nThis method should be avoided in favor of cell/point iterators.\nRandom access to cells requires that connectivity arrays are\ncreated explicitly. Topological inquiry to get all cells using\nlist of points exclusive of cell specified (e.g., cellId). Note\nthat the list consists of only cells that use ALL the points\nprovided. This is exactly the same as GetCellNeighbors in\nunstructured grid. THIS METHOD IS THREAD SAFE IF FIRST CALLED\nFROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindPoint", PyvtkHyperTreeGrid_FindPoint, METH_VARARGS,
   "V.FindPoint([float, float, float]) -> int\nC++: vtkIdType FindPoint(double x[3]) override;\n\nFind cell to which this point belongs, or at least closest one,\neven if the point is outside the grid. Since dual points are\nleaves, use the structure of the Tree instead of a point locator.\n"},
  {"FindCell", PyvtkHyperTreeGrid_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], vtkCell, int, float, int,\n    [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\nV.FindCell([float, float, float], vtkCell, vtkGenericCell, int,\n    float, int, [float, float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-nullptr, then search starts from this\ncell and looks at immediate neighbors.  Returns cellId >= 0 if\ninside, < 0 otherwise.  The parametric coordinates are provided\nin pcoords[3]. The interpolation weights are returned in\nweights[]. (The number of weights is equal to the number of\npoints in the found cell). Tolerance is used to control how close\nthe point is to be considered \"in\" the cell. NB: There is\nactually no need for a starting cell, just use the point, as the\ntree structure is efficient enough. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"Initialize", PyvtkHyperTreeGrid_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize() override;\n\nRestore data object to initial state.\n"},
  {"GetTree", PyvtkHyperTreeGrid_GetTree, METH_VARARGS,
   "V.GetTree(int) -> vtkHyperTree\nC++: vtkHyperTree *GetTree(vtkIdType)\n\nReturn tree located at given index of hyper tree grid NB: This\nwill return nullptr if grid slot is empty.\n"},
  {"SetTree", PyvtkHyperTreeGrid_SetTree, METH_VARARGS,
   "V.SetTree(int, vtkHyperTree)\nC++: void SetTree(vtkIdType, vtkHyperTree *)\n\nAssign given tree to given index of hyper tree grid NB: This will\ncreate a new slot in the grid if needed.\n"},
  {"GetMaxCellSize", PyvtkHyperTreeGrid_GetMaxCellSize, METH_VARARGS,
   "V.GetMaxCellSize() -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method to return largest cell size in dataset.\nGenerally used to allocate memory for supporting data structures.\nThis is the number of points of a cell. THIS METHOD IS THREAD\nSAFE\n"},
  {"ShallowCopy", PyvtkHyperTreeGrid_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkDataObject)\nC++: void ShallowCopy(vtkDataObject *) override;\n\nCreate shallow copy of hyper tree grid.\n"},
  {"DeepCopy", PyvtkHyperTreeGrid_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkDataObject)\nC++: void DeepCopy(vtkDataObject *) override;\n\nCreate deep copy of hyper tree grid.\n"},
  {"GetExtentType", PyvtkHyperTreeGrid_GetExtentType, METH_VARARGS,
   "V.GetExtentType() -> int\nC++: int GetExtentType() override;\n\nStructured extent. The extent type is a 3D extent.\n"},
  {"GetActualMemorySize", PyvtkHyperTreeGrid_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGrid_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren() -> int\nC++: virtual unsigned int GetNumberOfChildren()\n\nThe number of children each node can have.\n"},
  {"RecursivelyInitializePureMaterialMask", PyvtkHyperTreeGrid_RecursivelyInitializePureMaterialMask, METH_VARARGS,
   "V.RecursivelyInitializePureMaterialMask(vtkHyperTreeGridCursor)\n    -> bool\nC++: bool RecursivelyInitializePureMaterialMask(\n    vtkHyperTreeGridCursor *cursor)\n\nRecursively initialize pure material mask\n"},
  {"GetPureMaterialMask", PyvtkHyperTreeGrid_GetPureMaterialMask, METH_VARARGS,
   "V.GetPureMaterialMask() -> vtkBitArray\nC++: vtkBitArray *GetPureMaterialMask()\n\nGet or create pure material mask\n"},
  {"GetChildMask", PyvtkHyperTreeGrid_GetChildMask, METH_VARARGS,
   "V.GetChildMask(int) -> int\nC++: unsigned int GetChildMask(unsigned int)\n\nReturn hard-coded bitcode correspondng to child mask Dimension 1:\nFactor 2: 0: 100, 1: 001 Factor 3: 0: 100, 1: 010, 2: 001\nDimension 2: Factor 2: 0: 1101 0000 0, 1: 0110 0100 0 2: 0001\n0011 0, 3: 0000 0101 1 Factor 3: 0: 1101 0000 0, 1: 0100 0000 0,\n2: 0110 0100 0 3: 0001 0000 0, 4: 0000 1000 0, 5: 0000 0100 0 6:\n0001 0011 0, 7: 0000 0001 0, 8: 0000 0101 1 Dimension 3: Factor\n2: 0: 1101 1000 0110 1000 0000 0000 000, 1: 0110 1100 0011 0010\n0000 0000 000 2: 0001 1011 0000 1001 1000 0000 000, 3: 0000 1101\n1000 0010 1100 0000 000 4: 0000 0000 0110 1000 0011 0110 000, 5:\n0000 0000 0011 0010 0001 1011 000 6: 0000 0000 0000 1001 1000\n0110 110, 7: 0000 0000 0000 0010 1100 0011 011 Factor 3: 0: 1101\n1000 0110 1000 0000 0000 000 1: 0100 1000 0010 0000 0000 0000 000\n2: 0110 1100 0011 0010 0000 0000 000 3: 0001 1000 0000 1000 0000\n0000 000 4: 0000 1000 0000 0000 0000 0000 000 5: 0000 1100 0000\n0010 0000 0000 000 6: 0001 1011 0000 1001 1000 0000 000 7: 0000\n1001 0000 0000 1000 0000 000 8: 0000 1101 1000 0010 1100 0000 000\n9: 0000 0000 0110 1000 0000 0000 000 10: 0000 0000 0010 0000 0000\n0000 000 11: 0000 0000 0011 0010 0000 0000 000 12: 0000 0000 0000\n1000 0000 0000 000 13: 0000 0000 0000 0100 0000 0000 000 14: 0000\n0000 0000 0010 0000 0000 000 15: 0000 0000 0000 1001 1000 0000\n000 16: 0000 0000 0000 0000 1000 0000 000 17: 0000 0000 0000 0010\n1100 0000 000 18: 0000 0000 0110 1000 0011 0110 000 19: 0000 0000\n0010 0000 0001 0010 000 20: 0000 0000 0011 0010 0001 1011 000 21:\n0000 0000 0000 1000 0000 0110 000 22: 0000 0000 0000 0000 0000\n0010 000 23: 0000 0000 0000 0010 0000 0011 000 24: 0000 0000 0000\n1001 1000 0110 110 25: 0000 0000 0000 0000 1000 0010 010 26: 0000\n0000 0000 0010 1100 0011 011\n"},
  {"GetLevelZeroCoordinatesFromIndex", PyvtkHyperTreeGrid_GetLevelZeroCoordinatesFromIndex, METH_VARARGS,
   "V.GetLevelZeroCoordinatesFromIndex(int, int, int, int)\nC++: void GetLevelZeroCoordinatesFromIndex(vtkIdType,\n    unsigned int &, unsigned int &, unsigned int &)\n\nConvert the global index of a root to its Cartesian coordinates\nin the grid.\n"},
  {"GetIndexFromLevelZeroCoordinates", PyvtkHyperTreeGrid_GetIndexFromLevelZeroCoordinates, METH_VARARGS,
   "V.GetIndexFromLevelZeroCoordinates(int, int, int, int)\nC++: void GetIndexFromLevelZeroCoordinates(vtkIdType &,\n    unsigned int, unsigned int, unsigned int)\n\nConvert the Cartesian coordinates of a root in the grid to its\nglobal index.\n"},
  {"GetShiftedLevelZeroIndex", PyvtkHyperTreeGrid_GetShiftedLevelZeroIndex, METH_VARARGS,
   "V.GetShiftedLevelZeroIndex(int, int, int, int) -> int\nC++: unsigned int GetShiftedLevelZeroIndex(vtkIdType, int, int,\n    int)\n\nReturn the root index of a root cell with given index displaced.\nby a Cartesian vector in the grid. NB: No boundary checks are\nperformed.\n"},
  {"GetData", PyvtkHyperTreeGrid_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkHyperTreeGrid", // tp_name
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
  PyvtkHyperTreeGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGrid_StaticNew()
{
  return vtkHyperTreeGrid::New();
}

PyObject *PyvtkHyperTreeGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGrid_Type, PyvtkHyperTreeGrid_Methods,
    "vtkHyperTreeGrid",
 &PyvtkHyperTreeGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

