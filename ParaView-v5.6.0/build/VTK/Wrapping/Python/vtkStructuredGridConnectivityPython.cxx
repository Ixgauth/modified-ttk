// python wrapper for vtkStructuredGridConnectivity
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
#include "vtkStructuredNeighbor.h"
#include "vtkStructuredGridConnectivity.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridConnectivity(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredGridConnectivity_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractGridConnectivity_ClassNew
extern "C" { PyObject *PyvtkAbstractGridConnectivity_ClassNew(); }
#define DECLARED_PyvtkAbstractGridConnectivity_ClassNew
#endif

static const char *PyvtkStructuredGridConnectivity_Doc =
  "vtkStructuredGridConnectivity -  vtkStructuredGridConnectivity is a\nconcrete instance of vtkObject that\n implements functionality for computing the neighboring topology\nwithin a\n single partitioned structured grid dataset.\n\n"
  "Superclass: vtkAbstractGridConnectivity\n\n"
  "This class implementation does\n"
  " not have any support for distributed data. For the parallel\n"
  "implementation\n"
  " see vtkPStructuredGridConnectivity.\n\n"
  "@sa\n"
  " vtkPStructuredGridConnectivity\n\n";


static PyObject *
PyvtkStructuredGridConnectivity_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridConnectivity *tempr = vtkStructuredGridConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridConnectivity::NewInstance());

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
PyvtkStructuredGridConnectivity_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStructuredGridConnectivity::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridConnectivity_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkStructuredGridConnectivity::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGridConnectivity_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkStructuredGridConnectivity_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkStructuredGridConnectivity_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}



static PyObject *
PyvtkStructuredGridConnectivity_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkStructuredGridConnectivity::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkStructuredGridConnectivity::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_SetNumberOfGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGrids(temp0);
    }
    else
    {
      op->vtkStructuredGridConnectivity::SetNumberOfGrids(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_RegisterGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkUnsignedCharArray *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkPoints *temp6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetVTKObject(temp6, "vtkPoints"))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkStructuredGridConnectivity::RegisterGrid(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
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
PyvtkStructuredGridConnectivity_GetGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

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
      op->GetGridExtent(temp0, temp1);
    }
    else
    {
      op->vtkStructuredGridConnectivity::GetGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_SetGhostedGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostedGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

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
      op->SetGhostedGridExtent(temp0, temp1);
    }
    else
    {
      op->vtkStructuredGridConnectivity::SetGhostedGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_GetGhostedGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostedGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

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
      op->GetGhostedGridExtent(temp0, temp1);
    }
    else
    {
      op->vtkStructuredGridConnectivity::GetGhostedGridExtent(temp0, temp1);
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
PyvtkStructuredGridConnectivity_ComputeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNeighbors();
    }
    else
    {
      op->vtkStructuredGridConnectivity::ComputeNeighbors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetNumberOfNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNeighbors(temp0) :
      op->vtkStructuredGridConnectivity::GetNumberOfNeighbors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetGridNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkStructuredNeighbor tempr = (ap.IsBound() ?
      op->GetGridNeighbor(temp0, temp1) :
      op->vtkStructuredGridConnectivity::GetGridNeighbor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStructuredNeighbor");
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_GetNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkIdList *tempr = (ap.IsBound() ?
      op->GetNeighbors(temp0, temp1) :
      op->vtkStructuredGridConnectivity::GetNeighbors(temp0, temp1));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_FillGhostArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillGhostArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

  int temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  vtkUnsignedCharArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->FillGhostArrays(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStructuredGridConnectivity::FillGhostArrays(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridConnectivity_CreateGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridConnectivity *op = static_cast<vtkStructuredGridConnectivity *>(vp);

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
      op->vtkStructuredGridConnectivity::CreateGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredGridConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridConnectivity_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridConnectivity_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridConnectivity_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStructuredGridConnectivity\nC++: static vtkStructuredGridConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridConnectivity_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredGridConnectivity\nC++: vtkStructuredGridConnectivity *NewInstance()\n\n"},
  {"SetWholeExtent", PyvtkStructuredGridConnectivity_SetWholeExtent, METH_VARARGS,
   "V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {"GetWholeExtent", PyvtkStructuredGridConnectivity_GetWholeExtent, METH_VARARGS,
   "V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {"GetDataDimension", PyvtkStructuredGridConnectivity_GetDataDimension, METH_VARARGS,
   "V.GetDataDimension() -> int\nC++: virtual int GetDataDimension()\n\nReturns the data dimension based on the whole extent\n"},
  {"SetNumberOfGrids", PyvtkStructuredGridConnectivity_SetNumberOfGrids, METH_VARARGS,
   "V.SetNumberOfGrids(int)\nC++: void SetNumberOfGrids(const unsigned int N) override;\n\nSet/Get the total number of domains distributed among processors\n"},
  {"RegisterGrid", PyvtkStructuredGridConnectivity_RegisterGrid, METH_VARARGS,
   "V.RegisterGrid(int, [int, int, int, int, int, int],\n    vtkUnsignedCharArray, vtkUnsignedCharArray, vtkPointData,\n    vtkCellData, vtkPoints)\nC++: virtual void RegisterGrid(const int gridID, int extents[6],\n    vtkUnsignedCharArray *nodesGhostArray,\n    vtkUnsignedCharArray *cellGhostArray, vtkPointData *pointData,\n     vtkCellData *cellData, vtkPoints *gridNodes)\n\nRegisters the current grid corresponding to the grid ID by its\nglobal extent w.r.t. the whole extent.\n"},
  {"GetGridExtent", PyvtkStructuredGridConnectivity_GetGridExtent, METH_VARARGS,
   "V.GetGridExtent(int, [int, int, int, int, int, int])\nC++: void GetGridExtent(const int gridID, int extent[6])\n\nReturns the grid extent of the grid corresponding to the given\ngrid ID.\n"},
  {"SetGhostedGridExtent", PyvtkStructuredGridConnectivity_SetGhostedGridExtent, METH_VARARGS,
   "V.SetGhostedGridExtent(int, [int, int, int, int, int, int])\nC++: void SetGhostedGridExtent(const int gridID, int ext[6])\n\nSets the ghosted grid extent for the grid corresponding to the\ngiven grid ID to the given extent.\n"},
  {"GetGhostedGridExtent", PyvtkStructuredGridConnectivity_GetGhostedGridExtent, METH_VARARGS,
   "V.GetGhostedGridExtent(int, [int, int, int, int, int, int])\nC++: void GetGhostedGridExtent(const int gridID, int ext[6])\n\nReturns the ghosted grid extent for the block corresponding the\n"},
  {"ComputeNeighbors", PyvtkStructuredGridConnectivity_ComputeNeighbors, METH_VARARGS,
   "V.ComputeNeighbors()\nC++: void ComputeNeighbors() override;\n\nComputes neighboring information\n"},
  {"GetNumberOfNeighbors", PyvtkStructuredGridConnectivity_GetNumberOfNeighbors, METH_VARARGS,
   "V.GetNumberOfNeighbors(int) -> int\nC++: int GetNumberOfNeighbors(const int gridID)\n\nReturns the number of neighbors for the grid corresponding to the\ngiven grid ID.\n"},
  {"GetGridNeighbor", PyvtkStructuredGridConnectivity_GetGridNeighbor, METH_VARARGS,
   "V.GetGridNeighbor(int, int) -> vtkStructuredNeighbor\nC++: vtkStructuredNeighbor GetGridNeighbor(const int gridID,\n    const int nei)\n\nReturns the neighbor corresponding to the index nei for the grid\nwith the given (global) grid ID.\n"},
  {"GetNeighbors", PyvtkStructuredGridConnectivity_GetNeighbors, METH_VARARGS,
   "V.GetNeighbors(int, [int, ...]) -> vtkIdList\nC++: vtkIdList *GetNeighbors(const int gridID, int *extents)\n\nReturns the list of neighboring blocks for the given grid and the\ncorresponding overlapping extents are filled in the 1-D flat\narray strided by 6.\n\n* NOTE: the flat array extents must be pre-allocated.\n"},
  {"FillGhostArrays", PyvtkStructuredGridConnectivity_FillGhostArrays, METH_VARARGS,
   "V.FillGhostArrays(int, vtkUnsignedCharArray, vtkUnsignedCharArray)\nC++: void FillGhostArrays(const int gridID,\n    vtkUnsignedCharArray *nodesArray,\n    vtkUnsignedCharArray *cellsArray) override;\n\nFills the mesh property arrays, nodes and cells, for the grid\ncorresponding to the given grid ID. NOTE: this method assumes\nthat ComputeNeighbors() has been called.\n"},
  {"CreateGhostLayers", PyvtkStructuredGridConnectivity_CreateGhostLayers, METH_VARARGS,
   "V.CreateGhostLayers(int)\nC++: void CreateGhostLayers(const int N=1) override;\n\nCreates ghost layers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredGridConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkStructuredGridConnectivity", // tp_name
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
  PyvtkStructuredGridConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGridConnectivity_StaticNew()
{
  return vtkStructuredGridConnectivity::New();
}

PyObject *PyvtkStructuredGridConnectivity_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredGridConnectivity_Type, PyvtkStructuredGridConnectivity_Methods,
    "vtkStructuredGridConnectivity",
 &PyvtkStructuredGridConnectivity_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredGridConnectivity_Type;

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

void PyVTKAddFile_vtkStructuredGridConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_NO_OVERLAP", 0 },
        { "VTK_NODE_OVERLAP", 1 },
        { "VTK_EDGE_OVERLAP", 2 },
        { "VTK_PARTIAL_OVERLAP", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

