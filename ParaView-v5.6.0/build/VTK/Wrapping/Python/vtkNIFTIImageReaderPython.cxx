// python wrapper for vtkNIFTIImageReader
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
#include "vtkNIFTIImageReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNIFTIImageReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNIFTIImageReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static const char *PyvtkNIFTIImageReader_Doc =
  "vtkNIFTIImageReader - Read NIfTI-1 and NIfTI-2 medical image files\n\n"
  "Superclass: vtkImageReader2\n\n"
  "This class reads NIFTI files, either in .nii format or as separate\n"
  ".img and .hdr files.  If two files are used, then they can be passed\n"
  "by using SetFileNames() instead of SetFileName().  Files ending in\n"
  ".gz are decompressed on-the-fly while they are being read.  Files\n"
  "with complex numbers or vector dimensions will be read as\n"
  "multi-component images.  If a NIFTI file has a time dimension, then\n"
  "by default only the first image in the time series will be read, but\n"
  "the TimeAsVector flag can be set to read the time steps as vector\n"
  "components.  Files in Analyze 7.5 format are also supported by this\n"
  "reader.@par Thanks: This class was contributed to VTK by the Calgary\n"
  "Image Processing and Analysis Centre (CIPAC).\n"
  "@sa\n"
  "vtkNIFTIImageWriter, vtkNIFTIImageHeader\n\n";


static PyObject *
PyvtkNIFTIImageReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNIFTIImageReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNIFTIImageReader *tempr = vtkNIFTIImageReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNIFTIImageReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageReader::NewInstance());

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
PyvtkNIFTIImageReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkNIFTIImageReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkNIFTIImageReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkNIFTIImageReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeAsVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTimeAsVector() :
      op->vtkNIFTIImageReader::GetTimeAsVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_SetTimeAsVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeAsVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeAsVector(temp0);
    }
    else
    {
      op->vtkNIFTIImageReader::SetTimeAsVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_TimeAsVectorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimeAsVectorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimeAsVectorOn();
    }
    else
    {
      op->vtkNIFTIImageReader::TimeAsVectorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_TimeAsVectorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimeAsVectorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimeAsVectorOff();
    }
    else
    {
      op->vtkNIFTIImageReader::TimeAsVectorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeDimension() :
      op->vtkNIFTIImageReader::GetTimeDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeSpacing() :
      op->vtkNIFTIImageReader::GetTimeSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkNIFTIImageReader::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkNIFTIImageReader::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetPlanarRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanarRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlanarRGB() :
      op->vtkNIFTIImageReader::GetPlanarRGB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_SetPlanarRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanarRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlanarRGB(temp0);
    }
    else
    {
      op->vtkNIFTIImageReader::SetPlanarRGB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_PlanarRGBOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlanarRGBOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlanarRGBOn();
    }
    else
    {
      op->vtkNIFTIImageReader::PlanarRGBOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_PlanarRGBOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlanarRGBOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlanarRGBOff();
    }
    else
    {
      op->vtkNIFTIImageReader::PlanarRGBOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFac() :
      op->vtkNIFTIImageReader::GetQFac());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetQFormMatrix() :
      op->vtkNIFTIImageReader::GetQFormMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetSFormMatrix() :
      op->vtkNIFTIImageReader::GetSFormMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageReader_GetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageReader *op = static_cast<vtkNIFTIImageReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->GetNIFTIHeader() :
      op->vtkNIFTIImageReader::GetNIFTIHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNIFTIImageReader_Methods[] = {
  {"IsTypeOf", PyvtkNIFTIImageReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStatic method for construction.\n"},
  {"IsA", PyvtkNIFTIImageReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStatic method for construction.\n"},
  {"SafeDownCast", PyvtkNIFTIImageReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNIFTIImageReader\nC++: static vtkNIFTIImageReader *SafeDownCast(vtkObjectBase *o)\n\nStatic method for construction.\n"},
  {"NewInstance", PyvtkNIFTIImageReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNIFTIImageReader\nC++: vtkNIFTIImageReader *NewInstance()\n\nStatic method for construction.\n"},
  {"GetFileExtensions", PyvtkNIFTIImageReader_GetFileExtensions, METH_VARARGS,
   "V.GetFileExtensions() -> string\nC++: const char *GetFileExtensions() override;\n\nValid extensions for this file type.\n"},
  {"GetDescriptiveName", PyvtkNIFTIImageReader_GetDescriptiveName, METH_VARARGS,
   "V.GetDescriptiveName() -> string\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name that might be useful in a GUI.\n"},
  {"CanReadFile", PyvtkNIFTIImageReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *filename) override;\n\nReturn true if this reader can read the given file.\n"},
  {"GetTimeAsVector", PyvtkNIFTIImageReader_GetTimeAsVector, METH_VARARGS,
   "V.GetTimeAsVector() -> bool\nC++: virtual bool GetTimeAsVector()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {"SetTimeAsVector", PyvtkNIFTIImageReader_SetTimeAsVector, METH_VARARGS,
   "V.SetTimeAsVector(bool)\nC++: virtual void SetTimeAsVector(bool _arg)\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {"TimeAsVectorOn", PyvtkNIFTIImageReader_TimeAsVectorOn, METH_VARARGS,
   "V.TimeAsVectorOn()\nC++: virtual void TimeAsVectorOn()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {"TimeAsVectorOff", PyvtkNIFTIImageReader_TimeAsVectorOff, METH_VARARGS,
   "V.TimeAsVectorOff()\nC++: virtual void TimeAsVectorOff()\n\nRead the time dimension as scalar components (default: Off). If\nthis is on, then each time point will be stored as a component in\nthe image data.  If the file has both a time dimension and a\nvector dimension, then the number of components will be the\nproduct of these two dimensions, i.e. the components will store a\nsequence of vectors.\n"},
  {"GetTimeDimension", PyvtkNIFTIImageReader_GetTimeDimension, METH_VARARGS,
   "V.GetTimeDimension() -> int\nC++: int GetTimeDimension()\n\nGet the time dimension that was stored in the NIFTI header.\n"},
  {"GetTimeSpacing", PyvtkNIFTIImageReader_GetTimeSpacing, METH_VARARGS,
   "V.GetTimeSpacing() -> float\nC++: double GetTimeSpacing()\n\n"},
  {"GetRescaleSlope", PyvtkNIFTIImageReader_GetRescaleSlope, METH_VARARGS,
   "V.GetRescaleSlope() -> float\nC++: double GetRescaleSlope()\n\nGet the slope and intercept for rescaling the scalar values.\nThese values allow calibration of the data to real values. Use\nthe equation v = u*RescaleSlope + RescaleIntercept. This directly\nreturns the values stored in the scl_slope and scl_inter fields\nin the NIFTI header.\n"},
  {"GetRescaleIntercept", PyvtkNIFTIImageReader_GetRescaleIntercept, METH_VARARGS,
   "V.GetRescaleIntercept() -> float\nC++: double GetRescaleIntercept()\n\n"},
  {"GetPlanarRGB", PyvtkNIFTIImageReader_GetPlanarRGB, METH_VARARGS,
   "V.GetPlanarRGB() -> bool\nC++: virtual bool GetPlanarRGB()\n\nRead planar RGB (separate R, G, and B planes), rather than packed\nRGB. The NIFTI format should always use packed RGB.  The Analyze\nformat, however, was used to store both planar RGB and packed RGB\ndepending on the software, without any indication in the header\nabout which convention was being used.  Use this if you have a\nplanar RGB file.\n"},
  {"SetPlanarRGB", PyvtkNIFTIImageReader_SetPlanarRGB, METH_VARARGS,
   "V.SetPlanarRGB(bool)\nC++: virtual void SetPlanarRGB(bool _arg)\n\nRead planar RGB (separate R, G, and B planes), rather than packed\nRGB. The NIFTI format should always use packed RGB.  The Analyze\nformat, however, was used to store both planar RGB and packed RGB\ndepending on the software, without any indication in the header\nabout which convention was being used.  Use this if you have a\nplanar RGB file.\n"},
  {"PlanarRGBOn", PyvtkNIFTIImageReader_PlanarRGBOn, METH_VARARGS,
   "V.PlanarRGBOn()\nC++: virtual void PlanarRGBOn()\n\nRead planar RGB (separate R, G, and B planes), rather than packed\nRGB. The NIFTI format should always use packed RGB.  The Analyze\nformat, however, was used to store both planar RGB and packed RGB\ndepending on the software, without any indication in the header\nabout which convention was being used.  Use this if you have a\nplanar RGB file.\n"},
  {"PlanarRGBOff", PyvtkNIFTIImageReader_PlanarRGBOff, METH_VARARGS,
   "V.PlanarRGBOff()\nC++: virtual void PlanarRGBOff()\n\nRead planar RGB (separate R, G, and B planes), rather than packed\nRGB. The NIFTI format should always use packed RGB.  The Analyze\nformat, however, was used to store both planar RGB and packed RGB\ndepending on the software, without any indication in the header\nabout which convention was being used.  Use this if you have a\nplanar RGB file.\n"},
  {"GetQFac", PyvtkNIFTIImageReader_GetQFac, METH_VARARGS,
   "V.GetQFac() -> float\nC++: double GetQFac()\n\nQFac gives the slice order in the NIFTI file versus the VTK\nimage. If QFac is -1, then the VTK slice index K is related to\nthe NIFTI slice index k by the equation K = (num_slices - k - 1).\n VTK requires the slices to be ordered so that the voxel indices\n(I,J,K) provide a right-handed coordinate system, whereas NIFTI\ndoes not.  Instead, NIFTI stores a factor called \"qfac\" in the\nheader to signal when the (i,j,k) indices form a left-handed\ncoordinate system.  QFac will only ever have values of +1 or -1.\n"},
  {"GetQFormMatrix", PyvtkNIFTIImageReader_GetQFormMatrix, METH_VARARGS,
   "V.GetQFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetQFormMatrix()\n\nGet a matrix that gives the \"qform\" orientation and offset for\nthe data. If no qform matrix was stored in the file, the return\nvalue is nullptr. This matrix will transform VTK data coordinates\ninto the NIFTI oriented data coordinates, where +X points right,\n+Y points anterior (toward the front), and +Z points superior\n(toward the head). The qform matrix will always have a positive\ndeterminant. The offset that is stored in the matrix gives the\nposition of the first pixel in the first slice of the VTK image\ndata.  Note that if QFac is -1, then the first slice in the VTK\nimage data is the last slice in the NIFTI file, and the Z offset\nwill automatically be adjusted to compensate for this.\n"},
  {"GetSFormMatrix", PyvtkNIFTIImageReader_GetSFormMatrix, METH_VARARGS,
   "V.GetSFormMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetSFormMatrix()\n\nGet a matrix that gives the \"sform\" orientation and offset for\nthe data. If no sform matrix was stored in the file, the return\nvalue is nullptr. Like the qform matrix, this matrix will\ntransform VTK data coordinates into a NIFTI coordinate system. \nUnlike the qform matrix, the sform matrix can contain scaling\ninformation and can even (rarely) have a negative determinant,\ni.e. a flip.  This matrix is modified slightly as compared to the\nsform matrix stored in the NIFTI header: the pixdim pixel spacing\nis factored out.  Also, if QFac is -1, then the VTK slices are in\nreverse order as compared to the NIFTI slices, hence as compared\nto the sform matrix stored in the header, the third column of\nthis matrix is multiplied by -1 and the Z offset is shifted to\ncompensate for the fact that the last slice has become the first.\n"},
  {"GetNIFTIHeader", PyvtkNIFTIImageReader_GetNIFTIHeader, METH_VARARGS,
   "V.GetNIFTIHeader() -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *GetNIFTIHeader()\n\nGet the raw header information from the NIfTI file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNIFTIImageReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkNIFTIImageReader", // tp_name
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
  PyvtkNIFTIImageReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNIFTIImageReader_StaticNew()
{
  return vtkNIFTIImageReader::New();
}

PyObject *PyvtkNIFTIImageReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNIFTIImageReader_Type, PyvtkNIFTIImageReader_Methods,
    "vtkNIFTIImageReader",
 &PyvtkNIFTIImageReader_StaticNew);

  PyTypeObject *pytype = &PyvtkNIFTIImageReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNIFTIImageReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNIFTIImageReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNIFTIImageReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

