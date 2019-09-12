// python wrapper for vtkRenderWindowInteractor3D
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
#include "vtkRenderWindowInteractor3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindowInteractor3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRenderWindowInteractor3D_ClassNew(); }

#ifndef DECLARED_PyvtkRenderWindowInteractor_ClassNew
extern "C" { PyObject *PyvtkRenderWindowInteractor_ClassNew(); }
#define DECLARED_PyvtkRenderWindowInteractor_ClassNew
#endif

static const char *PyvtkRenderWindowInteractor3D_Doc =
  "vtkRenderWindowInteractor3D - adds support for 3D events to\nvtkRenderWindowInteractor.\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "vtkRenderWindowInteractor3D provides a platform-independent\n"
  "interaction support for 3D events including 3D clicks and 3D\n"
  "controller orientations. It follows the same basic model as\n"
  "vtkRenderWindowInteractor but adds methods to set and get 3D event\n"
  "locations and orientations. VR systems will subclass this class to\n"
  "provide the code to set these values based on events from their VR\n"
  "controllers.\n\n";


static PyObject *
PyvtkRenderWindowInteractor3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindowInteractor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowInteractor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindowInteractor3D *tempr = vtkRenderWindowInteractor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowInteractor3D::NewInstance());

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
PyvtkRenderWindowInteractor3D_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateApp();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::TerminateApp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldEventPosition(temp0) :
      op->vtkRenderWindowInteractor3D::GetWorldEventPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastWorldEventPosition(temp0) :
      op->vtkRenderWindowInteractor3D::GetLastWorldEventPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldEventOrientation(temp0) :
      op->vtkRenderWindowInteractor3D::GetWorldEventOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastWorldEventOrientation(temp0) :
      op->vtkRenderWindowInteractor3D::GetLastWorldEventOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
    if (ap.IsBound())
    {
      op->SetPhysicalEventPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalEventPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
    if (ap.IsBound())
    {
      op->SetWorldEventPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetWorldEventPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
    if (ap.IsBound())
    {
      op->SetWorldEventOrientation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetWorldEventOrientation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::RightButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::RightButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::MiddleButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::MiddleButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetTouchPadPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTouchPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTouchPadPosition(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetTouchPadPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor3D_SetTouchPadPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTouchPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTouchPadPosition(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetTouchPadPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderWindowInteractor3D_SetTouchPadPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRenderWindowInteractor3D_SetTouchPadPosition_s1(self, args);
    case 1:
      return PyvtkRenderWindowInteractor3D_SetTouchPadPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTouchPadPosition");
  return nullptr;
}



static PyObject *
PyvtkRenderWindowInteractor3D_GetTouchPadPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTouchPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTouchPadPosition() :
      op->vtkRenderWindowInteractor3D::GetTouchPadPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkCamera *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalTranslation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalTranslation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPhysicalTranslation(temp0) :
      op->vtkRenderWindowInteractor3D::GetPhysicalTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalScale(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhysicalScale() :
      op->vtkRenderWindowInteractor3D::GetPhysicalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
      op->SetTranslation3D(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetTranslation3D(temp0);
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
PyvtkRenderWindowInteractor3D_GetTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTranslation3D() :
      op->vtkRenderWindowInteractor3D::GetTranslation3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastTranslation3D() :
      op->vtkRenderWindowInteractor3D::GetLastTranslation3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDone() :
      op->vtkRenderWindowInteractor3D::GetDone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor3D_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindowInteractor3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindowInteractor3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindowInteractor3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRenderWindowInteractor3D\nC++: static vtkRenderWindowInteractor3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindowInteractor3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRenderWindowInteractor3D\nC++: vtkRenderWindowInteractor3D *NewInstance()\n\n"},
  {"Enable", PyvtkRenderWindowInteractor3D_Enable, METH_VARARGS,
   "V.Enable()\nC++: void Enable() override;\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkRenderWindowInteractor3D_Disable, METH_VARARGS,
   "V.Disable()\nC++: void Disable() override;\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"TerminateApp", PyvtkRenderWindowInteractor3D_TerminateApp, METH_VARARGS,
   "V.TerminateApp()\nC++: void TerminateApp(void) override;\n\nOpenVR specific application terminate, calls ClassExitMethod then\ncalls PostQuitMessage(0) to terminate the application. An\napplication can Specify ExitMethod for alternative behavior (i.e.\nsuppression of keyboard exit)\n"},
  {"GetWorldEventPosition", PyvtkRenderWindowInteractor3D_GetWorldEventPosition, METH_VARARGS,
   "V.GetWorldEventPosition(int) -> (float, ...)\nC++: virtual double *GetWorldEventPosition(int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support querying them instead of going\nthrough a display X,Y coordinate approach as is standard for\nmouse/touch events\n"},
  {"GetLastWorldEventPosition", PyvtkRenderWindowInteractor3D_GetLastWorldEventPosition, METH_VARARGS,
   "V.GetLastWorldEventPosition(int) -> (float, ...)\nC++: virtual double *GetLastWorldEventPosition(int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support querying them instead of going\nthrough a display X,Y coordinate approach as is standard for\nmouse/touch events\n"},
  {"GetWorldEventOrientation", PyvtkRenderWindowInteractor3D_GetWorldEventOrientation, METH_VARARGS,
   "V.GetWorldEventOrientation(int) -> (float, ...)\nC++: virtual double *GetWorldEventOrientation(int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support querying them instead of going\nthrough a display X,Y coordinate approach as is standard for\nmouse/touch events\n"},
  {"GetLastWorldEventOrientation", PyvtkRenderWindowInteractor3D_GetLastWorldEventOrientation, METH_VARARGS,
   "V.GetLastWorldEventOrientation(int) -> (float, ...)\nC++: virtual double *GetLastWorldEventOrientation(\n    int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support querying them instead of going\nthrough a display X,Y coordinate approach as is standard for\nmouse/touch events\n"},
  {"SetPhysicalEventPosition", PyvtkRenderWindowInteractor3D_SetPhysicalEventPosition, METH_VARARGS,
   "V.SetPhysicalEventPosition(float, float, float, int)\nC++: virtual void SetPhysicalEventPosition(double x, double y,\n    double z, int pointerIndex)\n\nWith VR we know the physical/room coordinate positions and\norientations of events. These methods support setting them.\n"},
  {"SetWorldEventPosition", PyvtkRenderWindowInteractor3D_SetWorldEventPosition, METH_VARARGS,
   "V.SetWorldEventPosition(float, float, float, int)\nC++: virtual void SetWorldEventPosition(double x, double y,\n    double z, int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support setting them.\n"},
  {"SetWorldEventOrientation", PyvtkRenderWindowInteractor3D_SetWorldEventOrientation, METH_VARARGS,
   "V.SetWorldEventOrientation(float, float, float, float, int)\nC++: virtual void SetWorldEventOrientation(double w, double x,\n    double y, double z, int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support setting them.\n"},
  {"RightButtonPressEvent", PyvtkRenderWindowInteractor3D_RightButtonPressEvent, METH_VARARGS,
   "V.RightButtonPressEvent()\nC++: void RightButtonPressEvent() override;\n\nOverride to set pointers down\n"},
  {"RightButtonReleaseEvent", PyvtkRenderWindowInteractor3D_RightButtonReleaseEvent, METH_VARARGS,
   "V.RightButtonReleaseEvent()\nC++: void RightButtonReleaseEvent() override;\n\nOverride to set pointers down\n"},
  {"MiddleButtonPressEvent", PyvtkRenderWindowInteractor3D_MiddleButtonPressEvent, METH_VARARGS,
   "V.MiddleButtonPressEvent()\nC++: void MiddleButtonPressEvent() override;\n\nOverride to set pointers down\n"},
  {"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor3D_MiddleButtonReleaseEvent, METH_VARARGS,
   "V.MiddleButtonReleaseEvent()\nC++: void MiddleButtonReleaseEvent() override;\n\nOverride to set pointers down\n"},
  {"SetTouchPadPosition", PyvtkRenderWindowInteractor3D_SetTouchPadPosition, METH_VARARGS,
   "V.SetTouchPadPosition(float, float)\nC++: void SetTouchPadPosition(float, float)\nV.SetTouchPadPosition((float, float))\nC++: void SetTouchPadPosition(float a[2])\n\n"},
  {"GetTouchPadPosition", PyvtkRenderWindowInteractor3D_GetTouchPadPosition, METH_VARARGS,
   "V.GetTouchPadPosition() -> (float, float)\nC++: float *GetTouchPadPosition()\n\n"},
  {"SetPhysicalTranslation", PyvtkRenderWindowInteractor3D_SetPhysicalTranslation, METH_VARARGS,
   "V.SetPhysicalTranslation(vtkCamera, float, float, float)\nC++: virtual void SetPhysicalTranslation(vtkCamera *, double,\n    double, double)\n\nSet/Get the optional scale translation to map world coordinates\ninto the 3D physical space (meters, 0,0,0).\n"},
  {"GetPhysicalTranslation", PyvtkRenderWindowInteractor3D_GetPhysicalTranslation, METH_VARARGS,
   "V.GetPhysicalTranslation(vtkCamera) -> (float, ...)\nC++: virtual double *GetPhysicalTranslation(vtkCamera *)\n\nSet/Get the optional scale translation to map world coordinates\ninto the 3D physical space (meters, 0,0,0).\n"},
  {"SetPhysicalScale", PyvtkRenderWindowInteractor3D_SetPhysicalScale, METH_VARARGS,
   "V.SetPhysicalScale(float)\nC++: virtual void SetPhysicalScale(double)\n\nSet/Get the optional scale translation to map world coordinates\ninto the 3D physical space (meters, 0,0,0).\n"},
  {"GetPhysicalScale", PyvtkRenderWindowInteractor3D_GetPhysicalScale, METH_VARARGS,
   "V.GetPhysicalScale() -> float\nC++: virtual double GetPhysicalScale()\n\nSet/Get the optional scale translation to map world coordinates\ninto the 3D physical space (meters, 0,0,0).\n"},
  {"SetTranslation3D", PyvtkRenderWindowInteractor3D_SetTranslation3D, METH_VARARGS,
   "V.SetTranslation3D([float, float, float])\nC++: void SetTranslation3D(double val[3])\n\nSet/get the translation for pan/swipe gestures, update\nLastTranslation\n"},
  {"GetTranslation3D", PyvtkRenderWindowInteractor3D_GetTranslation3D, METH_VARARGS,
   "V.GetTranslation3D() -> (float, float, float)\nC++: double *GetTranslation3D()\n\n"},
  {"GetLastTranslation3D", PyvtkRenderWindowInteractor3D_GetLastTranslation3D, METH_VARARGS,
   "V.GetLastTranslation3D() -> (float, float, float)\nC++: double *GetLastTranslation3D()\n\n"},
  {"GetDone", PyvtkRenderWindowInteractor3D_GetDone, METH_VARARGS,
   "V.GetDone() -> bool\nC++: virtual bool GetDone()\n\nIs the interactor loop done\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRenderWindowInteractor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRenderWindowInteractor3D", // tp_name
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
  PyvtkRenderWindowInteractor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindowInteractor3D_StaticNew()
{
  return vtkRenderWindowInteractor3D::New();
}

PyObject *PyvtkRenderWindowInteractor3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRenderWindowInteractor3D_Type, PyvtkRenderWindowInteractor3D_Methods,
    "vtkRenderWindowInteractor3D",
 &PyvtkRenderWindowInteractor3D_StaticNew);

  PyTypeObject *pytype = &PyvtkRenderWindowInteractor3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRenderWindowInteractor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderWindowInteractor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindowInteractor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindowInteractor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

