// python wrapper for vtkImageShiftScale
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
#include "vtkImageShiftScale.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageShiftScale(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageShiftScale_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageShiftScale_Doc =
  "vtkImageShiftScale - shift and scale an input image\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "With vtkImageShiftScale Pixels are shifted (a constant value added)\n"
  "and then scaled (multiplied by a scalar. As a convenience, this class\n"
  "allows you to set the output scalar type similar to vtkImageCast.\n"
  "This is because shift scale operations frequently convert data types.\n\n";


static PyObject *
PyvtkImageShiftScale_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageShiftScale::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageShiftScale::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageShiftScale *tempr = vtkImageShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageShiftScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageShiftScale::NewInstance());

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
PyvtkImageShiftScale_SetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkImageShiftScale::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShift() :
      op->vtkImageShiftScale::GetShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkImageShiftScale::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkImageShiftScale::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

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
      op->vtkImageShiftScale::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImageShiftScale::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToLong();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInt();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToShort();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToChar();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageShiftScale::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_SetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampOverflow(temp0);
    }
    else
    {
      op->vtkImageShiftScale::SetClampOverflow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_GetClampOverflow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampOverflow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampOverflow() :
      op->vtkImageShiftScale::GetClampOverflow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_ClampOverflowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampOverflowOn();
    }
    else
    {
      op->vtkImageShiftScale::ClampOverflowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageShiftScale_ClampOverflowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampOverflowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageShiftScale *op = static_cast<vtkImageShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampOverflowOff();
    }
    else
    {
      op->vtkImageShiftScale::ClampOverflowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageShiftScale_Methods[] = {
  {"IsTypeOf", PyvtkImageShiftScale_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageShiftScale_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageShiftScale_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageShiftScale\nC++: static vtkImageShiftScale *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageShiftScale_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageShiftScale\nC++: vtkImageShiftScale *NewInstance()\n\n"},
  {"SetShift", PyvtkImageShiftScale_SetShift, METH_VARARGS,
   "V.SetShift(float)\nC++: virtual void SetShift(double _arg)\n\nSet/Get the shift value. This value is added to each pixel\n"},
  {"GetShift", PyvtkImageShiftScale_GetShift, METH_VARARGS,
   "V.GetShift() -> float\nC++: virtual double GetShift()\n\nSet/Get the shift value. This value is added to each pixel\n"},
  {"SetScale", PyvtkImageShiftScale_SetScale, METH_VARARGS,
   "V.SetScale(float)\nC++: virtual void SetScale(double _arg)\n\nSet/Get the scale value. Each pixel is multiplied by this value.\n"},
  {"GetScale", PyvtkImageShiftScale_GetScale, METH_VARARGS,
   "V.GetScale() -> float\nC++: virtual double GetScale()\n\nSet/Get the scale value. Each pixel is multiplied by this value.\n"},
  {"SetOutputScalarType", PyvtkImageShiftScale_SetOutputScalarType, METH_VARARGS,
   "V.SetOutputScalarType(int)\nC++: virtual void SetOutputScalarType(int _arg)\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"GetOutputScalarType", PyvtkImageShiftScale_GetOutputScalarType, METH_VARARGS,
   "V.GetOutputScalarType() -> int\nC++: virtual int GetOutputScalarType()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImageShiftScale_SetOutputScalarTypeToDouble, METH_VARARGS,
   "V.SetOutputScalarTypeToDouble()\nC++: void SetOutputScalarTypeToDouble()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImageShiftScale_SetOutputScalarTypeToFloat, METH_VARARGS,
   "V.SetOutputScalarTypeToFloat()\nC++: void SetOutputScalarTypeToFloat()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToLong", PyvtkImageShiftScale_SetOutputScalarTypeToLong, METH_VARARGS,
   "V.SetOutputScalarTypeToLong()\nC++: void SetOutputScalarTypeToLong()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedLong()\nC++: void SetOutputScalarTypeToUnsignedLong()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToInt", PyvtkImageShiftScale_SetOutputScalarTypeToInt, METH_VARARGS,
   "V.SetOutputScalarTypeToInt()\nC++: void SetOutputScalarTypeToInt()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedInt()\nC++: void SetOutputScalarTypeToUnsignedInt()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToShort", PyvtkImageShiftScale_SetOutputScalarTypeToShort, METH_VARARGS,
   "V.SetOutputScalarTypeToShort()\nC++: void SetOutputScalarTypeToShort()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedShort()\nC++: void SetOutputScalarTypeToUnsignedShort()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToChar", PyvtkImageShiftScale_SetOutputScalarTypeToChar, METH_VARARGS,
   "V.SetOutputScalarTypeToChar()\nC++: void SetOutputScalarTypeToChar()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkImageShiftScale_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "V.SetOutputScalarTypeToUnsignedChar()\nC++: void SetOutputScalarTypeToUnsignedChar()\n\nSet the desired output scalar type. The result of the shift and\nscale operations is cast to the type specified.\n"},
  {"SetClampOverflow", PyvtkImageShiftScale_SetClampOverflow, METH_VARARGS,
   "V.SetClampOverflow(int)\nC++: virtual void SetClampOverflow(vtkTypeBool _arg)\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default, ClampOverflow is off.\n"},
  {"GetClampOverflow", PyvtkImageShiftScale_GetClampOverflow, METH_VARARGS,
   "V.GetClampOverflow() -> int\nC++: virtual vtkTypeBool GetClampOverflow()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default, ClampOverflow is off.\n"},
  {"ClampOverflowOn", PyvtkImageShiftScale_ClampOverflowOn, METH_VARARGS,
   "V.ClampOverflowOn()\nC++: virtual void ClampOverflowOn()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default, ClampOverflow is off.\n"},
  {"ClampOverflowOff", PyvtkImageShiftScale_ClampOverflowOff, METH_VARARGS,
   "V.ClampOverflowOff()\nC++: virtual void ClampOverflowOff()\n\nWhen the ClampOverflow flag is on, the data is thresholded so\nthat the output value does not exceed the max or min of the data\ntype. Clamping is safer because otherwise you might invoke\nundefined behavior (and may crash) if the type conversion is out\nof range of the data type.  On the other hand, clamping is\nslower. By default, ClampOverflow is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageShiftScale_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageShiftScale", // tp_name
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
  PyvtkImageShiftScale_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageShiftScale_StaticNew()
{
  return vtkImageShiftScale::New();
}

PyObject *PyvtkImageShiftScale_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageShiftScale_Type, PyvtkImageShiftScale_Methods,
    "vtkImageShiftScale",
 &PyvtkImageShiftScale_StaticNew);

  PyTypeObject *pytype = &PyvtkImageShiftScale_Type;

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

void PyVTKAddFile_vtkImageShiftScale(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageShiftScale_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageShiftScale", o) != 0)
  {
    Py_DECREF(o);
  }

}

