// python wrapper for vtkCellPicker
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
#include "vtkCellPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellPicker_ClassNew(); }

#ifndef DECLARED_PyvtkPicker_ClassNew
extern "C" { PyObject *PyvtkPicker_ClassNew(); }
#define DECLARED_PyvtkPicker_ClassNew
#endif

static const char *PyvtkCellPicker_Doc =
  "vtkCellPicker - ray-cast cell picker for all kinds of Prop3Ds\n\n"
  "Superclass: vtkPicker\n\n"
  "vtkCellPicker will shoot a ray into a 3D scene and return information\n"
  "about the first object that the ray hits.  It works for all Prop3Ds.\n"
  "For vtkVolume objects, it shoots a ray into the volume and returns\n"
  "the point where the ray intersects an isosurface of a chosen opacity.\n"
  "For vtkImage objects, it intersects the ray with the displayed slice.\n"
  "For vtkActor objects, it intersects the actor's polygons. If the\n"
  "object's mapper has ClippingPlanes, then it takes the clipping into\n"
  "account, and will return the Id of the clipping plane that was\n"
  "intersected. For all prop types, it returns point and cell\n"
  "information, plus the normal of the surface that was intersected at\n"
  "the pick position.  For volumes and images, it also returns (i,j,k)\n"
  "coordinates for the point and the cell that were picked.\n\n"
  "@sa\n"
  "vtkPicker vtkPointPicker vtkVolumePicker\n\n"
  "@par Thanks: This class was contributed to VTK by David Gobbi on\n"
  "behalf of Atamai Inc., as an enhancement to the original\n"
  "vtkCellPicker.\n\n";


static PyObject *
PyvtkCellPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellPicker *tempr = vtkCellPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellPicker::NewInstance());

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
PyvtkCellPicker_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkCellPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_Pick3DRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3DRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Pick3DRay(temp0, temp1, temp2) :
      op->vtkCellPicker::Pick3DRay(temp0, temp1, temp2));

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
PyvtkCellPicker_AddLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->AddLocator(temp0);
    }
    else
    {
      op->vtkCellPicker::AddLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->RemoveLocator(temp0);
    }
    else
    {
      op->vtkCellPicker::RemoveLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_RemoveAllLocators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocators();
    }
    else
    {
      op->vtkCellPicker::RemoveAllLocators();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumeOpacityIsovalue(temp0);
    }
    else
    {
      op->vtkCellPicker::SetVolumeOpacityIsovalue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetVolumeOpacityIsovalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeOpacityIsovalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeOpacityIsovalue() :
      op->vtkCellPicker::GetVolumeOpacityIsovalue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseVolumeGradientOpacity(temp0);
    }
    else
    {
      op->vtkCellPicker::SetUseVolumeGradientOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVolumeGradientOpacityOn();
    }
    else
    {
      op->vtkCellPicker::UseVolumeGradientOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_UseVolumeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVolumeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVolumeGradientOpacityOff();
    }
    else
    {
      op->vtkCellPicker::UseVolumeGradientOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetUseVolumeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseVolumeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseVolumeGradientOpacity() :
      op->vtkCellPicker::GetUseVolumeGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickClippingPlanes(temp0);
    }
    else
    {
      op->vtkCellPicker::SetPickClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickClippingPlanesOn();
    }
    else
    {
      op->vtkCellPicker::PickClippingPlanesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickClippingPlanesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickClippingPlanesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickClippingPlanesOff();
    }
    else
    {
      op->vtkCellPicker::PickClippingPlanesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickClippingPlanes() :
      op->vtkCellPicker::GetPickClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetClippingPlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClippingPlaneId() :
      op->vtkCellPicker::GetClippingPlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPickNormal() :
      op->vtkCellPicker::GetPickNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetMapperNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapperNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMapperNormal() :
      op->vtkCellPicker::GetMapperNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPointIJK() :
      op->vtkCellPicker::GetPointIJK());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCellIJK() :
      op->vtkCellPicker::GetCellIJK());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkCellPicker::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkCellPicker::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetSubId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubId() :
      op->vtkCellPicker::GetSubId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPCoords() :
      op->vtkCellPicker::GetPCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkCellPicker::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_SetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickTextureData(temp0);
    }
    else
    {
      op->vtkCellPicker::SetPickTextureData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickTextureDataOn();
    }
    else
    {
      op->vtkCellPicker::PickTextureDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_PickTextureDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PickTextureDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PickTextureDataOff();
    }
    else
    {
      op->vtkCellPicker::PickTextureDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellPicker_GetPickTextureData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickTextureData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellPicker *op = static_cast<vtkCellPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickTextureData() :
      op->vtkCellPicker::GetPickTextureData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellPicker_Methods[] = {
  {"IsTypeOf", PyvtkCellPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellPicker\nC++: static vtkCellPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellPicker\nC++: vtkCellPicker *NewInstance()\n\n"},
  {"Pick", PyvtkCellPicker_Pick, METH_VARARGS,
   "V.Pick(float, float, float, vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\n\nPerform pick operation with selection point provided. Normally\nthe first two values are the (x,y) pixel coordinates for the\npick, and the third value is z=0. The return value will be\nnon-zero if something was successfully picked.\n"},
  {"Pick3DRay", PyvtkCellPicker_Pick3DRay, METH_VARARGS,
   "V.Pick3DRay([float, float, float], [float, float, float, float],\n    vtkRenderer) -> int\nC++: int Pick3DRay(double selectionPt[3], double orient[4],\n    vtkRenderer *ren) override;\n\nPerform pick operation with selection point provided. The\nselectionPt is in world coordinates. Return non-zero if something\nwas successfully picked.\n"},
  {"AddLocator", PyvtkCellPicker_AddLocator, METH_VARARGS,
   "V.AddLocator(vtkAbstractCellLocator)\nC++: void AddLocator(vtkAbstractCellLocator *locator)\n\nAdd a locator for one of the data sets that will be included in\nthe scene.  You must set up the locator with exactly the same\ndata set that was input to the mapper of one or more of the\nactors in the scene.  As well, you must either build the locator\nbefore doing the pick, or you must turn on LazyEvaluation in the\nlocator to make it build itself on the first pick.  Note that if\nyou try to add the same locator to the picker twice, the second\naddition will be ignored.\n"},
  {"RemoveLocator", PyvtkCellPicker_RemoveLocator, METH_VARARGS,
   "V.RemoveLocator(vtkAbstractCellLocator)\nC++: void RemoveLocator(vtkAbstractCellLocator *locator)\n\nRemove a locator that was previously added.  If you try to remove\na nonexistent locator, then nothing will happen and no errors\nwill be raised.\n"},
  {"RemoveAllLocators", PyvtkCellPicker_RemoveAllLocators, METH_VARARGS,
   "V.RemoveAllLocators()\nC++: void RemoveAllLocators()\n\nRemove all locators associated with this picker.\n"},
  {"SetVolumeOpacityIsovalue", PyvtkCellPicker_SetVolumeOpacityIsovalue, METH_VARARGS,
   "V.SetVolumeOpacityIsovalue(float)\nC++: virtual void SetVolumeOpacityIsovalue(double _arg)\n\nSet the opacity isovalue to use for defining volume surfaces. \nThe pick will occur at the location along the pick ray where the\nopacity of the volume is equal to this isovalue.  If you want to\ndo the pick based on an actual data isovalue rather than the\nopacity, then pass the data value through the scalar opacity\nfunction before using this method.\n"},
  {"GetVolumeOpacityIsovalue", PyvtkCellPicker_GetVolumeOpacityIsovalue, METH_VARARGS,
   "V.GetVolumeOpacityIsovalue() -> float\nC++: virtual double GetVolumeOpacityIsovalue()\n\nSet the opacity isovalue to use for defining volume surfaces. \nThe pick will occur at the location along the pick ray where the\nopacity of the volume is equal to this isovalue.  If you want to\ndo the pick based on an actual data isovalue rather than the\nopacity, then pass the data value through the scalar opacity\nfunction before using this method.\n"},
  {"SetUseVolumeGradientOpacity", PyvtkCellPicker_SetUseVolumeGradientOpacity, METH_VARARGS,
   "V.SetUseVolumeGradientOpacity(int)\nC++: virtual void SetUseVolumeGradientOpacity(vtkTypeBool _arg)\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {"UseVolumeGradientOpacityOn", PyvtkCellPicker_UseVolumeGradientOpacityOn, METH_VARARGS,
   "V.UseVolumeGradientOpacityOn()\nC++: virtual void UseVolumeGradientOpacityOn()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {"UseVolumeGradientOpacityOff", PyvtkCellPicker_UseVolumeGradientOpacityOff, METH_VARARGS,
   "V.UseVolumeGradientOpacityOff()\nC++: virtual void UseVolumeGradientOpacityOff()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {"GetUseVolumeGradientOpacity", PyvtkCellPicker_GetUseVolumeGradientOpacity, METH_VARARGS,
   "V.GetUseVolumeGradientOpacity() -> int\nC++: virtual vtkTypeBool GetUseVolumeGradientOpacity()\n\nUse the product of the scalar and gradient opacity functions when\ncomputing the opacity isovalue, instead of just using the scalar\nopacity. This parameter is only relevant to volume picking and is\noff by default.\n"},
  {"SetPickClippingPlanes", PyvtkCellPicker_SetPickClippingPlanes, METH_VARARGS,
   "V.SetPickClippingPlanes(int)\nC++: virtual void SetPickClippingPlanes(vtkTypeBool _arg)\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked.\n"},
  {"PickClippingPlanesOn", PyvtkCellPicker_PickClippingPlanesOn, METH_VARARGS,
   "V.PickClippingPlanesOn()\nC++: virtual void PickClippingPlanesOn()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked.\n"},
  {"PickClippingPlanesOff", PyvtkCellPicker_PickClippingPlanesOff, METH_VARARGS,
   "V.PickClippingPlanesOff()\nC++: virtual void PickClippingPlanesOff()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked.\n"},
  {"GetPickClippingPlanes", PyvtkCellPicker_GetPickClippingPlanes, METH_VARARGS,
   "V.GetPickClippingPlanes() -> int\nC++: virtual vtkTypeBool GetPickClippingPlanes()\n\nThe PickClippingPlanes setting controls how clipping planes are\nhandled by the pick.  If it is On, then the clipping planes\nbecome pickable objects, even though they are usually invisible. \nThis means that if the pick ray intersects a clipping plane\nbefore it hits anything else, the pick will stop at that clipping\nplane. The GetProp3D() and GetMapper() methods will return the\nProp3D and Mapper that the clipping plane belongs to.  The\nGetClippingPlaneId() method will return the index of the clipping\nplane so that you can retrieve it from the mapper, or -1 if no\nclipping plane was picked.\n"},
  {"GetClippingPlaneId", PyvtkCellPicker_GetClippingPlaneId, METH_VARARGS,
   "V.GetClippingPlaneId() -> int\nC++: virtual int GetClippingPlaneId()\n\nGet the index of the clipping plane that was intersected during\nthe pick.  This will be set regardless of whether\nPickClippingPlanes is On, all that is required is that the pick\nintersected a clipping plane of the Prop3D that was picked.  The\nresult will be -1 if the Prop3D that was picked has no clipping\nplanes, or if the ray didn't intersect the planes.\n"},
  {"GetPickNormal", PyvtkCellPicker_GetPickNormal, METH_VARARGS,
   "V.GetPickNormal() -> (float, float, float)\nC++: double *GetPickNormal()\n\nReturn the normal of the picked surface at the PickPosition.  If\nno surface was picked, then a vector pointing back at the camera\nis returned.\n"},
  {"GetMapperNormal", PyvtkCellPicker_GetMapperNormal, METH_VARARGS,
   "V.GetMapperNormal() -> (float, float, float)\nC++: double *GetMapperNormal()\n\n"},
  {"GetPointIJK", PyvtkCellPicker_GetPointIJK, METH_VARARGS,
   "V.GetPointIJK() -> (int, int, int)\nC++: int *GetPointIJK()\n\n"},
  {"GetCellIJK", PyvtkCellPicker_GetCellIJK, METH_VARARGS,
   "V.GetCellIJK() -> (int, int, int)\nC++: int *GetCellIJK()\n\n"},
  {"GetPointId", PyvtkCellPicker_GetPointId, METH_VARARGS,
   "V.GetPointId() -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked. This point will be a member of any cell that is picked.\n"},
  {"GetCellId", PyvtkCellPicker_GetCellId, METH_VARARGS,
   "V.GetCellId() -> int\nC++: virtual vtkIdType GetCellId()\n\nGet the id of the picked cell. If CellId = -1, nothing was\npicked.\n"},
  {"GetSubId", PyvtkCellPicker_GetSubId, METH_VARARGS,
   "V.GetSubId() -> int\nC++: virtual int GetSubId()\n\nGet the subId of the picked cell. This is useful, for example, if\nthe data is made of triangle strips. If SubId = -1, nothing was\npicked.\n"},
  {"GetPCoords", PyvtkCellPicker_GetPCoords, METH_VARARGS,
   "V.GetPCoords() -> (float, float, float)\nC++: double *GetPCoords()\n\n"},
  {"GetTexture", PyvtkCellPicker_GetTexture, METH_VARARGS,
   "V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nGet the texture that was picked.  This will always be set if the\npicked prop has a texture, and will always be null otherwise.\n"},
  {"SetPickTextureData", PyvtkCellPicker_SetPickTextureData, METH_VARARGS,
   "V.SetPickTextureData(int)\nC++: virtual void SetPickTextureData(vtkTypeBool _arg)\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {"PickTextureDataOn", PyvtkCellPicker_PickTextureDataOn, METH_VARARGS,
   "V.PickTextureDataOn()\nC++: virtual void PickTextureDataOn()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {"PickTextureDataOff", PyvtkCellPicker_PickTextureDataOff, METH_VARARGS,
   "V.PickTextureDataOff()\nC++: virtual void PickTextureDataOff()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {"GetPickTextureData", PyvtkCellPicker_GetPickTextureData, METH_VARARGS,
   "V.GetPickTextureData() -> int\nC++: virtual vtkTypeBool GetPickTextureData()\n\nIf this is \"On\" and if the picked prop has a texture, then the\ndata returned by GetDataSet() will be the texture's data instead\nof the mapper's data.  The GetPointId(), GetCellId(),\nGetPCoords() etc. will all return information for use with the\ntexture's data.  If the picked prop does not have any texture,\nthen GetDataSet() will return the mapper's data instead and\nGetPointId() etc. will return information related to the mapper's\ndata.  The default value of PickTextureData is \"Off\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCellPicker", // tp_name
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
  PyvtkCellPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellPicker_StaticNew()
{
  return vtkCellPicker::New();
}

PyObject *PyvtkCellPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellPicker_Type, PyvtkCellPicker_Methods,
    "vtkCellPicker",
 &PyvtkCellPicker_StaticNew);

  PyTypeObject *pytype = &PyvtkCellPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

