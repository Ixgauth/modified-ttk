// python wrapper for vtkRendererSource
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
#include "vtkInformationVector.h"
#include "vtkRendererSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRendererSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRendererSource_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static const char *PyvtkRendererSource_Doc =
  "vtkRendererSource - take a renderer's image and/or depth map into the\npipeline\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkRendererSource is a source object whose input is a renderer's\n"
  "image and/or depth map, which is then used to produce an output\n"
  "image. This output can then be used in the visualization pipeline.\n"
  "You must explicitly send a Modify() to this object to get it to\n"
  "reload its data from the renderer. Consider also using\n"
  "vtkWindowToImageFilter instead of this class.\n\n"
  "By default, the data placed into the output is the renderer's image\n"
  "RGB values (these color scalars are represented by unsigned chars,\n"
  "one per color channel). Optionally, you can also grab the image depth\n"
  "(e.g., z-buffer) values, and include it in the output in one of three\n"
  "ways. 1) First, when the data member DepthValues is enabled, a\n"
  "separate float array of these depth values is included in the output\n"
  "point data with array name \"ZBuffer\". 2) If DepthValuesInScalars is\n"
  "enabled, then the z-buffer values are shifted and scaled to fit into\n"
  "an unsigned char and included in the output image (so the output\n"
  "image pixels are four components RGBZ). Note that DepthValues and and\n"
  "DepthValuesInScalars can be enabled simultaneously if desired.\n"
  "Finally 3) if DepthValuesOnly is enabled, then the output image\n"
  "consists only of the z-buffer values represented by a single\n"
  "component float array; and the data members DepthValues and\n"
  "DepthValuesInScalars are ignored.\n\n"
  "@sa\n"
  "vtkWindowToImageFilter vtkRendererPointCloudSource vtkRenderer\n"
  "vtkImageData vtkDepthImageToPointCloud\n\n";


static PyObject *
PyvtkRendererSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRendererSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRendererSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRendererSource *tempr = vtkRendererSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRendererSource::NewInstance());

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
PyvtkRendererSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkRendererSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkRendererSource::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkRendererSource::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetWholeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWholeWindow(temp0);
    }
    else
    {
      op->vtkRendererSource::SetWholeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetWholeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeWindow() :
      op->vtkRendererSource::GetWholeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_WholeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WholeWindowOn();
    }
    else
    {
      op->vtkRendererSource::WholeWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_WholeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WholeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WholeWindowOff();
    }
    else
    {
      op->vtkRendererSource::WholeWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetRenderFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderFlag(temp0);
    }
    else
    {
      op->vtkRendererSource::SetRenderFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetRenderFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderFlag() :
      op->vtkRendererSource::GetRenderFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_RenderFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderFlagOn();
    }
    else
    {
      op->vtkRendererSource::RenderFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_RenderFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderFlagOff();
    }
    else
    {
      op->vtkRendererSource::RenderFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetDepthValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthValues(temp0);
    }
    else
    {
      op->vtkRendererSource::SetDepthValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetDepthValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthValues() :
      op->vtkRendererSource::GetDepthValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesOn();
    }
    else
    {
      op->vtkRendererSource::DepthValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesOff();
    }
    else
    {
      op->vtkRendererSource::DepthValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetDepthValuesInScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthValuesInScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthValuesInScalars(temp0);
    }
    else
    {
      op->vtkRendererSource::SetDepthValuesInScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetDepthValuesInScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthValuesInScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthValuesInScalars() :
      op->vtkRendererSource::GetDepthValuesInScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesInScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesInScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesInScalarsOn();
    }
    else
    {
      op->vtkRendererSource::DepthValuesInScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesInScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesInScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesInScalarsOff();
    }
    else
    {
      op->vtkRendererSource::DepthValuesInScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_SetDepthValuesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthValuesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthValuesOnly(temp0);
    }
    else
    {
      op->vtkRendererSource::SetDepthValuesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetDepthValuesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthValuesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthValuesOnly() :
      op->vtkRendererSource::GetDepthValuesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesOnlyOn();
    }
    else
    {
      op->vtkRendererSource::DepthValuesOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_DepthValuesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthValuesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthValuesOnlyOff();
    }
    else
    {
      op->vtkRendererSource::DepthValuesOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererSource_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererSource *op = static_cast<vtkRendererSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkRendererSource::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRendererSource_Methods[] = {
  {"IsTypeOf", PyvtkRendererSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRendererSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRendererSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRendererSource\nC++: static vtkRendererSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRendererSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRendererSource\nC++: vtkRendererSource *NewInstance()\n\n"},
  {"GetMTime", PyvtkRendererSource_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the Renderer.\n"},
  {"SetInput", PyvtkRendererSource_SetInput, METH_VARARGS,
   "V.SetInput(vtkRenderer)\nC++: void SetInput(vtkRenderer *)\n\nIndicates what renderer to get the pixel data from.\n"},
  {"GetInput", PyvtkRendererSource_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkRenderer\nC++: virtual vtkRenderer *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata.\n"},
  {"SetWholeWindow", PyvtkRendererSource_SetWholeWindow, METH_VARARGS,
   "V.SetWholeWindow(int)\nC++: virtual void SetWholeWindow(vtkTypeBool _arg)\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {"GetWholeWindow", PyvtkRendererSource_GetWholeWindow, METH_VARARGS,
   "V.GetWholeWindow() -> int\nC++: virtual vtkTypeBool GetWholeWindow()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {"WholeWindowOn", PyvtkRendererSource_WholeWindowOn, METH_VARARGS,
   "V.WholeWindowOn()\nC++: virtual void WholeWindowOn()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {"WholeWindowOff", PyvtkRendererSource_WholeWindowOff, METH_VARARGS,
   "V.WholeWindowOff()\nC++: virtual void WholeWindowOff()\n\nUse the entire RenderWindow as a data source or just the\nRenderer. The default is zero, just the Renderer.\n"},
  {"SetRenderFlag", PyvtkRendererSource_SetRenderFlag, METH_VARARGS,
   "V.SetRenderFlag(int)\nC++: virtual void SetRenderFlag(vtkTypeBool _arg)\n\nIf this flag is on, then filter execution causes a render first.\n"},
  {"GetRenderFlag", PyvtkRendererSource_GetRenderFlag, METH_VARARGS,
   "V.GetRenderFlag() -> int\nC++: virtual vtkTypeBool GetRenderFlag()\n\nIf this flag is on, then filter execution causes a render first.\n"},
  {"RenderFlagOn", PyvtkRendererSource_RenderFlagOn, METH_VARARGS,
   "V.RenderFlagOn()\nC++: virtual void RenderFlagOn()\n\nIf this flag is on, then filter execution causes a render first.\n"},
  {"RenderFlagOff", PyvtkRendererSource_RenderFlagOff, METH_VARARGS,
   "V.RenderFlagOff()\nC++: virtual void RenderFlagOff()\n\nIf this flag is on, then filter execution causes a render first.\n"},
  {"SetDepthValues", PyvtkRendererSource_SetDepthValues, METH_VARARGS,
   "V.SetDepthValues(int)\nC++: virtual void SetDepthValues(vtkTypeBool _arg)\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {"GetDepthValues", PyvtkRendererSource_GetDepthValues, METH_VARARGS,
   "V.GetDepthValues() -> int\nC++: virtual vtkTypeBool GetDepthValues()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {"DepthValuesOn", PyvtkRendererSource_DepthValuesOn, METH_VARARGS,
   "V.DepthValuesOn()\nC++: virtual void DepthValuesOn()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {"DepthValuesOff", PyvtkRendererSource_DepthValuesOff, METH_VARARGS,
   "V.DepthValuesOff()\nC++: virtual void DepthValuesOff()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed\ninto a field data attributes named \"ZBuffer\" .\n"},
  {"SetDepthValuesInScalars", PyvtkRendererSource_SetDepthValuesInScalars, METH_VARARGS,
   "V.SetDepthValuesInScalars(int)\nC++: virtual void SetDepthValuesInScalars(vtkTypeBool _arg)\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {"GetDepthValuesInScalars", PyvtkRendererSource_GetDepthValuesInScalars, METH_VARARGS,
   "V.GetDepthValuesInScalars() -> int\nC++: virtual vtkTypeBool GetDepthValuesInScalars()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {"DepthValuesInScalarsOn", PyvtkRendererSource_DepthValuesInScalarsOn, METH_VARARGS,
   "V.DepthValuesInScalarsOn()\nC++: virtual void DepthValuesInScalarsOn()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {"DepthValuesInScalarsOff", PyvtkRendererSource_DepthValuesInScalarsOff, METH_VARARGS,
   "V.DepthValuesInScalarsOff()\nC++: virtual void DepthValuesInScalarsOff()\n\nA boolean value to control whether to grab z-buffer (i.e., depth\nvalues) along with the image data. The z-buffer data is placed in\nthe scalars as a fourth Z component (shift and scaled to map the\nfull 0..255 range).\n"},
  {"SetDepthValuesOnly", PyvtkRendererSource_SetDepthValuesOnly, METH_VARARGS,
   "V.SetDepthValuesOnly(int)\nC++: virtual void SetDepthValuesOnly(vtkTypeBool _arg)\n\nA boolean value to control whether to grab only the z-buffer\n(i.e., depth values) without the associated image (color scalars)\ndata. If enabled, the output data contains only a depth image\nwhich is the z-buffer values represented by float values. By\ndefault, this is disabled. Note that if enabled, then the\nDepthValues and DepthValuesInScalars are ignored.\n"},
  {"GetDepthValuesOnly", PyvtkRendererSource_GetDepthValuesOnly, METH_VARARGS,
   "V.GetDepthValuesOnly() -> int\nC++: virtual vtkTypeBool GetDepthValuesOnly()\n\nA boolean value to control whether to grab only the z-buffer\n(i.e., depth values) without the associated image (color scalars)\ndata. If enabled, the output data contains only a depth image\nwhich is the z-buffer values represented by float values. By\ndefault, this is disabled. Note that if enabled, then the\nDepthValues and DepthValuesInScalars are ignored.\n"},
  {"DepthValuesOnlyOn", PyvtkRendererSource_DepthValuesOnlyOn, METH_VARARGS,
   "V.DepthValuesOnlyOn()\nC++: virtual void DepthValuesOnlyOn()\n\nA boolean value to control whether to grab only the z-buffer\n(i.e., depth values) without the associated image (color scalars)\ndata. If enabled, the output data contains only a depth image\nwhich is the z-buffer values represented by float values. By\ndefault, this is disabled. Note that if enabled, then the\nDepthValues and DepthValuesInScalars are ignored.\n"},
  {"DepthValuesOnlyOff", PyvtkRendererSource_DepthValuesOnlyOff, METH_VARARGS,
   "V.DepthValuesOnlyOff()\nC++: virtual void DepthValuesOnlyOff()\n\nA boolean value to control whether to grab only the z-buffer\n(i.e., depth values) without the associated image (color scalars)\ndata. If enabled, the output data contains only a depth image\nwhich is the z-buffer values represented by float values. By\ndefault, this is disabled. Note that if enabled, then the\nDepthValues and DepthValuesInScalars are ignored.\n"},
  {"GetOutput", PyvtkRendererSource_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRendererSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkRendererSource", // tp_name
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
  PyvtkRendererSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRendererSource_StaticNew()
{
  return vtkRendererSource::New();
}

PyObject *PyvtkRendererSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRendererSource_Type, PyvtkRendererSource_Methods,
    "vtkRendererSource",
 &PyvtkRendererSource_StaticNew);

  PyTypeObject *pytype = &PyvtkRendererSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRendererSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRendererSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRendererSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

