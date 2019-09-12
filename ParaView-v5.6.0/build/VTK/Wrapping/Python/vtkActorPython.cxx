// python wrapper for vtkActor
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
#include "vtkActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkActor_Doc =
  "vtkActor - represents an object (geometry & properties) in a rendered\nscene\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkActor is used to represent an entity in a rendering scene.  It\n"
  "inherits functions related to the actors position, and orientation\n"
  "from vtkProp. The actor also has scaling and maintains a reference to\n"
  "the defining geometry (i.e., the mapper), rendering properties, and\n"
  "possibly a texture map. vtkActor combines these instance variables\n"
  "into one 4x4 transformation matrix as follows: [x y z 1] = [x y z 1]\n"
  "Translate(-origin) Scale(scale) Rot(y) Rot(x) Rot (z) Trans(origin)\n"
  "Trans(position)\n\n"
  "@sa\n"
  "vtkProperty vtkTexture vtkMapper vtkAssembly vtkFollower vtkLODActor\n\n";


static PyObject *
PyvtkActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActor *tempr = vtkActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor::NewInstance());

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
PyvtkActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkActor::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkActor::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

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
      op->vtkActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkActor::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkActor::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_MakeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->MakeProperty() :
      op->vtkActor::MakeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceProperty(temp0);
    }
    else
    {
      op->vtkActor::SetBackfaceProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetBackfaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetBackfaceProperty() :
      op->vtkActor::GetBackfaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0);
    }
    else
    {
      op->vtkActor::SetTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkActor::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  vtkMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkActor::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkActor::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkActor::GetBounds(temp0);
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
PyvtkActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkActor_ApplyProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyProperties();
    }
    else
    {
      op->vtkActor::ApplyProperties();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkActor::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceOpaque() :
      op->vtkActor::GetForceOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetForceOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceOpaque(temp0);
    }
    else
    {
      op->vtkActor::SetForceOpaque(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ForceOpaqueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOn();
    }
    else
    {
      op->vtkActor::ForceOpaqueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ForceOpaqueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceOpaqueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceOpaqueOff();
    }
    else
    {
      op->vtkActor::ForceOpaqueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceTranslucent() :
      op->vtkActor::GetForceTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor_SetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceTranslucent(temp0);
    }
    else
    {
      op->vtkActor::SetForceTranslucent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ForceTranslucentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOn();
    }
    else
    {
      op->vtkActor::ForceTranslucentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_ForceTranslucentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOff();
    }
    else
    {
      op->vtkActor::ForceTranslucentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor *op = static_cast<vtkActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkActor::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkActor_Methods[] = {
  {"IsTypeOf", PyvtkActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkActor\nC++: static vtkActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkActor\nC++: vtkActor *NewInstance()\n\n"},
  {"GetActors", PyvtkActor_GetActors, METH_VARARGS,
   "V.GetActors(vtkPropCollection)\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"RenderOpaqueGeometry", PyvtkActor_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"Render", PyvtkActor_Render, METH_VARARGS,
   "V.Render(vtkRenderer, vtkMapper)\nC++: virtual void Render(vtkRenderer *, vtkMapper *)\n\nThis causes the actor to be rendered. It in turn will render the\nactor's property, texture map and then mapper. If a property\nhasn't been assigned, then the actor will create one\nautomatically. Note that a side effect of this method is that the\npipeline will be updated.\n"},
  {"ShallowCopy", PyvtkActor_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an actor. Overloads the virtual vtkProp method.\n"},
  {"ReleaseGraphicsResources", PyvtkActor_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetProperty", PyvtkActor_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkProperty)\nC++: void SetProperty(vtkProperty *lut)\n\nSet/Get the property object that controls this actors surface\nproperties.  This should be an instance of a vtkProperty object. \nEvery actor must have a property associated with it.  If one\nisn't specified, then one will be generated automatically.\nMultiple actors can share one property object.\n"},
  {"GetProperty", PyvtkActor_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkProperty\nC++: vtkProperty *GetProperty()\n\nSet/Get the property object that controls this actors surface\nproperties.  This should be an instance of a vtkProperty object. \nEvery actor must have a property associated with it.  If one\nisn't specified, then one will be generated automatically.\nMultiple actors can share one property object.\n"},
  {"MakeProperty", PyvtkActor_MakeProperty, METH_VARARGS,
   "V.MakeProperty() -> vtkProperty\nC++: virtual vtkProperty *MakeProperty()\n\nCreate a new property suitable for use with this type of Actor.\nFor example, a vtkMesaActor should create a vtkMesaProperty in\nthis function.   The default is to just call vtkProperty::New.\n"},
  {"SetBackfaceProperty", PyvtkActor_SetBackfaceProperty, METH_VARARGS,
   "V.SetBackfaceProperty(vtkProperty)\nC++: void SetBackfaceProperty(vtkProperty *lut)\n\nSet/Get the property object that controls this actors backface\nsurface properties.  This should be an instance of a vtkProperty\nobject. If one isn't specified, then the front face properties\nwill be used.  Multiple actors can share one property object.\n"},
  {"GetBackfaceProperty", PyvtkActor_GetBackfaceProperty, METH_VARARGS,
   "V.GetBackfaceProperty() -> vtkProperty\nC++: virtual vtkProperty *GetBackfaceProperty()\n\nSet/Get the property object that controls this actors backface\nsurface properties.  This should be an instance of a vtkProperty\nobject. If one isn't specified, then the front face properties\nwill be used.  Multiple actors can share one property object.\n"},
  {"SetTexture", PyvtkActor_SetTexture, METH_VARARGS,
   "V.SetTexture(vtkTexture)\nC++: virtual void SetTexture(vtkTexture *)\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. An actor does not need to have\nan associated texture map and multiple actors can share one\ntexture.\n"},
  {"GetTexture", PyvtkActor_GetTexture, METH_VARARGS,
   "V.GetTexture() -> vtkTexture\nC++: virtual vtkTexture *GetTexture()\n\nSet/Get the texture object to control rendering texture maps. \nThis will be a vtkTexture object. An actor does not need to have\nan associated texture map and multiple actors can share one\ntexture.\n"},
  {"SetMapper", PyvtkActor_SetMapper, METH_VARARGS,
   "V.SetMapper(vtkMapper)\nC++: virtual void SetMapper(vtkMapper *)\n\nThis is the method that is used to connect an actor to the end of\na visualization pipeline, i.e. the mapper. This should be a\nsubclass of vtkMapper. Typically vtkPolyDataMapper and\nvtkDataSetMapper will be used.\n"},
  {"GetMapper", PyvtkActor_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkMapper\nC++: virtual vtkMapper *GetMapper()\n\nReturns the Mapper that this actor is getting its data from.\n"},
  {"GetBounds", PyvtkActor_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop3D as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"ApplyProperties", PyvtkActor_ApplyProperties, METH_VARARGS,
   "V.ApplyProperties()\nC++: virtual void ApplyProperties()\n\nApply the current properties to all parts that compose this\nactor. This method is overloaded in vtkAssembly to apply the\nassemblies' properties to all its parts in a recursive manner.\nTypically the use of this method is to set the desired properties\nin the assembly, and then push the properties down to the\nassemblies parts with ApplyProperties().\n"},
  {"GetMTime", PyvtkActor_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {"GetRedrawMTime", PyvtkActor_GetRedrawMTime, METH_VARARGS,
   "V.GetRedrawMTime() -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures, etc.\n"},
  {"GetForceOpaque", PyvtkActor_GetForceOpaque, METH_VARARGS,
   "V.GetForceOpaque() -> bool\nC++: virtual bool GetForceOpaque()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"SetForceOpaque", PyvtkActor_SetForceOpaque, METH_VARARGS,
   "V.SetForceOpaque(bool)\nC++: virtual void SetForceOpaque(bool _arg)\n\nForce the actor to be treated as opaque or translucent\n"},
  {"ForceOpaqueOn", PyvtkActor_ForceOpaqueOn, METH_VARARGS,
   "V.ForceOpaqueOn()\nC++: virtual void ForceOpaqueOn()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"ForceOpaqueOff", PyvtkActor_ForceOpaqueOff, METH_VARARGS,
   "V.ForceOpaqueOff()\nC++: virtual void ForceOpaqueOff()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"GetForceTranslucent", PyvtkActor_GetForceTranslucent, METH_VARARGS,
   "V.GetForceTranslucent() -> bool\nC++: virtual bool GetForceTranslucent()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"SetForceTranslucent", PyvtkActor_SetForceTranslucent, METH_VARARGS,
   "V.SetForceTranslucent(bool)\nC++: virtual void SetForceTranslucent(bool _arg)\n\nForce the actor to be treated as opaque or translucent\n"},
  {"ForceTranslucentOn", PyvtkActor_ForceTranslucentOn, METH_VARARGS,
   "V.ForceTranslucentOn()\nC++: virtual void ForceTranslucentOn()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"ForceTranslucentOff", PyvtkActor_ForceTranslucentOff, METH_VARARGS,
   "V.ForceTranslucentOff()\nC++: virtual void ForceTranslucentOff()\n\nForce the actor to be treated as opaque or translucent\n"},
  {"GetSupportsSelection", PyvtkActor_GetSupportsSelection, METH_VARARGS,
   "V.GetSupportsSelection() -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkActor", // tp_name
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
  PyvtkActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActor_StaticNew()
{
  return vtkActor::New();
}

PyObject *PyvtkActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkActor_Type, PyvtkActor_Methods,
    "vtkActor",
 &PyvtkActor_StaticNew);

  PyTypeObject *pytype = &PyvtkActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

