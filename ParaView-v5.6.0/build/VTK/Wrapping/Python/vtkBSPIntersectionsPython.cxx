// python wrapper for vtkBSPIntersections
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
#include "vtkBSPIntersections.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBSPIntersections(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBSPIntersections_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkBSPIntersections_Doc =
  "vtkBSPIntersections - Perform calculations (mostly intersection\n  calculations) on regions of a 3D binary spatial partitioning.\n\n"
  "Superclass: vtkObject\n\n"
  "Given an axis aligned binary spatial partitioning described by a\n"
  "   vtkBSPCuts object, perform intersection queries on various\n"
  "   geometric entities with regions of the spatial partitioning.\n\n"
  "@sa\n"
  "   vtkBSPCuts  vtkKdTree\n\n";


static PyObject *
PyvtkBSPIntersections_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBSPIntersections::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBSPIntersections::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBSPIntersections *tempr = vtkBSPIntersections::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSPIntersections *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBSPIntersections::NewInstance());

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
PyvtkBSPIntersections_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  vtkBSPCuts *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
  {
    if (ap.IsBound())
    {
      op->SetCuts(temp0);
    }
    else
    {
      op->vtkBSPIntersections::SetCuts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkBSPIntersections::GetCuts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetBounds(temp0) :
      op->vtkBSPIntersections::GetBounds(temp0));

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
PyvtkBSPIntersections_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkBSPIntersections::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionBounds(temp0, temp1) :
      op->vtkBSPIntersections::GetRegionBounds(temp0, temp1));

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
PyvtkBSPIntersections_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRegionDataBounds(temp0, temp1) :
      op->vtkBSPIntersections::GetRegionDataBounds(temp0, temp1));

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
PyvtkBSPIntersections_IntersectsBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1));

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
PyvtkBSPIntersections_IntersectsBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
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
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsBox_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsBox_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkBSPIntersections_IntersectsBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBSPIntersections_IntersectsBox_s1(self, args);
    case 7:
      return PyvtkBSPIntersections_IntersectsBox_s2(self, args);
    case 3:
      return PyvtkBSPIntersections_IntersectsBox_s3(self, args);
    case 8:
      return PyvtkBSPIntersections_IntersectsBox_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsBox");
  return nullptr;
}



static PyObject *
PyvtkBSPIntersections_IntersectsSphere2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
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
      op->vtkBSPIntersections::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsSphere2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkBSPIntersections::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkBSPIntersections_IntersectsSphere2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkBSPIntersections_IntersectsSphere2_s1(self, args);
    case 6:
      return PyvtkBSPIntersections_IntersectsSphere2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsSphere2");
  return nullptr;
}



static PyObject *
PyvtkBSPIntersections_IntersectsCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  vtkCell *temp1 = nullptr;
  int temp2 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2) :
      op->vtkBSPIntersections::IntersectsCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBSPIntersections_IntersectsCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  vtkCell *temp2 = nullptr;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCell") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IntersectsCell(temp0, temp1, temp2, temp3) :
      op->vtkBSPIntersections::IntersectsCell(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkBSPIntersections_IntersectsCell_Methods[] = {
  {nullptr, PyvtkBSPIntersections_IntersectsCell_s1, METH_VARARGS,
   "@iV|i *vtkCell"},
  {nullptr, PyvtkBSPIntersections_IntersectsCell_s2, METH_VARARGS,
   "@PiV|i *i *vtkCell"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBSPIntersections_IntersectsCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBSPIntersections_IntersectsCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBSPIntersections_IntersectsCell_s1(self, args);
    case 4:
      return PyvtkBSPIntersections_IntersectsCell_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectsCell");
  return nullptr;
}



static PyObject *
PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeIntersectionsUsingDataBounds() :
      op->vtkBSPIntersections::GetComputeIntersectionsUsingDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeIntersectionsUsingDataBounds(temp0);
    }
    else
    {
      op->vtkBSPIntersections::SetComputeIntersectionsUsingDataBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeIntersectionsUsingDataBoundsOn();
    }
    else
    {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeIntersectionsUsingDataBoundsOff();
    }
    else
    {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBSPIntersections_Methods[] = {
  {"IsTypeOf", PyvtkBSPIntersections_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBSPIntersections_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBSPIntersections_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBSPIntersections\nC++: static vtkBSPIntersections *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBSPIntersections_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBSPIntersections\nC++: vtkBSPIntersections *NewInstance()\n\n"},
  {"SetCuts", PyvtkBSPIntersections_SetCuts, METH_VARARGS,
   "V.SetCuts(vtkBSPCuts)\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nDefine the binary spatial partitioning.\n"},
  {"GetCuts", PyvtkBSPIntersections_GetCuts, METH_VARARGS,
   "V.GetCuts() -> vtkBSPCuts\nC++: virtual vtkBSPCuts *GetCuts()\n\n"},
  {"GetBounds", PyvtkBSPIntersections_GetBounds, METH_VARARGS,
   "V.GetBounds([float, ...]) -> int\nC++: int GetBounds(double *bounds)\n\nGet the bounds of the whole space (xmin, xmax, ymin, ymax, zmin,\nzmax) Return 0 if OK, 1 on error.\n"},
  {"GetNumberOfRegions", PyvtkBSPIntersections_GetNumberOfRegions, METH_VARARGS,
   "V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\nThe number of regions in the binary spatial partitioning\n"},
  {"GetRegionBounds", PyvtkBSPIntersections_GetRegionBounds, METH_VARARGS,
   "V.GetRegionBounds(int, [float, float, float, float, float, float])\n     -> int\nC++: int GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of a particular region Return 0 if OK, 1\non error.\n"},
  {"GetRegionDataBounds", PyvtkBSPIntersections_GetRegionDataBounds, METH_VARARGS,
   "V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float]) -> int\nC++: int GetRegionDataBounds(int regionID, double bounds[6])\n\nGet the bounds of the data within the k-d tree region, possibly\nsmaller than the bounds of the region. Return 0 if OK, 1 on\nerror.\n"},
  {"IntersectsBox", PyvtkBSPIntersections_IntersectsBox, METH_VARARGS,
   "V.IntersectsBox(int, [float, ...]) -> int\nC++: int IntersectsBox(int regionId, double *x)\nV.IntersectsBox(int, float, float, float, float, float, float)\n    -> int\nC++: int IntersectsBox(int regionId, double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\nV.IntersectsBox([int, ...], int, [float, ...]) -> int\nC++: int IntersectsBox(int *ids, int len, double *x)\nV.IntersectsBox([int, ...], int, float, float, float, float,\n    float, float) -> int\nC++: int IntersectsBox(int *ids, int len, double x0, double x1,\n    double y0, double y1, double z0, double z1)\n\nDetermine whether a region of the spatial decomposition\nintersects an axis aligned box.\n"},
  {"IntersectsSphere2", PyvtkBSPIntersections_IntersectsSphere2, METH_VARARGS,
   "V.IntersectsSphere2(int, float, float, float, float) -> int\nC++: int IntersectsSphere2(int regionId, double x, double y,\n    double z, double rSquared)\nV.IntersectsSphere2([int, ...], int, float, float, float, float)\n    -> int\nC++: int IntersectsSphere2(int *ids, int len, double x, double y,\n    double z, double rSquared)\n\nDetermine whether a region of the spatial decomposition\nintersects a sphere, given the center of the sphere and the\nsquare of it's radius.\n"},
  {"IntersectsCell", PyvtkBSPIntersections_IntersectsCell, METH_VARARGS,
   "V.IntersectsCell(int, vtkCell, int) -> int\nC++: int IntersectsCell(int regionId, vtkCell *cell,\n    int cellRegion=-1)\nV.IntersectsCell([int, ...], int, vtkCell, int) -> int\nC++: int IntersectsCell(int *ids, int len, vtkCell *cell,\n    int cellRegion=-1)\n\nDetermine whether a region of the spatial decomposition\nintersects the given cell.  If you already know the region that\nthe cell centroid lies in, provide that as the last argument to\nmake the computation quicker.\n"},
  {"GetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds, METH_VARARGS,
   "V.GetComputeIntersectionsUsingDataBounds() -> int\nC++: virtual int GetComputeIntersectionsUsingDataBounds()\n\nWhen computing the intersection of k-d tree regions with other\nobjects, we use the spatial bounds of the region.  To use the\ntighter bound of the bounding box of the data within the region,\nset this variable ON.  (Specifying data bounds in the vtkBSPCuts\nobject is optional.  If data bounds were not specified, this\noption has no meaning.)\n"},
  {"SetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds, METH_VARARGS,
   "V.SetComputeIntersectionsUsingDataBounds(int)\nC++: void SetComputeIntersectionsUsingDataBounds(int c)\n\n"},
  {"ComputeIntersectionsUsingDataBoundsOn", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn, METH_VARARGS,
   "V.ComputeIntersectionsUsingDataBoundsOn()\nC++: void ComputeIntersectionsUsingDataBoundsOn()\n\n"},
  {"ComputeIntersectionsUsingDataBoundsOff", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff, METH_VARARGS,
   "V.ComputeIntersectionsUsingDataBoundsOff()\nC++: void ComputeIntersectionsUsingDataBoundsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBSPIntersections_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkBSPIntersections", // tp_name
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
  PyvtkBSPIntersections_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBSPIntersections_StaticNew()
{
  return vtkBSPIntersections::New();
}

PyObject *PyvtkBSPIntersections_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBSPIntersections_Type, PyvtkBSPIntersections_Methods,
    "vtkBSPIntersections",
 &PyvtkBSPIntersections_StaticNew);

  PyTypeObject *pytype = &PyvtkBSPIntersections_Type;

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

void PyVTKAddFile_vtkBSPIntersections(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBSPIntersections_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBSPIntersections", o) != 0)
  {
    Py_DECREF(o);
  }

}

