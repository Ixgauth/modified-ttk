// python wrapper for vtkAngleRepresentation3D
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
#include "vtkAngleRepresentation3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngleRepresentation3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAngleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkAngleRepresentation_ClassNew
extern "C" { PyObject *PyvtkAngleRepresentation_ClassNew(); }
#define DECLARED_PyvtkAngleRepresentation_ClassNew
#endif

static const char *PyvtkAngleRepresentation3D_Doc =
  "vtkAngleRepresentation3D - represent the vtkAngleWidget\n\n"
  "Superclass: vtkAngleRepresentation\n\n"
  "The vtkAngleRepresentation3D is a representation for the\n"
  "vtkAngleWidget. This representation consists of two rays and three\n"
  "vtkHandleRepresentations to place and manipulate the three points\n"
  "defining the angle representation. (Note: the three points are\n"
  "referred to as Point1, Center, and Point2, at the two end points\n"
  "(Point1 and Point2) and Center (around which the angle is measured).\n"
  "This particular implementation is a 3D representation, meaning that\n"
  "it draws in the overlay plane.\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation\n\n";


static PyObject *
PyvtkAngleRepresentation3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngleRepresentation3D *tempr = vtkAngleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleRepresentation3D::NewInstance());

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
PyvtkAngleRepresentation3D_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkAngleRepresentation3D::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::GetPoint1WorldPosition(temp0);
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
PyvtkAngleRepresentation3D_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->GetCenterWorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation3D::GetCenterWorldPosition(temp0);
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
PyvtkAngleRepresentation3D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::GetPoint2WorldPosition(temp0);
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
PyvtkAngleRepresentation3D_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::SetPoint1WorldPosition(temp0);
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
PyvtkAngleRepresentation3D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::SetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_SetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->SetCenterWorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation3D::SetCenterWorldPosition(temp0);
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
PyvtkAngleRepresentation3D_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->SetCenterDisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation3D::SetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::SetPoint2WorldPosition(temp0);
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
PyvtkAngleRepresentation3D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::SetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::GetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->GetCenterDisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation3D::GetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::GetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation3D_GetRay1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetRay1() :
      op->vtkAngleRepresentation3D::GetRay1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_GetRay2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetRay2() :
      op->vtkAngleRepresentation3D::GetRay2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_GetArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetArc() :
      op->vtkAngleRepresentation3D::GetArc());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFollower *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkAngleRepresentation3D::GetTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_SetTextActorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextActorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->SetTextActorScale(temp0);
    }
    else
    {
      op->vtkAngleRepresentation3D::SetTextActorScale(temp0);
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
PyvtkAngleRepresentation3D_GetTextActorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTextActorScale() :
      op->vtkAngleRepresentation3D::GetTextActorScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

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
      op->vtkAngleRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAngleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAngleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation3D *op = static_cast<vtkAngleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAngleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAngleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkAngleRepresentation3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkAngleRepresentation3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkAngleRepresentation3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAngleRepresentation3D\nC++: static vtkAngleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkAngleRepresentation3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAngleRepresentation3D\nC++: vtkAngleRepresentation3D *NewInstance()\n\nStandard VTK methods.\n"},
  {"GetAngle", PyvtkAngleRepresentation3D_GetAngle, METH_VARARGS,
   "V.GetAngle() -> float\nC++: double GetAngle() override;\n\nSatisfy the superclasses API. Angle returned is in radians.\n"},
  {"GetPoint1WorldPosition", PyvtkAngleRepresentation3D_GetPoint1WorldPosition, METH_VARARGS,
   "V.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterWorldPosition", PyvtkAngleRepresentation3D_GetCenterWorldPosition, METH_VARARGS,
   "V.GetCenterWorldPosition([float, float, float])\nC++: void GetCenterWorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkAngleRepresentation3D_GetPoint2WorldPosition, METH_VARARGS,
   "V.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1WorldPosition", PyvtkAngleRepresentation3D_SetPoint1WorldPosition, METH_VARARGS,
   "V.SetPoint1WorldPosition([float, float, float])\nC++: virtual void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint1DisplayPosition", PyvtkAngleRepresentation3D_SetPoint1DisplayPosition, METH_VARARGS,
   "V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetCenterWorldPosition", PyvtkAngleRepresentation3D_SetCenterWorldPosition, METH_VARARGS,
   "V.SetCenterWorldPosition([float, float, float])\nC++: virtual void SetCenterWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetCenterDisplayPosition", PyvtkAngleRepresentation3D_SetCenterDisplayPosition, METH_VARARGS,
   "V.SetCenterDisplayPosition([float, float, float])\nC++: void SetCenterDisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2WorldPosition", PyvtkAngleRepresentation3D_SetPoint2WorldPosition, METH_VARARGS,
   "V.SetPoint2WorldPosition([float, float, float])\nC++: virtual void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"SetPoint2DisplayPosition", PyvtkAngleRepresentation3D_SetPoint2DisplayPosition, METH_VARARGS,
   "V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint1DisplayPosition", PyvtkAngleRepresentation3D_GetPoint1DisplayPosition, METH_VARARGS,
   "V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterDisplayPosition", PyvtkAngleRepresentation3D_GetCenterDisplayPosition, METH_VARARGS,
   "V.GetCenterDisplayPosition([float, float, float])\nC++: void GetCenterDisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2DisplayPosition", PyvtkAngleRepresentation3D_GetPoint2DisplayPosition, METH_VARARGS,
   "V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetRay1", PyvtkAngleRepresentation3D_GetRay1, METH_VARARGS,
   "V.GetRay1() -> vtkActor\nC++: virtual vtkActor *GetRay1()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {"GetRay2", PyvtkAngleRepresentation3D_GetRay2, METH_VARARGS,
   "V.GetRay2() -> vtkActor\nC++: virtual vtkActor *GetRay2()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {"GetArc", PyvtkAngleRepresentation3D_GetArc, METH_VARARGS,
   "V.GetArc() -> vtkActor\nC++: virtual vtkActor *GetArc()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {"GetTextActor", PyvtkAngleRepresentation3D_GetTextActor, METH_VARARGS,
   "V.GetTextActor() -> vtkFollower\nC++: virtual vtkFollower *GetTextActor()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {"SetTextActorScale", PyvtkAngleRepresentation3D_SetTextActorScale, METH_VARARGS,
   "V.SetTextActorScale([float, float, float])\nC++: virtual void SetTextActorScale(double scale[3])\n\nScale text.\n"},
  {"GetTextActorScale", PyvtkAngleRepresentation3D_GetTextActorScale, METH_VARARGS,
   "V.GetTextActorScale() -> (float, ...)\nC++: virtual double *GetTextActorScale()\n\nScale text.\n"},
  {"BuildRepresentation", PyvtkAngleRepresentation3D_BuildRepresentation, METH_VARARGS,
   "V.BuildRepresentation()\nC++: void BuildRepresentation() override;\n\nMethod defined by vtkWidgetRepresentation superclass and needed\nhere.\n"},
  {"ReleaseGraphicsResources", PyvtkAngleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOpaqueGeometry", PyvtkAngleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAngleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\nMethods required by vtkProp superclass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAngleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nMethods required by vtkProp superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAngleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkAngleRepresentation3D", // tp_name
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
  PyvtkAngleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAngleRepresentation3D_StaticNew()
{
  return vtkAngleRepresentation3D::New();
}

PyObject *PyvtkAngleRepresentation3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAngleRepresentation3D_Type, PyvtkAngleRepresentation3D_Methods,
    "vtkAngleRepresentation3D",
 &PyvtkAngleRepresentation3D_StaticNew);

  PyTypeObject *pytype = &PyvtkAngleRepresentation3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAngleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAngleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

