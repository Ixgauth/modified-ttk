// python wrapper for vtkImageBlend
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
#include "vtkImageBlend.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageBlend(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageBlend_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageBlend_Doc =
  "vtkImageBlend - blend images together using alpha or opacity\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageBlend takes L, LA, RGB, or RGBA images as input and blends\n"
  "them according to the alpha values and/or the opacity setting for\n"
  "each input.\n\n"
  "The spacing, origin, extent, and number of components of the output\n"
  "are the same as those for the first input.  If the input has an alpha\n"
  "component, then this component is copied unchanged into the output.\n"
  "In addition, if the first input has either one component or two\n"
  "components i.e. if it is either L (greyscale) or LA (greyscale +\n"
  "alpha) then all other inputs must also be L or LA.\n\n"
  "Different blending modes are available:\n\n"
  "Normal (default) : This is the standard blending mode used by OpenGL\n"
  "and other graphics packages.  The output always has the same number\n"
  "of components and the same extent as the first input.  The alpha\n"
  "value of the first input is not used in the blending computation,\n"
  "instead it is copied directly to the output.\n\n"
  "output <- input[0]\n"
  "foreach input i {\n"
  "  foreach pixel px {\n"
  "    r <- input[i](px)(alpha) * opacity[i]\n"
  "    f <- (255 - r)\n"
  "    output(px) <- output(px) * f + input(px) * r\n"
  "  }\n"
  "}\n\n"
  "Compound : Images are compounded together and each component is\n"
  "scaled by the sum of the alpha/opacity values. Use the\n"
  "CompoundThreshold method to set specify a threshold in compound mode.\n"
  "Pixels with opacity*alpha less or equal than this threshold are\n"
  "ignored. The alpha value of the first input, if present, is NOT\n"
  "copied to the alpha value of the output.  The output always has the\n"
  "same number of components and the same extent as the first input.\n\n"
  "output <- 0\n"
  "foreach pixel px {\n"
  "  sum <- 0\n"
  "  foreach input i {\n"
  "    r <- input[i](px)(alpha) * opacity(i)\n"
  "    sum <- sum + r\n"
  "    if r > threshold {\n"
  "      output(px) <- output(px) + input(px) * r\n"
  "    }\n"
  "  }\n"
  "  output(px) <- output(px) / sum\n"
  "}\n\n";


static PyObject *
PyvtkImageBlend_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageBlend::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageBlend::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageBlend *tempr = vtkImageBlend::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBlend *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageBlend::NewInstance());

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
PyvtkImageBlend_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->ReplaceNthInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkImageBlend::ReplaceNthInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkImageBlend::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageBlend::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageBlend_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageBlend_SetInputData_s1(self, args);
    case 1:
      return PyvtkImageBlend_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}



static PyObject *
PyvtkImageBlend_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkImageBlend::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageBlend::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageBlend_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageBlend_GetInput_s1(self, args);
    case 0:
      return PyvtkImageBlend_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkImageBlend_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputs() :
      op->vtkImageBlend::GetNumberOfInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0, temp1);
    }
    else
    {
      op->vtkImageBlend::SetOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkImageBlend::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetStencilConnection(temp0);
    }
    else
    {
      op->vtkImageBlend::SetStencilConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageBlend::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageBlend::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkImageBlend::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendModeMinValue() :
      op->vtkImageBlend::GetBlendModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendModeMaxValue() :
      op->vtkImageBlend::GetBlendModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkImageBlend::GetBlendMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToNormal();
    }
    else
    {
      op->vtkImageBlend::SetBlendModeToNormal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetBlendModeToCompound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToCompound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToCompound();
    }
    else
    {
      op->vtkImageBlend::SetBlendModeToCompound();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetBlendModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBlendModeAsString() :
      op->vtkImageBlend::GetBlendModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_SetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompoundThreshold(temp0);
    }
    else
    {
      op->vtkImageBlend::SetCompoundThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageBlend_GetCompoundThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompoundThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageBlend *op = static_cast<vtkImageBlend *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCompoundThreshold() :
      op->vtkImageBlend::GetCompoundThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageBlend_Methods[] = {
  {"IsTypeOf", PyvtkImageBlend_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageBlend_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageBlend_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageBlend\nC++: static vtkImageBlend *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageBlend_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageBlend\nC++: vtkImageBlend *NewInstance()\n\n"},
  {"ReplaceNthInputConnection", PyvtkImageBlend_ReplaceNthInputConnection, METH_VARARGS,
   "V.ReplaceNthInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {"SetInputData", PyvtkImageBlend_SetInputData, METH_VARARGS,
   "V.SetInputData(int, vtkDataObject)\nC++: void SetInputData(int num, vtkDataObject *input)\nV.SetInputData(vtkDataObject)\nC++: void SetInputData(vtkDataObject *input)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"GetInput", PyvtkImageBlend_GetInput, METH_VARARGS,
   "V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {"GetNumberOfInputs", PyvtkImageBlend_GetNumberOfInputs, METH_VARARGS,
   "V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {"SetOpacity", PyvtkImageBlend_SetOpacity, METH_VARARGS,
   "V.SetOpacity(int, float)\nC++: void SetOpacity(int idx, double opacity)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {"GetOpacity", PyvtkImageBlend_GetOpacity, METH_VARARGS,
   "V.GetOpacity(int) -> float\nC++: double GetOpacity(int idx)\n\nSet the opacity of an input image: the alpha values of the image\nare multiplied by the opacity.  The opacity of image idx=0 is\nignored.\n"},
  {"SetStencilConnection", PyvtkImageBlend_SetStencilConnection, METH_VARARGS,
   "V.SetStencilConnection(vtkAlgorithmOutput)\nC++: void SetStencilConnection(vtkAlgorithmOutput *algOutput)\n\nSet a stencil to apply when blending the data. Create a pipeline\nconnection.\n"},
  {"SetStencilData", PyvtkImageBlend_SetStencilData, METH_VARARGS,
   "V.SetStencilData(vtkImageStencilData)\nC++: void SetStencilData(vtkImageStencilData *stencil)\n\nSet a stencil to apply when blending the data.\n"},
  {"GetStencil", PyvtkImageBlend_GetStencil, METH_VARARGS,
   "V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSet a stencil to apply when blending the data.\n"},
  {"SetBlendMode", PyvtkImageBlend_SetBlendMode, METH_VARARGS,
   "V.SetBlendMode(int)\nC++: virtual void SetBlendMode(int _arg)\n\nSet the blend mode\n"},
  {"GetBlendModeMinValue", PyvtkImageBlend_GetBlendModeMinValue, METH_VARARGS,
   "V.GetBlendModeMinValue() -> int\nC++: virtual int GetBlendModeMinValue()\n\nSet the blend mode\n"},
  {"GetBlendModeMaxValue", PyvtkImageBlend_GetBlendModeMaxValue, METH_VARARGS,
   "V.GetBlendModeMaxValue() -> int\nC++: virtual int GetBlendModeMaxValue()\n\nSet the blend mode\n"},
  {"GetBlendMode", PyvtkImageBlend_GetBlendMode, METH_VARARGS,
   "V.GetBlendMode() -> int\nC++: virtual int GetBlendMode()\n\nSet the blend mode\n"},
  {"SetBlendModeToNormal", PyvtkImageBlend_SetBlendModeToNormal, METH_VARARGS,
   "V.SetBlendModeToNormal()\nC++: void SetBlendModeToNormal()\n\nSet the blend mode\n"},
  {"SetBlendModeToCompound", PyvtkImageBlend_SetBlendModeToCompound, METH_VARARGS,
   "V.SetBlendModeToCompound()\nC++: void SetBlendModeToCompound()\n\nSet the blend mode\n"},
  {"GetBlendModeAsString", PyvtkImageBlend_GetBlendModeAsString, METH_VARARGS,
   "V.GetBlendModeAsString() -> string\nC++: const char *GetBlendModeAsString(void)\n\nSet the blend mode\n"},
  {"SetCompoundThreshold", PyvtkImageBlend_SetCompoundThreshold, METH_VARARGS,
   "V.SetCompoundThreshold(float)\nC++: virtual void SetCompoundThreshold(double _arg)\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {"GetCompoundThreshold", PyvtkImageBlend_GetCompoundThreshold, METH_VARARGS,
   "V.GetCompoundThreshold() -> float\nC++: virtual double GetCompoundThreshold()\n\nSpecify a threshold in compound mode. Pixels with opacity*alpha\nless or equal the threshold are ignored.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageBlend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageBlend", // tp_name
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
  PyvtkImageBlend_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageBlend_StaticNew()
{
  return vtkImageBlend::New();
}

PyObject *PyvtkImageBlend_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageBlend_Type, PyvtkImageBlend_Methods,
    "vtkImageBlend",
 &PyvtkImageBlend_StaticNew);

  PyTypeObject *pytype = &PyvtkImageBlend_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkThreadedImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageBlend(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageBlend_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageBlend", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IMAGE_BLEND_MODE_NORMAL", 0 },
        { "VTK_IMAGE_BLEND_MODE_COMPOUND", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

