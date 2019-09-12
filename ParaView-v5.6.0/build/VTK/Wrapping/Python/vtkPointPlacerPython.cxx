// python wrapper for vtkPointPlacer
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
#include "vtkPointPlacer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointPlacer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPointPlacer_Doc =
  "vtkPointPlacer - Abstract interface to translate 2D display positions\nto world coordinates\n\n"
  "Superclass: vtkObject\n\n"
  "Most widgets in VTK have a need to translate of 2D display\n"
  "coordinates (as reported by the RenderWindowInteractor) to 3D world\n"
  "coordinates. This class is an abstraction of this functionality. A\n"
  "few subclasses are listed below:\n\n"
  "1) vtkFocalPlanePointPlacer: This class converts 2D display positions\n"
  "to world positions such that they lie on the focal plane.\n\n"
  "2) vtkPolygonalSurfacePointPlacer: Converts 2D display positions to\n"
  "world positions such that they lie on the surface of one or more\n"
  "specified polydatas.\n\n"
  "3) vtkImageActorPointPlacer: Converts 2D display positions to world\n"
  "positions such that they lie on an ImageActor\n\n"
  "4) vtkBoundedPlanePointPlacer: Converts 2D display positions to world\n"
  "positions such that they lie within a set of specified bounding\n"
  "planes.\n\n"
  "5) vtkTerrainDataPointPlacer: Converts 2D display positions to world\n"
  "positions such that they lie on a height field.\n\n"
  "Point placers provide an extensible framework to specify constraints\n"
  "on points. The methods ComputeWorldPosition, ValidateDisplayPosition\n"
  "and ValidateWorldPosition may be overridden to dictate whether a\n"
  "world or display position is allowed. These classes are currently\n"
  "used by the HandleWidget and the ContourWidget to allow various\n"
  "constraints to be enforced on the placement of their handles.\n\n";


static PyObject *
PyvtkPointPlacer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointPlacer *tempr = vtkPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointPlacer::NewInstance());

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
PyvtkPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 9;
  double temp3[9];
  double save3[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

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
PyvtkPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 9;
  double temp4[9];
  double save4[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkPointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkPointPlacer::ValidateWorldPosition(temp0));

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
PyvtkPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkPointPlacer::ValidateWorldPosition(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkPointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateDisplayPosition(temp0, temp1) :
      op->vtkPointPlacer::ValidateDisplayPosition(temp0, temp1));

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
PyvtkPointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateWorldPosition(temp0, temp1, temp2) :
      op->vtkPointPlacer::UpdateWorldPosition(temp0, temp1, temp2));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkPointPlacer_UpdateNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->UpdateNodeWorldPosition(temp0, temp1) :
      op->vtkPointPlacer::UpdateNodeWorldPosition(temp0, temp1));

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
PyvtkPointPlacer_UpdateInternalState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInternalState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateInternalState() :
      op->vtkPointPlacer::UpdateInternalState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPixelTolerance(temp0);
    }
    else
    {
      op->vtkPointPlacer::SetPixelTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMinValue() :
      op->vtkPointPlacer::GetPixelToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelToleranceMaxValue() :
      op->vtkPointPlacer::GetPixelToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPixelTolerance() :
      op->vtkPointPlacer::GetPixelTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWorldTolerance(temp0);
    }
    else
    {
      op->vtkPointPlacer::SetWorldTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMinValue() :
      op->vtkPointPlacer::GetWorldToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldToleranceMaxValue() :
      op->vtkPointPlacer::GetWorldToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWorldTolerance() :
      op->vtkPointPlacer::GetWorldTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkPointPlacer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPointPlacer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPointPlacer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPointPlacer\nC++: static vtkPointPlacer *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPointPlacer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPointPlacer\nC++: vtkPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"ComputeWorldPosition", PyvtkPointPlacer_ComputeWorldPosition, METH_VARARGS,
   "V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. A return value of 1 indicates that\nconstraints of the placer are met.\n"},
  {"ValidateWorldPosition", PyvtkPointPlacer_ValidateWorldPosition, METH_VARARGS,
   "V.ValidateWorldPosition([float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer.\n"},
  {"ValidateDisplayPosition", PyvtkPointPlacer_ValidateDisplayPosition, METH_VARARGS,
   "V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: virtual int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2])\n\nGiven a display position, check the validity of this position.\n"},
  {"UpdateWorldPosition", PyvtkPointPlacer_UpdateWorldPosition, METH_VARARGS,
   "V.UpdateWorldPosition(vtkRenderer, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int UpdateWorldPosition(vtkRenderer *ren,\n    double worldPos[3], double worldOrient[9])\n\nGiven a current renderer, world position and orientation, update\nthem according to the constraints of the placer. This method is\ntypically used when UpdateContour is called on the\nrepresentation, which must be called after changes are made to\nthe constraints in the placer. A return value of 1 indicates that\nthe point has been updated. A return value of 0 indicates that\nthe point could not be updated and was left alone. By default\nthis is a no-op - leaving the point as is.\n"},
  {"UpdateNodeWorldPosition", PyvtkPointPlacer_UpdateNodeWorldPosition, METH_VARARGS,
   "V.UpdateNodeWorldPosition([float, float, float], int) -> int\nC++: virtual int UpdateNodeWorldPosition(double worldPos[3],\n    vtkIdType nodePointId)\n\nGive the placer a chance to update the node information, if any.\nMost placers do not maintain any cached node information.\nvtkPolygonalSurfacePointPlacer is one that does. It stores the\npoint id (id on the surface mesh) on which its drawn. The second\nargument may be used to pass that in. Update world position\n"},
  {"UpdateInternalState", PyvtkPointPlacer_UpdateInternalState, METH_VARARGS,
   "V.UpdateInternalState() -> int\nC++: virtual int UpdateInternalState()\n\nCalled by the representation to give the placer a chance to\nupdate itself.\n"},
  {"SetPixelTolerance", PyvtkPointPlacer_SetPixelTolerance, METH_VARARGS,
   "V.SetPixelTolerance(int)\nC++: virtual void SetPixelTolerance(int _arg)\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {"GetPixelToleranceMinValue", PyvtkPointPlacer_GetPixelToleranceMinValue, METH_VARARGS,
   "V.GetPixelToleranceMinValue() -> int\nC++: virtual int GetPixelToleranceMinValue()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {"GetPixelToleranceMaxValue", PyvtkPointPlacer_GetPixelToleranceMaxValue, METH_VARARGS,
   "V.GetPixelToleranceMaxValue() -> int\nC++: virtual int GetPixelToleranceMaxValue()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {"GetPixelTolerance", PyvtkPointPlacer_GetPixelTolerance, METH_VARARGS,
   "V.GetPixelTolerance() -> int\nC++: virtual int GetPixelTolerance()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {"SetWorldTolerance", PyvtkPointPlacer_SetWorldTolerance, METH_VARARGS,
   "V.SetWorldTolerance(float)\nC++: virtual void SetWorldTolerance(double _arg)\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {"GetWorldToleranceMinValue", PyvtkPointPlacer_GetWorldToleranceMinValue, METH_VARARGS,
   "V.GetWorldToleranceMinValue() -> float\nC++: virtual double GetWorldToleranceMinValue()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {"GetWorldToleranceMaxValue", PyvtkPointPlacer_GetWorldToleranceMaxValue, METH_VARARGS,
   "V.GetWorldToleranceMaxValue() -> float\nC++: virtual double GetWorldToleranceMaxValue()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {"GetWorldTolerance", PyvtkPointPlacer_GetWorldTolerance, METH_VARARGS,
   "V.GetWorldTolerance() -> float\nC++: virtual double GetWorldTolerance()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPointPlacer", // tp_name
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
  PyvtkPointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointPlacer_StaticNew()
{
  return vtkPointPlacer::New();
}

PyObject *PyvtkPointPlacer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPointPlacer_Type, PyvtkPointPlacer_Methods,
    "vtkPointPlacer",
 &PyvtkPointPlacer_StaticNew);

  PyTypeObject *pytype = &PyvtkPointPlacer_Type;

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

void PyVTKAddFile_vtkPointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

