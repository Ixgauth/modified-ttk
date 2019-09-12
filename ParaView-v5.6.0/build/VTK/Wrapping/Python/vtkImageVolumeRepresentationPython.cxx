// python wrapper for vtkImageVolumeRepresentation
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
#include "vtkImageVolumeRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageVolumeRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageVolumeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkPVDataRepresentation_ClassNew
extern "C" { PyObject *PyvtkPVDataRepresentation_ClassNew(); }
#define DECLARED_PyvtkPVDataRepresentation_ClassNew
#endif

static const char *PyvtkImageVolumeRepresentation_Doc =
  "vtkImageVolumeRepresentation - representation for showing image\ndatasets as a volume.\n\n"
  "Superclass: vtkPVDataRepresentation\n\n"
  "vtkImageVolumeRepresentation is a representation for volume rendering\n"
  "vtkImageData. Unlike other data-representations used by ParaView,\n"
  "this representation does not support delivery to client (or render\n"
  "server) nodes. In those configurations, it merely delivers a outline\n"
  "for the image to the client and render-server and those nodes simply\n"
  "render the outline.\n\n";


static PyObject *
PyvtkImageVolumeRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageVolumeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageVolumeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageVolumeRepresentation *tempr = vtkImageVolumeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageVolumeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageVolumeRepresentation::NewInstance());

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
PyvtkImageVolumeRepresentation_ProcessViewRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessViewRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessViewRequest(temp0, temp1, temp2) :
      op->vtkImageVolumeRepresentation::ProcessViewRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkModified();
    }
    else
    {
      op->vtkImageVolumeRepresentation::MarkModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

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
      op->SetOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetPickable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPickable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPickable(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetPickable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

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
      op->vtkImageVolumeRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetScalarOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacity(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetScalarOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetScalarOpacityUnitDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityUnitDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityUnitDistance(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetScalarOpacityUnitDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetShade(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShade");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShade(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetShade(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetMultiComponentsMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiComponentsMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiComponentsMapping(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetMultiComponentsMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetIsosurfaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsosurfaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIsosurfaceValue(temp0, temp1);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetIsosurfaceValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetNumberOfIsosurfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIsosurfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIsosurfaces(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetNumberOfIsosurfaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderMode(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_SetShowIsosurfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowIsosurfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowIsosurfaces(temp0);
    }
    else
    {
      op->vtkImageVolumeRepresentation::SetShowIsosurfaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageVolumeRepresentation_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageVolumeRepresentation *op = static_cast<vtkImageVolumeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVLODVolume *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkImageVolumeRepresentation::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageVolumeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImageVolumeRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageVolumeRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageVolumeRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageVolumeRepresentation\nC++: static vtkImageVolumeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageVolumeRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageVolumeRepresentation\nC++: vtkImageVolumeRepresentation *NewInstance()\n\n"},
  {"ProcessViewRequest", PyvtkImageVolumeRepresentation_ProcessViewRequest, METH_VARARGS,
   "V.ProcessViewRequest(vtkInformationRequestKey, vtkInformation,\n    vtkInformation) -> int\nC++: int ProcessViewRequest(\n    vtkInformationRequestKey *request_type,\n    vtkInformation *inInfo, vtkInformation *outInfo) override;\n\nvtkAlgorithm::ProcessRequest() equivalent for rendering passes.\nThis is typically called by the vtkView to request meta-data from\nthe representations or ask them to perform certain tasks e.g.\nPrepareForRendering.\n"},
  {"MarkModified", PyvtkImageVolumeRepresentation_MarkModified, METH_VARARGS,
   "V.MarkModified()\nC++: void MarkModified() override;\n\nThis needs to be called on all instances of\nvtkGeometryRepresentation when the input is modified. This is\nessential since the geometry filter does not have any real-input\non the client side which messes with the Update requests.\n"},
  {"SetVisibility", PyvtkImageVolumeRepresentation_SetVisibility, METH_VARARGS,
   "V.SetVisibility(bool)\nC++: void SetVisibility(bool val) override;\n\nGet/Set the visibility for this representation. When the\nvisibility of representation of false, all view passes are\nignored.\n"},
  {"SetOrientation", PyvtkImageVolumeRepresentation_SetOrientation, METH_VARARGS,
   "V.SetOrientation(float, float, float)\nC++: void SetOrientation(double, double, double)\n\n"},
  {"SetOrigin", PyvtkImageVolumeRepresentation_SetOrigin, METH_VARARGS,
   "V.SetOrigin(float, float, float)\nC++: void SetOrigin(double, double, double)\n\n"},
  {"SetPickable", PyvtkImageVolumeRepresentation_SetPickable, METH_VARARGS,
   "V.SetPickable(int)\nC++: void SetPickable(int val)\n\n"},
  {"SetPosition", PyvtkImageVolumeRepresentation_SetPosition, METH_VARARGS,
   "V.SetPosition(float, float, float)\nC++: void SetPosition(double, double, double)\n\n"},
  {"SetScale", PyvtkImageVolumeRepresentation_SetScale, METH_VARARGS,
   "V.SetScale(float, float, float)\nC++: void SetScale(double, double, double)\n\n"},
  {"SetInterpolationType", PyvtkImageVolumeRepresentation_SetInterpolationType, METH_VARARGS,
   "V.SetInterpolationType(int)\nC++: void SetInterpolationType(int val)\n\n"},
  {"SetColor", PyvtkImageVolumeRepresentation_SetColor, METH_VARARGS,
   "V.SetColor(vtkColorTransferFunction)\nC++: void SetColor(vtkColorTransferFunction *lut)\n\n"},
  {"SetScalarOpacity", PyvtkImageVolumeRepresentation_SetScalarOpacity, METH_VARARGS,
   "V.SetScalarOpacity(vtkPiecewiseFunction)\nC++: void SetScalarOpacity(vtkPiecewiseFunction *pwf)\n\n"},
  {"SetScalarOpacityUnitDistance", PyvtkImageVolumeRepresentation_SetScalarOpacityUnitDistance, METH_VARARGS,
   "V.SetScalarOpacityUnitDistance(float)\nC++: void SetScalarOpacityUnitDistance(double val)\n\n"},
  {"SetAmbient", PyvtkImageVolumeRepresentation_SetAmbient, METH_VARARGS,
   "V.SetAmbient(float)\nC++: void SetAmbient(double)\n\n"},
  {"SetDiffuse", PyvtkImageVolumeRepresentation_SetDiffuse, METH_VARARGS,
   "V.SetDiffuse(float)\nC++: void SetDiffuse(double)\n\n"},
  {"SetSpecular", PyvtkImageVolumeRepresentation_SetSpecular, METH_VARARGS,
   "V.SetSpecular(float)\nC++: void SetSpecular(double)\n\n"},
  {"SetSpecularPower", PyvtkImageVolumeRepresentation_SetSpecularPower, METH_VARARGS,
   "V.SetSpecularPower(float)\nC++: void SetSpecularPower(double)\n\n"},
  {"SetShade", PyvtkImageVolumeRepresentation_SetShade, METH_VARARGS,
   "V.SetShade(bool)\nC++: void SetShade(bool)\n\n"},
  {"SetMapScalars", PyvtkImageVolumeRepresentation_SetMapScalars, METH_VARARGS,
   "V.SetMapScalars(bool)\nC++: void SetMapScalars(bool)\n\n"},
  {"SetMultiComponentsMapping", PyvtkImageVolumeRepresentation_SetMultiComponentsMapping, METH_VARARGS,
   "V.SetMultiComponentsMapping(bool)\nC++: void SetMultiComponentsMapping(bool)\n\n"},
  {"SetIsosurfaceValue", PyvtkImageVolumeRepresentation_SetIsosurfaceValue, METH_VARARGS,
   "V.SetIsosurfaceValue(int, float)\nC++: void SetIsosurfaceValue(int i, double value)\n\nMethods to set isosurface values.\n"},
  {"SetNumberOfIsosurfaces", PyvtkImageVolumeRepresentation_SetNumberOfIsosurfaces, METH_VARARGS,
   "V.SetNumberOfIsosurfaces(int)\nC++: void SetNumberOfIsosurfaces(int number)\n\nMethods to set isosurface values.\n"},
  {"SetRequestedRenderMode", PyvtkImageVolumeRepresentation_SetRequestedRenderMode, METH_VARARGS,
   "V.SetRequestedRenderMode(int)\nC++: void SetRequestedRenderMode(int)\n\n"},
  {"SetShowIsosurfaces", PyvtkImageVolumeRepresentation_SetShowIsosurfaces, METH_VARARGS,
   "V.SetShowIsosurfaces(int)\nC++: void SetShowIsosurfaces(int)\n\n"},
  {"GetActor", PyvtkImageVolumeRepresentation_GetActor, METH_VARARGS,
   "V.GetActor() -> vtkPVLODVolume\nC++: vtkPVLODVolume *GetActor()\n\nProvides access to the actor used by this representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageVolumeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkImageVolumeRepresentation", // tp_name
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
  PyvtkImageVolumeRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageVolumeRepresentation_StaticNew()
{
  return vtkImageVolumeRepresentation::New();
}

PyObject *PyvtkImageVolumeRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageVolumeRepresentation_Type, PyvtkImageVolumeRepresentation_Methods,
    "vtkImageVolumeRepresentation",
 &PyvtkImageVolumeRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkImageVolumeRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVDataRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageVolumeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageVolumeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageVolumeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

