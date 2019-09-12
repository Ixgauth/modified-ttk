// python wrapper for vtkImageSlice
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
#include "vtkImageSlice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSlice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSlice_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static const char *PyvtkImageSlice_Doc =
  "vtkImageSlice - represents an image in a 3D scene\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkImageSlice is used to represent an image in a 3D scene.  It\n"
  "displays the image either as a slice or as a projection from the\n"
  "camera's perspective. Adjusting the position and orientation of the\n"
  "slice is done by adjusting the focal point and direction of the\n"
  "camera, or alternatively the slice can be set manually in\n"
  "vtkImageMapper3D. The lookup table and window/leve are set in\n"
  "vtkImageProperty. Prop3D methods such as SetPosition() and\n"
  "RotateWXYZ() change the position and orientation of the data with\n"
  "respect to VTK world coordinates.@par Thanks: Thanks to David Gobbi\n"
  "at the Seaman Family MR Centre and Dept. of Clinical Neurosciences,\n"
  "Foothills Medical Centre, Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageMapper3D vtkImageProperty vtkProp3D\n\n";


static PyObject *
PyvtkImageSlice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSlice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSlice *tempr = vtkImageSlice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSlice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlice::NewInstance());

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
PyvtkImageSlice_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkImageMapper3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapper3D"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkImageSlice::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper3D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkImageSlice::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkImageProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkImageSlice::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkImageSlice::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkImageSlice::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageSlice::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageSlice_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

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
      op->vtkImageSlice::GetBounds(temp0);
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
PyvtkImageSlice_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageSlice_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageSlice_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}



static PyObject *
PyvtkImageSlice_GetMinXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinXBound() :
      op->vtkImageSlice::GetMinXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMaxXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxXBound() :
      op->vtkImageSlice::GetMaxXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMinYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinYBound() :
      op->vtkImageSlice::GetMinYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMaxYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxYBound() :
      op->vtkImageSlice::GetMaxYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMinZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinZBound() :
      op->vtkImageSlice::GetMinZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMaxZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxZBound() :
      op->vtkImageSlice::GetMaxZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSlice::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkImageSlice::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceTranslucent() :
      op->vtkImageSlice::GetForceTranslucent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_SetForceTranslucent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceTranslucent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

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
      op->vtkImageSlice::SetForceTranslucent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_ForceTranslucentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOn();
    }
    else
    {
      op->vtkImageSlice::ForceTranslucentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_ForceTranslucentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceTranslucentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceTranslucentOff();
    }
    else
    {
      op->vtkImageSlice::ForceTranslucentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

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
      op->vtkImageSlice::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_GetImages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetImages(temp0);
    }
    else
    {
      op->vtkImageSlice::GetImages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkImageSlice::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkImageSlice::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkImageSlice::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkImageSlice::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkImageSlice::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

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
      op->vtkImageSlice::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlice_SetStackedImagePass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStackedImagePass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlice *op = static_cast<vtkImageSlice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStackedImagePass(temp0);
    }
    else
    {
      op->vtkImageSlice::SetStackedImagePass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSlice_Methods[] = {
  {"IsTypeOf", PyvtkImageSlice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSlice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSlice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSlice\nC++: static vtkImageSlice *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSlice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSlice\nC++: vtkImageSlice *NewInstance()\n\n"},
  {"SetMapper", PyvtkImageSlice_SetMapper, METH_VARARGS,
   "V.SetMapper(vtkImageMapper3D)\nC++: void SetMapper(vtkImageMapper3D *mapper)\n\nSet/Get the mapper.\n"},
  {"GetMapper", PyvtkImageSlice_GetMapper, METH_VARARGS,
   "V.GetMapper() -> vtkImageMapper3D\nC++: virtual vtkImageMapper3D *GetMapper()\n\nSet/Get the mapper.\n"},
  {"SetProperty", PyvtkImageSlice_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkImageProperty)\nC++: void SetProperty(vtkImageProperty *property)\n\nSet/Get the image display properties.\n"},
  {"GetProperty", PyvtkImageSlice_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkImageProperty\nC++: virtual vtkImageProperty *GetProperty()\n\nSet/Get the image display properties.\n"},
  {"Update", PyvtkImageSlice_Update, METH_VARARGS,
   "V.Update()\nC++: void Update()\n\nUpdate the rendering pipeline by updating the ImageMapper\n"},
  {"GetBounds", PyvtkImageSlice_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinXBound", PyvtkImageSlice_GetMinXBound, METH_VARARGS,
   "V.GetMinXBound() -> float\nC++: double GetMinXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxXBound", PyvtkImageSlice_GetMaxXBound, METH_VARARGS,
   "V.GetMaxXBound() -> float\nC++: double GetMaxXBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinYBound", PyvtkImageSlice_GetMinYBound, METH_VARARGS,
   "V.GetMinYBound() -> float\nC++: double GetMinYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxYBound", PyvtkImageSlice_GetMaxYBound, METH_VARARGS,
   "V.GetMaxYBound() -> float\nC++: double GetMaxYBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinZBound", PyvtkImageSlice_GetMinZBound, METH_VARARGS,
   "V.GetMinZBound() -> float\nC++: double GetMinZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMaxZBound", PyvtkImageSlice_GetMaxZBound, METH_VARARGS,
   "V.GetMaxZBound() -> float\nC++: double GetMaxZBound()\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMTime", PyvtkImageSlice_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the property etc.\n"},
  {"GetRedrawMTime", PyvtkImageSlice_GetRedrawMTime, METH_VARARGS,
   "V.GetRedrawMTime() -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\nmappers, etc.\n"},
  {"GetForceTranslucent", PyvtkImageSlice_GetForceTranslucent, METH_VARARGS,
   "V.GetForceTranslucent() -> bool\nC++: virtual bool GetForceTranslucent()\n\nForce the actor to be treated as translucent.\n"},
  {"SetForceTranslucent", PyvtkImageSlice_SetForceTranslucent, METH_VARARGS,
   "V.SetForceTranslucent(bool)\nC++: virtual void SetForceTranslucent(bool _arg)\n\nForce the actor to be treated as translucent.\n"},
  {"ForceTranslucentOn", PyvtkImageSlice_ForceTranslucentOn, METH_VARARGS,
   "V.ForceTranslucentOn()\nC++: virtual void ForceTranslucentOn()\n\nForce the actor to be treated as translucent.\n"},
  {"ForceTranslucentOff", PyvtkImageSlice_ForceTranslucentOff, METH_VARARGS,
   "V.ForceTranslucentOff()\nC++: virtual void ForceTranslucentOff()\n\nForce the actor to be treated as translucent.\n"},
  {"ShallowCopy", PyvtkImageSlice_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkImageSlice. Overloads the virtual vtkProp\nmethod.\n"},
  {"GetImages", PyvtkImageSlice_GetImages, METH_VARARGS,
   "V.GetImages(vtkPropCollection)\nC++: void GetImages(vtkPropCollection *)\n\nFor some exporters and other other operations we must be able to\ncollect all the actors, volumes, and images. These methods are\nused in that process.\n"},
  {"RenderOverlay", PyvtkImageSlice_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderOpaqueGeometry", PyvtkImageSlice_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkImageSlice_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkImageSlice_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "V.HasTranslucentPolygonalGeometry() -> int\nC++: int HasTranslucentPolygonalGeometry() override;\n\nInternal method, should only be used by rendering. This method\nwill always return 0 unless ForceTranslucent is On.\n"},
  {"Render", PyvtkImageSlice_Render, METH_VARARGS,
   "V.Render(vtkRenderer)\nC++: virtual void Render(vtkRenderer *)\n\nThis causes the image and its mapper to be rendered. Note that a\nside effect of this method is that the pipeline will be updated.\n"},
  {"ReleaseGraphicsResources", PyvtkImageSlice_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease any resources held by this prop.\n"},
  {"SetStackedImagePass", PyvtkImageSlice_SetStackedImagePass, METH_VARARGS,
   "V.SetStackedImagePass(int)\nC++: void SetStackedImagePass(int pass)\n\nFor stacked image rendering, set the pass.  The first pass\nrenders just the backing polygon, the second pass renders the\nimage, and the third pass renders the depth buffer. Set to -1 to\nrender all of these in the same pass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSlice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkImageSlice", // tp_name
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
  PyvtkImageSlice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSlice_StaticNew()
{
  return vtkImageSlice::New();
}

PyObject *PyvtkImageSlice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSlice_Type, PyvtkImageSlice_Methods,
    "vtkImageSlice",
 &PyvtkImageSlice_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSlice_Type;

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

void PyVTKAddFile_vtkImageSlice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSlice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSlice", o) != 0)
  {
    Py_DECREF(o);
  }

}

