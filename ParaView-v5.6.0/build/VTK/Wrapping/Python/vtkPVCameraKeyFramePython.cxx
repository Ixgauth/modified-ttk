// python wrapper for vtkPVCameraKeyFrame
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
#include "vtkPVCameraKeyFrame.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCameraKeyFrame(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCameraKeyFrame_ClassNew(); }

#ifndef DECLARED_PyvtkPVKeyFrame_ClassNew
extern "C" { PyObject *PyvtkPVKeyFrame_ClassNew(); }
#define DECLARED_PyvtkPVKeyFrame_ClassNew
#endif

static const char *PyvtkPVCameraKeyFrame_Doc =
  "vtkPVCameraKeyFrame - Special key frame for animating Camera.\n\n"
  "Superclass: vtkPVKeyFrame\n\n"
  "Unlike typical keyframes, this keyframe interpolates a camera and not\n"
  "a property on the camera.\n\n";


static PyObject *
PyvtkPVCameraKeyFrame_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCameraKeyFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCameraKeyFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCameraKeyFrame *tempr = vtkPVCameraKeyFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCameraKeyFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCameraKeyFrame::NewInstance());

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
PyvtkPVCameraKeyFrame_UpdateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  vtkPVAnimationCue *temp1 = nullptr;
  vtkPVKeyFrame *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPVAnimationCue") &&
      ap.GetVTKObject(temp2, "vtkPVKeyFrame"))
  {
    if (ap.IsBound())
    {
      op->UpdateValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::UpdateValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetKeyValue(temp0, temp1);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetKeyValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyValue(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetKeyValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPVCameraKeyFrame_SetKeyValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPVCameraKeyFrame_SetKeyValue_s1(self, args);
    case 1:
      return PyvtkPVCameraKeyFrame_SetKeyValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyValue");
  return nullptr;
}



static PyObject *
PyvtkPVCameraKeyFrame_GetKeyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKeyValue(temp0) :
      op->vtkPVCameraKeyFrame::GetKeyValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkPVCameraKeyFrame::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->SetViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetViewAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetViewAngle(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetViewAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetParallelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParallelScale(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetParallelScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_AddPositionPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPositionPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->AddPositionPathPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::AddPositionPathPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_ClearPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPositionPath();
    }
    else
    {
      op->vtkPVCameraKeyFrame::ClearPositionPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_AddFocalPathPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFocalPathPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

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
      op->AddFocalPathPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPVCameraKeyFrame::AddFocalPathPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_ClearFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFocalPath();
    }
    else
    {
      op->vtkPVCameraKeyFrame::ClearFocalPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetFocalPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFocalPointMode(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetFocalPointMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetPositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionMode(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetPositionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetClosedFocalPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedFocalPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedFocalPath(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetClosedFocalPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCameraKeyFrame_SetClosedPositionPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedPositionPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCameraKeyFrame *op = static_cast<vtkPVCameraKeyFrame *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedPositionPath(temp0);
    }
    else
    {
      op->vtkPVCameraKeyFrame::SetClosedPositionPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCameraKeyFrame_Methods[] = {
  {"IsTypeOf", PyvtkPVCameraKeyFrame_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCameraKeyFrame_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCameraKeyFrame_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCameraKeyFrame\nC++: static vtkPVCameraKeyFrame *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCameraKeyFrame_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCameraKeyFrame\nC++: vtkPVCameraKeyFrame *NewInstance()\n\n"},
  {"UpdateValue", PyvtkPVCameraKeyFrame_UpdateValue, METH_VARARGS,
   "V.UpdateValue(float, vtkPVAnimationCue, vtkPVKeyFrame)\nC++: void UpdateValue(double currenttime, vtkPVAnimationCue *cue,\n    vtkPVKeyFrame *next) override;\n\nIf the vtkPVCameraCueManipulator is in CAMERA mode, then this\nmethod is not even called since the interpolation is done by\nvtkCameraInterpolator maintained by vtkPVCameraCueManipulator\nitself. However,  in PATH mode, this method is called to allow\nthe key frame to use vtkCameraInterpolator2 to do path-based\ninterpolations for the camera.\n"},
  {"SetKeyValue", PyvtkPVCameraKeyFrame_SetKeyValue, METH_VARARGS,
   "V.SetKeyValue(int, float)\nC++: void SetKeyValue(unsigned int, double) override;\nV.SetKeyValue(float)\nC++: void SetKeyValue(double) override;\n\nGet/Set the animated value at this key frame. Note that is the\nnumber of values is adjusted to fit the index specified in\nSetKeyValue.\n"},
  {"GetKeyValue", PyvtkPVCameraKeyFrame_GetKeyValue, METH_VARARGS,
   "V.GetKeyValue(int) -> float\nC++: virtual double GetKeyValue(unsigned int)\n\nGet/Set the animated value at this key frame. Note that is the\nnumber of values is adjusted to fit the index specified in\nSetKeyValue.\n"},
  {"GetCamera", PyvtkPVCameraKeyFrame_GetCamera, METH_VARARGS,
   "V.GetCamera() -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nGet the camera i.e. the key value for this key frame.\n"},
  {"SetPosition", PyvtkPVCameraKeyFrame_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {"SetFocalPoint", PyvtkPVCameraKeyFrame_SetFocalPoint, METH_VARARGS,
   "V.SetFocalPoint(float, float, float)\nC++: void SetFocalPoint(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {"SetViewUp", PyvtkPVCameraKeyFrame_SetViewUp, METH_VARARGS,
   "V.SetViewUp(float, float, float)\nC++: void SetViewUp(double x, double y, double z)\n\nMethods to set the current camera value.\n"},
  {"SetViewAngle", PyvtkPVCameraKeyFrame_SetViewAngle, METH_VARARGS,
   "V.SetViewAngle(float)\nC++: void SetViewAngle(double angle)\n\nMethods to set the current camera value.\n"},
  {"SetParallelScale", PyvtkPVCameraKeyFrame_SetParallelScale, METH_VARARGS,
   "V.SetParallelScale(float)\nC++: void SetParallelScale(double scale)\n\nMethods to set the current camera value.\n"},
  {"AddPositionPathPoint", PyvtkPVCameraKeyFrame_AddPositionPathPoint, METH_VARARGS,
   "V.AddPositionPathPoint(float, float, float)\nC++: void AddPositionPathPoint(double x, double y, double z)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"ClearPositionPath", PyvtkPVCameraKeyFrame_ClearPositionPath, METH_VARARGS,
   "V.ClearPositionPath()\nC++: void ClearPositionPath()\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"AddFocalPathPoint", PyvtkPVCameraKeyFrame_AddFocalPathPoint, METH_VARARGS,
   "V.AddFocalPathPoint(float, float, float)\nC++: void AddFocalPathPoint(double x, double y, double z)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"ClearFocalPath", PyvtkPVCameraKeyFrame_ClearFocalPath, METH_VARARGS,
   "V.ClearFocalPath()\nC++: void ClearFocalPath()\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"SetFocalPointMode", PyvtkPVCameraKeyFrame_SetFocalPointMode, METH_VARARGS,
   "V.SetFocalPointMode(int)\nC++: void SetFocalPointMode(int val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"SetPositionMode", PyvtkPVCameraKeyFrame_SetPositionMode, METH_VARARGS,
   "V.SetPositionMode(int)\nC++: void SetPositionMode(int val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"SetClosedFocalPath", PyvtkPVCameraKeyFrame_SetClosedFocalPath, METH_VARARGS,
   "V.SetClosedFocalPath(bool)\nC++: void SetClosedFocalPath(bool val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {"SetClosedPositionPath", PyvtkPVCameraKeyFrame_SetClosedPositionPath, METH_VARARGS,
   "V.SetClosedPositionPath(bool)\nC++: void SetClosedPositionPath(bool val)\n\nForwarded to vtkCameraInterpolator2.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCameraKeyFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVAnimationPython.vtkPVCameraKeyFrame", // tp_name
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
  PyvtkPVCameraKeyFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCameraKeyFrame_StaticNew()
{
  return vtkPVCameraKeyFrame::New();
}

PyObject *PyvtkPVCameraKeyFrame_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCameraKeyFrame_Type, PyvtkPVCameraKeyFrame_Methods,
    "vtkPVCameraKeyFrame",
 &PyvtkPVCameraKeyFrame_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCameraKeyFrame_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVKeyFrame_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCameraKeyFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCameraKeyFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCameraKeyFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

