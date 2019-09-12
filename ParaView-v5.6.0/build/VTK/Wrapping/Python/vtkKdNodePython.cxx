// python wrapper for vtkKdNode
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
#include "vtkKdNode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKdNode(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkKdNode_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkKdNode_Doc =
  "vtkKdNode - This class represents a single spatial region\n    in an 3D axis aligned binary spatial partitioning.\n\n"
  "Superclass: vtkObject\n\n"
  "It is assumed\n"
  "    the region bounds some set of points.  Regions are represented\n"
  "    as nodes in a binary tree.\n\n"
  "@sa\n"
  "     vtkKdTree vtkOBSPCuts\n\n";


static PyObject *
PyvtkKdNode_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKdNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKdNode *tempr = vtkKdNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdNode::NewInstance());

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
PyvtkKdNode_SetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDim(temp0);
    }
    else
    {
      op->vtkKdNode::SetDim(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDim() :
      op->vtkKdNode::GetDim());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetDivisionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDivisionPosition() :
      op->vtkKdNode::GetDivisionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkKdNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdNode_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdNode_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkKdNode_SetBounds_s1(self, args);
    case 1:
      return PyvtkKdNode_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkKdNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::GetBounds(temp0);
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
PyvtkKdNode_SetDataBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::SetDataBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdNode_SetDataBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->SetDataBounds(temp0);
    }
    else
    {
      op->vtkKdNode::SetDataBounds(temp0);
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
PyvtkKdNode_SetDataBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkKdNode_SetDataBounds_s1(self, args);
    case 1:
      return PyvtkKdNode_SetDataBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataBounds");
  return nullptr;
}



static PyObject *
PyvtkKdNode_GetDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::GetDataBounds(temp0);
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
PyvtkKdNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkKdNode::GetMinBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkKdNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinBounds(temp0);
    }
    else
    {
      op->vtkKdNode::SetMinBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaxBounds(temp0);
    }
    else
    {
      op->vtkKdNode::SetMaxBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkKdNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkKdNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinDataBounds(temp0);
    }
    else
    {
      op->vtkKdNode::SetMinDataBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDataBounds(temp0);
    }
    else
    {
      op->vtkKdNode::SetMaxDataBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetID(temp0);
    }
    else
    {
      op->vtkKdNode::SetID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkKdNode::GetID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinID() :
      op->vtkKdNode::GetMinID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxID() :
      op->vtkKdNode::GetMaxID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMinID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinID(temp0);
    }
    else
    {
      op->vtkKdNode::SetMinID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetMaxID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxID(temp0);
    }
    else
    {
      op->vtkKdNode::SetMaxID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_AddChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = nullptr;
  vtkKdNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkKdNode") &&
      ap.GetVTKObject(temp1, "vtkKdNode"))
  {
    if (ap.IsBound())
    {
      op->AddChildNodes(temp0, temp1);
    }
    else
    {
      op->vtkKdNode::AddChildNodes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteChildNodes();
    }
    else
    {
      op->vtkKdNode::DeleteChildNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetLeft() :
      op->vtkKdNode::GetLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
  {
    if (ap.IsBound())
    {
      op->SetLeft(temp0);
    }
    else
    {
      op->vtkKdNode::SetLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetRight() :
      op->vtkKdNode::GetRight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
  {
    if (ap.IsBound())
    {
      op->SetRight(temp0);
    }
    else
    {
      op->vtkKdNode::SetRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdNode *tempr = (ap.IsBound() ?
      op->GetUp() :
      op->vtkKdNode::GetUp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_SetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkKdNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
  {
    if (ap.IsBound())
    {
      op->SetUp(temp0);
    }
    else
    {
      op->vtkKdNode::SetUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkKdNode::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsSphere2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdNode::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkPlanesIntersection *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlanesIntersection") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsRegion(temp0, temp1) :
      op->vtkKdNode::IntersectsRegion(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_IntersectsCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  vtkCell *temp0 = nullptr;
  int temp1;
  int temp2 = -1;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2, temp3) :
      op->vtkKdNode::IntersectsCell(temp0, temp1, temp2, temp3));

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
PyvtkKdNode_ContainsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkKdNode::ContainsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
      op->vtkKdNode::ContainsPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

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
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3) :
      op->vtkKdNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp3, save3, size3);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3, temp4));

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
PyvtkKdNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkKdNode_GetDistance2ToBoundary_s1(self, args);
    case 5:
      return PyvtkKdNode_GetDistance2ToBoundary_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return nullptr;
}



static PyObject *
PyvtkKdNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1, temp2) :
      op->vtkKdNode::GetDistance2ToInnerBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_PrintNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PrintNode(temp0);
    }
    else
    {
      op->vtkKdNode::PrintNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdNode_PrintVerboseNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintVerboseNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdNode *op = static_cast<vtkKdNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PrintVerboseNode(temp0);
    }
    else
    {
      op->vtkKdNode::PrintVerboseNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKdNode_Methods[] = {
  {"IsTypeOf", PyvtkKdNode_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKdNode_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKdNode_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkKdNode\nC++: static vtkKdNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKdNode_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkKdNode\nC++: vtkKdNode *NewInstance()\n\n"},
  {"SetDim", PyvtkKdNode_SetDim, METH_VARARGS,
   "V.SetDim(int)\nC++: virtual void SetDim(int _arg)\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {"GetDim", PyvtkKdNode_GetDim, METH_VARARGS,
   "V.GetDim() -> int\nC++: virtual int GetDim()\n\nSet/Get the dimension along which this region is divided. (0 - x,\n1 - y, 2 - z, 3 - leaf node (default)).\n"},
  {"GetDivisionPosition", PyvtkKdNode_GetDivisionPosition, METH_VARARGS,
   "V.GetDivisionPosition() -> float\nC++: virtual double GetDivisionPosition()\n\nGet the location of the division plane along the axis the region\nis divided.  See also GetDim().  The result is undertermined if\nthis node is not divided (a leaf node).\n"},
  {"SetNumberOfPoints", PyvtkKdNode_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: virtual void SetNumberOfPoints(int _arg)\n\nSet/Get the number of points contained in this region.\n"},
  {"GetNumberOfPoints", PyvtkKdNode_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nSet/Get the number of points contained in this region.\n"},
  {"SetBounds", PyvtkKdNode_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double b[6])\n\nSet/Get the bounds of the spatial region represented by this\nnode. Caller allocates storage for 6-vector in GetBounds.\n"},
  {"GetBounds", PyvtkKdNode_GetBounds, METH_VARARGS,
   "V.GetBounds([float, ...])\nC++: void GetBounds(double *b)\n\nSet/Get the bounds of the spatial region represented by this\nnode. Caller allocates storage for 6-vector in GetBounds.\n"},
  {"SetDataBounds", PyvtkKdNode_SetDataBounds, METH_VARARGS,
   "V.SetDataBounds(float, float, float, float, float, float)\nC++: void SetDataBounds(double x1, double x2, double y1,\n    double y2, double z1, double z2)\nV.SetDataBounds([float, ...])\nC++: void SetDataBounds(float *v)\n\nSet/Get the bounds of the points contained in this spatial\nregion. This may be smaller than the bounds of the region itself.\nCaller allocates storage for 6-vector in GetDataBounds.\n"},
  {"GetDataBounds", PyvtkKdNode_GetDataBounds, METH_VARARGS,
   "V.GetDataBounds([float, ...])\nC++: void GetDataBounds(double *b)\n\nSet/Get the bounds of the points contained in this spatial\nregion. This may be smaller than the bounds of the region itself.\nCaller allocates storage for 6-vector in GetDataBounds.\n"},
  {"GetMinBounds", PyvtkKdNode_GetMinBounds, METH_VARARGS,
   "V.GetMinBounds() -> (float, float, float)\nC++: double *GetMinBounds()\n\nGet a pointer to the 3 bound minima (xmin, ymin and zmin) or the\n3 bound maxima (xmax, ymax, zmax).  Don't free this pointer.\n"},
  {"GetMaxBounds", PyvtkKdNode_GetMaxBounds, METH_VARARGS,
   "V.GetMaxBounds() -> (float, float, float)\nC++: double *GetMaxBounds()\n\n"},
  {"SetMinBounds", PyvtkKdNode_SetMinBounds, METH_VARARGS,
   "V.SetMinBounds((float, ...))\nC++: void SetMinBounds(const double *mb)\n\nSet the xmin, ymin and zmin value of the bounds of this region\n"},
  {"SetMaxBounds", PyvtkKdNode_SetMaxBounds, METH_VARARGS,
   "V.SetMaxBounds((float, ...))\nC++: void SetMaxBounds(const double *mb)\n\nSet the xmax, ymax and zmax value of the bounds of this region\n"},
  {"GetMinDataBounds", PyvtkKdNode_GetMinDataBounds, METH_VARARGS,
   "V.GetMinDataBounds() -> (float, float, float)\nC++: double *GetMinDataBounds()\n\nGet a pointer to the 3 data bound minima (xmin, ymin and zmin) or\nthe 3 data bound maxima (xmax, ymax, zmax).  Don't free this\npointer.\n"},
  {"GetMaxDataBounds", PyvtkKdNode_GetMaxDataBounds, METH_VARARGS,
   "V.GetMaxDataBounds() -> (float, float, float)\nC++: double *GetMaxDataBounds()\n\n"},
  {"SetMinDataBounds", PyvtkKdNode_SetMinDataBounds, METH_VARARGS,
   "V.SetMinDataBounds((float, ...))\nC++: void SetMinDataBounds(const double *mb)\n\nSet the xmin, ymin and zmin value of the bounds of this data\nwithin this region\n"},
  {"SetMaxDataBounds", PyvtkKdNode_SetMaxDataBounds, METH_VARARGS,
   "V.SetMaxDataBounds((float, ...))\nC++: void SetMaxDataBounds(const double *mb)\n\nSet the xmax, ymax and zmax value of the bounds of this data\nwithin this region\n"},
  {"SetID", PyvtkKdNode_SetID, METH_VARARGS,
   "V.SetID(int)\nC++: virtual void SetID(int _arg)\n\nSet/Get the ID associated with the region described by this node.\n If this is not a leaf node, this value should be -1.\n"},
  {"GetID", PyvtkKdNode_GetID, METH_VARARGS,
   "V.GetID() -> int\nC++: virtual int GetID()\n\nSet/Get the ID associated with the region described by this node.\n If this is not a leaf node, this value should be -1.\n"},
  {"GetMinID", PyvtkKdNode_GetMinID, METH_VARARGS,
   "V.GetMinID() -> int\nC++: virtual int GetMinID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose regions represent a partitioning of this region.  The IDs\nof these leaf nodes form a contiguous set.  Set/Get the range of\nthe IDs of the leaf nodes below this node.  If this is already a\nleaf node, these values should be the same as the ID.\n"},
  {"GetMaxID", PyvtkKdNode_GetMaxID, METH_VARARGS,
   "V.GetMaxID() -> int\nC++: virtual int GetMaxID()\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose regions represent a partitioning of this region.  The IDs\nof these leaf nodes form a contiguous set.  Set/Get the range of\nthe IDs of the leaf nodes below this node.  If this is already a\nleaf node, these values should be the same as the ID.\n"},
  {"SetMinID", PyvtkKdNode_SetMinID, METH_VARARGS,
   "V.SetMinID(int)\nC++: virtual void SetMinID(int _arg)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose regions represent a partitioning of this region.  The IDs\nof these leaf nodes form a contiguous set.  Set/Get the range of\nthe IDs of the leaf nodes below this node.  If this is already a\nleaf node, these values should be the same as the ID.\n"},
  {"SetMaxID", PyvtkKdNode_SetMaxID, METH_VARARGS,
   "V.SetMaxID(int)\nC++: virtual void SetMaxID(int _arg)\n\nIf this node is not a leaf node, there are leaf nodes below it\nwhose regions represent a partitioning of this region.  The IDs\nof these leaf nodes form a contiguous set.  Set/Get the range of\nthe IDs of the leaf nodes below this node.  If this is already a\nleaf node, these values should be the same as the ID.\n"},
  {"AddChildNodes", PyvtkKdNode_AddChildNodes, METH_VARARGS,
   "V.AddChildNodes(vtkKdNode, vtkKdNode)\nC++: void AddChildNodes(vtkKdNode *left, vtkKdNode *right)\n\nAdd the left and right children.\n"},
  {"DeleteChildNodes", PyvtkKdNode_DeleteChildNodes, METH_VARARGS,
   "V.DeleteChildNodes()\nC++: void DeleteChildNodes()\n\nDelete the left and right children.\n"},
  {"GetLeft", PyvtkKdNode_GetLeft, METH_VARARGS,
   "V.GetLeft() -> vtkKdNode\nC++: virtual vtkKdNode *GetLeft()\n\nSet/Get a pointer to the left child of this node.\n"},
  {"SetLeft", PyvtkKdNode_SetLeft, METH_VARARGS,
   "V.SetLeft(vtkKdNode)\nC++: void SetLeft(vtkKdNode *left)\n\nSet/Get a pointer to the left child of this node.\n"},
  {"GetRight", PyvtkKdNode_GetRight, METH_VARARGS,
   "V.GetRight() -> vtkKdNode\nC++: virtual vtkKdNode *GetRight()\n\nSet/Get a pointer to the right child of this node.\n"},
  {"SetRight", PyvtkKdNode_SetRight, METH_VARARGS,
   "V.SetRight(vtkKdNode)\nC++: void SetRight(vtkKdNode *right)\n\nSet/Get a pointer to the right child of this node.\n"},
  {"GetUp", PyvtkKdNode_GetUp, METH_VARARGS,
   "V.GetUp() -> vtkKdNode\nC++: virtual vtkKdNode *GetUp()\n\nSet/Get a pointer to the parent of this node.\n"},
  {"SetUp", PyvtkKdNode_SetUp, METH_VARARGS,
   "V.SetUp(vtkKdNode)\nC++: void SetUp(vtkKdNode *up)\n\nSet/Get a pointer to the parent of this node.\n"},
  {"IntersectsBox", PyvtkKdNode_IntersectsBox, METH_VARARGS,
   "V.IntersectsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int IntersectsBox(double x1, double x2, double y1, double y2,\n     double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region intersects the axis-aligned box\ngiven by the bounds passed in.  Use the possibly smaller bounds\nof the points within the region if useDataBounds is non-zero.\n"},
  {"IntersectsSphere2", PyvtkKdNode_IntersectsSphere2, METH_VARARGS,
   "V.IntersectsSphere2(float, float, float, float, int) -> int\nC++: int IntersectsSphere2(double x, double y, double z,\n    double rSquared, int useDataBounds)\n\nReturn 1 if this spatial region intersects a sphere described by\nit's center and the square of it's radius. Use the possibly\nsmaller bounds of the points within the region if useDataBounds\nis non-zero.\n"},
  {"IntersectsRegion", PyvtkKdNode_IntersectsRegion, METH_VARARGS,
   "V.IntersectsRegion(vtkPlanesIntersection, int) -> int\nC++: int IntersectsRegion(vtkPlanesIntersection *pi,\n    int useDataBounds)\n\nA vtkPlanesIntersection object represents a convex 3D region\nbounded by planes, and it is capable of computing intersections\nof boxes with itself.  Return 1 if this spatial region intersects\nthe spatial region described by the vtkPlanesIntersection object.\nUse the possibly smaller bounds of the points within the region\nif useDataBounds is non-zero.\n"},
  {"IntersectsCell", PyvtkKdNode_IntersectsCell, METH_VARARGS,
   "V.IntersectsCell(vtkCell, int, int, [float, ...]) -> int\nC++: int IntersectsCell(vtkCell *cell, int useDataBounds,\n    int cellRegion=-1, double *cellBounds=nullptr)\n\nReturn 1 if the cell specified intersects this region.  If you\nalready know the ID of the region containing the cell's centroid,\nprovide that as an argument.  If you already know the bounds of\nthe cell, provide that as well, in the form of\nxmin,xmax,ymin,ymax,zmin, zmax.  Either of these may speed the\ncalculation. Use the possibly smaller bounds of the points within\nthe region if useDataBounds is non-zero.\n"},
  {"ContainsBox", PyvtkKdNode_ContainsBox, METH_VARARGS,
   "V.ContainsBox(float, float, float, float, float, float, int)\n    -> int\nC++: int ContainsBox(double x1, double x2, double y1, double y2,\n    double z1, double z2, int useDataBounds)\n\nReturn 1 if this spatial region entirely contains a box specified\nby it's bounds. Use the possibly smaller bounds of the points\nwithin the region if useDataBounds is non-zero.\n"},
  {"ContainsPoint", PyvtkKdNode_ContainsPoint, METH_VARARGS,
   "V.ContainsPoint(float, float, float, int) -> int\nC++: int ContainsPoint(double x, double y, double z,\n    int useDataBounds)\n\nReturn 1 if this spatial region entirely contains the given\npoint. Use the possibly smaller bounds of the points within the\nregion if useDataBounds is non-zero.\n"},
  {"GetDistance2ToBoundary", PyvtkKdNode_GetDistance2ToBoundary, METH_VARARGS,
   "V.GetDistance2ToBoundary(float, float, float, int) -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    int useDataBounds)\nV.GetDistance2ToBoundary(float, float, float, [float, ...], int)\n    -> float\nC++: double GetDistance2ToBoundary(double x, double y, double z,\n    double *boundaryPt, int useDataBounds)\n\nCalculate the distance squared from any point to the boundary of\nthis region.  Use the boundary of the points within the region if\nuseDataBounds is non-zero.\n"},
  {"GetDistance2ToInnerBoundary", PyvtkKdNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   "V.GetDistance2ToInnerBoundary(float, float, float) -> float\nC++: double GetDistance2ToInnerBoundary(double x, double y,\n    double z)\n\nCalculate the distance from the specified point (which is\nrequired to be inside this spatial region) to an interior\nboundary.  An interior boundary is one that is not also an\nboundary of the entire space partitioned by the tree of\nvtkKdNode's.\n"},
  {"PrintNode", PyvtkKdNode_PrintNode, METH_VARARGS,
   "V.PrintNode(int)\nC++: void PrintNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {"PrintVerboseNode", PyvtkKdNode_PrintVerboseNode, METH_VARARGS,
   "V.PrintVerboseNode(int)\nC++: void PrintVerboseNode(int depth)\n\nFor debugging purposes, print out this node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkKdNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkKdNode", // tp_name
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
  PyvtkKdNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKdNode_StaticNew()
{
  return vtkKdNode::New();
}

PyObject *PyvtkKdNode_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkKdNode_Type, PyvtkKdNode_Methods,
    "vtkKdNode",
 &PyvtkKdNode_StaticNew);

  PyTypeObject *pytype = &PyvtkKdNode_Type;

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

void PyVTKAddFile_vtkKdNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKdNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKdNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

