// python wrapper for vtkLineIntegralConvolution2D
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
#include "vtkPixelExtent.h"
#include "vtkLineIntegralConvolution2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLineIntegralConvolution2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLineIntegralConvolution2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLineIntegralConvolution2D_Doc =
  "vtkLineIntegralConvolution2D - GPU-based implementation of Line\n Integral Convolution (LIC)\n\n"
  "Superclass: vtkObject\n\n"
  "This class resorts to GLSL to implement GPU-based Line Integral\n"
  "Convolution\n"
  " (LIC) for visualizing a 2D vector field that may be obtained by\n"
  "projecting\n"
  " an original 3D vector field onto a surface (such that the resulting\n"
  "2D\n"
  " vector at each grid point on the surface is tangential to the local\n"
  "normal,\n"
  " as done in vtkSurfaceLICPainter).\n\n\n"
  " As an image-based technique, 2D LIC works by (1) integrating a\n"
  "bidirectional\n"
  " streamline from the center of each pixel (of the LIC output image),\n"
  "(2)\n"
  " locating the pixels along / hit by this streamline as the correlated\n"
  "pixels\n"
  " of the starting pixel (seed point / pixel), (3) indexing a (usually\n"
  "white)\n"
  " noise texture (another input to LIC, in addition to the 2D vector\n"
  "field,\n"
  " usually with the same size as that of the 2D vetor field) to\n"
  "determine the\n"
  " values (colors) of these pixels (the starting and the correlated\n"
  "pixels),\n"
  " typically through bi-linear interpolation, and (4) performing\n"
  "convolution\n"
  " (weighted averaging) on these values, by adopting a low-pass filter\n"
  "(such\n"
  " as box, ramp, and Hanning kernels), to obtain the result value\n"
  "(color) that\n"
  " is then assigned to the seed pixel.\n\n\n"
  " The GLSL-based GPU implementation herein maps the aforementioned\n"
  "pipeline to\n"
  " fragment shaders and a box kernel is employed. Both the white noise\n"
  "and the\n"
  " vector field are provided to the GPU as texture objects (supported\n"
  "by the\n"
  " multi-texturing capability). In addition, there are four texture\n"
  "objects\n"
  " (color buffers) allocated to constitute two pairs that work in a\n"
  "ping-pong\n"
  " fashion, with one as the read buffers and the other as the write /\n"
  "render\n"
  " targets. Maintained by a frame buffer object\n"
  "(GL_EXT_framebuffer_object),\n"
  " each pair employs one buffer to store the current (dynamically\n"
  "updated)\n"
  " position (by means of the texture coordinate that keeps being warped\n"
  "by the\n"
  " underlying vector) of the (virtual) particle initially released from\n"
  "each\n"
  " fragment while using the bother buffer to store the current\n"
  "(dynamically\n"
  " updated too) accumulated texture value that each seed fragment\n"
  "(before the\n"
  " 'mesh' is warped) collects. Given NumberOfSteps integration steps in\n"
  "each\n"
  " direction, there are a total of (2 * NumberOfSteps + 1) fragments\n"
  "(including\n"
  " the seed fragment) are convolved and each contributes 1 / (2 *\n"
  "NumberOfSteps\n"
  " + 1) of the associated texture value to fulfill the box filter.\n\n\n"
  " One pass of LIC (basic LIC) tends to produce low-contrast / blurred\n"
  "images and\n"
  " vtkLineIntegralConvolution2D provides an option for creating\n"
  "enhanced LIC\n"
  " images. Enhanced LIC improves image quality by increasing\n"
  "inter-streamline\n"
  " contrast while suppressing artifacts. It performs two passes of LIC,\n"
  "with a\n"
  " 3x3 Laplacian high-pass filter in between that processes the output\n"
  "of pass\n"
  "#1 LIC and forwards the result as the input 'noise' to pass #2 LIC.\n\n\n"
  " vtkLineIntegralConvolution2D applies masking to zero-vector\n"
  "fragments so\n"
  " that un-filtered white noise areas are made totally transparent by\n"
  "class\n"
  " vtkSurfaceLICPainter to show the underlying geometry surface.\n\n\n"
  " The convolution process tends to decrease both contrast and dynamic\n"
  "range,\n"
  " sometimes leading to dull dark images. In order to counteract this,\n"
  "optional\n"
  " contrast ehnancement stages have been added. These increase the\n"
  "dynamic range and\n"
  " contrast and sharpen streaking patterns that emerge from the LIC\n"
  "process.\n\n\n"
  " Under some circumstances, typically depending on the contrast and\n"
  "dynamic\n"
  " range and graininess of the noise texture, jagged or pixelated\n"
  "patterns emerge\n"
  " in the LIC. These can be reduced by enabling the optional\n"
  "anti-aliasing pass.\n\n\n"
  " The internal pipeline is as follows, with optional stages denoted by\n"
  "()\n"
  " nested optional stages depend on their parent stage.\n\n\n"
  "  noise texture\n"
  "          |\n"
  "          [ LIC ((CE) HPF LIC) (AA) (CE) ]\n"
  "          |                              |\n"
  " vector field                       LIC'd image \n"
  " where LIC is the LIC stage, HPF is the high-pass filter stage, CE is\n"
  "the\n"
  " contrast ehnacement stage, and AA is the antialias stage.\n\n"
  "@sa\n"
  " vtkImageDataLIC2D vtkStructuredGridLIC2D\n\n";


static PyObject *
PyvtkLineIntegralConvolution2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLineIntegralConvolution2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLineIntegralConvolution2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLineIntegralConvolution2D *tempr = vtkLineIntegralConvolution2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLineIntegralConvolution2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLineIntegralConvolution2D::NewInstance());

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
PyvtkLineIntegralConvolution2D_IsSupported(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkLineIntegralConvolution2D::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkOpenGLRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkLineIntegralConvolution2D::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhancedLIC(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetEnhancedLIC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhancedLICMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLICMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLICMinValue() :
      op->vtkLineIntegralConvolution2D::GetEnhancedLICMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhancedLICMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLICMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLICMaxValue() :
      op->vtkLineIntegralConvolution2D::GetEnhancedLICMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLIC() :
      op->vtkLineIntegralConvolution2D::GetEnhancedLIC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOn();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::EnhancedLICOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOff();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::EnhancedLICOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhanceContrast(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetEnhanceContrast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhanceContrastMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrastMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrastMinValue() :
      op->vtkLineIntegralConvolution2D::GetEnhanceContrastMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhanceContrastMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrastMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrastMaxValue() :
      op->vtkLineIntegralConvolution2D::GetEnhanceContrastMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrast() :
      op->vtkLineIntegralConvolution2D::GetEnhanceContrast());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhanceContrastOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhanceContrastOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhanceContrastOn();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::EnhanceContrastOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_EnhanceContrastOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhanceContrastOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhanceContrastOff();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::EnhanceContrastOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetLowContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetLowContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowContrastEnhancementFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowContrastEnhancementFactorMinValue() :
      op->vtkLineIntegralConvolution2D::GetLowContrastEnhancementFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowContrastEnhancementFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowContrastEnhancementFactorMaxValue() :
      op->vtkLineIntegralConvolution2D::GetLowContrastEnhancementFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowContrastEnhancementFactor() :
      op->vtkLineIntegralConvolution2D::GetLowContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetHighContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetHighContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighContrastEnhancementFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighContrastEnhancementFactorMinValue() :
      op->vtkLineIntegralConvolution2D::GetHighContrastEnhancementFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighContrastEnhancementFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighContrastEnhancementFactorMaxValue() :
      op->vtkLineIntegralConvolution2D::GetHighContrastEnhancementFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighContrastEnhancementFactor() :
      op->vtkLineIntegralConvolution2D::GetHighContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAntiAlias(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetAntiAlias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetAntiAliasMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAliasMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAntiAliasMinValue() :
      op->vtkLineIntegralConvolution2D::GetAntiAliasMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetAntiAliasMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAliasMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAntiAliasMaxValue() :
      op->vtkLineIntegralConvolution2D::GetAntiAliasMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAntiAlias() :
      op->vtkLineIntegralConvolution2D::GetAntiAlias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_AntiAliasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOn();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::AntiAliasOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_AntiAliasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOff();
    }
    else
    {
      op->vtkLineIntegralConvolution2D::AntiAliasOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSteps(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNumberOfStepsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStepsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStepsMinValue() :
      op->vtkLineIntegralConvolution2D::GetNumberOfStepsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNumberOfStepsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStepsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStepsMaxValue() :
      op->vtkLineIntegralConvolution2D::GetNumberOfStepsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSteps() :
      op->vtkLineIntegralConvolution2D::GetNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepSize(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetStepSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSizeMinValue() :
      op->vtkLineIntegralConvolution2D::GetStepSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetStepSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSizeMaxValue() :
      op->vtkLineIntegralConvolution2D::GetStepSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkLineIntegralConvolution2D::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetComponentIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetComponentIds(temp0, temp1);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetComponentIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_SetComponentIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetComponentIds(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetComponentIds(temp0);
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
PyvtkLineIntegralConvolution2D_SetComponentIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLineIntegralConvolution2D_SetComponentIds_s1(self, args);
    case 1:
      return PyvtkLineIntegralConvolution2D_SetComponentIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentIds");
  return nullptr;
}



static PyObject *
PyvtkLineIntegralConvolution2D_GetComponentIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComponentIds() :
      op->vtkLineIntegralConvolution2D::GetComponentIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNoiseValue(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetMaxNoiseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaxNoiseValueMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValueMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValueMinValue() :
      op->vtkLineIntegralConvolution2D::GetMaxNoiseValueMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaxNoiseValueMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValueMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValueMaxValue() :
      op->vtkLineIntegralConvolution2D::GetMaxNoiseValueMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValue() :
      op->vtkLineIntegralConvolution2D::GetMaxNoiseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetTransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformVectors(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetTransformVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetTransformVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransformVectors() :
      op->vtkLineIntegralConvolution2D::GetTransformVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeVectors(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetNormalizeVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeVectors() :
      op->vtkLineIntegralConvolution2D::GetNormalizeVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskThreshold(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::SetMaskThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaskThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskThresholdMinValue() :
      op->vtkLineIntegralConvolution2D::GetMaskThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaskThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskThresholdMaxValue() :
      op->vtkLineIntegralConvolution2D::GetMaskThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_GetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskThreshold() :
      op->vtkLineIntegralConvolution2D::GetMaskThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_Execute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  vtkTextureObject *temp0 = nullptr;
  vtkTextureObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextureObject") &&
      ap.GetVTKObject(temp1, "vtkTextureObject"))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->Execute(temp0, temp1) :
      op->vtkLineIntegralConvolution2D::Execute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_Execute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  vtkTextureObject *temp1 = nullptr;
  vtkTextureObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      ap.GetVTKObject(temp2, "vtkTextureObject"))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->Execute(temp0, temp1, temp2) :
      op->vtkLineIntegralConvolution2D::Execute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLineIntegralConvolution2D_Execute(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLineIntegralConvolution2D_Execute_s1(self, args);
    case 3:
      return PyvtkLineIntegralConvolution2D_Execute_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Execute");
  return nullptr;
}



static PyObject *
PyvtkLineIntegralConvolution2D_SetVectorTexParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetVectorTexParameters");

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    vtkLineIntegralConvolution2D::SetVectorTexParameters(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_SetNoiseTexParameters(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNoiseTexParameters");

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    vtkLineIntegralConvolution2D::SetNoiseTexParameters(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLineIntegralConvolution2D_WriteTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineIntegralConvolution2D *op = static_cast<vtkLineIntegralConvolution2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteTimerLog(temp0);
    }
    else
    {
      op->vtkLineIntegralConvolution2D::WriteTimerLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLineIntegralConvolution2D_Methods[] = {
  {"IsTypeOf", PyvtkLineIntegralConvolution2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLineIntegralConvolution2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLineIntegralConvolution2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLineIntegralConvolution2D\nC++: static vtkLineIntegralConvolution2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLineIntegralConvolution2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLineIntegralConvolution2D\nC++: vtkLineIntegralConvolution2D *NewInstance()\n\n"},
  {"IsSupported", PyvtkLineIntegralConvolution2D_IsSupported, METH_VARARGS,
   "V.IsSupported(vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {"SetContext", PyvtkLineIntegralConvolution2D_SetContext, METH_VARARGS,
   "V.SetContext(vtkOpenGLRenderWindow)\nC++: void SetContext(vtkOpenGLRenderWindow *context)\n\nSet/Get the rendering context. A reference is not explicitly\nheld, thus reference to the context must be held externally.\n"},
  {"GetContext", PyvtkLineIntegralConvolution2D_GetContext, METH_VARARGS,
   "V.GetContext() -> vtkOpenGLRenderWindow\nC++: vtkOpenGLRenderWindow *GetContext()\n\nSet/Get the rendering context. A reference is not explicitly\nheld, thus reference to the context must be held externally.\n"},
  {"SetEnhancedLIC", PyvtkLineIntegralConvolution2D_SetEnhancedLIC, METH_VARARGS,
   "V.SetEnhancedLIC(int)\nC++: virtual void SetEnhancedLIC(int _arg)\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"GetEnhancedLICMinValue", PyvtkLineIntegralConvolution2D_GetEnhancedLICMinValue, METH_VARARGS,
   "V.GetEnhancedLICMinValue() -> int\nC++: virtual int GetEnhancedLICMinValue()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"GetEnhancedLICMaxValue", PyvtkLineIntegralConvolution2D_GetEnhancedLICMaxValue, METH_VARARGS,
   "V.GetEnhancedLICMaxValue() -> int\nC++: virtual int GetEnhancedLICMaxValue()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"GetEnhancedLIC", PyvtkLineIntegralConvolution2D_GetEnhancedLIC, METH_VARARGS,
   "V.GetEnhancedLIC() -> int\nC++: virtual int GetEnhancedLIC()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"EnhancedLICOn", PyvtkLineIntegralConvolution2D_EnhancedLICOn, METH_VARARGS,
   "V.EnhancedLICOn()\nC++: virtual void EnhancedLICOn()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"EnhancedLICOff", PyvtkLineIntegralConvolution2D_EnhancedLICOff, METH_VARARGS,
   "V.EnhancedLICOff()\nC++: virtual void EnhancedLICOff()\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"SetEnhanceContrast", PyvtkLineIntegralConvolution2D_SetEnhanceContrast, METH_VARARGS,
   "V.SetEnhanceContrast(int)\nC++: virtual void SetEnhanceContrast(int _arg)\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"GetEnhanceContrastMinValue", PyvtkLineIntegralConvolution2D_GetEnhanceContrastMinValue, METH_VARARGS,
   "V.GetEnhanceContrastMinValue() -> int\nC++: virtual int GetEnhanceContrastMinValue()\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"GetEnhanceContrastMaxValue", PyvtkLineIntegralConvolution2D_GetEnhanceContrastMaxValue, METH_VARARGS,
   "V.GetEnhanceContrastMaxValue() -> int\nC++: virtual int GetEnhanceContrastMaxValue()\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"GetEnhanceContrast", PyvtkLineIntegralConvolution2D_GetEnhanceContrast, METH_VARARGS,
   "V.GetEnhanceContrast() -> int\nC++: virtual int GetEnhanceContrast()\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"EnhanceContrastOn", PyvtkLineIntegralConvolution2D_EnhanceContrastOn, METH_VARARGS,
   "V.EnhanceContrastOn()\nC++: virtual void EnhanceContrastOn()\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"EnhanceContrastOff", PyvtkLineIntegralConvolution2D_EnhanceContrastOff, METH_VARARGS,
   "V.EnhanceContrastOff()\nC++: virtual void EnhanceContrastOff()\n\nEnable/Disable contrast and dynamic range correction stages.\nStage 1 is applied on the input to the high-pass filter when the\nhigh-pass filter is enabled and skipped otherwise. Stage 2, when\nenabled is the final stage in the internal pipeline. Both stages\nare implemented by a histogram stretching of the gray scale\ncolors in the LIC'd image as follows:\n\n* c = (c-m)/(M-m)\n\n* where, c is the fragment color, m is the color value to map to\n  0, M is the\n* color value to map to 1. The default values of m and M are the\n  min and max\n* over all fragments.\n\n* This increase the dynamic range and contrast in the LIC'd\n  image, both of which\n* are naturally attenuated by the LI convolution process.\n\n* ENHANCE_CONTRAST_OFF  -- don't enhance contrast\n* ENHANCE_CONTRAST_ON   -- enhance high-pass input and final\n  stage output\n\n* This feature is disabled by default.\n"},
  {"SetLowContrastEnhancementFactor", PyvtkLineIntegralConvolution2D_SetLowContrastEnhancementFactor, METH_VARARGS,
   "V.SetLowContrastEnhancementFactor(float)\nC++: virtual void SetLowContrastEnhancementFactor(double _arg)\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetLowContrastEnhancementFactorMinValue", PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactorMinValue, METH_VARARGS,
   "V.GetLowContrastEnhancementFactorMinValue() -> float\nC++: virtual double GetLowContrastEnhancementFactorMinValue()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetLowContrastEnhancementFactorMaxValue", PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactorMaxValue, METH_VARARGS,
   "V.GetLowContrastEnhancementFactorMaxValue() -> float\nC++: virtual double GetLowContrastEnhancementFactorMaxValue()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetLowContrastEnhancementFactor", PyvtkLineIntegralConvolution2D_GetLowContrastEnhancementFactor, METH_VARARGS,
   "V.GetLowContrastEnhancementFactor() -> float\nC++: virtual double GetLowContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"SetHighContrastEnhancementFactor", PyvtkLineIntegralConvolution2D_SetHighContrastEnhancementFactor, METH_VARARGS,
   "V.SetHighContrastEnhancementFactor(float)\nC++: virtual void SetHighContrastEnhancementFactor(double _arg)\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetHighContrastEnhancementFactorMinValue", PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactorMinValue, METH_VARARGS,
   "V.GetHighContrastEnhancementFactorMinValue() -> float\nC++: virtual double GetHighContrastEnhancementFactorMinValue()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetHighContrastEnhancementFactorMaxValue", PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactorMaxValue, METH_VARARGS,
   "V.GetHighContrastEnhancementFactorMaxValue() -> float\nC++: virtual double GetHighContrastEnhancementFactorMaxValue()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"GetHighContrastEnhancementFactor", PyvtkLineIntegralConvolution2D_GetHighContrastEnhancementFactor, METH_VARARGS,
   "V.GetHighContrastEnhancementFactor() -> float\nC++: virtual double GetHighContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement.\nValues are provided indicating the fraction of the range to\nadjust m and M by during contrast enahncement histogram\nstretching.  M and m are the intensity/lightness values that map\nto 1 and 0. (see EnhanceContrast for an explanation of the\nmapping procedure). m and M are computed using the factors as\nfollows:\n\n* m = min(C) - mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), where C is all of the colors in the\n  image. Adjusting\n* mFactor and MFactor above zero provide a means to control the\n  saturation of\n* normalization. These settings only affect the final\n  normalization, the\n* normalization that occurs on the input to the high-pass filter\n  always uses\n* the min and max.\n"},
  {"SetAntiAlias", PyvtkLineIntegralConvolution2D_SetAntiAlias, METH_VARARGS,
   "V.SetAntiAlias(int)\nC++: virtual void SetAntiAlias(int _arg)\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"GetAntiAliasMinValue", PyvtkLineIntegralConvolution2D_GetAntiAliasMinValue, METH_VARARGS,
   "V.GetAntiAliasMinValue() -> int\nC++: virtual int GetAntiAliasMinValue()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"GetAntiAliasMaxValue", PyvtkLineIntegralConvolution2D_GetAntiAliasMaxValue, METH_VARARGS,
   "V.GetAntiAliasMaxValue() -> int\nC++: virtual int GetAntiAliasMaxValue()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"GetAntiAlias", PyvtkLineIntegralConvolution2D_GetAntiAlias, METH_VARARGS,
   "V.GetAntiAlias() -> int\nC++: virtual int GetAntiAlias()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"AntiAliasOn", PyvtkLineIntegralConvolution2D_AntiAliasOn, METH_VARARGS,
   "V.AntiAliasOn()\nC++: virtual void AntiAliasOn()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"AntiAliasOff", PyvtkLineIntegralConvolution2D_AntiAliasOff, METH_VARARGS,
   "V.AntiAliasOff()\nC++: virtual void AntiAliasOff()\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, one is typically sufficient.\n"},
  {"SetNumberOfSteps", PyvtkLineIntegralConvolution2D_SetNumberOfSteps, METH_VARARGS,
   "V.SetNumberOfSteps(int)\nC++: virtual void SetNumberOfSteps(int _arg)\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {"GetNumberOfStepsMinValue", PyvtkLineIntegralConvolution2D_GetNumberOfStepsMinValue, METH_VARARGS,
   "V.GetNumberOfStepsMinValue() -> int\nC++: virtual int GetNumberOfStepsMinValue()\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {"GetNumberOfStepsMaxValue", PyvtkLineIntegralConvolution2D_GetNumberOfStepsMaxValue, METH_VARARGS,
   "V.GetNumberOfStepsMaxValue() -> int\nC++: virtual int GetNumberOfStepsMaxValue()\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {"GetNumberOfSteps", PyvtkLineIntegralConvolution2D_GetNumberOfSteps, METH_VARARGS,
   "V.GetNumberOfSteps() -> int\nC++: virtual int GetNumberOfSteps()\n\nNumber of streamline integration steps (initial value is 1). In\nterm of visual quality, the greater (within some range) the\nbetter.\n"},
  {"SetStepSize", PyvtkLineIntegralConvolution2D_SetStepSize, METH_VARARGS,
   "V.SetStepSize(float)\nC++: virtual void SetStepSize(double _arg)\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, FLOAT_MAX]. In term of visual quality, the smaller the\nbetter. The type for the interface is double as VTK interface is,\nbut GPU only supports float. Thus it will be converted to float\nin the execution of the algorithm.\n"},
  {"GetStepSizeMinValue", PyvtkLineIntegralConvolution2D_GetStepSizeMinValue, METH_VARARGS,
   "V.GetStepSizeMinValue() -> float\nC++: virtual double GetStepSizeMinValue()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, FLOAT_MAX]. In term of visual quality, the smaller the\nbetter. The type for the interface is double as VTK interface is,\nbut GPU only supports float. Thus it will be converted to float\nin the execution of the algorithm.\n"},
  {"GetStepSizeMaxValue", PyvtkLineIntegralConvolution2D_GetStepSizeMaxValue, METH_VARARGS,
   "V.GetStepSizeMaxValue() -> float\nC++: virtual double GetStepSizeMaxValue()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, FLOAT_MAX]. In term of visual quality, the smaller the\nbetter. The type for the interface is double as VTK interface is,\nbut GPU only supports float. Thus it will be converted to float\nin the execution of the algorithm.\n"},
  {"GetStepSize", PyvtkLineIntegralConvolution2D_GetStepSize, METH_VARARGS,
   "V.GetStepSize() -> float\nC++: virtual double GetStepSize()\n\nGet/Set the streamline integration step size (0.01 by default).\nThis is the length of each step in normalized image space i.e. in\nrange [0, FLOAT_MAX]. In term of visual quality, the smaller the\nbetter. The type for the interface is double as VTK interface is,\nbut GPU only supports float. Thus it will be converted to float\nin the execution of the algorithm.\n"},
  {"SetComponentIds", PyvtkLineIntegralConvolution2D_SetComponentIds, METH_VARARGS,
   "V.SetComponentIds(int, int)\nC++: void SetComponentIds(int c0, int c1)\nV.SetComponentIds([int, int])\nC++: void SetComponentIds(int c[2])\n\nIf VectorField has >= 3 components, we must choose which 2\ncomponents form the (X, Y) components for the vector field. Must\nbe in the range [0, 3].\n"},
  {"GetComponentIds", PyvtkLineIntegralConvolution2D_GetComponentIds, METH_VARARGS,
   "V.GetComponentIds() -> (int, int)\nC++: int *GetComponentIds()\n\n"},
  {"SetMaxNoiseValue", PyvtkLineIntegralConvolution2D_SetMaxNoiseValue, METH_VARARGS,
   "V.SetMaxNoiseValue(float)\nC++: virtual void SetMaxNoiseValue(double _arg)\n\nSet the max noise value for use during LIC integration\nnormalization. The integration normalization factor is the max\nnoise value times the number of steps taken. The default value is\n1.\n"},
  {"GetMaxNoiseValueMinValue", PyvtkLineIntegralConvolution2D_GetMaxNoiseValueMinValue, METH_VARARGS,
   "V.GetMaxNoiseValueMinValue() -> float\nC++: virtual double GetMaxNoiseValueMinValue()\n\nSet the max noise value for use during LIC integration\nnormalization. The integration normalization factor is the max\nnoise value times the number of steps taken. The default value is\n1.\n"},
  {"GetMaxNoiseValueMaxValue", PyvtkLineIntegralConvolution2D_GetMaxNoiseValueMaxValue, METH_VARARGS,
   "V.GetMaxNoiseValueMaxValue() -> float\nC++: virtual double GetMaxNoiseValueMaxValue()\n\nSet the max noise value for use during LIC integration\nnormalization. The integration normalization factor is the max\nnoise value times the number of steps taken. The default value is\n1.\n"},
  {"GetMaxNoiseValue", PyvtkLineIntegralConvolution2D_GetMaxNoiseValue, METH_VARARGS,
   "V.GetMaxNoiseValue() -> float\nC++: virtual double GetMaxNoiseValue()\n\nSet the max noise value for use during LIC integration\nnormalization. The integration normalization factor is the max\nnoise value times the number of steps taken. The default value is\n1.\n"},
  {"SetTransformVectors", PyvtkLineIntegralConvolution2D_SetTransformVectors, METH_VARARGS,
   "V.SetTransformVectors(int)\nC++: void SetTransformVectors(int val)\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable transformation if the vectors are\nalready transformed.\n"},
  {"GetTransformVectors", PyvtkLineIntegralConvolution2D_GetTransformVectors, METH_VARARGS,
   "V.GetTransformVectors() -> int\nC++: virtual int GetTransformVectors()\n\nThis class performs LIC in the normalized image space. Hence, by\ndefault it transforms the input vectors to the normalized image\nspace (using the GridSpacings and input vector field dimensions).\nSet this to 0 to disable transformation if the vectors are\nalready transformed.\n"},
  {"SetNormalizeVectors", PyvtkLineIntegralConvolution2D_SetNormalizeVectors, METH_VARARGS,
   "V.SetNormalizeVectors(int)\nC++: void SetNormalizeVectors(int val)\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See,\n\"Imaging Vector Fields Using Line Integral Convolution\" for an\naxample where normalization is used. See, \"Image Space Based Visualization of Unsteady Flow on\nSurfaces\" for an example of where no normalization is used.\n"},
  {"GetNormalizeVectors", PyvtkLineIntegralConvolution2D_GetNormalizeVectors, METH_VARARGS,
   "V.GetNormalizeVectors() -> int\nC++: virtual int GetNormalizeVectors()\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See,\n\"Imaging Vector Fields Using Line Integral Convolution\" for an\naxample where normalization is used. See, \"Image Space Based Visualization of Unsteady Flow on\nSurfaces\" for an example of where no normalization is used.\n"},
  {"SetMaskThreshold", PyvtkLineIntegralConvolution2D_SetMaskThreshold, METH_VARARGS,
   "V.SetMaskThreshold(float)\nC++: virtual void SetMaskThreshold(double _arg)\n\nThe MaskThreshold controls blanking of the LIC texture. For\nfragments with |V|<threshold the LIC fragment is not rendered.\nThe default value is 0.0.\n\n* For surface LIC MaskThreshold units are in the original vector\n  space. For image LIC\n* be aware that while the vector field is transformed to image\n  space while the mask\n* threshold is not. Therefore the mask threshold must be\n  specified in image space\n* units.\n"},
  {"GetMaskThresholdMinValue", PyvtkLineIntegralConvolution2D_GetMaskThresholdMinValue, METH_VARARGS,
   "V.GetMaskThresholdMinValue() -> float\nC++: virtual double GetMaskThresholdMinValue()\n\nThe MaskThreshold controls blanking of the LIC texture. For\nfragments with |V|<threshold the LIC fragment is not rendered.\nThe default value is 0.0.\n\n* For surface LIC MaskThreshold units are in the original vector\n  space. For image LIC\n* be aware that while the vector field is transformed to image\n  space while the mask\n* threshold is not. Therefore the mask threshold must be\n  specified in image space\n* units.\n"},
  {"GetMaskThresholdMaxValue", PyvtkLineIntegralConvolution2D_GetMaskThresholdMaxValue, METH_VARARGS,
   "V.GetMaskThresholdMaxValue() -> float\nC++: virtual double GetMaskThresholdMaxValue()\n\nThe MaskThreshold controls blanking of the LIC texture. For\nfragments with |V|<threshold the LIC fragment is not rendered.\nThe default value is 0.0.\n\n* For surface LIC MaskThreshold units are in the original vector\n  space. For image LIC\n* be aware that while the vector field is transformed to image\n  space while the mask\n* threshold is not. Therefore the mask threshold must be\n  specified in image space\n* units.\n"},
  {"GetMaskThreshold", PyvtkLineIntegralConvolution2D_GetMaskThreshold, METH_VARARGS,
   "V.GetMaskThreshold() -> float\nC++: virtual double GetMaskThreshold()\n\nThe MaskThreshold controls blanking of the LIC texture. For\nfragments with |V|<threshold the LIC fragment is not rendered.\nThe default value is 0.0.\n\n* For surface LIC MaskThreshold units are in the original vector\n  space. For image LIC\n* be aware that while the vector field is transformed to image\n  space while the mask\n* threshold is not. Therefore the mask threshold must be\n  specified in image space\n* units.\n"},
  {"Execute", PyvtkLineIntegralConvolution2D_Execute, METH_VARARGS,
   "V.Execute(vtkTextureObject, vtkTextureObject) -> vtkTextureObject\nC++: vtkTextureObject *Execute(vtkTextureObject *vectorTex,\n    vtkTextureObject *noiseTex)\nV.Execute((int, int, int, int), vtkTextureObject,\n    vtkTextureObject) -> vtkTextureObject\nC++: vtkTextureObject *Execute(const int extent[4],\n    vtkTextureObject *vectorTex, vtkTextureObject *noiseTex)\n\nCompute the lic on the entire vector field texture.\n"},
  {"SetVectorTexParameters", PyvtkLineIntegralConvolution2D_SetVectorTexParameters, METH_VARARGS,
   "V.SetVectorTexParameters(vtkTextureObject)\nC++: static void SetVectorTexParameters(vtkTextureObject *vectors)\n\nConvenience functions to ensure that the input textures are\nconfigured correctly.\n"},
  {"SetNoiseTexParameters", PyvtkLineIntegralConvolution2D_SetNoiseTexParameters, METH_VARARGS,
   "V.SetNoiseTexParameters(vtkTextureObject)\nC++: static void SetNoiseTexParameters(vtkTextureObject *noise)\n\n"},
  {"WriteTimerLog", PyvtkLineIntegralConvolution2D_WriteTimerLog, METH_VARARGS,
   "V.WriteTimerLog(string)\nC++: virtual void WriteTimerLog(const char *)\n\nMethods used for parallel benchmarks. Use cmake to define\nvtkLineIntegralConviolution2DTIME to enable benchmarks. During\neach update timing information is stored, it can be written to\ndisk by calling WriteLog.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLineIntegralConvolution2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLICOpenGL2Python.vtkLineIntegralConvolution2D", // tp_name
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
  PyvtkLineIntegralConvolution2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLineIntegralConvolution2D_StaticNew()
{
  return vtkLineIntegralConvolution2D::New();
}

PyObject *PyvtkLineIntegralConvolution2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLineIntegralConvolution2D_Type, PyvtkLineIntegralConvolution2D_Methods,
    "vtkLineIntegralConvolution2D",
 &PyvtkLineIntegralConvolution2D_StaticNew);

  PyTypeObject *pytype = &PyvtkLineIntegralConvolution2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "ENHANCE_CONTRAST_OFF", vtkLineIntegralConvolution2D::ENHANCE_CONTRAST_OFF },
        { "ENHANCE_CONTRAST_ON", vtkLineIntegralConvolution2D::ENHANCE_CONTRAST_ON },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLineIntegralConvolution2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLineIntegralConvolution2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLineIntegralConvolution2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

