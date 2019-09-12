// python wrapper for vtkPKdTree
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
#include "vtkPKdTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPKdTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPKdTree_ClassNew(); }

#ifndef DECLARED_PyvtkKdTree_ClassNew
extern "C" { PyObject *PyvtkKdTree_ClassNew(); }
#define DECLARED_PyvtkKdTree_ClassNew
#endif

static const char *PyvtkPKdTree_Doc =
  "vtkPKdTree - Build a k-d tree decomposition of a list of points.\n\n"
  "Superclass: vtkKdTree\n\n"
  "Build, in parallel, a k-d tree decomposition of one or more\n"
  "     vtkDataSets distributed across processors.  We assume each\n"
  "     process has read in one portion of a large distributed data set.\n"
  "     When done, each process has access to the k-d tree structure,\n"
  "     can obtain information about which process contains\n"
  "     data for each spatial region, and can depth sort the spatial\n"
  "     regions.\n\n\n"
  "     This class can also assign spatial regions to processors, based\n"
  "     on one of several region assignment schemes.  By default\n"
  "     a contiguous, convex region is assigned to each process. \n"
  "Several\n"
  "     queries return information about how many and what cells I have\n"
  "     that lie in a region assigned to another process.\n\n"
  "@sa\n"
  "     vtkKdTree\n\n";


static PyObject *
PyvtkPKdTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPKdTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPKdTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPKdTree *tempr = vtkPKdTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPKdTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPKdTree::NewInstance());

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
PyvtkPKdTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkPKdTree::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTotalNumberOfCells() :
      op->vtkPKdTree::GetTotalNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateProcessCellCountData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateProcessCellCountData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateProcessCellCountData() :
      op->vtkPKdTree::CreateProcessCellCountData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_CreateGlobalDataArrayBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGlobalDataArrayBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CreateGlobalDataArrayBounds() :
      op->vtkPKdTree::CreateGlobalDataArrayBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

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
      op->vtkPKdTree::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPKdTree::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignment() :
      op->vtkPKdTree::GetRegionAssignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AssignRegions(temp0, temp1) :
      op->vtkPKdTree::AssignRegions(temp0, temp1));

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
PyvtkPKdTree_AssignRegionsRoundRobin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsRoundRobin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AssignRegionsRoundRobin() :
      op->vtkPKdTree::AssignRegionsRoundRobin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_AssignRegionsContiguous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignRegionsContiguous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AssignRegionsContiguous() :
      op->vtkPKdTree::AssignRegionsContiguous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetRegionAssignmentMap() :
      op->vtkPKdTree::GetRegionAssignmentMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentMapLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentMapLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignmentMapLength() :
      op->vtkPKdTree::GetRegionAssignmentMapLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionAssignmentList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionAssignmentList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionAssignmentList(temp0, temp1) :
      op->vtkPKdTree::GetRegionAssignmentList(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetAllProcessesBorderingOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllProcessesBorderingOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  float temp0;
  float temp1;
  float temp2;
  vtkIntArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPKdTree::GetAllProcessesBorderingOnPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessAssignedToRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAssignedToRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessAssignedToRegion(temp0) :
      op->vtkPKdTree::GetProcessAssignedToRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->HasData(temp0, temp1) :
      op->vtkPKdTree::HasData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessCellCountForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessCellCountForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessCellCountForRegion(temp0, temp1) :
      op->vtkPKdTree::GetProcessCellCountForRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalProcessesInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalProcessesInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalProcessesInRegion(temp0) :
      op->vtkPKdTree::GetTotalProcessesInRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessListForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessListForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessListForRegion(temp0, temp1) :
      op->vtkPKdTree::GetProcessListForRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetProcessesCellCountForRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessesCellCountForRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetProcessesCellCountForRegion(temp0, temp1, temp2) :
      op->vtkPKdTree::GetProcessesCellCountForRegion(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetTotalRegionsForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalRegionsForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalRegionsForProcess(temp0) :
      op->vtkPKdTree::GetTotalRegionsForProcess(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionListForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionListForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionListForProcess(temp0, temp1) :
      op->vtkPKdTree::GetRegionListForProcess(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetRegionsCellCountForProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionsCellCountForProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionsCellCountForProcess(temp0, temp1, temp2) :
      op->vtkPKdTree::GetRegionsCellCountForProcess(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  int temp1;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkDataSet *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2, temp3) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellListsForProcessRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellListsForProcessRegions(temp0, temp1, temp2) :
      op->vtkPKdTree::GetCellListsForProcessRegions(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetCellListsForProcessRegions_Methods[] = {
  {nullptr, PyvtkPKdTree_GetCellListsForProcessRegions_s1, METH_VARARGS,
   "@iiVV *vtkIdList *vtkIdList"},
  {nullptr, PyvtkPKdTree_GetCellListsForProcessRegions_s2, METH_VARARGS,
   "@iVVV *vtkDataSet *vtkIdList *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPKdTree_GetCellListsForProcessRegions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellListsForProcessRegions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPKdTree_GetCellListsForProcessRegions_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellListsForProcessRegions");
  return nullptr;
}



static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesInDirection(temp0, temp1) :
      op->vtkPKdTree::ViewOrderAllProcessesInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_ViewOrderAllProcessesFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllProcessesFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllProcessesFromPosition(temp0, temp1) :
      op->vtkPKdTree::ViewOrderAllProcessesFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCellArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetCellArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetCellArrayGlobalRange(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetCellArrayGlobalRange_Methods[] = {
  {nullptr, PyvtkPKdTree_GetCellArrayGlobalRange_s1, METH_VARARGS,
   "@zP *d"},
  {nullptr, PyvtkPKdTree_GetCellArrayGlobalRange_s2, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPKdTree_GetCellArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetCellArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellArrayGlobalRange");
  return nullptr;
}



static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetPointArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayGlobalRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPKdTree *op = static_cast<vtkPKdTree *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetPointArrayGlobalRange(temp0, temp1) :
      op->vtkPKdTree::GetPointArrayGlobalRange(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPKdTree_GetPointArrayGlobalRange_Methods[] = {
  {nullptr, PyvtkPKdTree_GetPointArrayGlobalRange_s1, METH_VARARGS,
   "@zP *d"},
  {nullptr, PyvtkPKdTree_GetPointArrayGlobalRange_s2, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPKdTree_GetPointArrayGlobalRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPKdTree_GetPointArrayGlobalRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayGlobalRange");
  return nullptr;
}


static PyMethodDef PyvtkPKdTree_Methods[] = {
  {"IsTypeOf", PyvtkPKdTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkPKdTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkPKdTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPKdTree\nC++: static vtkPKdTree *SafeDownCast(vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkPKdTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPKdTree\nC++: vtkPKdTree *NewInstance()\n\nStandard type and print methods.\n"},
  {"BuildLocator", PyvtkPKdTree_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nBuild the spatial decomposition.  Call this explicitly after\nchanging any parameters affecting the build of the tree.  It must\nbe called by all processes in the parallel application, or it\nwill hang.\n"},
  {"GetTotalNumberOfCells", PyvtkPKdTree_GetTotalNumberOfCells, METH_VARARGS,
   "V.GetTotalNumberOfCells() -> int\nC++: vtkIdType GetTotalNumberOfCells()\n\nGet the total number of cells distributed across the data files\nread by all processes.  You must have called BuildLocator before\ncalling this method.\n"},
  {"CreateProcessCellCountData", PyvtkPKdTree_CreateProcessCellCountData, METH_VARARGS,
   "V.CreateProcessCellCountData() -> int\nC++: int CreateProcessCellCountData()\n\nCreate tables of counts of cells per process per region. These\ntables can be accessed with queries like \"HasData\",\n\"GetProcessCellCountForRegion\", and so on. You must have called\nBuildLocator() beforehand.  This method must be called by all\nprocesses or it will hang. Returns 1 on error, 0 when no error.\n"},
  {"CreateGlobalDataArrayBounds", PyvtkPKdTree_CreateGlobalDataArrayBounds, METH_VARARGS,
   "V.CreateGlobalDataArrayBounds() -> int\nC++: int CreateGlobalDataArrayBounds()\n\nA convenience function which compiles the global bounds of the\ndata arrays across processes. These bounds can be accessed with\n\"GetCellArrayGlobalRange\" and \"GetPointArrayGlobalRange\". This\nmethod must be called by all processes or it will hang. Returns 1\non error, 0 when no error.\n"},
  {"SetController", PyvtkPKdTree_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: void SetController(vtkMultiProcessController *c)\n\nSet/Get the communicator object\n"},
  {"GetController", PyvtkPKdTree_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get the communicator object\n"},
  {"GetRegionAssignment", PyvtkPKdTree_GetRegionAssignment, METH_VARARGS,
   "V.GetRegionAssignment() -> int\nC++: virtual int GetRegionAssignment()\n\nThe PKdTree class can assign spatial regions to processors after\nbuilding the k-d tree, using one of several partitioning\ncriteria. These functions Set/Get whether this assignment is\ncomputed. The default is \"Off\", no assignment is computed.   If\n\"On\", and no assignment scheme is specified, contiguous\nassignment will be computed.  Specifying an assignment scheme\n(with AssignRegions*()) automatically turns on RegionAssignment.\n"},
  {"AssignRegions", PyvtkPKdTree_AssignRegions, METH_VARARGS,
   "V.AssignRegions([int, ...], int) -> int\nC++: int AssignRegions(int *map, int numRegions)\n\nAssign spatial regions to processes via a user defined map. The\nuser-supplied map is indexed by region ID, and provides a process\nID for each region.\n"},
  {"AssignRegionsRoundRobin", PyvtkPKdTree_AssignRegionsRoundRobin, METH_VARARGS,
   "V.AssignRegionsRoundRobin() -> int\nC++: int AssignRegionsRoundRobin()\n\nLet the PKdTree class assign a process to each region in a round\nrobin fashion.  If the k-d tree has not yet been built, the\nregions will be assigned after BuildLocator executes.\n"},
  {"AssignRegionsContiguous", PyvtkPKdTree_AssignRegionsContiguous, METH_VARARGS,
   "V.AssignRegionsContiguous() -> int\nC++: int AssignRegionsContiguous()\n\nLet the PKdTree class assign a process to each region by\nassigning contiguous sets of spatial regions to each process. \nThe set of regions assigned to each process will always have a\nunion that is a convex space (a box). If the k-d tree has not yet\nbeen built, the regions will be assigned after BuildLocator\nexecutes.\n"},
  {"GetRegionAssignmentMap", PyvtkPKdTree_GetRegionAssignmentMap, METH_VARARGS,
   "V.GetRegionAssignmentMap() -> (int, ...)\nC++: const int *GetRegionAssignmentMap()\n\nReturns the region assignment map where index is the region and\nvalue is the processes id for that region.\n"},
  {"GetRegionAssignmentMapLength", PyvtkPKdTree_GetRegionAssignmentMapLength, METH_VARARGS,
   "V.GetRegionAssignmentMapLength() -> int\nC++: int GetRegionAssignmentMapLength()\n\n/ Returns the number of regions in the region assignment map.\n"},
  {"GetRegionAssignmentList", PyvtkPKdTree_GetRegionAssignmentList, METH_VARARGS,
   "V.GetRegionAssignmentList(int, vtkIntArray) -> int\nC++: int GetRegionAssignmentList(int procId, vtkIntArray *list)\n\nWrites the list of region IDs assigned to the specified process. \nRegions IDs start at 0 and increase by 1 from there. Returns the\nnumber of regions in the list.\n"},
  {"GetAllProcessesBorderingOnPoint", PyvtkPKdTree_GetAllProcessesBorderingOnPoint, METH_VARARGS,
   "V.GetAllProcessesBorderingOnPoint(float, float, float,\n    vtkIntArray)\nC++: void GetAllProcessesBorderingOnPoint(float x, float y,\n    float z, vtkIntArray *list)\n\nThe k-d tree spatial regions have been assigned to processes.\nGiven a point on the boundary of one of the regions, this method\ncreates a list of all processes whose region boundaries include\nthat point.  This may be required when looking for processes that\nhave cells adjacent to the cells of a given process.\n"},
  {"GetProcessAssignedToRegion", PyvtkPKdTree_GetProcessAssignedToRegion, METH_VARARGS,
   "V.GetProcessAssignedToRegion(int) -> int\nC++: int GetProcessAssignedToRegion(int regionId)\n\nReturns the ID of the process assigned to the region.\n"},
  {"HasData", PyvtkPKdTree_HasData, METH_VARARGS,
   "V.HasData(int, int) -> int\nC++: int HasData(int processId, int regionId)\n\nReturns 1 if the process has data for the given region, 0\notherwise.\n"},
  {"GetProcessCellCountForRegion", PyvtkPKdTree_GetProcessCellCountForRegion, METH_VARARGS,
   "V.GetProcessCellCountForRegion(int, int) -> int\nC++: int GetProcessCellCountForRegion(int processId, int regionId)\n\nReturns the number of cells the specified process has in the\nspecified region.\n"},
  {"GetTotalProcessesInRegion", PyvtkPKdTree_GetTotalProcessesInRegion, METH_VARARGS,
   "V.GetTotalProcessesInRegion(int) -> int\nC++: int GetTotalProcessesInRegion(int regionId)\n\nReturns the total number of processes that have data falling\nwithin this spatial region.\n"},
  {"GetProcessListForRegion", PyvtkPKdTree_GetProcessListForRegion, METH_VARARGS,
   "V.GetProcessListForRegion(int, vtkIntArray) -> int\nC++: int GetProcessListForRegion(int regionId,\n    vtkIntArray *processes)\n\nAdds the list of processes having data for the given region to\nthe supplied list, returns the number of processes added.\n"},
  {"GetProcessesCellCountForRegion", PyvtkPKdTree_GetProcessesCellCountForRegion, METH_VARARGS,
   "V.GetProcessesCellCountForRegion(int, [int, ...], int) -> int\nC++: int GetProcessesCellCountForRegion(int regionId, int *count,\n    int len)\n\nWrites the number of cells each process has for the region to the\nsupplied list of length len.  Returns the number of cell counts\nwritten.  The order of the cell counts corresponds to the order\nof process IDs in the process list returned by\nGetProcessListForRegion.\n"},
  {"GetTotalRegionsForProcess", PyvtkPKdTree_GetTotalRegionsForProcess, METH_VARARGS,
   "V.GetTotalRegionsForProcess(int) -> int\nC++: int GetTotalRegionsForProcess(int processId)\n\nReturns the total number of spatial regions that a given process\nhas data for.\n"},
  {"GetRegionListForProcess", PyvtkPKdTree_GetRegionListForProcess, METH_VARARGS,
   "V.GetRegionListForProcess(int, vtkIntArray) -> int\nC++: int GetRegionListForProcess(int processId,\n    vtkIntArray *regions)\n\nAdds the region IDs for which this process has data to the\nsupplied vtkIntArray.  Returns the number of regions.\n"},
  {"GetRegionsCellCountForProcess", PyvtkPKdTree_GetRegionsCellCountForProcess, METH_VARARGS,
   "V.GetRegionsCellCountForProcess(int, [int, ...], int) -> int\nC++: int GetRegionsCellCountForProcess(int ProcessId, int *count,\n    int len)\n\nWrites to the supplied integer array the number of cells this\nprocess has for each region.  Returns the number of cell counts\nwritten.  The order of the cell counts corresponds to the order\nof region IDs in the region list returned by\nGetRegionListForProcess.\n"},
  {"GetCellListsForProcessRegions", PyvtkPKdTree_GetCellListsForProcessRegions, METH_VARARGS,
   "V.GetCellListsForProcessRegions(int, int, vtkIdList, vtkIdList)\n    -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    int set, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkDataSet, vtkIdList,\n    vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkDataSet *set, vtkIdList *inRegionCells,\n    vtkIdList *onBoundaryCells)\nV.GetCellListsForProcessRegions(int, vtkIdList, vtkIdList) -> int\nC++: vtkIdType GetCellListsForProcessRegions(int ProcessId,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\n\nAfter regions have been assigned to processes, I may want to know\nwhich cells I have that are in the regions assigned to a\nparticular process.\n\n* This method takes a process ID and two vtkIdLists.  It\n* writes to the first list the IDs of the cells\n* contained in the process' regions.  (That is, their cell\n* centroid is contained in the region.)  To the second list it\n* write the IDs of the cells which intersect the process' regions\n* but whose cell centroid lies elsewhere.\n\n* The total number of cell IDs written to both lists is returned.\n* Either list pointer passed in can be nullptr, and it will be\n  ignored.\n* If there are multiple data sets, you must specify which data\n  set\n* you wish cell IDs for.\n\n* The caller should delete these two lists when done.  This\n  method\n* uses the cell lists created in vtkKdTree::CreateCellLists().\n* If the cell lists for the process' regions do not exist, this\n* method will first build the cell lists for all regions by\n  calling\n* CreateCellLists().  You must remember to DeleteCellLists() when\n* done with all calls to this method, as cell lists can require a\n* great deal of memory.\n"},
  {"ViewOrderAllProcessesInDirection", PyvtkPKdTree_ViewOrderAllProcessesInDirection, METH_VARARGS,
   "V.ViewOrderAllProcessesInDirection((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na vector direction of projection.  Use this to do visibility\nsorts in parallel projection mode. `orderedList' will be resized\nto the number of processes. The return value is the number of\nprocesses.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"ViewOrderAllProcessesFromPosition", PyvtkPKdTree_ViewOrderAllProcessesFromPosition, METH_VARARGS,
   "V.ViewOrderAllProcessesFromPosition((float, float, float),\n    vtkIntArray) -> int\nC++: int ViewOrderAllProcessesFromPosition(\n    const double cameraPosition[3], vtkIntArray *orderedList)\n\nReturn a list of all processes in order from front to back given\na camera position.  Use this to do visibility sorts in\nperspective projection mode. `orderedList' will be resized to the\nnumber of processes. The return value is the number of processes.\n\\pre orderedList_exists: orderedList!=0\n"},
  {"GetCellArrayGlobalRange", PyvtkPKdTree_GetCellArrayGlobalRange, METH_VARARGS,
   "V.GetCellArrayGlobalRange(string, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(const char *name,\n    double range[2])\nV.GetCellArrayGlobalRange(int, [float, float]) -> int\nC++: int GetCellArrayGlobalRange(int arrayIndex, double range[2])\n\n"},
  {"GetPointArrayGlobalRange", PyvtkPKdTree_GetPointArrayGlobalRange, METH_VARARGS,
   "V.GetPointArrayGlobalRange(string, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(const char *name,\n    double range[2])\nV.GetPointArrayGlobalRange(int, [float, float]) -> int\nC++: int GetPointArrayGlobalRange(int arrayIndex, double range[2])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPKdTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPKdTree", // tp_name
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
  PyvtkPKdTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPKdTree_StaticNew()
{
  return vtkPKdTree::New();
}

PyObject *PyvtkPKdTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPKdTree_Type, PyvtkPKdTree_Methods,
    "vtkPKdTree",
 &PyvtkPKdTree_StaticNew);

  PyTypeObject *pytype = &PyvtkPKdTree_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkKdTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPKdTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPKdTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPKdTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

