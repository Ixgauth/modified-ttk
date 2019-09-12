// python wrapper for vtkRIBProperty
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
#include "vtkRIBProperty.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRIBProperty(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRIBProperty_ClassNew(); }

#ifndef DECLARED_PyvtkProperty_ClassNew
extern "C" { PyObject *PyvtkProperty_ClassNew(); }
#define DECLARED_PyvtkProperty_ClassNew
#endif

static const char *PyvtkRIBProperty_Doc =
  "vtkRIBProperty - RIP Property\n\n"
  "Superclass: vtkProperty\n\n"
  "vtkRIBProperty is a subclass of vtkProperty that allows the user to\n"
  "specify named shaders for use with RenderMan. Both surface and\n"
  "displacement shaders can be specified. Parameters for the shaders can\n"
  "be declared and set.\n\n"
  "@sa\n"
  "vtkRIBExporter vtkRIBLight\n\n";


static PyObject *
PyvtkRIBProperty_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRIBProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRIBProperty *tempr = vtkRIBProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRIBProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBProperty::NewInstance());

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
PyvtkRIBProperty_SetSurfaceShaderUsesDefaultParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShaderUsesDefaultParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShaderUsesDefaultParameters(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShaderUsesDefaultParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShaderUsesDefaultParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShaderUsesDefaultParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceShaderUsesDefaultParameters() :
      op->vtkRIBProperty::GetSurfaceShaderUsesDefaultParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceShaderUsesDefaultParametersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceShaderUsesDefaultParametersOn();
    }
    else
    {
      op->vtkRIBProperty::SurfaceShaderUsesDefaultParametersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceShaderUsesDefaultParametersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceShaderUsesDefaultParametersOff();
    }
    else
    {
      op->vtkRIBProperty::SurfaceShaderUsesDefaultParametersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShader(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSurfaceShader() :
      op->vtkRIBProperty::GetSurfaceShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementShader(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetDisplacementShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementShader() :
      op->vtkRIBProperty::GetDisplacementShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariable(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddVariable(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDeclarations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeclarations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDeclarations() :
      op->vtkRIBProperty::GetDeclarations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddSurfaceShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSurfaceShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddSurfaceShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddSurfaceShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetDisplacementShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetDisplacementShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddDisplacementShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplacementShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddDisplacementShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddDisplacementShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParameters() :
      op->vtkRIBProperty::GetParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSurfaceShaderParameters() :
      op->vtkRIBProperty::GetSurfaceShaderParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDisplacementShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementShaderParameters() :
      op->vtkRIBProperty::GetDisplacementShaderParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRIBProperty_Methods[] = {
  {"IsTypeOf", PyvtkRIBProperty_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRIBProperty_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRIBProperty_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRIBProperty\nC++: static vtkRIBProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRIBProperty_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRIBProperty\nC++: vtkRIBProperty *NewInstance()\n\n"},
  {"SetSurfaceShaderUsesDefaultParameters", PyvtkRIBProperty_SetSurfaceShaderUsesDefaultParameters, METH_VARARGS,
   "V.SetSurfaceShaderUsesDefaultParameters(bool)\nC++: virtual void SetSurfaceShaderUsesDefaultParameters(bool _arg)\n\nIf true (default) the surface shader uses the usual shader\nparameters: Ka - Ambient amount Kd - Diffuse amount Ks - Specular\namount Roughness SpecularColor Additional surface shader\nparameters can be added with the Set/AddSurfaceShaderParameter\nmethods. If false, all surface shader parameters must be\nspecified\n"},
  {"GetSurfaceShaderUsesDefaultParameters", PyvtkRIBProperty_GetSurfaceShaderUsesDefaultParameters, METH_VARARGS,
   "V.GetSurfaceShaderUsesDefaultParameters() -> bool\nC++: virtual bool GetSurfaceShaderUsesDefaultParameters()\n\nIf true (default) the surface shader uses the usual shader\nparameters: Ka - Ambient amount Kd - Diffuse amount Ks - Specular\namount Roughness SpecularColor Additional surface shader\nparameters can be added with the Set/AddSurfaceShaderParameter\nmethods. If false, all surface shader parameters must be\nspecified\n"},
  {"SurfaceShaderUsesDefaultParametersOn", PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOn, METH_VARARGS,
   "V.SurfaceShaderUsesDefaultParametersOn()\nC++: virtual void SurfaceShaderUsesDefaultParametersOn()\n\nIf true (default) the surface shader uses the usual shader\nparameters: Ka - Ambient amount Kd - Diffuse amount Ks - Specular\namount Roughness SpecularColor Additional surface shader\nparameters can be added with the Set/AddSurfaceShaderParameter\nmethods. If false, all surface shader parameters must be\nspecified\n"},
  {"SurfaceShaderUsesDefaultParametersOff", PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOff, METH_VARARGS,
   "V.SurfaceShaderUsesDefaultParametersOff()\nC++: virtual void SurfaceShaderUsesDefaultParametersOff()\n\nIf true (default) the surface shader uses the usual shader\nparameters: Ka - Ambient amount Kd - Diffuse amount Ks - Specular\namount Roughness SpecularColor Additional surface shader\nparameters can be added with the Set/AddSurfaceShaderParameter\nmethods. If false, all surface shader parameters must be\nspecified\n"},
  {"SetSurfaceShader", PyvtkRIBProperty_SetSurfaceShader, METH_VARARGS,
   "V.SetSurfaceShader(string)\nC++: virtual void SetSurfaceShader(const char *_arg)\n\nSpecify the name of a surface shader.\n"},
  {"GetSurfaceShader", PyvtkRIBProperty_GetSurfaceShader, METH_VARARGS,
   "V.GetSurfaceShader() -> string\nC++: virtual char *GetSurfaceShader()\n\nSpecify the name of a surface shader.\n"},
  {"SetDisplacementShader", PyvtkRIBProperty_SetDisplacementShader, METH_VARARGS,
   "V.SetDisplacementShader(string)\nC++: virtual void SetDisplacementShader(const char *_arg)\n\nSpecify the name of a displacement shader.\n"},
  {"GetDisplacementShader", PyvtkRIBProperty_GetDisplacementShader, METH_VARARGS,
   "V.GetDisplacementShader() -> string\nC++: virtual char *GetDisplacementShader()\n\nSpecify the name of a displacement shader.\n"},
  {"SetVariable", PyvtkRIBProperty_SetVariable, METH_VARARGS,
   "V.SetVariable(string, string)\nC++: void SetVariable(const char *variable,\n    const char *declaration)\n\nSpecify declarations for variables..\n"},
  {"AddVariable", PyvtkRIBProperty_AddVariable, METH_VARARGS,
   "V.AddVariable(string, string)\nC++: void AddVariable(const char *variable,\n    const char *declaration)\n\nSpecify declarations for variables..\n"},
  {"GetDeclarations", PyvtkRIBProperty_GetDeclarations, METH_VARARGS,
   "V.GetDeclarations() -> string\nC++: char *GetDeclarations()\n\nGet variable declarations\n"},
  {"SetParameter", PyvtkRIBProperty_SetParameter, METH_VARARGS,
   "V.SetParameter(string, string)\nC++: void SetParameter(const char *parameter, const char *value)\n\nSpecify parameter values for variables. DEPRECATED: use\n(Set/Add)SurfaceShaderParameter instead.\n"},
  {"AddParameter", PyvtkRIBProperty_AddParameter, METH_VARARGS,
   "V.AddParameter(string, string)\nC++: void AddParameter(const char *parameter, const char *value)\n\nSpecify parameter values for variables. DEPRECATED: use\n(Set/Add)SurfaceShaderParameter instead.\n"},
  {"SetSurfaceShaderParameter", PyvtkRIBProperty_SetSurfaceShaderParameter, METH_VARARGS,
   "V.SetSurfaceShaderParameter(string, string)\nC++: void SetSurfaceShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for surface shader parameters\n"},
  {"AddSurfaceShaderParameter", PyvtkRIBProperty_AddSurfaceShaderParameter, METH_VARARGS,
   "V.AddSurfaceShaderParameter(string, string)\nC++: void AddSurfaceShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for surface shader parameters\n"},
  {"SetDisplacementShaderParameter", PyvtkRIBProperty_SetDisplacementShaderParameter, METH_VARARGS,
   "V.SetDisplacementShaderParameter(string, string)\nC++: void SetDisplacementShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for displacement shader parameters\n"},
  {"AddDisplacementShaderParameter", PyvtkRIBProperty_AddDisplacementShaderParameter, METH_VARARGS,
   "V.AddDisplacementShaderParameter(string, string)\nC++: void AddDisplacementShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for displacement shader parameters\n"},
  {"GetParameters", PyvtkRIBProperty_GetParameters, METH_VARARGS,
   "V.GetParameters() -> string\nC++: char *GetParameters()\n\nGet parameters.\n"},
  {"GetSurfaceShaderParameters", PyvtkRIBProperty_GetSurfaceShaderParameters, METH_VARARGS,
   "V.GetSurfaceShaderParameters() -> string\nC++: char *GetSurfaceShaderParameters()\n\nGet parameters.\n"},
  {"GetDisplacementShaderParameters", PyvtkRIBProperty_GetDisplacementShaderParameters, METH_VARARGS,
   "V.GetDisplacementShaderParameters() -> string\nC++: char *GetDisplacementShaderParameters()\n\nGet parameters.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRIBProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkRIBProperty", // tp_name
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
  PyvtkRIBProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRIBProperty_StaticNew()
{
  return vtkRIBProperty::New();
}

PyObject *PyvtkRIBProperty_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRIBProperty_Type, PyvtkRIBProperty_Methods,
    "vtkRIBProperty",
 &PyvtkRIBProperty_StaticNew);

  PyTypeObject *pytype = &PyvtkRIBProperty_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkProperty_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRIBProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRIBProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRIBProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

