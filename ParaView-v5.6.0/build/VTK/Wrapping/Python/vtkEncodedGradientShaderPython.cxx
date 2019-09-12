// python wrapper for vtkEncodedGradientShader
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
#include "vtkEncodedGradientShader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEncodedGradientShader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEncodedGradientShader_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkEncodedGradientShader_Doc =
  "vtkEncodedGradientShader - Compute shading tables for encoded normals.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEncodedGradientShader computes shading tables for encoded normals\n"
  "that indicates the amount of diffuse and specular illumination that\n"
  "is received from all light sources at a surface location with that\n"
  "normal. For diffuse illumination this is accurate, but for specular\n"
  "illumination it is approximate for perspective projections since the\n"
  "center view direction is always used as the view direction. Since the\n"
  "shading table is dependent on the volume (for the transformation that\n"
  "must be applied to the normals to put them into world coordinates)\n"
  "there is a shading table per volume. This is necessary because\n"
  "multiple volumes can share a volume mapper.\n\n";


static PyObject *
PyvtkEncodedGradientShader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEncodedGradientShader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientShader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEncodedGradientShader *tempr = vtkEncodedGradientShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEncodedGradientShader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientShader::NewInstance());

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
PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalDiffuseIntensity(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalSpecularIntensity(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetZeroNormalSpecularIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_UpdateShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkEncodedGradientEstimator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkEncodedGradientEstimator"))
  {
    if (ap.IsBound())
    {
      op->UpdateShadingTable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEncodedGradientShader::UpdateShadingTable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRedDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGreenDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBlueDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRedSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGreenSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBlueSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMinValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMaxValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkEncodedGradientShader::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEncodedGradientShader_Methods[] = {
  {"IsTypeOf", PyvtkEncodedGradientShader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEncodedGradientShader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEncodedGradientShader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEncodedGradientShader\nC++: static vtkEncodedGradientShader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEncodedGradientShader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *NewInstance()\n\n"},
  {"SetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity, METH_VARARGS,
   "V.SetZeroNormalDiffuseIntensity(float)\nC++: virtual void SetZeroNormalDiffuseIntensity(float _arg)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalDiffuseIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue, METH_VARARGS,
   "V.GetZeroNormalDiffuseIntensityMinValue() -> float\nC++: virtual float GetZeroNormalDiffuseIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalDiffuseIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue, METH_VARARGS,
   "V.GetZeroNormalDiffuseIntensityMaxValue() -> float\nC++: virtual float GetZeroNormalDiffuseIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity, METH_VARARGS,
   "V.GetZeroNormalDiffuseIntensity() -> float\nC++: virtual float GetZeroNormalDiffuseIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"SetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity, METH_VARARGS,
   "V.SetZeroNormalSpecularIntensity(float)\nC++: virtual void SetZeroNormalSpecularIntensity(float _arg)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalSpecularIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue, METH_VARARGS,
   "V.GetZeroNormalSpecularIntensityMinValue() -> float\nC++: virtual float GetZeroNormalSpecularIntensityMinValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalSpecularIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue, METH_VARARGS,
   "V.GetZeroNormalSpecularIntensityMaxValue() -> float\nC++: virtual float GetZeroNormalSpecularIntensityMaxValue()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity, METH_VARARGS,
   "V.GetZeroNormalSpecularIntensity() -> float\nC++: virtual float GetZeroNormalSpecularIntensity()\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"UpdateShadingTable", PyvtkEncodedGradientShader_UpdateShadingTable, METH_VARARGS,
   "V.UpdateShadingTable(vtkRenderer, vtkVolume,\n    vtkEncodedGradientEstimator)\nC++: void UpdateShadingTable(vtkRenderer *ren, vtkVolume *vol,\n    vtkEncodedGradientEstimator *gradest)\n\nCause the shading table to be updated\n"},
  {"GetRedDiffuseShadingTable", PyvtkEncodedGradientShader_GetRedDiffuseShadingTable, METH_VARARGS,
   "V.GetRedDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetRedDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetGreenDiffuseShadingTable", PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable, METH_VARARGS,
   "V.GetGreenDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetGreenDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetBlueDiffuseShadingTable", PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable, METH_VARARGS,
   "V.GetBlueDiffuseShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetBlueDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetRedSpecularShadingTable", PyvtkEncodedGradientShader_GetRedSpecularShadingTable, METH_VARARGS,
   "V.GetRedSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetRedSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetGreenSpecularShadingTable", PyvtkEncodedGradientShader_GetGreenSpecularShadingTable, METH_VARARGS,
   "V.GetGreenSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetGreenSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetBlueSpecularShadingTable", PyvtkEncodedGradientShader_GetBlueSpecularShadingTable, METH_VARARGS,
   "V.GetBlueSpecularShadingTable(vtkVolume) -> (float, ...)\nC++: float *GetBlueSpecularShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"SetActiveComponent", PyvtkEncodedGradientShader_SetActiveComponent, METH_VARARGS,
   "V.SetActiveComponent(int)\nC++: virtual void SetActiveComponent(int _arg)\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {"GetActiveComponentMinValue", PyvtkEncodedGradientShader_GetActiveComponentMinValue, METH_VARARGS,
   "V.GetActiveComponentMinValue() -> int\nC++: virtual int GetActiveComponentMinValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {"GetActiveComponentMaxValue", PyvtkEncodedGradientShader_GetActiveComponentMaxValue, METH_VARARGS,
   "V.GetActiveComponentMaxValue() -> int\nC++: virtual int GetActiveComponentMaxValue()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {"GetActiveComponent", PyvtkEncodedGradientShader_GetActiveComponent, METH_VARARGS,
   "V.GetActiveComponent() -> int\nC++: virtual int GetActiveComponent()\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEncodedGradientShader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingVolumePython.vtkEncodedGradientShader", // tp_name
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
  PyvtkEncodedGradientShader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEncodedGradientShader_StaticNew()
{
  return vtkEncodedGradientShader::New();
}

PyObject *PyvtkEncodedGradientShader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEncodedGradientShader_Type, PyvtkEncodedGradientShader_Methods,
    "vtkEncodedGradientShader",
 &PyvtkEncodedGradientShader_StaticNew);

  PyTypeObject *pytype = &PyvtkEncodedGradientShader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEncodedGradientShader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEncodedGradientShader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEncodedGradientShader", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(100);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_SHADING_TABLES", o);
    Py_DECREF(o);
  }
}

