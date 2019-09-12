// python wrapper for vtkImageDifference
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
#include "vtkImageDifference.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDifference(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDifference_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageDifference_Doc =
  "vtkImageDifference - Compares images for regression tests.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageDifference takes two rgb unsigned char images and compares\n"
  "them. It allows the images to be slightly different.  If AllowShift\n"
  "is on, then each pixel can be shifted by two pixels. Threshold is the\n"
  "allowable error for each pixel.\n\n"
  "This is a symmetric filter and the difference computed is symmetric.\n"
  "The resulting value is the maximum error of the two directions A->B\n"
  "and B->A\n\n";


static PyObject *
PyvtkImageDifference_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDifference::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDifference::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDifference *tempr = vtkImageDifference::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDifference *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDifference::NewInstance());

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
PyvtkImageDifference_SetImageConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetImageConnection(temp0);
    }
    else
    {
      op->vtkImageDifference::SetImageConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetImageData(temp0);
    }
    else
    {
      op->vtkImageDifference::SetImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkImageDifference::GetImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetError_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkImageDifference::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageDifference_GetError_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetError(temp0);
    }
    else
    {
      op->vtkImageDifference::GetError(temp0);
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
PyvtkImageDifference_GetError(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageDifference_GetError_s1(self, args);
    case 1:
      return PyvtkImageDifference_GetError_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetError");
  return nullptr;
}



static PyObject *
PyvtkImageDifference_GetThresholdedError_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdedError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdedError() :
      op->vtkImageDifference::GetThresholdedError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageDifference_GetThresholdedError_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdedError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetThresholdedError(temp0);
    }
    else
    {
      op->vtkImageDifference::GetThresholdedError(temp0);
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
PyvtkImageDifference_GetThresholdedError(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageDifference_GetThresholdedError_s1(self, args);
    case 1:
      return PyvtkImageDifference_GetThresholdedError_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetThresholdedError");
  return nullptr;
}



static PyObject *
PyvtkImageDifference_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0);
    }
    else
    {
      op->vtkImageDifference::SetThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkImageDifference::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowShift(temp0);
    }
    else
    {
      op->vtkImageDifference::SetAllowShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowShift() :
      op->vtkImageDifference::GetAllowShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowShiftOn();
    }
    else
    {
      op->vtkImageDifference::AllowShiftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowShiftOff();
    }
    else
    {
      op->vtkImageDifference::AllowShiftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAveraging(temp0);
    }
    else
    {
      op->vtkImageDifference::SetAveraging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAveraging() :
      op->vtkImageDifference::GetAveraging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragingOn();
    }
    else
    {
      op->vtkImageDifference::AveragingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragingOff();
    }
    else
    {
      op->vtkImageDifference::AveragingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAverageThresholdFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAverageThresholdFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAverageThresholdFactor(temp0);
    }
    else
    {
      op->vtkImageDifference::SetAverageThresholdFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAverageThresholdFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAverageThresholdFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAverageThresholdFactor() :
      op->vtkImageDifference::GetAverageThresholdFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDifference_Methods[] = {
  {"IsTypeOf", PyvtkImageDifference_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDifference_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDifference_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDifference\nC++: static vtkImageDifference *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDifference_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDifference\nC++: vtkImageDifference *NewInstance()\n\n"},
  {"SetImageConnection", PyvtkImageDifference_SetImageConnection, METH_VARARGS,
   "V.SetImageConnection(vtkAlgorithmOutput)\nC++: void SetImageConnection(vtkAlgorithmOutput *output)\n\nSpecify the Image to compare the input to.\n"},
  {"SetImageData", PyvtkImageDifference_SetImageData, METH_VARARGS,
   "V.SetImageData(vtkDataObject)\nC++: void SetImageData(vtkDataObject *image)\n\nSpecify the Image to compare the input to.\n"},
  {"GetImage", PyvtkImageDifference_GetImage, METH_VARARGS,
   "V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSpecify the Image to compare the input to.\n"},
  {"GetError", PyvtkImageDifference_GetError, METH_VARARGS,
   "V.GetError() -> float\nC++: double GetError()\nV.GetError([float, ...])\nC++: void GetError(double *e)\n\nReturn the total error in comparing the two images.\n"},
  {"GetThresholdedError", PyvtkImageDifference_GetThresholdedError, METH_VARARGS,
   "V.GetThresholdedError() -> float\nC++: double GetThresholdedError()\nV.GetThresholdedError([float, ...])\nC++: void GetThresholdedError(double *e)\n\nReturn the total thresholded error in comparing the two images.\nThe thresholded error is the error for a given pixel minus the\nthreshold and clamped at a minimum of zero.\n"},
  {"SetThreshold", PyvtkImageDifference_SetThreshold, METH_VARARGS,
   "V.SetThreshold(int)\nC++: virtual void SetThreshold(int _arg)\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {"GetThreshold", PyvtkImageDifference_GetThreshold, METH_VARARGS,
   "V.GetThreshold() -> int\nC++: virtual int GetThreshold()\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {"SetAllowShift", PyvtkImageDifference_SetAllowShift, METH_VARARGS,
   "V.SetAllowShift(int)\nC++: virtual void SetAllowShift(vtkTypeBool _arg)\n\nSpecify whether the comparison will allow a shift of two pixels\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {"GetAllowShift", PyvtkImageDifference_GetAllowShift, METH_VARARGS,
   "V.GetAllowShift() -> int\nC++: virtual vtkTypeBool GetAllowShift()\n\nSpecify whether the comparison will allow a shift of two pixels\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {"AllowShiftOn", PyvtkImageDifference_AllowShiftOn, METH_VARARGS,
   "V.AllowShiftOn()\nC++: virtual void AllowShiftOn()\n\nSpecify whether the comparison will allow a shift of two pixels\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {"AllowShiftOff", PyvtkImageDifference_AllowShiftOff, METH_VARARGS,
   "V.AllowShiftOff()\nC++: virtual void AllowShiftOff()\n\nSpecify whether the comparison will allow a shift of two pixels\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {"SetAveraging", PyvtkImageDifference_SetAveraging, METH_VARARGS,
   "V.SetAveraging(int)\nC++: virtual void SetAveraging(vtkTypeBool _arg)\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {"GetAveraging", PyvtkImageDifference_GetAveraging, METH_VARARGS,
   "V.GetAveraging() -> int\nC++: virtual vtkTypeBool GetAveraging()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {"AveragingOn", PyvtkImageDifference_AveragingOn, METH_VARARGS,
   "V.AveragingOn()\nC++: virtual void AveragingOn()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {"AveragingOff", PyvtkImageDifference_AveragingOff, METH_VARARGS,
   "V.AveragingOff()\nC++: virtual void AveragingOff()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {"SetAverageThresholdFactor", PyvtkImageDifference_SetAverageThresholdFactor, METH_VARARGS,
   "V.SetAverageThresholdFactor(float)\nC++: virtual void SetAverageThresholdFactor(double _arg)\n\nWhen doing Averaging, adjust the threshold for the average by\nthis factor. Defaults to 0.5 requiring a better match\n"},
  {"GetAverageThresholdFactor", PyvtkImageDifference_GetAverageThresholdFactor, METH_VARARGS,
   "V.GetAverageThresholdFactor() -> float\nC++: virtual double GetAverageThresholdFactor()\n\nWhen doing Averaging, adjust the threshold for the average by\nthis factor. Defaults to 0.5 requiring a better match\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDifference_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageDifference", // tp_name
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
  PyvtkImageDifference_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDifference_StaticNew()
{
  return vtkImageDifference::New();
}

PyObject *PyvtkImageDifference_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDifference_Type, PyvtkImageDifference_Methods,
    "vtkImageDifference",
 &PyvtkImageDifference_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDifference_Type;

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

void PyVTKAddFile_vtkImageDifference(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDifference_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDifference", o) != 0)
  {
    Py_DECREF(o);
  }

}

