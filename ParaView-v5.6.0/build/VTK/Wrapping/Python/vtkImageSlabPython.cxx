// python wrapper for vtkImageSlab
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
#include "vtkImageSlab.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSlab(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageSlab_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageSlab_Doc =
  "vtkImageSlab - combine image slices to form a slab image\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageSlab will combine all of the slices of an image to create a\n"
  "single slice.  The slices can be combined with the following\n"
  "operations: averaging, summation, minimum, maximum. If you require an\n"
  "arbitrary angle of projection, you can use vtkImageReslice.@par\n"
  "Thanks: Thanks to David Gobbi for contributing this class to VTK.\n\n";


static PyObject *
PyvtkImageSlab_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSlab::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlab::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSlab *tempr = vtkImageSlab::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSlab *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlab::NewInstance());

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
PyvtkImageSlab_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkImageSlab::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSlab::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSlab::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToX();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToY();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToZ();
    }
    else
    {
      op->vtkImageSlab::SetOrientationToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSlab::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetSliceRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRange(temp0, temp1);
    }
    else
    {
      op->vtkImageSlab::SetSliceRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRange(temp0);
    }
    else
    {
      op->vtkImageSlab::SetSliceRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSlab_SetSliceRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageSlab_SetSliceRange_s1(self, args);
    case 1:
      return PyvtkImageSlab_SetSliceRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRange");
  return nullptr;
}



static PyObject *
PyvtkImageSlab_GetSliceRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRange() :
      op->vtkImageSlab::GetSliceRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageSlab::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkImageSlab::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkImageSlab::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMin();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMax();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToMean();
    }
    else
    {
      op->vtkImageSlab::SetOperationToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOperationToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToSum();
    }
    else
    {
      op->vtkImageSlab::SetOperationToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageSlab::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOperationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOperationAsString() :
      op->vtkImageSlab::GetOperationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTrapezoidIntegration(temp0);
    }
    else
    {
      op->vtkImageSlab::SetTrapezoidIntegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrapezoidIntegrationOn();
    }
    else
    {
      op->vtkImageSlab::TrapezoidIntegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_TrapezoidIntegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TrapezoidIntegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TrapezoidIntegrationOff();
    }
    else
    {
      op->vtkImageSlab::TrapezoidIntegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetTrapezoidIntegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrapezoidIntegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTrapezoidIntegration() :
      op->vtkImageSlab::GetTrapezoidIntegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMultiSliceOutput(temp0);
    }
    else
    {
      op->vtkImageSlab::SetMultiSliceOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiSliceOutputOn();
    }
    else
    {
      op->vtkImageSlab::MultiSliceOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_MultiSliceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiSliceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultiSliceOutputOff();
    }
    else
    {
      op->vtkImageSlab::MultiSliceOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetMultiSliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMultiSliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMultiSliceOutput() :
      op->vtkImageSlab::GetMultiSliceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_SetOutputScalarTypeToInputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInputScalarType();
    }
    else
    {
      op->vtkImageSlab::SetOutputScalarTypeToInputScalarType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlab_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlab *op = static_cast<vtkImageSlab *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageSlab::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSlab_Methods[] = {
  {"IsTypeOf", PyvtkImageSlab_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSlab_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSlab_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageSlab\nC++: static vtkImageSlab *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSlab_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageSlab\nC++: vtkImageSlab *NewInstance()\n\n"},
  {"SetOrientation", PyvtkImageSlab_SetOrientation, METH_VARARGS,
   "V.SetOrientation(int)\nC++: virtual void SetOrientation(int _arg)\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"GetOrientationMinValue", PyvtkImageSlab_GetOrientationMinValue, METH_VARARGS,
   "V.GetOrientationMinValue() -> int\nC++: virtual int GetOrientationMinValue()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"GetOrientationMaxValue", PyvtkImageSlab_GetOrientationMaxValue, METH_VARARGS,
   "V.GetOrientationMaxValue() -> int\nC++: virtual int GetOrientationMaxValue()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"SetOrientationToX", PyvtkImageSlab_SetOrientationToX, METH_VARARGS,
   "V.SetOrientationToX()\nC++: void SetOrientationToX()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"SetOrientationToY", PyvtkImageSlab_SetOrientationToY, METH_VARARGS,
   "V.SetOrientationToY()\nC++: void SetOrientationToY()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"SetOrientationToZ", PyvtkImageSlab_SetOrientationToZ, METH_VARARGS,
   "V.SetOrientationToZ()\nC++: void SetOrientationToZ()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"GetOrientation", PyvtkImageSlab_GetOrientation, METH_VARARGS,
   "V.GetOrientation() -> int\nC++: virtual int GetOrientation()\n\nSet the slice direction: zero for x, 1 for y, 2 for z. The\ndefault is the Z direction.\n"},
  {"SetSliceRange", PyvtkImageSlab_SetSliceRange, METH_VARARGS,
   "V.SetSliceRange(int, int)\nC++: void SetSliceRange(int, int)\nV.SetSliceRange((int, int))\nC++: void SetSliceRange(int a[2])\n\n"},
  {"GetSliceRange", PyvtkImageSlab_GetSliceRange, METH_VARARGS,
   "V.GetSliceRange() -> (int, int)\nC++: int *GetSliceRange()\n\n"},
  {"SetOperation", PyvtkImageSlab_SetOperation, METH_VARARGS,
   "V.SetOperation(int)\nC++: virtual void SetOperation(int _arg)\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"GetOperationMinValue", PyvtkImageSlab_GetOperationMinValue, METH_VARARGS,
   "V.GetOperationMinValue() -> int\nC++: virtual int GetOperationMinValue()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"GetOperationMaxValue", PyvtkImageSlab_GetOperationMaxValue, METH_VARARGS,
   "V.GetOperationMaxValue() -> int\nC++: virtual int GetOperationMaxValue()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"SetOperationToMin", PyvtkImageSlab_SetOperationToMin, METH_VARARGS,
   "V.SetOperationToMin()\nC++: void SetOperationToMin()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"SetOperationToMax", PyvtkImageSlab_SetOperationToMax, METH_VARARGS,
   "V.SetOperationToMax()\nC++: void SetOperationToMax()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"SetOperationToMean", PyvtkImageSlab_SetOperationToMean, METH_VARARGS,
   "V.SetOperationToMean()\nC++: void SetOperationToMean()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"SetOperationToSum", PyvtkImageSlab_SetOperationToSum, METH_VARARGS,
   "V.SetOperationToSum()\nC++: void SetOperationToSum()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"GetOperation", PyvtkImageSlab_GetOperation, METH_VARARGS,
   "V.GetOperation() -> int\nC++: virtual int GetOperation()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"GetOperationAsString", PyvtkImageSlab_GetOperationAsString, METH_VARARGS,
   "V.GetOperationAsString() -> string\nC++: const char *GetOperationAsString()\n\nSet the operation to use when combining slices.  The choices are\n\"Mean\", \"Sum\", \"Min\", \"Max\".  The default is \"Mean\".\n"},
  {"SetTrapezoidIntegration", PyvtkImageSlab_SetTrapezoidIntegration, METH_VARARGS,
   "V.SetTrapezoidIntegration(int)\nC++: virtual void SetTrapezoidIntegration(vtkTypeBool _arg)\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {"TrapezoidIntegrationOn", PyvtkImageSlab_TrapezoidIntegrationOn, METH_VARARGS,
   "V.TrapezoidIntegrationOn()\nC++: virtual void TrapezoidIntegrationOn()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {"TrapezoidIntegrationOff", PyvtkImageSlab_TrapezoidIntegrationOff, METH_VARARGS,
   "V.TrapezoidIntegrationOff()\nC++: virtual void TrapezoidIntegrationOff()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {"GetTrapezoidIntegration", PyvtkImageSlab_GetTrapezoidIntegration, METH_VARARGS,
   "V.GetTrapezoidIntegration() -> int\nC++: virtual vtkTypeBool GetTrapezoidIntegration()\n\nUse trapezoid integration for slab computation.  This weighs the\nfirst and last slices by half when doing sum and mean, as\ncompared to the default midpoint integration that weighs all\nslices equally. It is off by default.\n"},
  {"SetMultiSliceOutput", PyvtkImageSlab_SetMultiSliceOutput, METH_VARARGS,
   "V.SetMultiSliceOutput(int)\nC++: virtual void SetMultiSliceOutput(vtkTypeBool _arg)\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {"MultiSliceOutputOn", PyvtkImageSlab_MultiSliceOutputOn, METH_VARARGS,
   "V.MultiSliceOutputOn()\nC++: virtual void MultiSliceOutputOn()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {"MultiSliceOutputOff", PyvtkImageSlab_MultiSliceOutputOff, METH_VARARGS,
   "V.MultiSliceOutputOff()\nC++: virtual void MultiSliceOutputOff()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {"GetMultiSliceOutput", PyvtkImageSlab_GetMultiSliceOutput, METH_VARARGS,
   "V.GetMultiSliceOutput() -> int\nC++: virtual vtkTypeBool GetMultiSliceOutput()\n\nTurn on multi-slice output.  Each slice of the output will be a\nprojection through the specified range of input slices, e.g. if\nthe SliceRange is [0,3] then slice 'i' of the output will be a\nprojection through slices 'i' through '3+i' of the input. This\nflag is off by default.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageSlab_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageSlab_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {"SetOutputScalarTypeToInputScalarType", PyvtkImageSlab_SetOutputScalarTypeToInputScalarType, METH_VARARGS,
   "V.SetOutputScalarTypeToInputScalarType()\nC++: void SetOutputScalarTypeToInputScalarType()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {"GetOutputScalarType", PyvtkImageSlab_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the output scalar type to float or double, to avoid potential\noverflow when doing a summation operation. The default is to use\nthe scalar type of the input data, and clamp the output to the\nrange of the input scalar type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageSlab_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageSlab", // tp_name
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
  PyvtkImageSlab_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSlab_StaticNew()
{
  return vtkImageSlab::New();
}

PyObject *PyvtkImageSlab_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageSlab_Type, PyvtkImageSlab_Methods,
    "vtkImageSlab",
 &PyvtkImageSlab_StaticNew);

  PyTypeObject *pytype = &PyvtkImageSlab_Type;

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

void PyVTKAddFile_vtkImageSlab(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSlab_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSlab", o) != 0)
  {
    Py_DECREF(o);
  }

}

