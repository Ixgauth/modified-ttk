// python wrapper for vtkRIBExporter
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
#include "vtkRIBExporter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRIBExporter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRIBExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static const char *PyvtkRIBExporter_Doc =
  "vtkRIBExporter - export a scene into RenderMan RIB format.\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkRIBExporter is a concrete subclass of vtkExporter that writes a\n"
  "Renderman .RIB files. The input specifies a vtkRenderWindow. All\n"
  "visible actors and lights will be included in the rib file. The\n"
  "following file naming conventions apply:\n"
  "  rib file - FilePrefix.rib\n"
  "  image file created by RenderMan - FilePrefix.tif\n"
  "  texture files - TexturePrefix_0xADDR_MTIME.tif This object does NOT\n"
  "generate an image file. The user must run either RenderMan or a\n"
  "RenderMan emulator like Blue Moon Ray Tracer (BMRT). vtk properties\n"
  "are convert to Renderman shaders as follows:\n"
  "  Normal property, no texture map - plastic.sl\n"
  "  Normal property with texture map - txtplastic.sl These two shaders\n"
  "must be compiled by the rendering package being used.  vtkRIBExporter\n"
  "also supports custom shaders. The shaders are written using the\n"
  "Renderman Shading Language. See \"The Renderman Companion\", ISBN\n"
  "0-201-50868, 1989 for details on writing shaders. vtkRIBProperty\n"
  "specifies the declarations and parameter settings for custom shaders.\n\n"
  "@sa\n"
  "vtkExporter vtkRIBProperty vtkRIBLight\n\n";


static PyObject *
PyvtkRIBExporter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRIBExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRIBExporter *tempr = vtkRIBExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRIBExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBExporter::NewInstance());

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
PyvtkRIBExporter_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkRIBExporter::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRIBExporter_SetSize_s1(self, args);
    case 1:
      return PyvtkRIBExporter_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}



static PyObject *
PyvtkRIBExporter_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRIBExporter::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetPixelSamples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPixelSamples(temp0, temp1);
    }
    else
    {
      op->vtkRIBExporter::SetPixelSamples(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetPixelSamples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPixelSamples(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetPixelSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRIBExporter_SetPixelSamples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRIBExporter_SetPixelSamples_s1(self, args);
    case 1:
      return PyvtkRIBExporter_SetPixelSamples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPixelSamples");
  return nullptr;
}



static PyObject *
PyvtkRIBExporter_GetPixelSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPixelSamples() :
      op->vtkRIBExporter::GetPixelSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkRIBExporter::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetTexturePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTexturePrefix(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetTexturePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetTexturePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTexturePrefix() :
      op->vtkRIBExporter::GetTexturePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackground(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackground() :
      op->vtkRIBExporter::GetBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_BackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOn();
    }
    else
    {
      op->vtkRIBExporter::BackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_BackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackgroundOff();
    }
    else
    {
      op->vtkRIBExporter::BackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_SetExportArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExportArrays(temp0);
    }
    else
    {
      op->vtkRIBExporter::SetExportArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArraysMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArraysMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExportArraysMinValue() :
      op->vtkRIBExporter::GetExportArraysMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArraysMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArraysMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExportArraysMaxValue() :
      op->vtkRIBExporter::GetExportArraysMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_ExportArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExportArraysOn();
    }
    else
    {
      op->vtkRIBExporter::ExportArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_ExportArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExportArraysOff();
    }
    else
    {
      op->vtkRIBExporter::ExportArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBExporter_GetExportArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBExporter *op = static_cast<vtkRIBExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExportArrays() :
      op->vtkRIBExporter::GetExportArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRIBExporter_Methods[] = {
  {"IsTypeOf", PyvtkRIBExporter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRIBExporter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRIBExporter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRIBExporter\nC++: static vtkRIBExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRIBExporter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRIBExporter\nC++: vtkRIBExporter *NewInstance()\n\n"},
  {"SetSize", PyvtkRIBExporter_SetSize, METH_VARARGS,
   "V.SetSize(int, int)\nC++: void SetSize(int, int)\nV.SetSize((int, int))\nC++: void SetSize(int a[2])\n\n"},
  {"GetSize", PyvtkRIBExporter_GetSize, METH_VARARGS,
   "V.GetSize() -> (int, int)\nC++: int *GetSize()\n\nSpecify the size of the image for RenderMan. If none is\nspecified, the size of the render window will be used.\n"},
  {"SetPixelSamples", PyvtkRIBExporter_SetPixelSamples, METH_VARARGS,
   "V.SetPixelSamples(int, int)\nC++: void SetPixelSamples(int, int)\nV.SetPixelSamples((int, int))\nC++: void SetPixelSamples(int a[2])\n\n"},
  {"GetPixelSamples", PyvtkRIBExporter_GetPixelSamples, METH_VARARGS,
   "V.GetPixelSamples() -> (int, int)\nC++: int *GetPixelSamples()\n\nSpecify the sampling rate for the rendering. Default is 2 2.\n"},
  {"SetFilePrefix", PyvtkRIBExporter_SetFilePrefix, METH_VARARGS,
   "V.SetFilePrefix(string)\nC++: virtual void SetFilePrefix(const char *_arg)\n\nSpecify the prefix of the files to write out. The resulting file\nnames will have .rib appended to them.\n"},
  {"GetFilePrefix", PyvtkRIBExporter_GetFilePrefix, METH_VARARGS,
   "V.GetFilePrefix() -> string\nC++: virtual char *GetFilePrefix()\n\nSpecify the prefix of the files to write out. The resulting file\nnames will have .rib appended to them.\n"},
  {"SetTexturePrefix", PyvtkRIBExporter_SetTexturePrefix, METH_VARARGS,
   "V.SetTexturePrefix(string)\nC++: virtual void SetTexturePrefix(const char *_arg)\n\nSpecify the prefix of any generated texture files.\n"},
  {"GetTexturePrefix", PyvtkRIBExporter_GetTexturePrefix, METH_VARARGS,
   "V.GetTexturePrefix() -> string\nC++: virtual char *GetTexturePrefix()\n\nSpecify the prefix of any generated texture files.\n"},
  {"SetBackground", PyvtkRIBExporter_SetBackground, METH_VARARGS,
   "V.SetBackground(int)\nC++: virtual void SetBackground(vtkTypeBool _arg)\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {"GetBackground", PyvtkRIBExporter_GetBackground, METH_VARARGS,
   "V.GetBackground() -> int\nC++: virtual vtkTypeBool GetBackground()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {"BackgroundOn", PyvtkRIBExporter_BackgroundOn, METH_VARARGS,
   "V.BackgroundOn()\nC++: virtual void BackgroundOn()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {"BackgroundOff", PyvtkRIBExporter_BackgroundOff, METH_VARARGS,
   "V.BackgroundOff()\nC++: virtual void BackgroundOff()\n\nSet/Get the background flag. Default is 0 (off). If set, the rib\nfile will contain an image shader that will use the renderer\nwindow's background color. Normally, RenderMan does generate\nbackgrounds. Backgrounds are composited into the scene with the\ntiffcomp program that comes with Pixar's RenderMan Toolkit.  In fact,\nPixar's Renderman will accept an image shader but only sets the\nalpha of the background. Images created this way will still have\na black background but contain an alpha of 1 at all pixels and\nCANNOT be subsequently composited with other images using\ntiffcomp.  However, other RenderMan compliant renderers like Blue\nMoon Ray Tracing (BMRT) do allow image shaders and properly set\nthe background color. If this sounds too confusing, use the\nfollowing rules: If you are using Pixar's Renderman, leave the\nBackground off. Otherwise, try setting BackGroundOn and see if\nyou get the desired results.\n"},
  {"SetExportArrays", PyvtkRIBExporter_SetExportArrays, METH_VARARGS,
   "V.SetExportArrays(int)\nC++: virtual void SetExportArrays(vtkTypeBool _arg)\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {"GetExportArraysMinValue", PyvtkRIBExporter_GetExportArraysMinValue, METH_VARARGS,
   "V.GetExportArraysMinValue() -> int\nC++: virtual vtkTypeBool GetExportArraysMinValue()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {"GetExportArraysMaxValue", PyvtkRIBExporter_GetExportArraysMaxValue, METH_VARARGS,
   "V.GetExportArraysMaxValue() -> int\nC++: virtual vtkTypeBool GetExportArraysMaxValue()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {"ExportArraysOn", PyvtkRIBExporter_ExportArraysOn, METH_VARARGS,
   "V.ExportArraysOn()\nC++: virtual void ExportArraysOn()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {"ExportArraysOff", PyvtkRIBExporter_ExportArraysOff, METH_VARARGS,
   "V.ExportArraysOff()\nC++: virtual void ExportArraysOff()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {"GetExportArrays", PyvtkRIBExporter_GetExportArrays, METH_VARARGS,
   "V.GetExportArrays() -> int\nC++: virtual vtkTypeBool GetExportArrays()\n\nSet or get the ExportArrays. If ExportArrays is set, then all\npoint data, field data, and cell data arrays will get exported\ntogether with polygons. Default is Off (0).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRIBExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOExportPython.vtkRIBExporter", // tp_name
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
  PyvtkRIBExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRIBExporter_StaticNew()
{
  return vtkRIBExporter::New();
}

PyObject *PyvtkRIBExporter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRIBExporter_Type, PyvtkRIBExporter_Methods,
    "vtkRIBExporter",
 &PyvtkRIBExporter_StaticNew);

  PyTypeObject *pytype = &PyvtkRIBExporter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRIBExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRIBExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRIBExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

