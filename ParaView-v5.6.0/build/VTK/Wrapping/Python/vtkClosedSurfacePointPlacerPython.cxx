// python wrapper for vtkClosedSurfacePointPlacer
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
#include "vtkClosedSurfacePointPlacer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClosedSurfacePointPlacer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkClosedSurfacePointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPointPlacer_ClassNew
#endif

static const char *PyvtkClosedSurfacePointPlacer_Doc =
  "vtkClosedSurfacePointPlacer - PointPlacer to constrain validity\nwithin a set of convex planes\n\n"
  "Superclass: vtkPointPlacer\n\n"
  "This placer takes a set of boudning planes and constraints the\n"
  "validity within the supplied convex planes. It is used by the\n"
  "ParallelopPipedRepresentation to place constraints on the motion the\n"
  "handles within the parallelopiped.\n\n"
  "@sa\n"
  "vtkParallelopipedRepresentation\n\n";


static PyObject *
PyvtkClosedSurfacePointPlacer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClosedSurfacePointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClosedSurfacePointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClosedSurfacePointPlacer *tempr = vtkClosedSurfacePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClosedSurfacePointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClosedSurfacePointPlacer::NewInstance());

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
PyvtkClosedSurfacePointPlacer_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddBoundingPlane(temp0);
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::AddBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveBoundingPlane(temp0);
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::RemoveBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBoundingPlanes();
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::RemoveAllBoundingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_Methods[] = {
  {nullptr, PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {nullptr, PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkClosedSurfacePointPlacer_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkClosedSurfacePointPlacer_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return nullptr;
}



static PyObject *
PyvtkClosedSurfacePointPlacer_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetBoundingPlanes() :
      op->vtkClosedSurfacePointPlacer::GetBoundingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

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
      op->vtkClosedSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

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
PyvtkClosedSurfacePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
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
      op->vtkClosedSurfacePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

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
PyvtkClosedSurfacePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkClosedSurfacePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkClosedSurfacePointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkClosedSurfacePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

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
      op->vtkClosedSurfacePointPlacer::ValidateWorldPosition(temp0));

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
PyvtkClosedSurfacePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

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
      op->vtkClosedSurfacePointPlacer::ValidateWorldPosition(temp0, temp1));

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
PyvtkClosedSurfacePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkClosedSurfacePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkClosedSurfacePointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkClosedSurfacePointPlacer_SetMinimumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumDistance(temp0);
    }
    else
    {
      op->vtkClosedSurfacePointPlacer::SetMinimumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_GetMinimumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumDistanceMinValue() :
      op->vtkClosedSurfacePointPlacer::GetMinimumDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_GetMinimumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumDistanceMaxValue() :
      op->vtkClosedSurfacePointPlacer::GetMinimumDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClosedSurfacePointPlacer_GetMinimumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClosedSurfacePointPlacer *op = static_cast<vtkClosedSurfacePointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumDistance() :
      op->vtkClosedSurfacePointPlacer::GetMinimumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClosedSurfacePointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkClosedSurfacePointPlacer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkClosedSurfacePointPlacer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkClosedSurfacePointPlacer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkClosedSurfacePointPlacer\nC++: static vtkClosedSurfacePointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkClosedSurfacePointPlacer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkClosedSurfacePointPlacer\nC++: vtkClosedSurfacePointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"AddBoundingPlane", PyvtkClosedSurfacePointPlacer_AddBoundingPlane, METH_VARARGS,
   "V.AddBoundingPlane(vtkPlane)\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveBoundingPlane", PyvtkClosedSurfacePointPlacer_RemoveBoundingPlane, METH_VARARGS,
   "V.RemoveBoundingPlane(vtkPlane)\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveAllBoundingPlanes", PyvtkClosedSurfacePointPlacer_RemoveAllBoundingPlanes, METH_VARARGS,
   "V.RemoveAllBoundingPlanes()\nC++: void RemoveAllBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"SetBoundingPlanes", PyvtkClosedSurfacePointPlacer_SetBoundingPlanes, METH_VARARGS,
   "V.SetBoundingPlanes(vtkPlaneCollection)\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nV.SetBoundingPlanes(vtkPlanes)\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"GetBoundingPlanes", PyvtkClosedSurfacePointPlacer_GetBoundingPlanes, METH_VARARGS,
   "V.GetBoundingPlanes() -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"ComputeWorldPosition", PyvtkClosedSurfacePointPlacer_ComputeWorldPosition, METH_VARARGS,
   "V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float,\n    float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[2],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven a renderer and a display position, compute the world\nposition and world orientation for this point. A plane is defined\nby a combination of the ProjectionNormal, ProjectionOrigin, and\nObliquePlane ivars. The display position is projected onto this\nplane to determine a world position, and the orientation is set\nto the normal of the plane. If the point cannot project onto the\nplane or if it falls outside the bounds imposed by the\nBoundingPlanes, then 0 is returned, otherwise 1 is returned to\nindicate a valid return position and orientation.\n"},
  {"ValidateWorldPosition", PyvtkClosedSurfacePointPlacer_ValidateWorldPosition, METH_VARARGS,
   "V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nGive a world position check if it is valid - does it lie on the\nplane and within the bounds? Returns 1 if it is valid, 0\notherwise.\n"},
  {"SetMinimumDistance", PyvtkClosedSurfacePointPlacer_SetMinimumDistance, METH_VARARGS,
   "V.SetMinimumDistance(float)\nC++: virtual void SetMinimumDistance(double _arg)\n\n"},
  {"GetMinimumDistanceMinValue", PyvtkClosedSurfacePointPlacer_GetMinimumDistanceMinValue, METH_VARARGS,
   "V.GetMinimumDistanceMinValue() -> float\nC++: virtual double GetMinimumDistanceMinValue()\n\n"},
  {"GetMinimumDistanceMaxValue", PyvtkClosedSurfacePointPlacer_GetMinimumDistanceMaxValue, METH_VARARGS,
   "V.GetMinimumDistanceMaxValue() -> float\nC++: virtual double GetMinimumDistanceMaxValue()\n\n"},
  {"GetMinimumDistance", PyvtkClosedSurfacePointPlacer_GetMinimumDistance, METH_VARARGS,
   "V.GetMinimumDistance() -> float\nC++: virtual double GetMinimumDistance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkClosedSurfacePointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkClosedSurfacePointPlacer", // tp_name
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
  PyvtkClosedSurfacePointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClosedSurfacePointPlacer_StaticNew()
{
  return vtkClosedSurfacePointPlacer::New();
}

PyObject *PyvtkClosedSurfacePointPlacer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkClosedSurfacePointPlacer_Type, PyvtkClosedSurfacePointPlacer_Methods,
    "vtkClosedSurfacePointPlacer",
 &PyvtkClosedSurfacePointPlacer_StaticNew);

  PyTypeObject *pytype = &PyvtkClosedSurfacePointPlacer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointPlacer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClosedSurfacePointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClosedSurfacePointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClosedSurfacePointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

