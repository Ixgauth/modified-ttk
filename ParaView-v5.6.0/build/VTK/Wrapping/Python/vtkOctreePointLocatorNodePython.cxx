// python wrapper for vtkOctreePointLocatorNode
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
#include "vtkOctreePointLocatorNode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOctreePointLocatorNode(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOctreePointLocatorNode_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOctreePointLocatorNode_Doc =
  "vtkOctreePointLocatorNode - Octree node that has 8 children each of\nequal size\n\n"
  "Superclass: vtkObject\n\n"
  "This class represents a single spatial region in a 3D axis octant\n"
  "partitioning.  It is intended to work efficiently with the\n"
  "vtkOctreePointLocator and is not meant for general use.  It is\n"
  "assumed the region bounds some set of points.  The ordering of the\n"
  "children is\n"
  "(-x,-y,-z),(+x,-y,-z),(-x,+y,-z),(+x,+y,-z),(-x,-y,+z),(+x,-y,+z),\n"
  "(-x,+y,+z),(+x,+y,+z).  The portion of the domain assigned to an\n"
  "octant is Min < x <= Max.\n\n"
  "@sa\n"
  "vtkOctreePointLocator\n\n";


static PyObject *
PyvtkOctreePointLocatorNode_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOctreePointLocatorNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOctreePointLocatorNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOctreePointLocatorNode *tempr = vtkOctreePointLocatorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOctreePointLocatorNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOctreePointLocatorNode::NewInstance());

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
PyvtkOctreePointLocatorNode_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkOctreePointLocatorNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->vtkOctreePointLocatorNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocatorNode_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocatorNode_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkOctreePointLocatorNode_SetBounds_s1(self, args);
    case 1:
      return PyvtkOctreePointLocatorNode_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkOctreePointLocatorNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::GetBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

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
      op->GetDataBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::GetDataBounds(temp0);
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
PyvtkOctreePointLocatorNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkOctreePointLocatorNode::GetMinBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkOctreePointLocatorNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMinBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetMinBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMaxBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetMaxBounds(temp0);
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
PyvtkOctreePointLocatorNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkOctreePointLocatorNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkOctreePointLocatorNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_SetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMinDataBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetMinDataBounds(temp0);
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
PyvtkOctreePointLocatorNode_SetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetMaxDataBounds(temp0);
    }
    else
    {
      op->vtkOctreePointLocatorNode::SetMaxDataBounds(temp0);
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
PyvtkOctreePointLocatorNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkOctreePointLocatorNode::GetID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinID() :
      op->vtkOctreePointLocatorNode::GetMinID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_CreateChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateChildNodes();
    }
    else
    {
      op->vtkOctreePointLocatorNode::CreateChildNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteChildNodes();
    }
    else
    {
      op->vtkOctreePointLocatorNode::DeleteChildNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOctreePointLocatorNode *tempr = (ap.IsBound() ?
      op->GetChild(temp0) :
      op->vtkOctreePointLocatorNode::GetChild(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  vtkPlanesIntersection *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanesIntersection") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsRegion(temp0, temp1) :
      op->vtkOctreePointLocatorNode::IntersectsRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsPoint(temp0, temp1, temp2, temp3) :
      op->vtkOctreePointLocatorNode::ContainsPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkOctreePointLocatorNode *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkOctreePointLocatorNode") &&
      ap.GetValue(temp4))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOctreePointLocatorNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOctreePointLocatorNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkOctreePointLocatorNode *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkOctreePointLocatorNode") &&
      ap.GetValue(temp5))
  {
    ap.Save(temp3, save3, size3);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOctreePointLocatorNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkOctreePointLocatorNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkOctreePointLocatorNode_GetDistance2ToBoundary_s1(self, args);
    case 6:
      return PyvtkOctreePointLocatorNode_GetDistance2ToBoundary_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return nullptr;
}



static PyObject *
PyvtkOctreePointLocatorNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkOctreePointLocatorNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkOctreePointLocatorNode"))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1, temp2, temp3) :
      op->vtkOctreePointLocatorNode::GetDistance2ToInnerBoundary(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOctreePointLocatorNode_GetSubOctantIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubOctantIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetSubOctantIndex(temp0, temp1) :
      op->vtkOctreePointLocatorNode::GetSubOctantIndex(temp0, temp1));

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
PyvtkOctreePointLocatorNode_ComputeOctreeNodeInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeOctreeNodeInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOctreePointLocatorNode *op = static_cast<vtkOctreePointLocatorNode *>(vp);

  vtkOctreePointLocatorNode *temp0 = nullptr;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkOctreePointLocatorNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->ComputeOctreeNodeInformation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOctreePointLocatorNode::ComputeOctreeNodeInformation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
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

static PyMethodDef PyvtkOctreePointLocatorNode_Methods[] = {
  {"IsTypeOf", PyvtkOctreePointLocatorNode_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOctreePointLocatorNode_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOctreePointLocatorNode_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOctreePointLocatorNode\nC++: static vtkOctreePointLocatorNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOctreePointLocatorNode_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOctreePointLocatorNode\nC++: vtkOctreePointLocatorNode *NewInstance()\n\n"},
  {"SetNumberOfPoints", PyvtkOctreePointLocatorNode_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(int numberOfPoints)\n\nSet/Get the number of points contained in this region.\n"},
  {"GetNumberOfPoints", PyvtkOctreePointLocatorNode_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nSet/Get the number of points contained in this region.\n"},
  {"SetBounds", PyvtkOctreePointLocatorNode_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double b[6])\n\nSet/Get the bounds of the spatial region represented by this\nnode. Caller allocates storage for 6-vector in GetBounds.\n"},
  {"GetBounds", PyvtkOctreePointLocatorNode_GetBounds, METH_VARARGS,
   "V.GetBounds([float, ...])\nC++: void GetBounds(double *b)\n\nSet/Get the bounds of the spatial region represented by this\nnode. Caller allocates storage for 6-vector in GetBounds.\n"},
  {"SetDataBounds", PyvtkOctreePointLocatorNode_SetDataBounds, METH_VARARGS,
   "V.SetDataBounds(float, float, float, float, float, float)\nC++: void SetDataBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\n\nSet/Get the bounds of the points contained in this spatial\nregion. This may be smaller than the bounds of the region itself.\nCaller allocates storage for 6-vector in GetDataBounds.\n"},
  {"GetDataBounds", PyvtkOctreePointLocatorNode_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds([float, ...])\nC++: void GetDataBounds(double *b)\n\nSet/Get the bounds of the points contained in this spatial\nregion. This may be smaller than the bounds of the region itself.\nCaller allocates storage for 6-vector in GetDataBounds.\n"},
  {"GetMinBounds", PyvtkOctreePointLocatorNode_GetMinBounds, METH_VARARGS,
   "V.GetMinBounds() -> (float, ...)\nC++: virtual double *GetMinBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {"GetMaxBounds", PyvtkOctreePointLocatorNode_GetMaxBounds, METH_VARARGS,
   "V.GetMaxBounds() -> (float, ...)\nC++: virtual double *GetMaxBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {"SetMinBounds", PyvtkOctreePointLocatorNode_SetMinBounds, METH_VARARGS,
   "V.SetMinBounds([float, float, float])\nC++: void SetMinBounds(double minBounds[3])\n\nSet the xmin, ymin and zmin value of the bounds of this region\n"},
  {"SetMaxBounds", PyvtkOctreePointLocatorNode_SetMaxBounds, METH_VARARGS,
   "V.SetMaxBounds([float, float, float])\nC++: void SetMaxBounds(double maxBounds[3])\n\nSet the xmax, ymax and zmax value of the bounds of this region\n"},
  {"GetMinDataBounds", PyvtkOctreePointLocatorNode_GetMinDataBounds, METH_VARARGS,
   "V.GetMinDataBounds() -> (float, ...)\nC++: virtual double *GetMinDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe 3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {"GetMaxDataBounds", PyvtkOctreePointLocatorNode_GetMaxDataBounds, METH_VARARGS,
   "V.GetMaxDataBounds() -> (float, ...)\nC++: virtual double *GetMaxDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe 3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {"SetMinDataBounds", PyvtkOctreePointLocatorNode_SetMinDataBounds, METH_VARARGS,
   "V.SetMinDataBounds([float, float, float])\nC++: void SetMinDataBounds(double minDataBounds[3])\n\nSet the xmin, ymin and zmin value of the bounds of this data\nwithin this region.\n"},
  {"SetMaxDataBounds", PyvtkOctreePointLocatorNode_SetMaxDataBounds, METH_VARARGS,
   "V.SetMaxDataBounds([float, float, float])\nC++: void SetMaxDataBounds(double maxDataBounds[3])\n\nSet the xmax, ymax and zmax value of the bounds of this data\nwithin this region.\n"},
  {"GetID", PyvtkOctreePointLocatorNode_GetID, METH_VARARGS,
   "V.GetID() -> int\nC++: virtual int GetID()\n\nGet the ID associated with the region described by this node.  If\nthis is not a leaf node, this value should be -1.\n"},
  {"GetMinID", PyvtkOctreePointLocatorNode_GetMinID, METH_VARARGS,
   "V.GetMinID() -> int\nC++: virtual int GetMinID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose regions represent a partitioning of this region.  The IDs\nof these leaf nodes form a contiguous set.  Get the first of the\nfirst point's ID that is contained in this node.\n"},
  {"CreateChildNodes", PyvtkOctreePointLocatorNode_CreateChildNodes, METH_VARARGS,
   "V.CreateChildNodes()\nC++: void CreateChildNodes()\n\nAdd the 8 children.\n"},
  {"DeleteChildNodes", PyvtkOctreePointLocatorNode_DeleteChildNodes, METH_VARARGS,
   "V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the 8 children.\n"},
  {"GetChild", PyvtkOctreePointLocatorNode_GetChild, METH_VARARGS,
   "V.GetChild(int) -> vtkOctreePointLocatorNode\nC++: vtkOctreePointLocatorNode *GetChild(int i)\n\nGet a pointer to the ith child of this node.\n"},
  {"IntersectsRegion", PyvtkOctreePointLocatorNode_IntersectsRegion, METH_VARARGS,
   "V.IntersectsRegion(vtkPlanesIntersection, int) -> int\nC++: int IntersectsRegion(vtkPlanesIntersection *pi,\n    int useDataBounds)\n\nA vtkPlanesIntersection object represents a convex 3D region\nbounded by planes, and it is capable of computing intersections\nof boxes with itself.  Return 1 if this spatial region intersects\nthe spatial region described by the vtkPlanesIntersection object.\nUse the possibly smaller bounds of the points within the region\nif useDataBounds is non-zero.\n"},
  {"ContainsPoint", PyvtkOctreePointLocatorNode_ContainsPoint, METH_VARARGS,
   "V.ContainsPoint(float, float, float, int) -> int\nC++: int ContainsPoint(double x, double y, double z,\n    int useDataBounds)\n\nReturn 1 if this spatial region entirely contains the given\npoint. Use the possibly smaller bounds of the points within the\nregion if useDataBounds is non-zero.\n"},
  {"GetDistance2ToBoundary", PyvtkOctreePointLocatorNode_GetDistance2ToBoundary, METH_VARARGS,
   "V.GetDistance2ToBoundary(float, float, float,\n    vtkOctreePointLocatorNode, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    vtkOctreePointLocatorNode *top, int useDataBounds)\nV.GetDistance2ToBoundary(float, float, float, [float, ...],\n    vtkOctreePointLocatorNode, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    double *boundaryPt, vtkOctreePointLocatorNode *top,\n    int useDataBounds)\n\nCalculate the distance squared from any point to the boundary of\nthis region.  Use the boundary of the points within the region if\nuseDataBounds is non-zero.\n"},
  {"GetDistance2ToInnerBoundary", PyvtkOctreePointLocatorNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   "V.GetDistance2ToInnerBoundary(float, float, float,\n    vtkOctreePointLocatorNode) -> float\nC++: double GetDistance2ToInnerBoundary(double x, double y,\n    double z, vtkOctreePointLocatorNode *top)\n\nCalculate the distance from the specified point (which is\nrequired to be inside this spatial region) to an interior\nboundary.  An interior boundary is one that is not also an\nboundary of the entire space partitioned by the tree of\nvtkOctreePointLocatorNode's.\n"},
  {"GetSubOctantIndex", PyvtkOctreePointLocatorNode_GetSubOctantIndex, METH_VARARGS,
   "V.GetSubOctantIndex([float, ...], int) -> int\nC++: int GetSubOctantIndex(double *point, int CheckContainment)\n\nReturn the id of the suboctant that a given point is in. If\nCheckContainment is non-zero then it checks whether the point is\nin the actual bounding box of the suboctant, otherwise it only\nchecks which octant the point is in that is created from the\naxis-aligned partitioning of the domain at this octant's center.\n"},
  {"ComputeOctreeNodeInformation", PyvtkOctreePointLocatorNode_ComputeOctreeNodeInformation, METH_VARARGS,
   "V.ComputeOctreeNodeInformation(vtkOctreePointLocatorNode, int,\n    int, [float, ...])\nC++: void ComputeOctreeNodeInformation(\n    vtkOctreePointLocatorNode *Parent, int &NextLeafId,\n    int &NextMinId, float *coordinates)\n\nRecursive function to compute ID, MinVal, MaxVal, and MinID.\nParent is used for MinVal and MaxVal in the case that no points\nare in the leaf node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOctreePointLocatorNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkOctreePointLocatorNode", // tp_name
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
  PyvtkOctreePointLocatorNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOctreePointLocatorNode_StaticNew()
{
  return vtkOctreePointLocatorNode::New();
}

PyObject *PyvtkOctreePointLocatorNode_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOctreePointLocatorNode_Type, PyvtkOctreePointLocatorNode_Methods,
    "vtkOctreePointLocatorNode",
 &PyvtkOctreePointLocatorNode_StaticNew);

  PyTypeObject *pytype = &PyvtkOctreePointLocatorNode_Type;

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

void PyVTKAddFile_vtkOctreePointLocatorNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOctreePointLocatorNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOctreePointLocatorNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

