// python wrapper for vtkSphereTreeFilter
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
#include "vtkSphereTreeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereTreeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSphereTreeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSphereTreeFilter_Doc =
  "vtkSphereTreeFilter - represent a sphere tree as vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSphereTreeFilter is a filter that produces a vtkPolyData\n"
  "representation of a sphere tree (vtkSphereTree). Basically it\n"
  "generates a point, a scalar radius, and tree level number for the\n"
  "cell spheres and/or the different levels in the tree hierarchy\n"
  "(assuming that the hierarchy is built). The output can be glyphed\n"
  "using a filter like vtkGlyph3D to actually visualize the sphere tree.\n"
  "The primary use of this class is for visualization of sphere trees,\n"
  "and debugging the construction and use of sphere trees.\n\n"
  "Additional capabilities include production of candidate spheres based\n"
  "on geometric queries. For example, queries based on a point, infinite\n"
  "line, and infinite plane are possible.\n\n"
  "Note that this class may create a sphere tree, and then build it, for\n"
  "the input dataset to this filter (if no sphere tree is provided). If\n"
  "the user specifies a sphere tree, then the specified sphere tree is\n"
  "used. Thus the input to the filter is optional. Consequently this\n"
  "filter can act like a source, or as a filter in a pipeline.\n\n"
  "@sa\n"
  "vtkSphereTree vtkPlaneCutter\n\n";


static PyObject *
PyvtkSphereTreeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereTreeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereTreeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereTreeFilter *tempr = vtkSphereTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTreeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereTreeFilter::NewInstance());

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
PyvtkSphereTreeFilter_SetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  vtkSphereTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereTree"))
  {
    if (ap.IsBound())
    {
      op->SetSphereTree(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetSphereTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTree *tempr = (ap.IsBound() ?
      op->GetSphereTree() :
      op->vtkSphereTreeFilter::GetSphereTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionMode(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetExtractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractionMode() :
      op->vtkSphereTreeFilter::GetExtractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLevels();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToLevels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPoint();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToLine();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetExtractionModeToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractionModeToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetExtractionModeToPlane();
    }
    else
    {
      op->vtkSphereTreeFilter::SetExtractionModeToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetExtractionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExtractionModeAsString() :
      op->vtkSphereTreeFilter::GetExtractionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetTreeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTreeHierarchy(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetTreeHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetTreeHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTreeHierarchy() :
      op->vtkSphereTreeFilter::GetTreeHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_TreeHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TreeHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TreeHierarchyOn();
    }
    else
    {
      op->vtkSphereTreeFilter::TreeHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_TreeHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TreeHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TreeHierarchyOff();
    }
    else
    {
      op->vtkSphereTreeFilter::TreeHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelMinValue() :
      op->vtkSphereTreeFilter::GetLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevelMaxValue() :
      op->vtkSphereTreeFilter::GetLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkSphereTreeFilter::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetPoint_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}



static PyObject *
PyvtkSphereTreeFilter_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint() :
      op->vtkSphereTreeFilter::GetPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetRay_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetRay(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetRay(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetRay_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRay(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetRay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetRay(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetRay_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetRay_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRay");
  return nullptr;
}



static PyObject *
PyvtkSphereTreeFilter_GetRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRay() :
      op->vtkSphereTreeFilter::GetRay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSphereTreeFilter::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkSphereTreeFilter::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereTreeFilter_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereTreeFilter_SetNormal_s1(self, args);
    case 1:
      return PyvtkSphereTreeFilter_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}



static PyObject *
PyvtkSphereTreeFilter_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkSphereTreeFilter::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereTreeFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereTreeFilter *op = static_cast<vtkSphereTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSphereTreeFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereTreeFilter_Methods[] = {
  {"IsTypeOf", PyvtkSphereTreeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"IsA", PyvtkSphereTreeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SafeDownCast", PyvtkSphereTreeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSphereTreeFilter\nC++: static vtkSphereTreeFilter *SafeDownCast(vtkObjectBase *o)\n\nStandard type related macros and PrintSelf() method.\n"},
  {"NewInstance", PyvtkSphereTreeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSphereTreeFilter\nC++: vtkSphereTreeFilter *NewInstance()\n\nStandard type related macros and PrintSelf() method.\n"},
  {"SetSphereTree", PyvtkSphereTreeFilter_SetSphereTree, METH_VARARGS,
   "V.SetSphereTree(vtkSphereTree)\nC++: virtual void SetSphereTree(vtkSphereTree *)\n\nSpecify and retrieve the sphere tree.\n"},
  {"GetSphereTree", PyvtkSphereTreeFilter_GetSphereTree, METH_VARARGS,
   "V.GetSphereTree() -> vtkSphereTree\nC++: virtual vtkSphereTree *GetSphereTree()\n\nSpecify and retrieve the sphere tree.\n"},
  {"SetExtractionMode", PyvtkSphereTreeFilter_SetExtractionMode, METH_VARARGS,
   "V.SetExtractionMode(int)\nC++: virtual void SetExtractionMode(int _arg)\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"GetExtractionMode", PyvtkSphereTreeFilter_GetExtractionMode, METH_VARARGS,
   "V.GetExtractionMode() -> int\nC++: virtual int GetExtractionMode()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"SetExtractionModeToLevels", PyvtkSphereTreeFilter_SetExtractionModeToLevels, METH_VARARGS,
   "V.SetExtractionModeToLevels()\nC++: void SetExtractionModeToLevels()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"SetExtractionModeToPoint", PyvtkSphereTreeFilter_SetExtractionModeToPoint, METH_VARARGS,
   "V.SetExtractionModeToPoint()\nC++: void SetExtractionModeToPoint()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"SetExtractionModeToLine", PyvtkSphereTreeFilter_SetExtractionModeToLine, METH_VARARGS,
   "V.SetExtractionModeToLine()\nC++: void SetExtractionModeToLine()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"SetExtractionModeToPlane", PyvtkSphereTreeFilter_SetExtractionModeToPlane, METH_VARARGS,
   "V.SetExtractionModeToPlane()\nC++: void SetExtractionModeToPlane()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"GetExtractionModeAsString", PyvtkSphereTreeFilter_GetExtractionModeAsString, METH_VARARGS,
   "V.GetExtractionModeAsString() -> string\nC++: const char *GetExtractionModeAsString()\n\nSpecify what information this filter is to extract from the\nsphere tree. Options include: spheres that make up one or more\nlevels; spheres that intersect a specified plane; spheres that\nintersect a specified line; and spheres that intersect a\nspecified point. What is extracted are sphere centers, a radius,\nand an optional level. By default the specified levels are\nextracted.\n"},
  {"SetTreeHierarchy", PyvtkSphereTreeFilter_SetTreeHierarchy, METH_VARARGS,
   "V.SetTreeHierarchy(bool)\nC++: virtual void SetTreeHierarchy(bool _arg)\n\nEnable or disable the building and generation of the sphere tree\nhierarchy. The hierarchy represents different levels in the tree\nand enables rapid traversal of the tree.\n"},
  {"GetTreeHierarchy", PyvtkSphereTreeFilter_GetTreeHierarchy, METH_VARARGS,
   "V.GetTreeHierarchy() -> bool\nC++: virtual bool GetTreeHierarchy()\n\nEnable or disable the building and generation of the sphere tree\nhierarchy. The hierarchy represents different levels in the tree\nand enables rapid traversal of the tree.\n"},
  {"TreeHierarchyOn", PyvtkSphereTreeFilter_TreeHierarchyOn, METH_VARARGS,
   "V.TreeHierarchyOn()\nC++: virtual void TreeHierarchyOn()\n\nEnable or disable the building and generation of the sphere tree\nhierarchy. The hierarchy represents different levels in the tree\nand enables rapid traversal of the tree.\n"},
  {"TreeHierarchyOff", PyvtkSphereTreeFilter_TreeHierarchyOff, METH_VARARGS,
   "V.TreeHierarchyOff()\nC++: virtual void TreeHierarchyOff()\n\nEnable or disable the building and generation of the sphere tree\nhierarchy. The hierarchy represents different levels in the tree\nand enables rapid traversal of the tree.\n"},
  {"SetLevel", PyvtkSphereTreeFilter_SetLevel, METH_VARARGS,
   "V.SetLevel(int)\nC++: virtual void SetLevel(int _arg)\n\nSpecify the level of the tree to extract (used when\nExtractionMode is set to Levels). A value of (-1) means all\nlevels. Note that level 0 is the root of the sphere tree. By\ndefault all levels are extracted. Note that if TreeHierarchy is\noff, then it is only possible to extract leaf spheres (i.e.,\nspheres for each cell of the associated dataset).\n"},
  {"GetLevelMinValue", PyvtkSphereTreeFilter_GetLevelMinValue, METH_VARARGS,
   "V.GetLevelMinValue() -> int\nC++: virtual int GetLevelMinValue()\n\nSpecify the level of the tree to extract (used when\nExtractionMode is set to Levels). A value of (-1) means all\nlevels. Note that level 0 is the root of the sphere tree. By\ndefault all levels are extracted. Note that if TreeHierarchy is\noff, then it is only possible to extract leaf spheres (i.e.,\nspheres for each cell of the associated dataset).\n"},
  {"GetLevelMaxValue", PyvtkSphereTreeFilter_GetLevelMaxValue, METH_VARARGS,
   "V.GetLevelMaxValue() -> int\nC++: virtual int GetLevelMaxValue()\n\nSpecify the level of the tree to extract (used when\nExtractionMode is set to Levels). A value of (-1) means all\nlevels. Note that level 0 is the root of the sphere tree. By\ndefault all levels are extracted. Note that if TreeHierarchy is\noff, then it is only possible to extract leaf spheres (i.e.,\nspheres for each cell of the associated dataset).\n"},
  {"GetLevel", PyvtkSphereTreeFilter_GetLevel, METH_VARARGS,
   "V.GetLevel() -> int\nC++: virtual int GetLevel()\n\nSpecify the level of the tree to extract (used when\nExtractionMode is set to Levels). A value of (-1) means all\nlevels. Note that level 0 is the root of the sphere tree. By\ndefault all levels are extracted. Note that if TreeHierarchy is\noff, then it is only possible to extract leaf spheres (i.e.,\nspheres for each cell of the associated dataset).\n"},
  {"SetPoint", PyvtkSphereTreeFilter_SetPoint, METH_VARARGS,
   "V.SetPoint(float, float, float)\nC++: void SetPoint(double, double, double)\nV.SetPoint((float, float, float))\nC++: void SetPoint(double a[3])\n\n"},
  {"GetPoint", PyvtkSphereTreeFilter_GetPoint, METH_VARARGS,
   "V.GetPoint() -> (float, float, float)\nC++: double *GetPoint()\n\nSpecify a point used to extract one or more leaf spheres. This\nmethod is used when extracting spheres using a point, line, or\nplane.\n"},
  {"SetRay", PyvtkSphereTreeFilter_SetRay, METH_VARARGS,
   "V.SetRay(float, float, float)\nC++: void SetRay(double, double, double)\nV.SetRay((float, float, float))\nC++: void SetRay(double a[3])\n\n"},
  {"GetRay", PyvtkSphereTreeFilter_GetRay, METH_VARARGS,
   "V.GetRay() -> (float, float, float)\nC++: double *GetRay()\n\nSpecify a line used to extract spheres (used when ExtractionMode\nis set to Line). The Ray plus Point define an infinite line. The\nray is a vector defining the direction of the line.\n"},
  {"SetNormal", PyvtkSphereTreeFilter_SetNormal, METH_VARARGS,
   "V.SetNormal(float, float, float)\nC++: void SetNormal(double, double, double)\nV.SetNormal((float, float, float))\nC++: void SetNormal(double a[3])\n\n"},
  {"GetNormal", PyvtkSphereTreeFilter_GetNormal, METH_VARARGS,
   "V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\n\nSpecify a plane used to extract spheres (used when ExtractionMode\nis set to Plane). The plane Normal plus Point define an infinite\nplane.\n"},
  {"GetMTime", PyvtkSphereTreeFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nModified GetMTime because the sphere tree may have changed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSphereTreeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkSphereTreeFilter", // tp_name
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
  PyvtkSphereTreeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereTreeFilter_StaticNew()
{
  return vtkSphereTreeFilter::New();
}

PyObject *PyvtkSphereTreeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSphereTreeFilter_Type, PyvtkSphereTreeFilter_Methods,
    "vtkSphereTreeFilter",
 &PyvtkSphereTreeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkSphereTreeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereTreeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereTreeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereTreeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_SPHERE_TREE_LEVELS", 0 },
        { "VTK_SPHERE_TREE_POINT", 1 },
        { "VTK_SPHERE_TREE_LINE", 2 },
        { "VTK_SPHERE_TREE_PLANE", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

