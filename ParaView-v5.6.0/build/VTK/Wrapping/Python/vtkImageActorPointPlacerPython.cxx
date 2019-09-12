// python wrapper for vtkImageActorPointPlacer
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
#include "vtkImageActorPointPlacer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageActorPointPlacer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageActorPointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPointPlacer_ClassNew
#endif

static const char *PyvtkImageActorPointPlacer_Doc =
  "vtkImageActorPointPlacer - Converts 2D display positions to world\npositions such that they lie on an ImageActor\n\n"
  "Superclass: vtkPointPlacer\n\n"
  "This PointPlacer is used to constrain the placement of points on the\n"
  "supplied image actor. Additionally, you may set bounds to restrict\n"
  "the placement of the points. The placement of points will then be\n"
  "constrained to lie not only on the ImageActor but also within the\n"
  "bounds specified. If no bounds are specified, they may lie anywhere\n"
  "on the supplied ImageActor.\n\n";


static PyObject *
PyvtkImageActorPointPlacer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageActorPointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageActorPointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageActorPointPlacer *tempr = vtkImageActorPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActorPointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageActorPointPlacer::NewInstance());

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
PyvtkImageActorPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

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
PyvtkImageActorPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

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
PyvtkImageActorPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageActorPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkImageActorPointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkImageActorPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::ValidateWorldPosition(temp0));

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
PyvtkImageActorPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::ValidateWorldPosition(temp0, temp1));

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
PyvtkImageActorPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageActorPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkImageActorPointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}



static PyObject *
PyvtkImageActorPointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::UpdateWorldPosition(temp0, temp1, temp2));

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
PyvtkImageActorPointPlacer_UpdateInternalState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInternalState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateInternalState() :
      op->vtkImageActorPointPlacer::UpdateInternalState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_SetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  vtkImageActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageActor"))
  {
    if (ap.IsBound())
    {
      op->SetImageActor(temp0);
    }
    else
    {
      op->vtkImageActorPointPlacer::SetImageActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_GetImageActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageActor *tempr = (ap.IsBound() ?
      op->GetImageActor() :
      op->vtkImageActorPointPlacer::GetImageActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActorPointPlacer_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageActorPointPlacer_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageActorPointPlacer_SetBounds_s1(self, args);
    case 1:
      return PyvtkImageActorPointPlacer_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkImageActorPointPlacer_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageActorPointPlacer::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageActorPointPlacer_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageActorPointPlacer *op = static_cast<vtkImageActorPointPlacer *>(vp);

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
      op->vtkImageActorPointPlacer::SetWorldTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageActorPointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkImageActorPointPlacer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkImageActorPointPlacer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkImageActorPointPlacer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageActorPointPlacer\nC++: static vtkImageActorPointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkImageActorPointPlacer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageActorPointPlacer\nC++: vtkImageActorPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"ComputeWorldPosition", PyvtkImageActorPointPlacer_ComputeWorldPosition, METH_VARARGS,
   "V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float,\n    float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[2],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven and renderer and a display position in pixels, find a world\nposition and orientation. In this class an internal\nvtkBoundedPlanePointPlacer is used to compute the world position\nand orientation. The internal placer is set to use the plane of\nthe image actor and the bounds of the image actor as the\nconstraints for placing points.\n"},
  {"ValidateWorldPosition", PyvtkImageActorPointPlacer_ValidateWorldPosition, METH_VARARGS,
   "V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nThis method validates a world position by checking to see if the\nworld position is valid according to the constraints of the\ninternal placer (essentially - is this world position on the\nimage?)\n"},
  {"UpdateWorldPosition", PyvtkImageActorPointPlacer_UpdateWorldPosition, METH_VARARGS,
   "V.UpdateWorldPosition(vtkRenderer, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: int UpdateWorldPosition(vtkRenderer *ren, double worldPos[3],\n     double worldOrient[9]) override;\n\nUpdate the world position and orientation according the the\ncurrent constraints of the placer. Will be called by the\nrepresentation when it notices that this placer has been\nmodified.\n"},
  {"UpdateInternalState", PyvtkImageActorPointPlacer_UpdateInternalState, METH_VARARGS,
   "V.UpdateInternalState() -> int\nC++: int UpdateInternalState() override;\n\nA method for configuring the internal placer according to the\nconstraints of the image actor. Called by the representation to\ngive the placer a chance to update itself, which may cause the\nMTime to change, which would then cause the representation to\nupdate all of its points\n"},
  {"SetImageActor", PyvtkImageActorPointPlacer_SetImageActor, METH_VARARGS,
   "V.SetImageActor(vtkImageActor)\nC++: void SetImageActor(vtkImageActor *)\n\nSet / get the reference vtkImageActor used to place the points.\nAn image actor must be set for this placer to work. An internal\nbounded plane point placer is created and set to match the bounds\nof the displayed image.\n"},
  {"GetImageActor", PyvtkImageActorPointPlacer_GetImageActor, METH_VARARGS,
   "V.GetImageActor() -> vtkImageActor\nC++: virtual vtkImageActor *GetImageActor()\n\nSet / get the reference vtkImageActor used to place the points.\nAn image actor must be set for this placer to work. An internal\nbounded plane point placer is created and set to match the bounds\nof the displayed image.\n"},
  {"SetBounds", PyvtkImageActorPointPlacer_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkImageActorPointPlacer_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {"SetWorldTolerance", PyvtkImageActorPointPlacer_SetWorldTolerance, METH_VARARGS,
   "V.SetWorldTolerance(float)\nC++: void SetWorldTolerance(double s) override;\n\nSet the world tolerance. This propagates it to the internal\nBoundedPlanePointPlacer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageActorPointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkImageActorPointPlacer", // tp_name
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
  PyvtkImageActorPointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageActorPointPlacer_StaticNew()
{
  return vtkImageActorPointPlacer::New();
}

PyObject *PyvtkImageActorPointPlacer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageActorPointPlacer_Type, PyvtkImageActorPointPlacer_Methods,
    "vtkImageActorPointPlacer",
 &PyvtkImageActorPointPlacer_StaticNew);

  PyTypeObject *pytype = &PyvtkImageActorPointPlacer_Type;

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

void PyVTKAddFile_vtkImageActorPointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageActorPointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageActorPointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

