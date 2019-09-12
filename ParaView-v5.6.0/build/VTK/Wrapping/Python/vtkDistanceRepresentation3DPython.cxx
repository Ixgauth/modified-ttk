// python wrapper for vtkDistanceRepresentation3D
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
#include "vtkDistanceRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistanceRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDistanceRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkDistanceRepresentation_ClassNew
extern "C" { PyObject *PyvtkDistanceRepresentation_ClassNew(); }
#define DECLARED_PyvtkDistanceRepresentation_ClassNew
#endif

static const char *PyvtkDistanceRepresentation3D_Doc =
  "vtkDistanceRepresentation3D - represent the vtkDistanceWidget\n\n"
  "Superclass: vtkDistanceRepresentation\n\n"
  "The vtkDistanceRepresentation3D is a representation for the\n"
  "vtkDistanceWidget. This representation consists of a measuring line\n"
  "(axis) and two vtkHandleWidgets to place the end points of the line.\n"
  "Note that this particular widget draws its representation in 3D\n"
  "space, so the widget can be occluded.\n\n"
  "@sa\n"
  "vtkDistanceWidget vtkDistanceRepresentation\n"
  "vtkDistanceRepresentation2D\n\n";


static PyObject *
PyvtkDistanceRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistanceRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistanceRepresentation3D *tempr = vtkDistanceRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistanceRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceRepresentation3D::NewInstance());

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
PyvtkDistanceRepresentation3D_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkDistanceRepresentation3D::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphScale(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetGlyphScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphScale() :
      op->vtkDistanceRepresentation3D::GetGlyphScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkDistanceRepresentation3D::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetLabelPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabelPosition() :
      op->vtkDistanceRepresentation3D::GetLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetMaximumNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfRulerTicks(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetMaximumNumberOfRulerTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfRulerTicksMinValue() :
      op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfRulerTicksMaxValue() :
      op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfRulerTicks() :
      op->vtkDistanceRepresentation3D::GetMaximumNumberOfRulerTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetGlyphActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetGlyphActor() :
      op->vtkDistanceRepresentation3D::GetGlyphActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLabelActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetLabelActor() :
      op->vtkDistanceRepresentation3D::GetLabelActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetLabelActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkFollower *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFollower"))
  {
    if (ap.IsBound())
    {
      op->SetLabelActor(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetLabelActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1WorldPosition() :
      op->vtkDistanceRepresentation3D::GetPoint1WorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation3D_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::GetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDistanceRepresentation3D_GetPoint1WorldPosition_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation3D_GetPoint1WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkDistanceRepresentation3D_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2WorldPosition() :
      op->vtkDistanceRepresentation3D::GetPoint2WorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation3D_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::GetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDistanceRepresentation3D_GetPoint2WorldPosition_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation3D_GetPoint2WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return nullptr;
}



static PyObject *
PyvtkDistanceRepresentation3D_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetPoint1WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetPoint2WorldPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::GetPoint1DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::GetPoint2DisplayPosition(temp0);
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
PyvtkDistanceRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkDistanceRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkDistanceRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkDistanceRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkDistanceRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_SetLabelScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetLabelScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetLabelScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation3D_SetLabelScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

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
      op->SetLabelScale(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation3D::SetLabelScale(temp0);
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
PyvtkDistanceRepresentation3D_SetLabelScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDistanceRepresentation3D_SetLabelScale_s1(self, args);
    case 1:
      return PyvtkDistanceRepresentation3D_SetLabelScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelScale");
  return nullptr;
}



static PyObject *
PyvtkDistanceRepresentation3D_GetLabelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabelScale() :
      op->vtkDistanceRepresentation3D::GetLabelScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation3D_GetLabelProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation3D *op = static_cast<vtkDistanceRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperty() :
      op->vtkDistanceRepresentation3D::GetLabelProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDistanceRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkDistanceRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkDistanceRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkDistanceRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDistanceRepresentation3D\nC++: static vtkDistanceRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkDistanceRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDistanceRepresentation3D\nC++: vtkDistanceRepresentation3D *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetDistance", PyvtkDistanceRepresentation3D_GetDistance, METH_VARARGS,
   "V.GetDistance() -> float\nC++: double GetDistance() override;\n\nSatisfy the superclasses API.\n"},
  {"SetGlyphScale", PyvtkDistanceRepresentation3D_SetGlyphScale, METH_VARARGS,
   "V.SetGlyphScale(float)\nC++: void SetGlyphScale(double scale)\n\nScale the glyphs used as tick marks. By default it is 1/40th of\nthe length.\n"},
  {"GetGlyphScale", PyvtkDistanceRepresentation3D_GetGlyphScale, METH_VARARGS,
   "V.GetGlyphScale() -> float\nC++: virtual double GetGlyphScale()\n\nScale the glyphs used as tick marks. By default it is 1/40th of\nthe length.\n"},
  {"GetLineProperty", PyvtkDistanceRepresentation3D_GetLineProperty, METH_VARARGS,
   "V.GetLineProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\nConvenience method to get the line actor property.\n"},
  {"SetLabelPosition", PyvtkDistanceRepresentation3D_SetLabelPosition, METH_VARARGS,
   "V.SetLabelPosition(float)\nC++: void SetLabelPosition(double labelPosition)\n\nSet/Get position of the label title in normalized coordinates\n[0,1]. 0 is at the start of the line whereas 1 is at the end.\n"},
  {"GetLabelPosition", PyvtkDistanceRepresentation3D_GetLabelPosition, METH_VARARGS,
   "V.GetLabelPosition() -> float\nC++: virtual double GetLabelPosition()\n\nSet/Get position of the label title in normalized coordinates\n[0,1]. 0 is at the start of the line whereas 1 is at the end.\n"},
  {"SetMaximumNumberOfRulerTicks", PyvtkDistanceRepresentation3D_SetMaximumNumberOfRulerTicks, METH_VARARGS,
   "V.SetMaximumNumberOfRulerTicks(int)\nC++: virtual void SetMaximumNumberOfRulerTicks(int _arg)\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {"GetMaximumNumberOfRulerTicksMinValue", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfRulerTicksMinValue() -> int\nC++: virtual int GetMaximumNumberOfRulerTicksMinValue()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {"GetMaximumNumberOfRulerTicksMaxValue", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicksMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfRulerTicksMaxValue() -> int\nC++: virtual int GetMaximumNumberOfRulerTicksMaxValue()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {"GetMaximumNumberOfRulerTicks", PyvtkDistanceRepresentation3D_GetMaximumNumberOfRulerTicks, METH_VARARGS,
   "V.GetMaximumNumberOfRulerTicks() -> int\nC++: virtual int GetMaximumNumberOfRulerTicks()\n\nSet/Get the maximum number of ticks in ruler mode.\n"},
  {"GetGlyphActor", PyvtkDistanceRepresentation3D_GetGlyphActor, METH_VARARGS,
   "V.GetGlyphActor() -> vtkActor\nC++: virtual vtkActor *GetGlyphActor()\n\nConvenience method to get the glyph actor. Using this it is\npossible to control the appearance of the glyphs.\n"},
  {"GetLabelActor", PyvtkDistanceRepresentation3D_GetLabelActor, METH_VARARGS,
   "V.GetLabelActor() -> vtkFollower\nC++: virtual vtkFollower *GetLabelActor()\n\nConvenience method Get the label actor. It is possible to control\nthe appearance of the label.\n"},
  {"SetLabelActor", PyvtkDistanceRepresentation3D_SetLabelActor, METH_VARARGS,
   "V.SetLabelActor(vtkFollower)\nC++: virtual void SetLabelActor(vtkFollower *)\n\nConvenience method Get the label actor. It is possible to control\nthe appearance of the label.\n"},
  {"GetPoint1WorldPosition", PyvtkDistanceRepresentation3D_GetPoint1WorldPosition, METH_VARARGS,
   "V.GetPoint1WorldPosition() -> (float, float, float)\nC++: double *GetPoint1WorldPosition() override;\nV.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkDistanceRepresentation3D_GetPoint2WorldPosition, METH_VARARGS,
   "V.GetPoint2WorldPosition() -> (float, float, float)\nC++: double *GetPoint2WorldPosition() override;\nV.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1WorldPosition", PyvtkDistanceRepresentation3D_SetPoint1WorldPosition, METH_VARARGS,
   "V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2WorldPosition", PyvtkDistanceRepresentation3D_SetPoint2WorldPosition, METH_VARARGS,
   "V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1DisplayPosition", PyvtkDistanceRepresentation3D_SetPoint1DisplayPosition, METH_VARARGS,
   "V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2DisplayPosition", PyvtkDistanceRepresentation3D_SetPoint2DisplayPosition, METH_VARARGS,
   "V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint1DisplayPosition", PyvtkDistanceRepresentation3D_GetPoint1DisplayPosition, METH_VARARGS,
   "V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2DisplayPosition", PyvtkDistanceRepresentation3D_GetPoint2DisplayPosition, METH_VARARGS,
   "V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"BuildRepresentation", PyvtkDistanceRepresentation3D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethod to satisfy superclasses' API.\n"},
  {"GetBounds", PyvtkDistanceRepresentation3D_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethod to satisfy superclasses' API.\n"},
  {"ReleaseGraphicsResources", PyvtkDistanceRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkDistanceRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkDistanceRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nMethods required by vtkProp superclass.\n"},
  {"SetLabelScale", PyvtkDistanceRepresentation3D_SetLabelScale, METH_VARARGS,
   "V.SetLabelScale(float, float, float)\nC++: void SetLabelScale(double x, double y, double z)\nV.SetLabelScale([float, float, float])\nC++: virtual void SetLabelScale(double scale[3])\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {"GetLabelScale", PyvtkDistanceRepresentation3D_GetLabelScale, METH_VARARGS,
   "V.GetLabelScale() -> (float, ...)\nC++: virtual double *GetLabelScale()\n\nScale text (font size along each dimension). This helps control\nthe appearance of the 3D text.\n"},
  {"GetLabelProperty", PyvtkDistanceRepresentation3D_GetLabelProperty, METH_VARARGS,
   "V.GetLabelProperty() -> vtkProperty\nC++: virtual vtkProperty *GetLabelProperty()\n\nGet the distance annotation property\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDistanceRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkDistanceRepresentation3D", // tp_name
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
  PyvtkDistanceRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDistanceRepresentation3D_StaticNew()
{
  return vtkDistanceRepresentation3D::New();
}

PyObject *PyvtkDistanceRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDistanceRepresentation3D_Type, PyvtkDistanceRepresentation3D_Methods,
    "vtkDistanceRepresentation3D",
 &PyvtkDistanceRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkDistanceRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDistanceRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistanceRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistanceRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistanceRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

