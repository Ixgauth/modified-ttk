// python wrapper for vtkStructuredAMRGridConnectivity
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
#include "vtkStructuredAMRNeighbor.h"
#include "vtkStructuredAMRGridConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredAMRGridConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredAMRGridConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractGridConnectivity_ClassNew
extern "C" { PyObject *PyvtkAbstractGridConnectivity_ClassNew(); }
#define DECLARED_PyvtkAbstractGridConnectivity_ClassNew
#endif

static const char *PyvtkStructuredAMRGridConnectivity_Doc =
  "vtkStructuredAMRGridConnectivity -  grid connectivity.\n\n"
  "Superclass: vtkAbstractGridConnectivity\n\n"
  "A concrete instance of vtkAbstractGridConnectivity that implements\n"
  " functionality for computing the neighboring topology within a\n"
  "structured\n"
  " AMR grid, as well as, generating ghost-layers. Support is provided\n"
  "for\n"
  " 1-D, 2-D (XY,XZ,YZ) and 3-D cell-centered datasets. This\n"
  "implementation\n"
  " does not have any support for distributed data. For the parallel\n"
  " implementation see vtkPStructuredAMRGridConnectivity.\n\n"
  "@sa\n"
  " vtkPStructuredAMRGridConnectivity vtkAbstractGridConnectivity\n\n";


static PyObject *
PyvtkStructuredAMRGridConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredAMRGridConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredAMRGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredAMRGridConnectivity *tempr = vtkStructuredAMRGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredAMRGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredAMRGridConnectivity::NewInstance());

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
PyvtkStructuredAMRGridConnectivity_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNeighbors();
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::ComputeNeighbors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CreateGhostLayers(temp0);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::CreateGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const size_t size3 = 6;
  int temp3[6];
  int save3[6];
  vtkUnsignedCharArray *temp4 = nullptr;
  vtkUnsignedCharArray *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkCellData *temp7 = nullptr;
  vtkPoints *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp5, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkCellData") &&
      ap.GetVTKObject(temp8, "vtkPoints"))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  vtkUnsignedCharArray *temp3 = nullptr;
  vtkUnsignedCharArray *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  vtkPoints *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp4, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetVTKObject(temp7, "vtkPoints"))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredAMRGridConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkStructuredAMRGridConnectivity_RegisterGrid_s1(self, args);
    case 8:
      return PyvtkStructuredAMRGridConnectivity_RegisterGrid_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterGrid");
  return nullptr;
}



static PyObject *
PyvtkStructuredAMRGridConnectivity_SetBalancedRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalancedRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBalancedRefinement(temp0);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::SetBalancedRefinement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetBalancedRefinement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalancedRefinement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBalancedRefinement() :
      op->vtkStructuredAMRGridConnectivity::GetBalancedRefinement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_SetNodeCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNodeCentered(temp0);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::SetNodeCentered(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetNodeCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNodeCentered() :
      op->vtkStructuredAMRGridConnectivity::GetNodeCentered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_SetCellCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellCentered(temp0);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::SetCellCentered(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetCellCentered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCentered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCellCentered() :
      op->vtkStructuredAMRGridConnectivity::GetCellCentered());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighbors(temp0) :
      op->vtkStructuredAMRGridConnectivity::GetNumberOfNeighbors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRGridConnectivity_GetGhostedExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetGhostedExtent(temp0, temp1);
    }
    else
    {
      op->vtkStructuredAMRGridConnectivity::GetGhostedExtent(temp0, temp1);
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
PyvtkStructuredAMRGridConnectivity_GetNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredAMRGridConnectivity *op = static_cast<vtkStructuredAMRGridConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStructuredAMRNeighbor tempr = (ap.IsBound() ?
      op->GetNeighbor(temp0, temp1) :
      op->vtkStructuredAMRGridConnectivity::GetNeighbor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStructuredAMRNeighbor");
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredAMRGridConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkStructuredAMRGridConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredAMRGridConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredAMRGridConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredAMRGridConnectivity\nC++: static vtkStructuredAMRGridConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredAMRGridConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredAMRGridConnectivity\nC++: vtkStructuredAMRGridConnectivity *NewInstance()\n\n"},
  {"Initialize", PyvtkStructuredAMRGridConnectivity_Initialize, METH_VARARGS,
   "V.Initialize(int, int, int)\nC++: void Initialize(const unsigned int NumberOfLevels,\n    const unsigned int N, const int RefinementRatio=-1)\n\nInitializes this instance of vtkStructuredAMRGridConnectivity\nwhere N is the total number of grids in the AMR hierarchy.\nOptionally, if the AMR dataset has a constant refinement, it\nshould be specified during initialization as the code optimizes\nfor it. If a -1 or no refinement ratio is specified a varying\nrefinement ratio is assumed.\n"},
  {"ComputeNeighbors", PyvtkStructuredAMRGridConnectivity_ComputeNeighbors, METH_VARARGS,
   "V.ComputeNeighbors()\nC++: void ComputeNeighbors() override;\n\nComputes neighboring information.\n"},
  {"CreateGhostLayers", PyvtkStructuredAMRGridConnectivity_CreateGhostLayers, METH_VARARGS,
   "V.CreateGhostLayers(int)\nC++: void CreateGhostLayers(const int N=1) override;\n\nCreates ghost layers.\n"},
  {"RegisterGrid", PyvtkStructuredAMRGridConnectivity_RegisterGrid, METH_VARARGS,
   "V.RegisterGrid(int, int, int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridIdx, const int level,\n     const int refinementRatio, int extents[6],\n    vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\nV.RegisterGrid(int, int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridIdx, const int level,\n     int extents[6], vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\n\nRegisters the AMR grid with the given global linear grid ID\n(starting numbering from 0) and level and refinement ratio. This\nmethod is to be used when the refinement ratio is not constant.\n"},
  {"SetBalancedRefinement", PyvtkStructuredAMRGridConnectivity_SetBalancedRefinement, METH_VARARGS,
   "V.SetBalancedRefinement(bool)\nC++: virtual void SetBalancedRefinement(bool _arg)\n\nGet/Set macro for BalancedRefinement property, default is true.\nIf the refinement is balanced, then, adjacent grids in the AMR\nhierarchy can only differ by one level. By default, a balanced\nrefinement is assumed.\n"},
  {"GetBalancedRefinement", PyvtkStructuredAMRGridConnectivity_GetBalancedRefinement, METH_VARARGS,
   "V.GetBalancedRefinement() -> bool\nC++: virtual bool GetBalancedRefinement()\n\nGet/Set macro for BalancedRefinement property, default is true.\nIf the refinement is balanced, then, adjacent grids in the AMR\nhierarchy can only differ by one level. By default, a balanced\nrefinement is assumed.\n"},
  {"SetNodeCentered", PyvtkStructuredAMRGridConnectivity_SetNodeCentered, METH_VARARGS,
   "V.SetNodeCentered(bool)\nC++: virtual void SetNodeCentered(bool _arg)\n\nGet/Set macro NodeCentered property which indicates if the data\nis node-centered or cell-centered. By default, node-centered is\nset to false since AMR datasets are primarily cell-centered.\n"},
  {"GetNodeCentered", PyvtkStructuredAMRGridConnectivity_GetNodeCentered, METH_VARARGS,
   "V.GetNodeCentered() -> bool\nC++: virtual bool GetNodeCentered()\n\nGet/Set macro NodeCentered property which indicates if the data\nis node-centered or cell-centered. By default, node-centered is\nset to false since AMR datasets are primarily cell-centered.\n"},
  {"SetCellCentered", PyvtkStructuredAMRGridConnectivity_SetCellCentered, METH_VARARGS,
   "V.SetCellCentered(bool)\nC++: virtual void SetCellCentered(bool _arg)\n\nGet/Set CellCentered property which indicates if the data is\ncell-centered By default, cell-centered is set to true.\n"},
  {"GetCellCentered", PyvtkStructuredAMRGridConnectivity_GetCellCentered, METH_VARARGS,
   "V.GetCellCentered() -> bool\nC++: virtual bool GetCellCentered()\n\nGet/Set CellCentered property which indicates if the data is\ncell-centered By default, cell-centered is set to true.\n"},
  {"GetNumberOfNeighbors", PyvtkStructuredAMRGridConnectivity_GetNumberOfNeighbors, METH_VARARGS,
   "V.GetNumberOfNeighbors(int) -> int\nC++: int GetNumberOfNeighbors(const int gridID)\n\nReturns the number of neighbors for the grid corresponding to the\ngiven grid ID.\n"},
  {"GetGhostedExtent", PyvtkStructuredAMRGridConnectivity_GetGhostedExtent, METH_VARARGS,
   "V.GetGhostedExtent(int, [int, int, int, int, int, int])\nC++: void GetGhostedExtent(const int gridID, int ext[6])\n\nReturns the ghost extend for the grid corresponding to the given\ngrid ID.\n"},
  {"GetNeighbor", PyvtkStructuredAMRGridConnectivity_GetNeighbor, METH_VARARGS,
   "V.GetNeighbor(int, int) -> vtkStructuredAMRNeighbor\nC++: vtkStructuredAMRNeighbor GetNeighbor(const int gridID,\n    const int nei)\n\nReturns the AMR neighbor for the patch with the corresponding\ngrid ID.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredAMRGridConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkStructuredAMRGridConnectivity", // tp_name
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
  PyvtkStructuredAMRGridConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredAMRGridConnectivity_StaticNew()
{
  return vtkStructuredAMRGridConnectivity::New();
}

PyObject *PyvtkStructuredAMRGridConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredAMRGridConnectivity_Type, PyvtkStructuredAMRGridConnectivity_Methods,
    "vtkStructuredAMRGridConnectivity",
 &PyvtkStructuredAMRGridConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredAMRGridConnectivity_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractGridConnectivity_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredAMRGridConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredAMRGridConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredAMRGridConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

