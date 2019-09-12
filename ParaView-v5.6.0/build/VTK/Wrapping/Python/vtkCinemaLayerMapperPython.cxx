// python wrapper for vtkCinemaLayerMapper
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
#include "vtkCinemaLayerMapper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCinemaLayerMapper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCinemaLayerMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static const char *PyvtkCinemaLayerMapper_Doc =
  "vtkCinemaLayerMapper - Mapper for Cinema layers\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkCinemaLayerMapper is a mapper that can render layers from a Cinema\n"
  "database. The mapper blends layer images into the active view. If\n"
  "camera information about the camera used when generating the layers\n"
  "is provided, then it can use that to place the image in the current\n"
  "view. The mapper assumes that the model-view transforms for the\n"
  "current camera and the camera used when generating the layers are\n"
  "identical (with exception of view up orientation).\n\n";


static PyObject *
PyvtkCinemaLayerMapper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCinemaLayerMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCinemaLayerMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCinemaLayerMapper *tempr = vtkCinemaLayerMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCinemaLayerMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCinemaLayerMapper::NewInstance());

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
PyvtkCinemaLayerMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOpaqueGeometry(temp0, temp1);
    }
    else
    {
      op->vtkCinemaLayerMapper::RenderOpaqueGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkCinemaLayerMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

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
      op->vtkCinemaLayerMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkCinemaLayerMapper::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkCinemaLayerMapper::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkCinemaLayerMapper::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkCinemaLayerMapper::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCinemaLayerMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_ClearLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLayers();
    }
    else
    {
      op->vtkCinemaLayerMapper::ClearLayers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SetLayerProjectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerProjectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetLayerProjectionMatrix(temp0);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetLayerProjectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_GetLayerProjectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerProjectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetLayerProjectionMatrix() :
      op->vtkCinemaLayerMapper::GetLayerProjectionMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SetLayerCameraViewUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerCameraViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

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
      op->SetLayerCameraViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetLayerCameraViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCinemaLayerMapper_SetLayerCameraViewUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerCameraViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLayerCameraViewUp(temp0);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetLayerCameraViewUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCinemaLayerMapper_SetLayerCameraViewUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCinemaLayerMapper_SetLayerCameraViewUp_s1(self, args);
    case 1:
      return PyvtkCinemaLayerMapper_SetLayerCameraViewUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayerCameraViewUp");
  return nullptr;
}



static PyObject *
PyvtkCinemaLayerMapper_GetLayerCameraViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerCameraViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLayerCameraViewUp() :
      op->vtkCinemaLayerMapper::GetLayerCameraViewUp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_SetRenderLayersAsImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLayersAsImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLayersAsImage(temp0);
    }
    else
    {
      op->vtkCinemaLayerMapper::SetRenderLayersAsImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_GetRenderLayersAsImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderLayersAsImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderLayersAsImage() :
      op->vtkCinemaLayerMapper::GetRenderLayersAsImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_RenderLayersAsImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLayersAsImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLayersAsImageOn();
    }
    else
    {
      op->vtkCinemaLayerMapper::RenderLayersAsImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCinemaLayerMapper_RenderLayersAsImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLayersAsImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCinemaLayerMapper *op = static_cast<vtkCinemaLayerMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLayersAsImageOff();
    }
    else
    {
      op->vtkCinemaLayerMapper::RenderLayersAsImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCinemaLayerMapper_Methods[] = {
  {"IsTypeOf", PyvtkCinemaLayerMapper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCinemaLayerMapper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCinemaLayerMapper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCinemaLayerMapper\nC++: static vtkCinemaLayerMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCinemaLayerMapper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCinemaLayerMapper\nC++: vtkCinemaLayerMapper *NewInstance()\n\n"},
  {"RenderOpaqueGeometry", PyvtkCinemaLayerMapper_RenderOpaqueGeometry, METH_VARARGS,
   "V.RenderOpaqueGeometry(vtkViewport, vtkActor2D)\nC++: void RenderOpaqueGeometry(vtkViewport *, vtkActor2D *)\n    override;\n\nWe update the rendering objects in this method.\n"},
  {"RenderOverlay", PyvtkCinemaLayerMapper_RenderOverlay, METH_VARARGS,
   "V.RenderOverlay(vtkViewport, vtkActor2D)\nC++: void RenderOverlay(vtkViewport *, vtkActor2D *) override;\n\nWe do the actual rendering in this method. TODO: it's unclear if we should render on overlay, for now,\nI'm doing that.\n"},
  {"ReleaseGraphicsResources", PyvtkCinemaLayerMapper_ReleaseGraphicsResources, METH_VARARGS,
   "V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease graphics resources.\n"},
  {"SetScalarVisibility", PyvtkCinemaLayerMapper_SetScalarVisibility, METH_VARARGS,
   "V.SetScalarVisibility(bool)\nC++: virtual void SetScalarVisibility(bool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkCinemaLayerMapper_GetScalarVisibility, METH_VARARGS,
   "V.GetScalarVisibility() -> bool\nC++: virtual bool GetScalarVisibility()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOn", PyvtkCinemaLayerMapper_ScalarVisibilityOn, METH_VARARGS,
   "V.ScalarVisibilityOn()\nC++: virtual void ScalarVisibilityOn()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"ScalarVisibilityOff", PyvtkCinemaLayerMapper_ScalarVisibilityOff, METH_VARARGS,
   "V.ScalarVisibilityOff()\nC++: virtual void ScalarVisibilityOff()\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"SetLookupTable", PyvtkCinemaLayerMapper_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkCinemaLayerMapper_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetMTime", PyvtkCinemaLayerMapper_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include lookup table's mtime, if ScalarVisibility\nis ON.\n"},
  {"ClearLayers", PyvtkCinemaLayerMapper_ClearLayers, METH_VARARGS,
   "V.ClearLayers()\nC++: void ClearLayers()\n\nSet the layers to render currently. Set to an empty vector to\nclear or call ClearLayers(). All vtkImageData pointers in the\nlayers should be non-null, and have identical dimensions (origin,\nspacing, and extents).\n"},
  {"SetLayerProjectionMatrix", PyvtkCinemaLayerMapper_SetLayerProjectionMatrix, METH_VARARGS,
   "V.SetLayerProjectionMatrix(vtkMatrix4x4)\nC++: void SetLayerProjectionMatrix(vtkMatrix4x4 *projMat)\n\nSet the projection matrix used when rendering the layer. This\ncreates a deep copy of the matrix passed.\n"},
  {"GetLayerProjectionMatrix", PyvtkCinemaLayerMapper_GetLayerProjectionMatrix, METH_VARARGS,
   "V.GetLayerProjectionMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetLayerProjectionMatrix()\n\nSet the projection matrix used when rendering the layer. This\ncreates a deep copy of the matrix passed.\n"},
  {"SetLayerCameraViewUp", PyvtkCinemaLayerMapper_SetLayerCameraViewUp, METH_VARARGS,
   "V.SetLayerCameraViewUp(float, float, float)\nC++: void SetLayerCameraViewUp(double, double, double)\nV.SetLayerCameraViewUp((float, float, float))\nC++: void SetLayerCameraViewUp(double a[3])\n\n"},
  {"GetLayerCameraViewUp", PyvtkCinemaLayerMapper_GetLayerCameraViewUp, METH_VARARGS,
   "V.GetLayerCameraViewUp() -> (float, float, float)\nC++: double *GetLayerCameraViewUp()\n\n"},
  {"SetRenderLayersAsImage", PyvtkCinemaLayerMapper_SetRenderLayersAsImage, METH_VARARGS,
   "V.SetRenderLayersAsImage(bool)\nC++: virtual void SetRenderLayersAsImage(bool _arg)\n\nWhen set to true, the mapper will ignore LayerProjectionMatrix\nand LayerCameraViewUp and simply render the pixels from the layer\nimage onto the entire viewport (filling it entirely). This is\nuseful for debugging or in cases where the camera projection\nmatrices in the Cinema database are potentially incorrect. When\nusing this mode, combining with other regular 3D geometry in the\nsame scene is not recommended and will produce weird artifacts.\n"},
  {"GetRenderLayersAsImage", PyvtkCinemaLayerMapper_GetRenderLayersAsImage, METH_VARARGS,
   "V.GetRenderLayersAsImage() -> bool\nC++: virtual bool GetRenderLayersAsImage()\n\n"},
  {"RenderLayersAsImageOn", PyvtkCinemaLayerMapper_RenderLayersAsImageOn, METH_VARARGS,
   "V.RenderLayersAsImageOn()\nC++: virtual void RenderLayersAsImageOn()\n\n"},
  {"RenderLayersAsImageOff", PyvtkCinemaLayerMapper_RenderLayersAsImageOff, METH_VARARGS,
   "V.RenderLayersAsImageOff()\nC++: virtual void RenderLayersAsImageOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCinemaLayerMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVCinemaReaderPython.vtkCinemaLayerMapper", // tp_name
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
  PyvtkCinemaLayerMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCinemaLayerMapper_StaticNew()
{
  return vtkCinemaLayerMapper::New();
}

PyObject *PyvtkCinemaLayerMapper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCinemaLayerMapper_Type, PyvtkCinemaLayerMapper_Methods,
    "vtkCinemaLayerMapper",
 &PyvtkCinemaLayerMapper_StaticNew);

  PyTypeObject *pytype = &PyvtkCinemaLayerMapper_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCinemaLayerMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCinemaLayerMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCinemaLayerMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

