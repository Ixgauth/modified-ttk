// python wrapper for vtkIncrementalOctreeNode
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
#include "vtkIncrementalOctreeNode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalOctreeNode(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIncrementalOctreeNode_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkIncrementalOctreeNode_Doc =
  "vtkIncrementalOctreeNode - Octree node constituting incremental\n octree (in support of both point location and point insertion)\n\n"
  "Superclass: vtkObject\n\n"
  "Octree nodes serve as spatial sub-division primitives to build the\n"
  "search\n"
  " structure of an incremental octree in a recursive top-down manner.\n"
  "The\n"
  " hierarchy takes the form of a tree-like representation by which a\n"
  "parent\n"
  " node contains eight mutually non-overlapping child nodes. Each child\n"
  "is\n"
  " assigned with an axis-aligned rectangular volume (Spatial Bounding\n"
  "Box)\n"
  " and the eight children together cover exactly the same region as\n"
  "governed\n"
  " by their parent. The eight child nodes / octants are ordered as\n\n\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n"
  "},\n\n\n"
  " where { xrange & yRange & zRange } defines the region of each 3D\n"
  "octant.\n"
  " In addition, the points falling within and registered, by means of\n"
  "point\n"
  " indices, in the parent node are distributed to the child nodes for\n"
  "delegated\n"
  " maintenance. In fact, only leaf nodes, i.e., those without any\n"
  "descendants,\n"
  " actually store point indices while each node, regardless of a leaf\n"
  "or non-\n"
  " leaf node, keeps a dynamically updated Data Bounding Box of the\n"
  "inhabitant\n"
  " points, if any. Given a maximum number of points per leaf node, an\n"
  "octree\n"
  " is initialized with an empty leaf node that is then recursively\n"
  "sub-divided,\n"
  " but only on demand as points are incrementally inserted, to\n"
  "construct a\n"
  " populated tree.\n\n\n"
  " Please note that this octree node class is able to handle a large\n"
  "number\n"
  " of EXACTLY duplicate points that is greater than the specified\n"
  "maximum\n"
  " number of points per leaf node. In other words, as an exception, a\n"
  "leaf\n"
  " node may maintain an arbitrary number of exactly duplicate points to\n"
  "deal\n"
  " with possible extreme cases.\n\n"
  "@sa\n"
  " vtkIncrementalOctreePointLocator\n\n";


static PyObject *
PyvtkIncrementalOctreeNode_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalOctreeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalOctreeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalOctreeNode *tempr = vtkIncrementalOctreeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalOctreeNode::NewInstance());

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
PyvtkIncrementalOctreeNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkIncrementalOctreeNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetPointIdSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIdSet() :
      op->vtkIncrementalOctreeNode::GetPointIdSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteChildNodes();
    }
    else
    {
      op->vtkIncrementalOctreeNode::DeleteChildNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_SetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkIncrementalOctreeNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkIncrementalOctreeNode::GetBounds(temp0);
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
PyvtkIncrementalOctreeNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkIncrementalOctreeNode::GetMinBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkIncrementalOctreeNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkIncrementalOctreeNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkIncrementalOctreeNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkIncrementalOctreeNode::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChildIndex(temp0) :
      op->vtkIncrementalOctreeNode::GetChildIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->GetChild(temp0) :
      op->vtkIncrementalOctreeNode::GetChild(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsPoint(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPointByData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPointByData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsPointByData(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPointByData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<vtkIdType> store3(2*size3);
  vtkIdType *temp3 = store3.Data();
  vtkIdType *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4) :
      op->vtkIncrementalOctreeNode::InsertPoint(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIncrementalOctreeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode"))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1) :
      op->vtkIncrementalOctreeNode::GetDistance2ToInnerBoundary(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIncrementalOctreeNode *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIncrementalOctreeNode *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3));

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
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(self, args);
    case 4:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return nullptr;
}



static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ExportAllPointIdsByInsertion(temp0);
    }
    else
    {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByInsertion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByDirectSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<vtkIdType> store0(2*size0);
  vtkIdType *temp0 = store0.Data();
  vtkIdType *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ExportAllPointIdsByDirectSet(temp0, temp1);
    }
    else
    {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByDirectSet(temp0, temp1);
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

static PyMethodDef PyvtkIncrementalOctreeNode_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalOctreeNode_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIncrementalOctreeNode_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIncrementalOctreeNode_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIncrementalOctreeNode\nC++: static vtkIncrementalOctreeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIncrementalOctreeNode_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *NewInstance()\n\n"},
  {"GetNumberOfPoints", PyvtkIncrementalOctreeNode_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nGet the number of points inside or under this node.\n"},
  {"GetPointIdSet", PyvtkIncrementalOctreeNode_GetPointIdSet, METH_VARARGS,
   "V.GetPointIdSet() -> vtkIdList\nC++: virtual vtkIdList *GetPointIdSet()\n\nGet the list of point indices, nullptr for a non-leaf node.\n"},
  {"DeleteChildNodes", PyvtkIncrementalOctreeNode_DeleteChildNodes, METH_VARARGS,
   "V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the eight child nodes.\n"},
  {"SetBounds", PyvtkIncrementalOctreeNode_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\n\nSet the spatial bounding box of the node. This function sets a\ndefault data bounding box.\n"},
  {"GetBounds", PyvtkIncrementalOctreeNode_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the spatial bounding box of the node. The values are returned\nvia an array in order of: x_min, x_max, y_min, y_max, z_min,\nz_max.\n"},
  {"GetMinBounds", PyvtkIncrementalOctreeNode_GetMinBounds, METH_VARARGS,
   "V.GetMinBounds() -> (float, float, float)\nC++: double *GetMinBounds()\n\n"},
  {"GetMaxBounds", PyvtkIncrementalOctreeNode_GetMaxBounds, METH_VARARGS,
   "V.GetMaxBounds() -> (float, float, float)\nC++: double *GetMaxBounds()\n\n"},
  {"GetMinDataBounds", PyvtkIncrementalOctreeNode_GetMinDataBounds, METH_VARARGS,
   "V.GetMinDataBounds() -> (float, ...)\nC++: double *GetMinDataBounds()\n\nGet access to MinDataBounds. Note that MinDataBounds is not valid\nuntil point insertion.\n"},
  {"GetMaxDataBounds", PyvtkIncrementalOctreeNode_GetMaxDataBounds, METH_VARARGS,
   "V.GetMaxDataBounds() -> (float, ...)\nC++: double *GetMaxDataBounds()\n\nGet access to MaxDataBounds. Note that MaxDataBounds is not valid\nuntil point insertion.\n"},
  {"IsLeaf", PyvtkIncrementalOctreeNode_IsLeaf, METH_VARARGS,
   "V.IsLeaf() -> int\nC++: int IsLeaf()\n\nDetermine whether or not this node is a leaf.\n"},
  {"GetChildIndex", PyvtkIncrementalOctreeNode_GetChildIndex, METH_VARARGS,
   "V.GetChildIndex((float, float, float)) -> int\nC++: int GetChildIndex(const double point[3])\n\nDetermine which specific child / octant contains a given point.\nNote that the point is assumed to be inside this node and no\nchecking is performed on the inside issue.\n"},
  {"GetChild", PyvtkIncrementalOctreeNode_GetChild, METH_VARARGS,
   "V.GetChild(int) -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *GetChild(int i)\n\nGet quick access to a child of this node. Note that this node is\nassumed to be a non-leaf one and no checking is performed on the\nnode type.\n"},
  {"ContainsPoint", PyvtkIncrementalOctreeNode_ContainsPoint, METH_VARARGS,
   "V.ContainsPoint((float, float, float)) -> int\nC++: int ContainsPoint(const double pnt[3])\n\nA point is in a node if and only if MinBounds[i] < p[i] <=\nMaxBounds[i], which allows a node to be divided into eight\nnon-overlapping children.\n"},
  {"ContainsPointByData", PyvtkIncrementalOctreeNode_ContainsPointByData, METH_VARARGS,
   "V.ContainsPointByData((float, float, float)) -> int\nC++: int ContainsPointByData(const double pnt[3])\n\nA point is in a node, in terms of data, if and only if\nMinDataBounds[i] <= p[i] <= MaxDataBounds[i].\n"},
  {"InsertPoint", PyvtkIncrementalOctreeNode_InsertPoint, METH_VARARGS,
   "V.InsertPoint(vtkPoints, (float, float, float), int, [int, ...],\n    int) -> int\nC++: int InsertPoint(vtkPoints *points, const double newPnt[3],\n    int maxPts, vtkIdType *pntId, int ptMode)\n\nThis function is called after a successful point-insertion check\nand only applies to a leaf node. Prior to a call to this\nfunction, the octree should have been retrieved top-down to find\nthe specific leaf node in which this new point (newPt) will be\ninserted. The actual index of the new point (to be inserted to\npoints) is stored in pntId. Argument ptMode specifies whether the\npoint is not inserted at all but instead only the point index is\nprovided upon 0, the point is inserted via vtkPoints::\nInsertPoint() upon 1, or it is inserted via\nvtkPoints::InsertNextPoint() upon 2. For case 0, pntId needs to\nbe specified. For cases 1 and 2, the actual point index is\nreturned via pntId. Note that this function always returns 1 to\nindicate the success of point insertion.\n"},
  {"GetDistance2ToInnerBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   "V.GetDistance2ToInnerBoundary((float, float, float),\n    vtkIncrementalOctreeNode) -> float\nC++: double GetDistance2ToInnerBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode)\n\nGiven a point inside this node, get the minimum squared distance\nto all inner boundaries. An inner boundary is a node's face that\nis shared by another non-root node.\n"},
  {"GetDistance2ToBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToBoundary, METH_VARARGS,
   "V.GetDistance2ToBoundary((float, float, float),\n    vtkIncrementalOctreeNode, int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode, int checkData)\nV.GetDistance2ToBoundary((float, float, float), [float, float,\n    float], vtkIncrementalOctreeNode, int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    double closest[3], vtkIncrementalOctreeNode *rootNode,\n    int checkData)\n\nCompute the minimum squared distance from a point to this node,\nwith all six boundaries considered. The data bounding box is\nchecked if checkData is non-zero.\n"},
  {"ExportAllPointIdsByInsertion", PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion, METH_VARARGS,
   "V.ExportAllPointIdsByInsertion(vtkIdList)\nC++: void ExportAllPointIdsByInsertion(vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by inserting them to an allocated vtkIdList via\nvtkIdList::InsertNextId().\n"},
  {"ExportAllPointIdsByDirectSet", PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet, METH_VARARGS,
   "V.ExportAllPointIdsByDirectSet([int, ...], vtkIdList)\nC++: void ExportAllPointIdsByDirectSet(vtkIdType *pntIdx,\n    vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by directly setting them in an allocated vtkIdList object.\npntIdx indicates the starting location (in terms of vtkIdList)\nfrom which new point indices are added to vtkIdList by\nvtkIdList::SetId().\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIncrementalOctreeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkIncrementalOctreeNode", // tp_name
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
  PyvtkIncrementalOctreeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIncrementalOctreeNode_StaticNew()
{
  return vtkIncrementalOctreeNode::New();
}

PyObject *PyvtkIncrementalOctreeNode_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIncrementalOctreeNode_Type, PyvtkIncrementalOctreeNode_Methods,
    "vtkIncrementalOctreeNode",
 &PyvtkIncrementalOctreeNode_StaticNew);

  PyTypeObject *pytype = &PyvtkIncrementalOctreeNode_Type;

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

void PyVTKAddFile_vtkIncrementalOctreeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalOctreeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalOctreeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

