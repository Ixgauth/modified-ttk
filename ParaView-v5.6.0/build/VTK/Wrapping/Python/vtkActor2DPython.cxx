// python wrapper for vtkActor2D
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
#include "vtkActor2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActor2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkActor2D_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif

static const char *PyvtkActor2D_Doc =
  "vtkActor2D - a actor that draws 2D data\n\n"
  "Superclass: vtkProp\n\n"
  "vtkActor2D is similar to vtkActor, but it is made to be used with two\n"
  "dimensional images and annotation.  vtkActor2D has a position but\n"
  "does not use a transformation matrix like vtkActor (see the\n"
  "superclass vtkProp for information on positioning vtkActor2D). \n"
  "vtkActor2D has a reference to a vtkMapper2D object which does the\n"
  "rendering.\n\n"
  "@sa\n"
  "vtkProp  vtkMapper2D vtkProperty2D\n\n";


static PyObject *
PyvtkActor2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActor2D *tempr = vtkActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor2D::NewInstance());

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
PyvtkActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkMapper2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper2D"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkActor2D::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper2D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkActor2D::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayerNumber(temp0);
    }
    else
    {
      op->vtkActor2D::SetLayerNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayerNumber() :
      op->vtkActor2D::GetLayerNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkActor2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkActor2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPositionCoordinate() :
      op->vtkActor2D::GetPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkActor2D::SetPosition(temp0);
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
PyvtkActor2D_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkActor2D_SetPosition_s1(self, args);
    case 1:
      return PyvtkActor2D_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}



static PyObject *
PyvtkActor2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkActor2D::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetDisplayPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPosition2Coordinate() :
      op->vtkActor2D::GetPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition2(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetPosition2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition2(temp0);
    }
    else
    {
      op->vtkActor2D::SetPosition2(temp0);
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
PyvtkActor2D_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkActor2D_SetPosition2_s1(self, args);
    case 1:
      return PyvtkActor2D_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}



static PyObject *
PyvtkActor2D_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkActor2D::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkActor2D::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkActor2D::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkActor2D::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkActor2D::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkActor2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkActor2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetActualPositionCoordinate() :
      op->vtkActor2D::GetActualPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetActualPosition2Coordinate() :
      op->vtkActor2D::GetActualPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkActor2D_Methods[] = {
  {"IsTypeOf", PyvtkActor2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActor2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActor2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkActor2D\nC++: static vtkActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActor2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkActor2D\nC++: vtkActor2D *NewInstance()\n\n"},
  {"RenderOverlay", PyvtkActor2D_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderOpaqueGeometry", PyvtkActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetMapper", PyvtkActor2D_SetMapper, METH_VARARGS,
   "V.SetMapper(vtkMapper2D)\nC++: virtual void SetMapper(vtkMapper2D *mapper)\n\nSet/Get the vtkMapper2D which defines the data to be drawn.\n"},
  {"GetMapper", PyvtkActor2D_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkMapper2D\nC++: virtual vtkMapper2D *GetMapper()\n\nSet/Get the vtkMapper2D which defines the data to be drawn.\n"},
  {"SetLayerNumber", PyvtkActor2D_SetLayerNumber, METH_VARARGS,
   "V.SetLayerNumber(int)\nC++: virtual void SetLayerNumber(int _arg)\n\nSet/Get the layer number in the overlay planes into which to\nrender.\n"},
  {"GetLayerNumber", PyvtkActor2D_GetLayerNumber, METH_VARARGS,
   "V.GetLayerNumber() -> int\nC++: virtual int GetLayerNumber()\n\nSet/Get the layer number in the overlay planes into which to\nrender.\n"},
  {"GetProperty", PyvtkActor2D_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nReturns this actor's vtkProperty2D.  Creates a property if one\ndoesn't already exist.\n"},
  {"SetProperty", PyvtkActor2D_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty2D)\nC++: virtual void SetProperty(vtkProperty2D *)\n\nSet this vtkProp's vtkProperty2D.\n"},
  {"GetPositionCoordinate", PyvtkActor2D_GetPositionCoordinate, METH_VARARGS,
   "V.GetPositionCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPositionCoordinate()\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {"SetPosition", PyvtkActor2D_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float)\nC++: void SetPosition(double, double)\nV.SetPosition([float, float])\nC++: void SetPosition(double a[2])\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {"GetPosition", PyvtkActor2D_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, float)\nC++: double *GetPosition()\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {"SetDisplayPosition", PyvtkActor2D_SetDisplayPosition, METH_VARARGS,
   "V.SetDisplayPosition(int, int)\nC++: void SetDisplayPosition(int, int)\n\nSet the Prop2D's position in display coordinates.\n"},
  {"GetPosition2Coordinate", PyvtkActor2D_GetPosition2Coordinate, METH_VARARGS,
   "V.GetPosition2Coordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetPosition2Coordinate()\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {"SetPosition2", PyvtkActor2D_SetPosition2, METH_VARARGS,
   "V.SetPosition2(float, float)\nC++: void SetPosition2(double, double)\nV.SetPosition2([float, float])\nC++: void SetPosition2(double a[2])\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {"GetPosition2", PyvtkActor2D_GetPosition2, METH_VARARGS,
   "V.GetPosition2() -> (float, float)\nC++: double *GetPosition2()\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {"SetWidth", PyvtkActor2D_SetWidth, METH_VARARGS,
   "V.SetWidth(float)\nC++: void SetWidth(double w)\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {"GetWidth", PyvtkActor2D_GetWidth, METH_VARARGS,
   "V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {"SetHeight", PyvtkActor2D_SetHeight, METH_VARARGS,
   "V.SetHeight(float)\nC++: void SetHeight(double h)\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {"GetHeight", PyvtkActor2D_GetHeight, METH_VARARGS,
   "V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {"GetMTime", PyvtkActor2D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this objects MTime.\n"},
  {"GetActors2D", PyvtkActor2D_GetActors2D, METH_VARARGS,
   "V.GetActors2D(vtkPropCollection)\nC++: void GetActors2D(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ShallowCopy", PyvtkActor2D_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkActor2D. Overloads the virtual vtkProp\nmethod.\n"},
  {"ReleaseGraphicsResources", PyvtkActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetActualPositionCoordinate", PyvtkActor2D_GetActualPositionCoordinate, METH_VARARGS,
   "V.GetActualPositionCoordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPositionCoordinate(void)\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {"GetActualPosition2Coordinate", PyvtkActor2D_GetActualPosition2Coordinate, METH_VARARGS,
   "V.GetActualPosition2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPosition2Coordinate(void)\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkActor2D", // tp_name
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
  PyvtkActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActor2D_StaticNew()
{
  return vtkActor2D::New();
}

PyObject *PyvtkActor2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkActor2D_Type, PyvtkActor2D_Methods,
    "vtkActor2D",
 &PyvtkActor2D_StaticNew);

  PyTypeObject *pytype = &PyvtkActor2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

