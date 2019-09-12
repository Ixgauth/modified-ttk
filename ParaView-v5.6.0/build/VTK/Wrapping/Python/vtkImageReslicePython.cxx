// python wrapper for vtkImageReslice
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
#include "vtkImageReslice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageReslice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageReslice_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageReslice_Doc =
  "vtkImageReslice - Reslices a volume along a new set of axes.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageReslice is the swiss-army-knife of image geometry filters: It\n"
  "can permute, rotate, flip, scale, resample, deform, and pad image\n"
  "data in any combination with reasonably high efficiency.  Simple\n"
  "operations such as permutation, resampling and padding are done with\n"
  "similar efficiently to the specialized vtkImagePermute,\n"
  "vtkImageResample, and vtkImagePad filters.  There are a number of\n"
  "tasks that vtkImageReslice is well suited for:\n\n"
  "1) Application of simple rotations, scales, and translations to an\n"
  "image. It is often a good idea to use vtkImageChangeInformation to\n"
  "center the image first, so that scales and rotations occur around the\n"
  "center rather than around the lower-left corner of the image.\n\n"
  "2) Resampling of one data set to match the voxel sampling of a second\n"
  "data set via the SetInformationInput() method, e.g. for the purpose\n"
  "of comparing two images or combining two images. A transformation,\n"
  "either linear or nonlinear, can be applied at the same time via the\n"
  "SetResliceTransform method if the two images are not in the same\n"
  "coordinate space.\n\n"
  "3) Extraction of slices from an image volume.  The most convenient\n"
  "way to do this is to use SetResliceAxesDirectionCosines() to specify\n"
  "the orientation of the slice.  The direction cosines give the x, y,\n"
  "and z axes for the output volume.  The method\n"
  "SetOutputDimensionality(2) is used to specify that want to output a\n"
  "slice rather than a volume.  The SetResliceAxesOrigin() command is\n"
  "used to provide an (x,y,z) point that the slice will pass through.\n"
  "You can use both the ResliceAxes and the ResliceTransform at the same\n"
  "time, in order to extract slices from a volume that you have applied\n"
  "a transformation to.\n"
  "@warning\n"
  "This filter is very inefficient if the output X dimension is 1.\n"
  "@sa\n"
  "vtkAbstractTransform vtkMatrix4x4\n\n";


static PyObject *
PyvtkImageReslice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageReslice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageReslice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageReslice *tempr = vtkImageReslice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageReslice::NewInstance());

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
PyvtkImageReslice_SetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetResliceAxes(temp0);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetResliceAxes() :
      op->vtkImageReslice::GetResliceAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->SetResliceAxesDirectionCosines(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetResliceAxesDirectionCosines(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetResliceAxesDirectionCosines(temp0);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxesDirectionCosines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesDirectionCosines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s1(self, args);
    case 3:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s2(self, args);
    case 1:
      return PyvtkImageReslice_SetResliceAxesDirectionCosines_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetResliceAxesDirectionCosines");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetResliceAxesDirectionCosines(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReslice::GetResliceAxesDirectionCosines(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  double save0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetResliceAxesDirectionCosines(temp0);
    }
    else
    {
      op->vtkImageReslice::GetResliceAxesDirectionCosines(temp0);
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
PyvtkImageReslice_GetResliceAxesDirectionCosines_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetResliceAxesDirectionCosines() :
      op->vtkImageReslice::GetResliceAxesDirectionCosines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesDirectionCosines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s1(self, args);
    case 1:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s2(self, args);
    case 0:
      return PyvtkImageReslice_GetResliceAxesDirectionCosines_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetResliceAxesDirectionCosines");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetResliceAxesOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxesOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetResliceAxesOrigin(temp0);
    }
    else
    {
      op->vtkImageReslice::SetResliceAxesOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetResliceAxesOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReslice_SetResliceAxesOrigin_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetResliceAxesOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetResliceAxesOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetResliceAxesOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetResliceAxesOrigin(temp0);
    }
    else
    {
      op->vtkImageReslice::GetResliceAxesOrigin(temp0);
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
PyvtkImageReslice_GetResliceAxesOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxesOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetResliceAxesOrigin() :
      op->vtkImageReslice::GetResliceAxesOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_GetResliceAxesOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageReslice_GetResliceAxesOrigin_s1(self, args);
    case 0:
      return PyvtkImageReslice_GetResliceAxesOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetResliceAxesOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_SetResliceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetResliceTransform(temp0);
    }
    else
    {
      op->vtkImageReslice::SetResliceTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetResliceTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetResliceTransform() :
      op->vtkImageReslice::GetResliceTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInformationInput(temp0);
    }
    else
    {
      op->vtkImageReslice::SetInformationInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInformationInput() :
      op->vtkImageReslice::GetInformationInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetTransformInputSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformInputSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformInputSampling(temp0);
    }
    else
    {
      op->vtkImageReslice::SetTransformInputSampling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_TransformInputSamplingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformInputSamplingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformInputSamplingOn();
    }
    else
    {
      op->vtkImageReslice::TransformInputSamplingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_TransformInputSamplingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformInputSamplingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformInputSamplingOff();
    }
    else
    {
      op->vtkImageReslice::TransformInputSamplingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetTransformInputSampling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformInputSampling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTransformInputSampling() :
      op->vtkImageReslice::GetTransformInputSampling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetAutoCropOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCropOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoCropOutput(temp0);
    }
    else
    {
      op->vtkImageReslice::SetAutoCropOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_AutoCropOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCropOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCropOutputOn();
    }
    else
    {
      op->vtkImageReslice::AutoCropOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_AutoCropOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCropOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCropOutputOff();
    }
    else
    {
      op->vtkImageReslice::AutoCropOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetAutoCropOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCropOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoCropOutput() :
      op->vtkImageReslice::GetAutoCropOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWrap(temp0);
    }
    else
    {
      op->vtkImageReslice::SetWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWrap() :
      op->vtkImageReslice::GetWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_WrapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOn();
    }
    else
    {
      op->vtkImageReslice::WrapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_WrapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WrapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WrapOff();
    }
    else
    {
      op->vtkImageReslice::WrapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMirror(temp0);
    }
    else
    {
      op->vtkImageReslice::SetMirror(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMirror() :
      op->vtkImageReslice::GetMirror());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_MirrorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MirrorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MirrorOn();
    }
    else
    {
      op->vtkImageReslice::MirrorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_MirrorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MirrorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MirrorOff();
    }
    else
    {
      op->vtkImageReslice::MirrorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkImageReslice::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageReslice::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkImageReslice::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkImageReslice::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBorderThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderThickness(temp0);
    }
    else
    {
      op->vtkImageReslice::SetBorderThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetBorderThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBorderThickness() :
      op->vtkImageReslice::GetBorderThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkImageReslice::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMinValue() :
      op->vtkImageReslice::GetInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMaxValue() :
      op->vtkImageReslice::GetInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkImageReslice::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearestNeighbor();
    }
    else
    {
      op->vtkImageReslice::SetInterpolationModeToNearestNeighbor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkImageReslice::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkImageReslice::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationModeAsString() :
      op->vtkImageReslice::GetInterpolationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkImageReslice::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkImageReslice::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabMode(temp0);
    }
    else
    {
      op->vtkImageReslice::SetSlabMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabModeMinValue() :
      op->vtkImageReslice::GetSlabModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabModeMaxValue() :
      op->vtkImageReslice::GetSlabModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabMode() :
      op->vtkImageReslice::GetSlabMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabModeToMin();
    }
    else
    {
      op->vtkImageReslice::SetSlabModeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabModeToMax();
    }
    else
    {
      op->vtkImageReslice::SetSlabModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabModeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabModeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabModeToMean();
    }
    else
    {
      op->vtkImageReslice::SetSlabModeToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabModeToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabModeToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabModeToSum();
    }
    else
    {
      op->vtkImageReslice::SetSlabModeToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSlabModeAsString() :
      op->vtkImageReslice::GetSlabModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabNumberOfSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabNumberOfSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabNumberOfSlices(temp0);
    }
    else
    {
      op->vtkImageReslice::SetSlabNumberOfSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabNumberOfSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabNumberOfSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabNumberOfSlices() :
      op->vtkImageReslice::GetSlabNumberOfSlices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabTrapezoidIntegration(temp0);
    }
    else
    {
      op->vtkImageReslice::SetSlabTrapezoidIntegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SlabTrapezoidIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlabTrapezoidIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlabTrapezoidIntegrationOn();
    }
    else
    {
      op->vtkImageReslice::SlabTrapezoidIntegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SlabTrapezoidIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SlabTrapezoidIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SlabTrapezoidIntegrationOff();
    }
    else
    {
      op->vtkImageReslice::SlabTrapezoidIntegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabTrapezoidIntegration() :
      op->vtkImageReslice::GetSlabTrapezoidIntegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetSlabSliceSpacingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabSliceSpacingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabSliceSpacingFraction(temp0);
    }
    else
    {
      op->vtkImageReslice::SetSlabSliceSpacingFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetSlabSliceSpacingFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabSliceSpacingFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabSliceSpacingFraction() :
      op->vtkImageReslice::GetSlabSliceSpacingFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOptimization(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOptimization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetOptimization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptimization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOptimization() :
      op->vtkImageReslice::GetOptimization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_OptimizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizationOn();
    }
    else
    {
      op->vtkImageReslice::OptimizationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_OptimizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizationOff();
    }
    else
    {
      op->vtkImageReslice::OptimizationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarShift(temp0);
    }
    else
    {
      op->vtkImageReslice::SetScalarShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetScalarShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarShift() :
      op->vtkImageReslice::GetScalarShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarScale(temp0);
    }
    else
    {
      op->vtkImageReslice::SetScalarScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetScalarScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarScale() :
      op->vtkImageReslice::GetScalarScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageReslice::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageReslice::SetBackgroundColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkImageReslice::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageReslice_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkImageReslice::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetBackgroundLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundLevel(temp0);
    }
    else
    {
      op->vtkImageReslice::SetBackgroundLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetBackgroundLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundLevel() :
      op->vtkImageReslice::GetBackgroundLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReslice::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReslice_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageReslice::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputSpacingToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacingToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacingToDefault();
    }
    else
    {
      op->vtkImageReslice::SetOutputSpacingToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageReslice::SetOutputOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOutputOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageReslice_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkImageReslice::GetOutputOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputOriginToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOriginToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOriginToDefault();
    }
    else
    {
      op->vtkImageReslice::SetOutputOriginToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageReslice::SetOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtent(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOutputExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageReslice_SetOutputExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageReslice_SetOutputExtent_s1(self, args);
    case 1:
      return PyvtkImageReslice_SetOutputExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputExtent");
  return nullptr;
}



static PyObject *
PyvtkImageReslice_GetOutputExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputExtent() :
      op->vtkImageReslice::GetOutputExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputExtentToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputExtentToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputExtentToDefault();
    }
    else
    {
      op->vtkImageReslice::SetOutputExtentToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetOutputDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensionality(temp0);
    }
    else
    {
      op->vtkImageReslice::SetOutputDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetOutputDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDimensionality() :
      op->vtkImageReslice::GetOutputDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageReslice::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_ReportReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkGarbageCollector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGarbageCollector"))
  {
    if (ap.IsBound())
    {
      op->ReportReferences(temp0);
    }
    else
    {
      op->vtkImageReslice::ReportReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageReslice::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageReslice::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageReslice::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageReslice::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

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
      op->vtkImageReslice::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageReslice::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetGenerateStencilOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateStencilOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateStencilOutput(temp0);
    }
    else
    {
      op->vtkImageReslice::SetGenerateStencilOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetGenerateStencilOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateStencilOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateStencilOutput() :
      op->vtkImageReslice::GetGenerateStencilOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GenerateStencilOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateStencilOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateStencilOutputOn();
    }
    else
    {
      op->vtkImageReslice::GenerateStencilOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GenerateStencilOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateStencilOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateStencilOutputOff();
    }
    else
    {
      op->vtkImageReslice::GenerateStencilOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetStencilOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetStencilOutputPort() :
      op->vtkImageReslice::GetStencilOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_GetStencilOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencilOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencilOutput() :
      op->vtkImageReslice::GetStencilOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageReslice_SetStencilOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageReslice *op = static_cast<vtkImageReslice *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilOutput(temp0);
    }
    else
    {
      op->vtkImageReslice::SetStencilOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageReslice_Methods[] = {
  {"IsTypeOf", PyvtkImageReslice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageReslice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageReslice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageReslice\nC++: static vtkImageReslice *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageReslice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageReslice\nC++: vtkImageReslice *NewInstance()\n\n"},
  {"SetResliceAxes", PyvtkImageReslice_SetResliceAxes, METH_VARARGS,
   "V.SetResliceAxes(vtkMatrix4x4)\nC++: virtual void SetResliceAxes(vtkMatrix4x4 *)\n\nThis method is used to set up the axes for the output voxels. The\noutput Spacing, Origin, and Extent specify the locations of the\nvoxels within the coordinate system defined by the axes. The\nResliceAxes are used most often to permute the data, e.g. to\nextract ZY or XZ slices of a volume as 2D XY images.\n\nThe first column of the matrix specifies the x-axis vector (the\nfourth element must be set to zero), the second column specifies\nthe y-axis, and the third column the z-axis.  The fourth column\nis the origin of the axes (the fourth element must be set to\none).\n\nAn alternative to SetResliceAxes() is to use\nSetResliceAxesDirectionCosines() to set the directions of the\naxes and SetResliceAxesOrigin() to set the origin of the axes.\n"},
  {"GetResliceAxes", PyvtkImageReslice_GetResliceAxes, METH_VARARGS,
   "V.GetResliceAxes() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetResliceAxes()\n\nThis method is used to set up the axes for the output voxels. The\noutput Spacing, Origin, and Extent specify the locations of the\nvoxels within the coordinate system defined by the axes. The\nResliceAxes are used most often to permute the data, e.g. to\nextract ZY or XZ slices of a volume as 2D XY images.\n\nThe first column of the matrix specifies the x-axis vector (the\nfourth element must be set to zero), the second column specifies\nthe y-axis, and the third column the z-axis.  The fourth column\nis the origin of the axes (the fourth element must be set to\none).\n\nAn alternative to SetResliceAxes() is to use\nSetResliceAxesDirectionCosines() to set the directions of the\naxes and SetResliceAxesOrigin() to set the origin of the axes.\n"},
  {"SetResliceAxesDirectionCosines", PyvtkImageReslice_SetResliceAxesDirectionCosines, METH_VARARGS,
   "V.SetResliceAxesDirectionCosines(float, float, float, float,\n    float, float, float, float, float)\nC++: void SetResliceAxesDirectionCosines(double x0, double x1,\n    double x2, double y0, double y1, double y2, double z0,\n    double z1, double z2)\nV.SetResliceAxesDirectionCosines((float, float, float), (float,\n    float, float), (float, float, float))\nC++: void SetResliceAxesDirectionCosines(const double x[3],\n    const double y[3], const double z[3])\nV.SetResliceAxesDirectionCosines((float, float, float, float,\n    float, float, float, float, float))\nC++: void SetResliceAxesDirectionCosines(const double xyz[9])\n\nSpecify the direction cosines for the ResliceAxes (i.e. the first\nthree elements of each of the first three columns of the\nResliceAxes matrix).  This will modify the current ResliceAxes\nmatrix, or create a new matrix if none exists.\n"},
  {"GetResliceAxesDirectionCosines", PyvtkImageReslice_GetResliceAxesDirectionCosines, METH_VARARGS,
   "V.GetResliceAxesDirectionCosines([float, float, float], [float,\n    float, float], [float, float, float])\nC++: void GetResliceAxesDirectionCosines(double x[3], double y[3],\n     double z[3])\nV.GetResliceAxesDirectionCosines([float, float, float, float,\n    float, float, float, float, float])\nC++: void GetResliceAxesDirectionCosines(double xyz[9])\nV.GetResliceAxesDirectionCosines() -> (float, float, float, float,\n     float, float, float, float, float)\nC++: double *GetResliceAxesDirectionCosines()\n\nSpecify the direction cosines for the ResliceAxes (i.e. the first\nthree elements of each of the first three columns of the\nResliceAxes matrix).  This will modify the current ResliceAxes\nmatrix, or create a new matrix if none exists.\n"},
  {"SetResliceAxesOrigin", PyvtkImageReslice_SetResliceAxesOrigin, METH_VARARGS,
   "V.SetResliceAxesOrigin(float, float, float)\nC++: void SetResliceAxesOrigin(double x, double y, double z)\nV.SetResliceAxesOrigin((float, float, float))\nC++: void SetResliceAxesOrigin(const double xyz[3])\n\nSpecify the origin for the ResliceAxes (i.e. the first three\nelements of the final column of the ResliceAxes matrix). This\nwill modify the current ResliceAxes matrix, or create new matrix\nif none exists.\n"},
  {"GetResliceAxesOrigin", PyvtkImageReslice_GetResliceAxesOrigin, METH_VARARGS,
   "V.GetResliceAxesOrigin([float, float, float])\nC++: void GetResliceAxesOrigin(double xyz[3])\nV.GetResliceAxesOrigin() -> (float, float, float)\nC++: double *GetResliceAxesOrigin()\n\nSpecify the origin for the ResliceAxes (i.e. the first three\nelements of the final column of the ResliceAxes matrix). This\nwill modify the current ResliceAxes matrix, or create new matrix\nif none exists.\n"},
  {"SetResliceTransform", PyvtkImageReslice_SetResliceTransform, METH_VARARGS,
   "V.SetResliceTransform(vtkAbstractTransform)\nC++: virtual void SetResliceTransform(vtkAbstractTransform *)\n\nSet a transform to be applied to the resampling grid that has\nbeen defined via the ResliceAxes and the output Origin, Spacing\nand Extent.  Note that applying a transform to the resampling\ngrid (which lies in the output coordinate system) is equivalent\nto applying the inverse of that transform to the input volume. \nNonlinear transforms such as vtkGridTransform and\nvtkThinPlateSplineTransform can be used here.\n"},
  {"GetResliceTransform", PyvtkImageReslice_GetResliceTransform, METH_VARARGS,
   "V.GetResliceTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetResliceTransform()\n\nSet a transform to be applied to the resampling grid that has\nbeen defined via the ResliceAxes and the output Origin, Spacing\nand Extent.  Note that applying a transform to the resampling\ngrid (which lies in the output coordinate system) is equivalent\nto applying the inverse of that transform to the input volume. \nNonlinear transforms such as vtkGridTransform and\nvtkThinPlateSplineTransform can be used here.\n"},
  {"SetInformationInput", PyvtkImageReslice_SetInformationInput, METH_VARARGS,
   "V.SetInformationInput(vtkImageData)\nC++: virtual void SetInformationInput(vtkImageData *)\n\nSet a vtkImageData from which the default Spacing, Origin, and\nWholeExtent of the output will be copied.  The spacing, origin,\nand extent will be permuted according to the ResliceAxes.  Any\nvalues set via SetOutputSpacing, SetOutputOrigin, and\nSetOutputExtent will override these values.  By default, the\nSpacing, Origin, and WholeExtent of the Input are used.\n"},
  {"GetInformationInput", PyvtkImageReslice_GetInformationInput, METH_VARARGS,
   "V.GetInformationInput() -> vtkImageData\nC++: virtual vtkImageData *GetInformationInput()\n\nSet a vtkImageData from which the default Spacing, Origin, and\nWholeExtent of the output will be copied.  The spacing, origin,\nand extent will be permuted according to the ResliceAxes.  Any\nvalues set via SetOutputSpacing, SetOutputOrigin, and\nSetOutputExtent will override these values.  By default, the\nSpacing, Origin, and WholeExtent of the Input are used.\n"},
  {"SetTransformInputSampling", PyvtkImageReslice_SetTransformInputSampling, METH_VARARGS,
   "V.SetTransformInputSampling(int)\nC++: virtual void SetTransformInputSampling(vtkTypeBool _arg)\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {"TransformInputSamplingOn", PyvtkImageReslice_TransformInputSamplingOn, METH_VARARGS,
   "V.TransformInputSamplingOn()\nC++: virtual void TransformInputSamplingOn()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {"TransformInputSamplingOff", PyvtkImageReslice_TransformInputSamplingOff, METH_VARARGS,
   "V.TransformInputSamplingOff()\nC++: virtual void TransformInputSamplingOff()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {"GetTransformInputSampling", PyvtkImageReslice_GetTransformInputSampling, METH_VARARGS,
   "V.GetTransformInputSampling() -> int\nC++: virtual vtkTypeBool GetTransformInputSampling()\n\nSpecify whether to transform the spacing, origin and extent of\nthe Input (or the InformationInput) according to the direction\ncosines and origin of the ResliceAxes before applying them as the\ndefault output spacing, origin and extent (default: On).\n"},
  {"SetAutoCropOutput", PyvtkImageReslice_SetAutoCropOutput, METH_VARARGS,
   "V.SetAutoCropOutput(int)\nC++: virtual void SetAutoCropOutput(vtkTypeBool _arg)\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {"AutoCropOutputOn", PyvtkImageReslice_AutoCropOutputOn, METH_VARARGS,
   "V.AutoCropOutputOn()\nC++: virtual void AutoCropOutputOn()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {"AutoCropOutputOff", PyvtkImageReslice_AutoCropOutputOff, METH_VARARGS,
   "V.AutoCropOutputOff()\nC++: virtual void AutoCropOutputOff()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {"GetAutoCropOutput", PyvtkImageReslice_GetAutoCropOutput, METH_VARARGS,
   "V.GetAutoCropOutput() -> int\nC++: virtual vtkTypeBool GetAutoCropOutput()\n\nTurn this on if you want to guarantee that the extent of the\noutput will be large enough to ensure that none of the data will\nbe cropped (default: Off).\n"},
  {"SetWrap", PyvtkImageReslice_SetWrap, METH_VARARGS,
   "V.SetWrap(int)\nC++: virtual void SetWrap(vtkTypeBool _arg)\n\nTurn on wrap-pad feature (default: Off).\n"},
  {"GetWrap", PyvtkImageReslice_GetWrap, METH_VARARGS,
   "V.GetWrap() -> int\nC++: virtual vtkTypeBool GetWrap()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {"WrapOn", PyvtkImageReslice_WrapOn, METH_VARARGS,
   "V.WrapOn()\nC++: virtual void WrapOn()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {"WrapOff", PyvtkImageReslice_WrapOff, METH_VARARGS,
   "V.WrapOff()\nC++: virtual void WrapOff()\n\nTurn on wrap-pad feature (default: Off).\n"},
  {"SetMirror", PyvtkImageReslice_SetMirror, METH_VARARGS,
   "V.SetMirror(int)\nC++: virtual void SetMirror(vtkTypeBool _arg)\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {"GetMirror", PyvtkImageReslice_GetMirror, METH_VARARGS,
   "V.GetMirror() -> int\nC++: virtual vtkTypeBool GetMirror()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {"MirrorOn", PyvtkImageReslice_MirrorOn, METH_VARARGS,
   "V.MirrorOn()\nC++: virtual void MirrorOn()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {"MirrorOff", PyvtkImageReslice_MirrorOff, METH_VARARGS,
   "V.MirrorOff()\nC++: virtual void MirrorOff()\n\nTurn on mirror-pad feature (default: Off). This will override the\nwrap-pad.\n"},
  {"SetBorder", PyvtkImageReslice_SetBorder, METH_VARARGS,
   "V.SetBorder(int)\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {"GetBorder", PyvtkImageReslice_GetBorder, METH_VARARGS,
   "V.GetBorder() -> int\nC++: virtual vtkTypeBool GetBorder()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {"BorderOn", PyvtkImageReslice_BorderOn, METH_VARARGS,
   "V.BorderOn()\nC++: virtual void BorderOn()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {"BorderOff", PyvtkImageReslice_BorderOff, METH_VARARGS,
   "V.BorderOff()\nC++: virtual void BorderOff()\n\nExtend the apparent input border by a half voxel (default: On).\nThis changes how interpolation is handled at the borders of the\ninput image: if the center of an output voxel is beyond the edge\nof the input image, but is within a half voxel width of the edge\n(using the input voxel width), then the value of the output voxel\nis calculated as if the input's edge voxels were duplicated past\nthe edges of the input. This has no effect if Mirror or Wrap are\non.\n"},
  {"SetBorderThickness", PyvtkImageReslice_SetBorderThickness, METH_VARARGS,
   "V.SetBorderThickness(float)\nC++: virtual void SetBorderThickness(double _arg)\n\n"},
  {"GetBorderThickness", PyvtkImageReslice_GetBorderThickness, METH_VARARGS,
   "V.GetBorderThickness() -> float\nC++: virtual double GetBorderThickness()\n\n"},
  {"SetInterpolationMode", PyvtkImageReslice_SetInterpolationMode, METH_VARARGS,
   "V.SetInterpolationMode(int)\nC++: virtual void SetInterpolationMode(int _arg)\n\nSet interpolation mode (default: nearest neighbor).\n"},
  {"GetInterpolationModeMinValue", PyvtkImageReslice_GetInterpolationModeMinValue, METH_VARARGS,
   "V.GetInterpolationModeMinValue() -> int\nC++: virtual int GetInterpolationModeMinValue()\n\n"},
  {"GetInterpolationModeMaxValue", PyvtkImageReslice_GetInterpolationModeMaxValue, METH_VARARGS,
   "V.GetInterpolationModeMaxValue() -> int\nC++: virtual int GetInterpolationModeMaxValue()\n\n"},
  {"GetInterpolationMode", PyvtkImageReslice_GetInterpolationMode, METH_VARARGS,
   "V.GetInterpolationMode() -> int\nC++: virtual int GetInterpolationMode()\n\n"},
  {"SetInterpolationModeToNearestNeighbor", PyvtkImageReslice_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   "V.SetInterpolationModeToNearestNeighbor()\nC++: void SetInterpolationModeToNearestNeighbor()\n\n"},
  {"SetInterpolationModeToLinear", PyvtkImageReslice_SetInterpolationModeToLinear, METH_VARARGS,
   "V.SetInterpolationModeToLinear()\nC++: void SetInterpolationModeToLinear()\n\n"},
  {"SetInterpolationModeToCubic", PyvtkImageReslice_SetInterpolationModeToCubic, METH_VARARGS,
   "V.SetInterpolationModeToCubic()\nC++: void SetInterpolationModeToCubic()\n\n"},
  {"GetInterpolationModeAsString", PyvtkImageReslice_GetInterpolationModeAsString, METH_VARARGS,
   "V.GetInterpolationModeAsString() -> string\nC++: virtual const char *GetInterpolationModeAsString()\n\n"},
  {"SetInterpolator", PyvtkImageReslice_SetInterpolator, METH_VARARGS,
   "V.SetInterpolator(vtkAbstractImageInterpolator)\nC++: virtual void SetInterpolator(\n    vtkAbstractImageInterpolator *sampler)\n\nSet the interpolator to use.  The default interpolator supports\nthe Nearest, Linear, and Cubic interpolation modes.\n"},
  {"GetInterpolator", PyvtkImageReslice_GetInterpolator, METH_VARARGS,
   "V.GetInterpolator() -> vtkAbstractImageInterpolator\nC++: virtual vtkAbstractImageInterpolator *GetInterpolator()\n\nSet the interpolator to use.  The default interpolator supports\nthe Nearest, Linear, and Cubic interpolation modes.\n"},
  {"SetSlabMode", PyvtkImageReslice_SetSlabMode, METH_VARARGS,
   "V.SetSlabMode(int)\nC++: virtual void SetSlabMode(int _arg)\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"GetSlabModeMinValue", PyvtkImageReslice_GetSlabModeMinValue, METH_VARARGS,
   "V.GetSlabModeMinValue() -> int\nC++: virtual int GetSlabModeMinValue()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"GetSlabModeMaxValue", PyvtkImageReslice_GetSlabModeMaxValue, METH_VARARGS,
   "V.GetSlabModeMaxValue() -> int\nC++: virtual int GetSlabModeMaxValue()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"GetSlabMode", PyvtkImageReslice_GetSlabMode, METH_VARARGS,
   "V.GetSlabMode() -> int\nC++: virtual int GetSlabMode()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"SetSlabModeToMin", PyvtkImageReslice_SetSlabModeToMin, METH_VARARGS,
   "V.SetSlabModeToMin()\nC++: void SetSlabModeToMin()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"SetSlabModeToMax", PyvtkImageReslice_SetSlabModeToMax, METH_VARARGS,
   "V.SetSlabModeToMax()\nC++: void SetSlabModeToMax()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"SetSlabModeToMean", PyvtkImageReslice_SetSlabModeToMean, METH_VARARGS,
   "V.SetSlabModeToMean()\nC++: void SetSlabModeToMean()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"SetSlabModeToSum", PyvtkImageReslice_SetSlabModeToSum, METH_VARARGS,
   "V.SetSlabModeToSum()\nC++: void SetSlabModeToSum()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"GetSlabModeAsString", PyvtkImageReslice_GetSlabModeAsString, METH_VARARGS,
   "V.GetSlabModeAsString() -> string\nC++: virtual const char *GetSlabModeAsString()\n\nSet the slab mode, for generating thick slices. The default is\nMean. If SetSlabNumberOfSlices(N) is called with N greater than\none, then each output slice will actually be a composite of N\nslices.  This method specifies the compositing mode to be used.\n"},
  {"SetSlabNumberOfSlices", PyvtkImageReslice_SetSlabNumberOfSlices, METH_VARARGS,
   "V.SetSlabNumberOfSlices(int)\nC++: virtual void SetSlabNumberOfSlices(int _arg)\n\nSet the number of slices that will be combined to create the\nslab.\n"},
  {"GetSlabNumberOfSlices", PyvtkImageReslice_GetSlabNumberOfSlices, METH_VARARGS,
   "V.GetSlabNumberOfSlices() -> int\nC++: virtual int GetSlabNumberOfSlices()\n\nSet the number of slices that will be combined to create the\nslab.\n"},
  {"SetSlabTrapezoidIntegration", PyvtkImageReslice_SetSlabTrapezoidIntegration, METH_VARARGS,
   "V.SetSlabTrapezoidIntegration(int)\nC++: virtual void SetSlabTrapezoidIntegration(vtkTypeBool _arg)\n\nUse trapezoid integration for slab computation.  All this does is\nweigh the first and last slices by half when doing sum and mean.\nIt is off by default.\n"},
  {"SlabTrapezoidIntegrationOn", PyvtkImageReslice_SlabTrapezoidIntegrationOn, METH_VARARGS,
   "V.SlabTrapezoidIntegrationOn()\nC++: virtual void SlabTrapezoidIntegrationOn()\n\nUse trapezoid integration for slab computation.  All this does is\nweigh the first and last slices by half when doing sum and mean.\nIt is off by default.\n"},
  {"SlabTrapezoidIntegrationOff", PyvtkImageReslice_SlabTrapezoidIntegrationOff, METH_VARARGS,
   "V.SlabTrapezoidIntegrationOff()\nC++: virtual void SlabTrapezoidIntegrationOff()\n\nUse trapezoid integration for slab computation.  All this does is\nweigh the first and last slices by half when doing sum and mean.\nIt is off by default.\n"},
  {"GetSlabTrapezoidIntegration", PyvtkImageReslice_GetSlabTrapezoidIntegration, METH_VARARGS,
   "V.GetSlabTrapezoidIntegration() -> int\nC++: virtual vtkTypeBool GetSlabTrapezoidIntegration()\n\nUse trapezoid integration for slab computation.  All this does is\nweigh the first and last slices by half when doing sum and mean.\nIt is off by default.\n"},
  {"SetSlabSliceSpacingFraction", PyvtkImageReslice_SetSlabSliceSpacingFraction, METH_VARARGS,
   "V.SetSlabSliceSpacingFraction(float)\nC++: virtual void SetSlabSliceSpacingFraction(double _arg)\n\nThe slab spacing as a fraction of the output slice spacing. When\none of the various slab modes is chosen, each output slice is\nproduced by generating several \"temporary\" output slices and then\ncombining them according to the slab mode.  By default, the\nspacing between these temporary slices is the Z component of the\nOutputSpacing. This method sets the spacing between these\ntemporary slices to be a fraction of the output spacing.\n"},
  {"GetSlabSliceSpacingFraction", PyvtkImageReslice_GetSlabSliceSpacingFraction, METH_VARARGS,
   "V.GetSlabSliceSpacingFraction() -> float\nC++: virtual double GetSlabSliceSpacingFraction()\n\nThe slab spacing as a fraction of the output slice spacing. When\none of the various slab modes is chosen, each output slice is\nproduced by generating several \"temporary\" output slices and then\ncombining them according to the slab mode.  By default, the\nspacing between these temporary slices is the Z component of the\nOutputSpacing. This method sets the spacing between these\ntemporary slices to be a fraction of the output spacing.\n"},
  {"SetOptimization", PyvtkImageReslice_SetOptimization, METH_VARARGS,
   "V.SetOptimization(int)\nC++: virtual void SetOptimization(vtkTypeBool _arg)\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {"GetOptimization", PyvtkImageReslice_GetOptimization, METH_VARARGS,
   "V.GetOptimization() -> int\nC++: virtual vtkTypeBool GetOptimization()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {"OptimizationOn", PyvtkImageReslice_OptimizationOn, METH_VARARGS,
   "V.OptimizationOn()\nC++: virtual void OptimizationOn()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {"OptimizationOff", PyvtkImageReslice_OptimizationOff, METH_VARARGS,
   "V.OptimizationOff()\nC++: virtual void OptimizationOff()\n\nTurn on and off optimizations (default on, they should only be\nturned off for testing purposes).\n"},
  {"SetScalarShift", PyvtkImageReslice_SetScalarShift, METH_VARARGS,
   "V.SetScalarShift(float)\nC++: virtual void SetScalarShift(double _arg)\n\nSet a value to add to all the output voxels. After a sample value\nhas been interpolated from the input image, the equation u = (v +\nScalarShift)*ScalarScale will be applied to it before it is\nwritten to the output image.  The result will always be clamped\nto the limits of the output data type.\n"},
  {"GetScalarShift", PyvtkImageReslice_GetScalarShift, METH_VARARGS,
   "V.GetScalarShift() -> float\nC++: virtual double GetScalarShift()\n\nSet a value to add to all the output voxels. After a sample value\nhas been interpolated from the input image, the equation u = (v +\nScalarShift)*ScalarScale will be applied to it before it is\nwritten to the output image.  The result will always be clamped\nto the limits of the output data type.\n"},
  {"SetScalarScale", PyvtkImageReslice_SetScalarScale, METH_VARARGS,
   "V.SetScalarScale(float)\nC++: virtual void SetScalarScale(double _arg)\n\nSet multiplication factor to apply to all the output voxels.\nAfter a sample value has been interpolated from the input image,\nthe equation u = (v + ScalarShift)*ScalarScale will be applied to\nit before it is written to the output image.  The result will\nalways be clamped to the limits of the output data type.\n"},
  {"GetScalarScale", PyvtkImageReslice_GetScalarScale, METH_VARARGS,
   "V.GetScalarScale() -> float\nC++: virtual double GetScalarScale()\n\nSet multiplication factor to apply to all the output voxels.\nAfter a sample value has been interpolated from the input image,\nthe equation u = (v + ScalarShift)*ScalarScale will be applied to\nit before it is written to the output image.  The result will\nalways be clamped to the limits of the output data type.\n"},
  {"SetOutputScalarType", PyvtkImageReslice_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the scalar type of the output to be different from the input.\nThe default value is -1, which means that the input scalar type\nwill be used to set the output scalar type.  Otherwise, this must\nbe set to one of the following types: VTK_CHAR, VTK_SIGNED_CHAR,\nVTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT, VTK_INT,\nVTK_UNSIGNED_INT, VTK_FLOAT, or VTK_DOUBLE.  Other types are not\npermitted.  If the output type is an integer type, the output\nwill be rounded and clamped to the limits of the type.\n"},
  {"GetOutputScalarType", PyvtkImageReslice_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the scalar type of the output to be different from the input.\nThe default value is -1, which means that the input scalar type\nwill be used to set the output scalar type.  Otherwise, this must\nbe set to one of the following types: VTK_CHAR, VTK_SIGNED_CHAR,\nVTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT, VTK_INT,\nVTK_UNSIGNED_INT, VTK_FLOAT, or VTK_DOUBLE.  Other types are not\npermitted.  If the output type is an integer type, the output\nwill be rounded and clamped to the limits of the type.\n"},
  {"SetBackgroundColor", PyvtkImageReslice_SetBackgroundColor, METH_VARARGS,
   "V.SetBackgroundColor(float, float, float, float)\nC++: void SetBackgroundColor(double, double, double, double)\nV.SetBackgroundColor((float, float, float, float))\nC++: void SetBackgroundColor(double a[4])\n\n"},
  {"GetBackgroundColor", PyvtkImageReslice_GetBackgroundColor, METH_VARARGS,
   "V.GetBackgroundColor() -> (float, float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {"SetBackgroundLevel", PyvtkImageReslice_SetBackgroundLevel, METH_VARARGS,
   "V.SetBackgroundLevel(float)\nC++: void SetBackgroundLevel(double v)\n\nSet background grey level (for single-component images).\n"},
  {"GetBackgroundLevel", PyvtkImageReslice_GetBackgroundLevel, METH_VARARGS,
   "V.GetBackgroundLevel() -> float\nC++: double GetBackgroundLevel()\n\nSet background grey level (for single-component images).\n"},
  {"SetOutputSpacing", PyvtkImageReslice_SetOutputSpacing, METH_VARARGS,
   "V.SetOutputSpacing(float, float, float)\nC++: virtual void SetOutputSpacing(double x, double y, double z)\nV.SetOutputSpacing((float, float, float))\nC++: virtual void SetOutputSpacing(const double a[3])\n\nSet the voxel spacing for the output data.  The default output\nspacing is the input spacing permuted through the ResliceAxes.\n"},
  {"GetOutputSpacing", PyvtkImageReslice_GetOutputSpacing, METH_VARARGS,
   "V.GetOutputSpacing() -> (float, float, float)\nC++: double *GetOutputSpacing()\n\n"},
  {"SetOutputSpacingToDefault", PyvtkImageReslice_SetOutputSpacingToDefault, METH_VARARGS,
   "V.SetOutputSpacingToDefault()\nC++: void SetOutputSpacingToDefault()\n\nSet the voxel spacing for the output data.  The default output\nspacing is the input spacing permuted through the ResliceAxes.\n"},
  {"SetOutputOrigin", PyvtkImageReslice_SetOutputOrigin, METH_VARARGS,
   "V.SetOutputOrigin(float, float, float)\nC++: virtual void SetOutputOrigin(double x, double y, double z)\nV.SetOutputOrigin((float, float, float))\nC++: virtual void SetOutputOrigin(const double a[3])\n\nSet the origin for the output data.  The default output origin is\nthe input origin permuted through the ResliceAxes.\n"},
  {"GetOutputOrigin", PyvtkImageReslice_GetOutputOrigin, METH_VARARGS,
   "V.GetOutputOrigin() -> (float, float, float)\nC++: double *GetOutputOrigin()\n\n"},
  {"SetOutputOriginToDefault", PyvtkImageReslice_SetOutputOriginToDefault, METH_VARARGS,
   "V.SetOutputOriginToDefault()\nC++: void SetOutputOriginToDefault()\n\nSet the origin for the output data.  The default output origin is\nthe input origin permuted through the ResliceAxes.\n"},
  {"SetOutputExtent", PyvtkImageReslice_SetOutputExtent, METH_VARARGS,
   "V.SetOutputExtent(int, int, int, int, int, int)\nC++: virtual void SetOutputExtent(int a, int b, int c, int d,\n    int e, int f)\nV.SetOutputExtent((int, int, int, int, int, int))\nC++: virtual void SetOutputExtent(const int a[6])\n\nSet the extent for the output data.  The default output extent is\nthe input extent permuted through the ResliceAxes.\n"},
  {"GetOutputExtent", PyvtkImageReslice_GetOutputExtent, METH_VARARGS,
   "V.GetOutputExtent() -> (int, int, int, int, int, int)\nC++: int *GetOutputExtent()\n\n"},
  {"SetOutputExtentToDefault", PyvtkImageReslice_SetOutputExtentToDefault, METH_VARARGS,
   "V.SetOutputExtentToDefault()\nC++: void SetOutputExtentToDefault()\n\nSet the extent for the output data.  The default output extent is\nthe input extent permuted through the ResliceAxes.\n"},
  {"SetOutputDimensionality", PyvtkImageReslice_SetOutputDimensionality, METH_VARARGS,
   "V.SetOutputDimensionality(int)\nC++: virtual void SetOutputDimensionality(int _arg)\n\nForce the dimensionality of the output to either 1, 2, 3 or 0\n(default: 3).  If the dimensionality is 2D, then the Z extent of\nthe output is forced to (0,0) and the Z origin of the output is\nforced to 0.0 (i.e. the output extent is confined to the xy\nplane).  If the dimensionality is 1D, the output extent is\nconfined to the x axis. For 0D, the output extent consists of a\nsingle voxel at (0,0,0).\n"},
  {"GetOutputDimensionality", PyvtkImageReslice_GetOutputDimensionality, METH_VARARGS,
   "V.GetOutputDimensionality() -> int\nC++: virtual int GetOutputDimensionality()\n\nForce the dimensionality of the output to either 1, 2, 3 or 0\n(default: 3).  If the dimensionality is 2D, then the Z extent of\nthe output is forced to (0,0) and the Z origin of the output is\nforced to 0.0 (i.e. the output extent is confined to the xy\nplane).  If the dimensionality is 1D, the output extent is\nconfined to the x axis. For 0D, the output extent consists of a\nsingle voxel at (0,0,0).\n"},
  {"GetMTime", PyvtkImageReslice_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nWhen determining the modified time of the filter, this check the\nmodified time of the transform and matrix.\n"},
  {"ReportReferences", PyvtkImageReslice_ReportReferences, METH_VARARGS,
   "V.ReportReferences(vtkGarbageCollector)\nC++: void ReportReferences(vtkGarbageCollector *) override;\n\nReport object referenced by instances of this class.\n"},
  {"SetInterpolate", PyvtkImageReslice_SetInterpolate, METH_VARARGS,
   "V.SetInterpolate(int)\nC++: void SetInterpolate(int t)\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {"InterpolateOn", PyvtkImageReslice_InterpolateOn, METH_VARARGS,
   "V.InterpolateOn()\nC++: void InterpolateOn()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {"InterpolateOff", PyvtkImageReslice_InterpolateOff, METH_VARARGS,
   "V.InterpolateOff()\nC++: void InterpolateOff()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {"GetInterpolate", PyvtkImageReslice_GetInterpolate, METH_VARARGS,
   "V.GetInterpolate() -> int\nC++: int GetInterpolate()\n\nConvenient methods for switching between nearest-neighbor and\nlinear interpolation. InterpolateOn() is equivalent to\nSetInterpolationModeToLinear() and InterpolateOff() is equivalent\nto SetInterpolationModeToNearestNeighbor() You should not use\nthese methods if you use the SetInterpolationMode methods.\n"},
  {"SetStencilData", PyvtkImageReslice_SetStencilData, METH_VARARGS,
   "V.SetStencilData(vtkImageStencilData)\nC++: void SetStencilData(vtkImageStencilData *stencil)\n\nUse a stencil to limit the calculations to a specific region of\nthe output.  Portions of the output that are 'outside' the\nstencil will be cleared to the background color.\n"},
  {"GetStencil", PyvtkImageReslice_GetStencil, METH_VARARGS,
   "V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nUse a stencil to limit the calculations to a specific region of\nthe output.  Portions of the output that are 'outside' the\nstencil will be cleared to the background color.\n"},
  {"SetGenerateStencilOutput", PyvtkImageReslice_SetGenerateStencilOutput, METH_VARARGS,
   "V.SetGenerateStencilOutput(int)\nC++: virtual void SetGenerateStencilOutput(vtkTypeBool _arg)\n\nGenerate an output stencil that defines which pixels were\ninterpolated and which pixels were out-of-bounds of the input.\n"},
  {"GetGenerateStencilOutput", PyvtkImageReslice_GetGenerateStencilOutput, METH_VARARGS,
   "V.GetGenerateStencilOutput() -> int\nC++: virtual vtkTypeBool GetGenerateStencilOutput()\n\nGenerate an output stencil that defines which pixels were\ninterpolated and which pixels were out-of-bounds of the input.\n"},
  {"GenerateStencilOutputOn", PyvtkImageReslice_GenerateStencilOutputOn, METH_VARARGS,
   "V.GenerateStencilOutputOn()\nC++: virtual void GenerateStencilOutputOn()\n\nGenerate an output stencil that defines which pixels were\ninterpolated and which pixels were out-of-bounds of the input.\n"},
  {"GenerateStencilOutputOff", PyvtkImageReslice_GenerateStencilOutputOff, METH_VARARGS,
   "V.GenerateStencilOutputOff()\nC++: virtual void GenerateStencilOutputOff()\n\nGenerate an output stencil that defines which pixels were\ninterpolated and which pixels were out-of-bounds of the input.\n"},
  {"GetStencilOutputPort", PyvtkImageReslice_GetStencilOutputPort, METH_VARARGS,
   "V.GetStencilOutputPort() -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetStencilOutputPort()\n\nGet the output stencil.\n"},
  {"GetStencilOutput", PyvtkImageReslice_GetStencilOutput, METH_VARARGS,
   "V.GetStencilOutput() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencilOutput()\n\nGet the output stencil.\n"},
  {"SetStencilOutput", PyvtkImageReslice_SetStencilOutput, METH_VARARGS,
   "V.SetStencilOutput(vtkImageStencilData)\nC++: void SetStencilOutput(vtkImageStencilData *stencil)\n\nGet the output stencil.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageReslice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageReslice", // tp_name
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
  PyvtkImageReslice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageReslice_StaticNew()
{
  return vtkImageReslice::New();
}

PyObject *PyvtkImageReslice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageReslice_Type, PyvtkImageReslice_Methods,
    "vtkImageReslice",
 &PyvtkImageReslice_StaticNew);

  PyTypeObject *pytype = &PyvtkImageReslice_Type;

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

void PyVTKAddFile_vtkImageReslice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageReslice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageReslice", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_RESLICE_NEAREST", VTK_NEAREST_INTERPOLATION },
        { "VTK_RESLICE_LINEAR", VTK_LINEAR_INTERPOLATION },
        { "VTK_RESLICE_CUBIC", VTK_CUBIC_INTERPOLATION },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

