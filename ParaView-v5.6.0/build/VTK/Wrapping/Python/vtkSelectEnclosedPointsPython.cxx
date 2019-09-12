// python wrapper for vtkSelectEnclosedPoints
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
#include "vtkIntersectionCounter.h"
#include "vtkSelectEnclosedPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSelectEnclosedPoints_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkSelectEnclosedPoints_Doc =
  "vtkSelectEnclosedPoints - mark points as to whether they are inside a\nclosed surface\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSelectEnclosedPoints is a filter that evaluates all the input\n"
  "points to determine whether they are in an enclosed surface. The\n"
  "filter produces a (0,1) mask (in the form of a vtkDataArray) that\n"
  "indicates whether points are outside (mask value=0) or inside (mask\n"
  "value=1) a provided surface. (The name of the output vtkDataArray is\n"
  "\"SelectedPointsArray\".)\n\n"
  "After running the filter, it is possible to query it as to whether a\n"
  "point is inside/outside by invoking the IsInside(ptId) method.\n\n"
  "@warning\n"
  "The filter assumes that the surface is closed and manifold. A boolean\n"
  "flag can be set to force the filter to first check whether this is\n"
  "true. If false, all points will be marked outside. Note that if this\n"
  "check is not performed and the surface is not closed, the results are\n"
  "undefined.\n\n"
  "@warning\n"
  "This filter produces and output data array, but does not modify the\n"
  "input dataset. If you wish to extract cells or points, various\n"
  "threshold filters are available (i.e., threshold the output array).\n"
  "Also, see the filter vtkExtractEnclosedPoints which operates on point\n"
  "clouds.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkMaskPoints vtkExtractEnclosedPoints\n\n";


static PyObject *
PyvtkSelectEnclosedPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectEnclosedPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectEnclosedPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectEnclosedPoints *tempr = vtkSelectEnclosedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectEnclosedPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectEnclosedPoints::NewInstance());

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
PyvtkSelectEnclosedPoints_SetSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceData(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::SetSurfaceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceConnection(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::SetSurfaceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface() :
      op->vtkSelectEnclosedPoints::GetSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface(temp0) :
      op->vtkSelectEnclosedPoints::GetSurface(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSelectEnclosedPoints_GetSurface_s1(self, args);
    case 1:
      return PyvtkSelectEnclosedPoints_GetSurface_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSurface");
  return nullptr;
}



static PyObject *
PyvtkSelectEnclosedPoints_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkSelectEnclosedPoints::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkSelectEnclosedPoints::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkSelectEnclosedPoints::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckSurface(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::SetCheckSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOn();
    }
    else
    {
      op->vtkSelectEnclosedPoints::CheckSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOff();
    }
    else
    {
      op->vtkSelectEnclosedPoints::CheckSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckSurface() :
      op->vtkSelectEnclosedPoints::GetCheckSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsInside(temp0) :
      op->vtkSelectEnclosedPoints::IsInside(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSelectEnclosedPoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSelectEnclosedPoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSelectEnclosedPoints::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkSelectEnclosedPoints::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->IsInsideSurface(temp0) :
      op->vtkSelectEnclosedPoints::IsInsideSurface(temp0));

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
PyvtkSelectEnclosedPoints_IsInsideSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsInsideSurface(temp0, temp1, temp2) :
      op->vtkSelectEnclosedPoints::IsInsideSurface(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInsideSurface");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkPolyData *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  double temp3;
  double temp4;
  vtkAbstractCellLocator *temp5 = nullptr;
  vtkIdList *temp6 = nullptr;
  vtkGenericCell *temp7 = nullptr;
  vtkIntersectionCounter *temp8 = nullptr;
  vtkRandomPool *temp9 = nullptr;
  vtkIdType temp10 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(9, 11) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkAbstractCellLocator") &&
      ap.GetVTKObject(temp6, "vtkIdList") &&
      ap.GetVTKObject(temp7, "vtkGenericCell") &&
      ap.GetSpecialObject(temp8, "vtkIntersectionCounter") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp9, "vtkRandomPool")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp10)))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp2, save2, size2);

    int tempr = vtkSelectEnclosedPoints::IsInsideSurface(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, *temp8, temp9, temp10);

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
PyvtkSelectEnclosedPoints_IsInsideSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s1(self, args);
    case 3:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s2(self, args);
    case 9:
    case 10:
    case 11:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsideSurface");
  return nullptr;
}



static PyObject *
PyvtkSelectEnclosedPoints_Complete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Complete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Complete();
    }
    else
    {
      op->vtkSelectEnclosedPoints::Complete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsSurfaceClosed(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSurfaceClosed");

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    int tempr = vtkSelectEnclosedPoints::IsSurfaceClosed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectEnclosedPoints_Methods[] = {
  {"IsTypeOf", PyvtkSelectEnclosedPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkSelectEnclosedPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkSelectEnclosedPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSelectEnclosedPoints\nC++: static vtkSelectEnclosedPoints *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkSelectEnclosedPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSelectEnclosedPoints\nC++: vtkSelectEnclosedPoints *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"SetSurfaceData", PyvtkSelectEnclosedPoints_SetSurfaceData, METH_VARARGS,
   "V.SetSurfaceData(vtkPolyData)\nC++: void SetSurfaceData(vtkPolyData *pd)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {"SetSurfaceConnection", PyvtkSelectEnclosedPoints_SetSurfaceConnection, METH_VARARGS,
   "V.SetSurfaceConnection(vtkAlgorithmOutput)\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {"GetSurface", PyvtkSelectEnclosedPoints_GetSurface, METH_VARARGS,
   "V.GetSurface() -> vtkPolyData\nC++: vtkPolyData *GetSurface()\nV.GetSurface(vtkInformationVector) -> vtkPolyData\nC++: vtkPolyData *GetSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {"SetInsideOut", PyvtkSelectEnclosedPoints_SetInsideOut, METH_VARARGS,
   "V.SetInsideOut(int)\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {"InsideOutOn", PyvtkSelectEnclosedPoints_InsideOutOn, METH_VARARGS,
   "V.InsideOutOn()\nC++: virtual void InsideOutOn()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {"InsideOutOff", PyvtkSelectEnclosedPoints_InsideOutOff, METH_VARARGS,
   "V.InsideOutOff()\nC++: virtual void InsideOutOff()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {"GetInsideOut", PyvtkSelectEnclosedPoints_GetInsideOut, METH_VARARGS,
   "V.GetInsideOut() -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {"SetCheckSurface", PyvtkSelectEnclosedPoints_SetCheckSurface, METH_VARARGS,
   "V.SetCheckSurface(int)\nC++: virtual void SetCheckSurface(vtkTypeBool _arg)\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"CheckSurfaceOn", PyvtkSelectEnclosedPoints_CheckSurfaceOn, METH_VARARGS,
   "V.CheckSurfaceOn()\nC++: virtual void CheckSurfaceOn()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"CheckSurfaceOff", PyvtkSelectEnclosedPoints_CheckSurfaceOff, METH_VARARGS,
   "V.CheckSurfaceOff()\nC++: virtual void CheckSurfaceOff()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"GetCheckSurface", PyvtkSelectEnclosedPoints_GetCheckSurface, METH_VARARGS,
   "V.GetCheckSurface() -> int\nC++: virtual vtkTypeBool GetCheckSurface()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"IsInside", PyvtkSelectEnclosedPoints_IsInside, METH_VARARGS,
   "V.IsInside(int) -> int\nC++: int IsInside(vtkIdType inputPtId)\n\nQuery an input point id as to whether it is inside or outside.\nNote that the result requires that the filter execute first.\n"},
  {"SetTolerance", PyvtkSelectEnclosedPoints_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetToleranceMinValue", PyvtkSelectEnclosedPoints_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetToleranceMaxValue", PyvtkSelectEnclosedPoints_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetTolerance", PyvtkSelectEnclosedPoints_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"Initialize", PyvtkSelectEnclosedPoints_Initialize, METH_VARARGS,
   "V.Initialize(vtkPolyData)\nC++: void Initialize(vtkPolyData *surface)\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The Complete() method releases memory.\n"},
  {"IsInsideSurface", PyvtkSelectEnclosedPoints_IsInsideSurface, METH_VARARGS,
   "V.IsInsideSurface([float, float, float]) -> int\nC++: int IsInsideSurface(double x[3])\nV.IsInsideSurface(float, float, float) -> int\nC++: int IsInsideSurface(double x, double y, double z)\nV.IsInsideSurface([float, float, float], vtkPolyData, [float,\n    float, float, float, float, float], float, float,\n    vtkAbstractCellLocator, vtkIdList, vtkGenericCell,\n    vtkIntersectionCounter, vtkRandomPool, int) -> int\nC++: static int IsInsideSurface(double x[3], vtkPolyData *surface,\n     double bds[6], double length, double tol,\n    vtkAbstractCellLocator *locator, vtkIdList *cellIds,\n    vtkGenericCell *genCell, vtkIntersectionCounter &counter,\n    vtkRandomPool *poole=nullptr, vtkIdType seqIdx=0)\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The Complete() method releases memory.\n"},
  {"Complete", PyvtkSelectEnclosedPoints_Complete, METH_VARARGS,
   "V.Complete()\nC++: void Complete()\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The Complete() method releases memory.\n"},
  {"IsSurfaceClosed", PyvtkSelectEnclosedPoints_IsSurfaceClosed, METH_VARARGS,
   "V.IsSurfaceClosed(vtkPolyData) -> int\nC++: static int IsSurfaceClosed(vtkPolyData *surface)\n\nA static method for determining whether a surface is closed.\nProvide as input a vtkPolyData. The method returns >0 is the\nsurface is closed and manifold.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSelectEnclosedPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkSelectEnclosedPoints", // tp_name
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
  PyvtkSelectEnclosedPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectEnclosedPoints_StaticNew()
{
  return vtkSelectEnclosedPoints::New();
}

PyObject *PyvtkSelectEnclosedPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSelectEnclosedPoints_Type, PyvtkSelectEnclosedPoints_Methods,
    "vtkSelectEnclosedPoints",
 &PyvtkSelectEnclosedPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkSelectEnclosedPoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectEnclosedPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectEnclosedPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectEnclosedPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

