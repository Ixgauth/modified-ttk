// python wrapper for vtkImageThreshold
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
#include "vtkImageThreshold.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageThreshold(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageThreshold_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageThreshold_Doc =
  "vtkImageThreshold - Flexible threshold\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageThreshold can do binary or continuous thresholding for lower,\n"
  "upper or a range of data.  The output data type may be different than\n"
  "the output, but defaults to the same type.\n\n";


static PyObject *
PyvtkImageThreshold_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageThreshold::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageThreshold::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageThreshold *tempr = vtkImageThreshold::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageThreshold *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageThreshold::NewInstance());

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
PyvtkImageThreshold_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByUpper(temp0);
    }
    else
    {
      op->vtkImageThreshold::ThresholdByUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByLower(temp0);
    }
    else
    {
      op->vtkImageThreshold::ThresholdByLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkImageThreshold::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceIn(temp0);
    }
    else
    {
      op->vtkImageThreshold::SetReplaceIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceIn() :
      op->vtkImageThreshold::GetReplaceIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOn();
    }
    else
    {
      op->vtkImageThreshold::ReplaceInOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceInOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOff();
    }
    else
    {
      op->vtkImageThreshold::ReplaceInOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInValue(temp0);
    }
    else
    {
      op->vtkImageThreshold::SetInValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInValue() :
      op->vtkImageThreshold::GetInValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceOut(temp0);
    }
    else
    {
      op->vtkImageThreshold::SetReplaceOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceOut() :
      op->vtkImageThreshold::GetReplaceOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOn();
    }
    else
    {
      op->vtkImageThreshold::ReplaceOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_ReplaceOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOff();
    }
    else
    {
      op->vtkImageThreshold::ReplaceOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutValue(temp0);
    }
    else
    {
      op->vtkImageThreshold::SetOutValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImageThreshold::GetOutValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkImageThreshold::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkImageThreshold::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

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
      op->vtkImageThreshold::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageThreshold::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToLong();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInt();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToShort();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToChar();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToSignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToSignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToSignedChar();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToSignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThreshold_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThreshold *op = static_cast<vtkImageThreshold *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageThreshold::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageThreshold_Methods[] = {
  {"IsTypeOf", PyvtkImageThreshold_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageThreshold_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageThreshold_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageThreshold\nC++: static vtkImageThreshold *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageThreshold_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageThreshold\nC++: vtkImageThreshold *NewInstance()\n\n"},
  {"ThresholdByUpper", PyvtkImageThreshold_ThresholdByUpper, METH_VARARGS,
   "V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double thresh)\n\nThe values greater than or equal to the value match.\n"},
  {"ThresholdByLower", PyvtkImageThreshold_ThresholdByLower, METH_VARARGS,
   "V.ThresholdByLower(float)\nC++: void ThresholdByLower(double thresh)\n\nThe values less than or equal to the value match.\n"},
  {"ThresholdBetween", PyvtkImageThreshold_ThresholdBetween, METH_VARARGS,
   "V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nThe values in a range (inclusive) match\n"},
  {"SetReplaceIn", PyvtkImageThreshold_SetReplaceIn, METH_VARARGS,
   "V.SetReplaceIn(int)\nC++: virtual void SetReplaceIn(vtkTypeBool _arg)\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {"GetReplaceIn", PyvtkImageThreshold_GetReplaceIn, METH_VARARGS,
   "V.GetReplaceIn() -> int\nC++: virtual vtkTypeBool GetReplaceIn()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {"ReplaceInOn", PyvtkImageThreshold_ReplaceInOn, METH_VARARGS,
   "V.ReplaceInOn()\nC++: virtual void ReplaceInOn()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {"ReplaceInOff", PyvtkImageThreshold_ReplaceInOff, METH_VARARGS,
   "V.ReplaceInOff()\nC++: virtual void ReplaceInOff()\n\nDetermines whether to replace the pixel in range with InValue\n"},
  {"SetInValue", PyvtkImageThreshold_SetInValue, METH_VARARGS,
   "V.SetInValue(float)\nC++: void SetInValue(double val)\n\nReplace the in range pixels with this value.\n"},
  {"GetInValue", PyvtkImageThreshold_GetInValue, METH_VARARGS,
   "V.GetInValue() -> float\nC++: virtual double GetInValue()\n\nReplace the in range pixels with this value.\n"},
  {"SetReplaceOut", PyvtkImageThreshold_SetReplaceOut, METH_VARARGS,
   "V.SetReplaceOut(int)\nC++: virtual void SetReplaceOut(vtkTypeBool _arg)\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {"GetReplaceOut", PyvtkImageThreshold_GetReplaceOut, METH_VARARGS,
   "V.GetReplaceOut() -> int\nC++: virtual vtkTypeBool GetReplaceOut()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {"ReplaceOutOn", PyvtkImageThreshold_ReplaceOutOn, METH_VARARGS,
   "V.ReplaceOutOn()\nC++: virtual void ReplaceOutOn()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {"ReplaceOutOff", PyvtkImageThreshold_ReplaceOutOff, METH_VARARGS,
   "V.ReplaceOutOff()\nC++: virtual void ReplaceOutOff()\n\nDetermines whether to replace the pixel out of range with\nOutValue\n"},
  {"SetOutValue", PyvtkImageThreshold_SetOutValue, METH_VARARGS,
   "V.SetOutValue(float)\nC++: void SetOutValue(double val)\n\nReplace the in range pixels with this value.\n"},
  {"GetOutValue", PyvtkImageThreshold_GetOutValue, METH_VARARGS,
   "V.GetOutValue() -> float\nC++: virtual double GetOutValue()\n\nReplace the in range pixels with this value.\n"},
  {"GetUpperThreshold", PyvtkImageThreshold_GetUpperThreshold, METH_VARARGS,
   "V.GetUpperThreshold() -> float\nC++: virtual double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"GetLowerThreshold", PyvtkImageThreshold_GetLowerThreshold, METH_VARARGS,
   "V.GetLowerThreshold() -> float\nC++: virtual double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"SetOutputScalarType", PyvtkImageThreshold_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the desired output scalar type to cast to\n"},
  {"GetOutputScalarType", PyvtkImageThreshold_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageThreshold_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageThreshold_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToLong", PyvtkImageThreshold_SetOutputScalarTypeToLong, METH_VARARGS,
   "V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToInt", PyvtkImageThreshold_SetOutputScalarTypeToInt, METH_VARARGS,
   "V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToShort", PyvtkImageThreshold_SetOutputScalarTypeToShort, METH_VARARGS,
   "V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToChar", PyvtkImageThreshold_SetOutputScalarTypeToChar, METH_VARARGS,
   "V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToSignedChar", PyvtkImageThreshold_SetOutputScalarTypeToSignedChar, METH_VARARGS,
   "V.SetOutputScalarTypeToSignedChar()\nC++: void SetOutputScalarTypeToSignedChar()\n\nSet the desired output scalar type to cast to\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkImageThreshold_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type to cast to\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageThreshold_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageThreshold", // tp_name
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
  PyvtkImageThreshold_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageThreshold_StaticNew()
{
  return vtkImageThreshold::New();
}

PyObject *PyvtkImageThreshold_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageThreshold_Type, PyvtkImageThreshold_Methods,
    "vtkImageThreshold",
 &PyvtkImageThreshold_StaticNew);

  PyTypeObject *pytype = &PyvtkImageThreshold_Type;

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

void PyVTKAddFile_vtkImageThreshold(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageThreshold_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageThreshold", o) != 0)
  {
    Py_DECREF(o);
  }

}

