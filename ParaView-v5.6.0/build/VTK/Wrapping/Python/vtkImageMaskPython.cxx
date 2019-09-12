// python wrapper for vtkImageMask
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
#include "vtkImageMask.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMask(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageMask_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageMask_Doc =
  "vtkImageMask - Combines a mask and an image.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageMask combines a mask with an image.  Non zero mask implies\n"
  "the output pixel will be the same as the image. If a mask pixel is\n"
  "zero,  then the output pixel is set to \"MaskedValue\".  The filter\n"
  "also has the option to pass the mask through a boolean not operation\n"
  "before processing the image. This reverses the passed and replaced\n"
  "pixels. The two inputs should have the same \"WholeExtent\". The mask\n"
  "input should be unsigned char, and the image scalar type is the same\n"
  "as the output scalar type.\n\n";


static PyObject *
PyvtkImageMask_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMask::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMask::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMask *tempr = vtkImageMask::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMask *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMask::NewInstance());

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
PyvtkImageMask_SetMaskedOutputValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetMaskedOutputValue(temp0, temp1);
    }
    else
    {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskedOutputValue(temp0);
    }
    else
    {
      op->vtkImageMask::SetMaskedOutputValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaskedOutputValue(temp0, temp1);
    }
    else
    {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

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
      op->SetMaskedOutputValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMask_SetMaskedOutputValue_Methods[] = {
  {nullptr, PyvtkImageMask_SetMaskedOutputValue_s1, METH_VARARGS,
   "@iP *d"},
  {nullptr, PyvtkImageMask_SetMaskedOutputValue_s3, METH_VARARGS,
   "@dd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageMask_SetMaskedOutputValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageMask_SetMaskedOutputValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageMask_SetMaskedOutputValue_s2(self, args);
    case 3:
      return PyvtkImageMask_SetMaskedOutputValue_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskedOutputValue");
  return nullptr;
}



static PyObject *
PyvtkImageMask_GetMaskedOutputValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaskedOutputValue() :
      op->vtkImageMask::GetMaskedOutputValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskedOutputValueLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskedOutputValueLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskedOutputValueLength() :
      op->vtkImageMask::GetMaskedOutputValueLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskAlpha(temp0);
    }
    else
    {
      op->vtkImageMask::SetMaskAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlphaMinValue() :
      op->vtkImageMask::GetMaskAlphaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlphaMaxValue() :
      op->vtkImageMask::GetMaskAlphaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskAlpha() :
      op->vtkImageMask::GetMaskAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetImageInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImageInputData(temp0);
    }
    else
    {
      op->vtkImageMask::SetImageInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMaskInputData(temp0);
    }
    else
    {
      op->vtkImageMask::SetMaskInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNotMask(temp0);
    }
    else
    {
      op->vtkImageMask::SetNotMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_GetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNotMask() :
      op->vtkImageMask::GetNotMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NotMaskOn();
    }
    else
    {
      op->vtkImageMask::NotMaskOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NotMaskOff();
    }
    else
    {
      op->vtkImageMask::NotMaskOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageMask::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageMask::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMask_Methods[] = {
  {"IsTypeOf", PyvtkImageMask_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMask_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMask_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageMask\nC++: static vtkImageMask *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMask_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageMask\nC++: vtkImageMask *NewInstance()\n\n"},
  {"SetMaskedOutputValue", PyvtkImageMask_SetMaskedOutputValue, METH_VARARGS,
   "V.SetMaskedOutputValue(int, [float, ...])\nC++: void SetMaskedOutputValue(int num, double *v)\nV.SetMaskedOutputValue(float)\nC++: void SetMaskedOutputValue(double v)\nV.SetMaskedOutputValue(float, float)\nC++: void SetMaskedOutputValue(double v1, double v2)\nV.SetMaskedOutputValue(float, float, float)\nC++: void SetMaskedOutputValue(double v1, double v2, double v3)\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {"GetMaskedOutputValue", PyvtkImageMask_GetMaskedOutputValue, METH_VARARGS,
   "V.GetMaskedOutputValue() -> (float, ...)\nC++: double *GetMaskedOutputValue()\n\n"},
  {"GetMaskedOutputValueLength", PyvtkImageMask_GetMaskedOutputValueLength, METH_VARARGS,
   "V.GetMaskedOutputValueLength() -> int\nC++: int GetMaskedOutputValueLength()\n\n"},
  {"SetMaskAlpha", PyvtkImageMask_SetMaskAlpha, METH_VARARGS,
   "V.SetMaskAlpha(float)\nC++: virtual void SetMaskAlpha(double _arg)\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {"GetMaskAlphaMinValue", PyvtkImageMask_GetMaskAlphaMinValue, METH_VARARGS,
   "V.GetMaskAlphaMinValue() -> float\nC++: virtual double GetMaskAlphaMinValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {"GetMaskAlphaMaxValue", PyvtkImageMask_GetMaskAlphaMaxValue, METH_VARARGS,
   "V.GetMaskAlphaMaxValue() -> float\nC++: virtual double GetMaskAlphaMaxValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {"GetMaskAlpha", PyvtkImageMask_GetMaskAlpha, METH_VARARGS,
   "V.GetMaskAlpha() -> float\nC++: virtual double GetMaskAlpha()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {"SetImageInputData", PyvtkImageMask_SetImageInputData, METH_VARARGS,
   "V.SetImageInputData(vtkImageData)\nC++: void SetImageInputData(vtkImageData *in)\n\nSet the input to be masked.\n"},
  {"SetMaskInputData", PyvtkImageMask_SetMaskInputData, METH_VARARGS,
   "V.SetMaskInputData(vtkImageData)\nC++: void SetMaskInputData(vtkImageData *in)\n\nSet the mask to be used.\n"},
  {"SetNotMask", PyvtkImageMask_SetNotMask, METH_VARARGS,
   "V.SetNotMask(int)\nC++: virtual void SetNotMask(vtkTypeBool _arg)\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {"GetNotMask", PyvtkImageMask_GetNotMask, METH_VARARGS,
   "V.GetNotMask() -> int\nC++: virtual vtkTypeBool GetNotMask()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {"NotMaskOn", PyvtkImageMask_NotMaskOn, METH_VARARGS,
   "V.NotMaskOn()\nC++: virtual void NotMaskOn()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {"NotMaskOff", PyvtkImageMask_NotMaskOff, METH_VARARGS,
   "V.NotMaskOff()\nC++: virtual void NotMaskOff()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {"SetInput1Data", PyvtkImageMask_SetInput1Data, METH_VARARGS,
   "V.SetInput1Data(vtkDataObject)\nC++: virtual void SetInput1Data(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {"SetInput2Data", PyvtkImageMask_SetInput2Data, METH_VARARGS,
   "V.SetInput2Data(vtkDataObject)\nC++: virtual void SetInput2Data(vtkDataObject *in)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageMask_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingCorePython.vtkImageMask", // tp_name
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
  PyvtkImageMask_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMask_StaticNew()
{
  return vtkImageMask::New();
}

PyObject *PyvtkImageMask_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageMask_Type, PyvtkImageMask_Methods,
    "vtkImageMask",
 &PyvtkImageMask_StaticNew);

  PyTypeObject *pytype = &PyvtkImageMask_Type;

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

void PyVTKAddFile_vtkImageMask(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMask_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMask", o) != 0)
  {
    Py_DECREF(o);
  }

}

