// python wrapper for vtkImageConvolve
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
#include "vtkImageConvolve.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageConvolve(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageConvolve_ClassNew(); }

#ifndef DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkThreadedImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageConvolve_Doc =
  "vtkImageConvolve - Convolution of an image with a kernel.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageConvolve convolves the image with a 3D NxNxN kernel or a 2D\n"
  "NxN kernel.  The output image is cropped to the same size as the\n"
  "input.\n\n";


static PyObject *
PyvtkImageConvolve_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageConvolve::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageConvolve::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageConvolve *tempr = vtkImageConvolve::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageConvolve *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageConvolve::NewInstance());

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
PyvtkImageConvolve_GetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetKernelSize() :
      op->vtkImageConvolve::GetKernelSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel3x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 25;
  double temp0[25];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel5x5(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 49;
  double temp0[49];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel7x7(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel3x3() :
      op->vtkImageConvolve::GetKernel3x3());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel3x3_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

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
      op->GetKernel3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel3x3(temp0);
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
PyvtkImageConvolve_GetKernel3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel3x3_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel3x3_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel3x3");
  return nullptr;
}



static PyObject *
PyvtkImageConvolve_GetKernel5x5_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 25;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel5x5() :
      op->vtkImageConvolve::GetKernel5x5());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel5x5_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 25;
  double temp0[25];
  double save0[25];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel5x5(temp0);
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
PyvtkImageConvolve_GetKernel5x5(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel5x5_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel5x5_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel5x5");
  return nullptr;
}



static PyObject *
PyvtkImageConvolve_GetKernel7x7_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 49;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel7x7() :
      op->vtkImageConvolve::GetKernel7x7());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel7x7_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 49;
  double temp0[49];
  double save0[49];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel7x7(temp0);
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
PyvtkImageConvolve_GetKernel7x7(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel7x7_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel7x7_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel7x7");
  return nullptr;
}



static PyObject *
PyvtkImageConvolve_SetKernel3x3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 27;
  double temp0[27];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel3x3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel3x3x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel5x5x5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 125;
  double temp0[125];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel5x5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel5x5x5(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_SetKernel7x7x7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 343;
  double temp0[343];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetKernel7x7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::SetKernel7x7x7(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageConvolve_GetKernel3x3x3_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 27;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel3x3x3() :
      op->vtkImageConvolve::GetKernel3x3x3());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel3x3x3_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel3x3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 27;
  double temp0[27];
  double save0[27];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel3x3x3(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel3x3x3(temp0);
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
PyvtkImageConvolve_GetKernel3x3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel3x3x3_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel3x3x3_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel3x3x3");
  return nullptr;
}



static PyObject *
PyvtkImageConvolve_GetKernel5x5x5_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  size_t sizer = 125;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetKernel5x5x5() :
      op->vtkImageConvolve::GetKernel5x5x5());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel5x5x5_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel5x5x5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 125;
  double temp0[125];
  double save0[125];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel5x5x5(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel5x5x5(temp0);
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
PyvtkImageConvolve_GetKernel5x5x5(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel5x5x5_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel5x5x5_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel5x5x5");
  return nullptr;
}



static PyObject *
PyvtkImageConvolve_GetKernel7x7x7_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 343;
    double *tempr = (ap.IsBound() ?
      op->GetKernel7x7x7() :
      op->vtkImageConvolve::GetKernel7x7x7());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageConvolve_GetKernel7x7x7_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel7x7x7");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageConvolve *op = static_cast<vtkImageConvolve *>(vp);

  const size_t size0 = 343;
  double temp0[343];
  double save0[343];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetKernel7x7x7(temp0);
    }
    else
    {
      op->vtkImageConvolve::GetKernel7x7x7(temp0);
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
PyvtkImageConvolve_GetKernel7x7x7(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageConvolve_GetKernel7x7x7_s1(self, args);
    case 1:
      return PyvtkImageConvolve_GetKernel7x7x7_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKernel7x7x7");
  return nullptr;
}


static PyMethodDef PyvtkImageConvolve_Methods[] = {
  {"IsTypeOf", PyvtkImageConvolve_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {"IsA", PyvtkImageConvolve_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {"SafeDownCast", PyvtkImageConvolve_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageConvolve\nC++: static vtkImageConvolve *SafeDownCast(vtkObjectBase *o)\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {"NewInstance", PyvtkImageConvolve_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageConvolve\nC++: vtkImageConvolve *NewInstance()\n\nConstruct an instance of vtkImageConvolve filter.\n"},
  {"GetKernelSize", PyvtkImageConvolve_GetKernelSize, METH_VARARGS,
   "V.GetKernelSize() -> (int, int, int)\nC++: int *GetKernelSize()\n\n"},
  {"SetKernel3x3", PyvtkImageConvolve_SetKernel3x3, METH_VARARGS,
   "V.SetKernel3x3((float, float, float, float, float, float, float,\n    float, float))\nC++: void SetKernel3x3(const double kernel[9])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {"SetKernel5x5", PyvtkImageConvolve_SetKernel5x5, METH_VARARGS,
   "V.SetKernel5x5((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float))\nC++: void SetKernel5x5(const double kernel[25])\n\nSet the kernel to be a given 3x3 or 5x5 or 7x7 kernel.\n"},
  {"SetKernel7x7", PyvtkImageConvolve_SetKernel7x7, METH_VARARGS,
   "V.SetKernel7x7((float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float))\nC++: void SetKernel7x7(const double kernel[49])\n\n"},
  {"GetKernel3x3", PyvtkImageConvolve_GetKernel3x3, METH_VARARGS,
   "V.GetKernel3x3() -> (float, float, float, float, float, float,\n    float, float, float)\nC++: double *GetKernel3x3()\nV.GetKernel3x3([float, float, float, float, float, float, float,\n    float, float])\nC++: void GetKernel3x3(double kernel[9])\n\nReturn an array that contains the kernel.\n"},
  {"GetKernel5x5", PyvtkImageConvolve_GetKernel5x5, METH_VARARGS,
   "V.GetKernel5x5() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float)\nC++: double *GetKernel5x5()\nV.GetKernel5x5([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float])\nC++: void GetKernel5x5(double kernel[25])\n\nReturn an array that contains the kernel.\n"},
  {"GetKernel7x7", PyvtkImageConvolve_GetKernel7x7, METH_VARARGS,
   "V.GetKernel7x7() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float)\nC++: double *GetKernel7x7()\nV.GetKernel7x7([float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float])\nC++: void GetKernel7x7(double kernel[49])\n\n"},
  {"SetKernel3x3x3", PyvtkImageConvolve_SetKernel3x3x3, METH_VARARGS,
   "V.SetKernel3x3x3((float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float))\nC++: void SetKernel3x3x3(const double kernel[27])\n\nSet the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.\n"},
  {"SetKernel5x5x5", PyvtkImageConvolve_SetKernel5x5x5, METH_VARARGS,
   "V.SetKernel5x5x5((float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float))\nC++: void SetKernel5x5x5(const double kernel[125])\n\n"},
  {"SetKernel7x7x7", PyvtkImageConvolve_SetKernel7x7x7, METH_VARARGS,
   "\n\n"},
  {"GetKernel3x3x3", PyvtkImageConvolve_GetKernel3x3x3, METH_VARARGS,
   "V.GetKernel3x3x3() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float)\nC++: double *GetKernel3x3x3()\nV.GetKernel3x3x3([float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float])\nC++: void GetKernel3x3x3(double kernel[27])\n\nReturn an array that contains the kernel\n"},
  {"GetKernel5x5x5", PyvtkImageConvolve_GetKernel5x5x5, METH_VARARGS,
   "V.GetKernel5x5x5() -> (float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float)\nC++: double *GetKernel5x5x5()\n\n"},
  {"GetKernel7x7x7", PyvtkImageConvolve_GetKernel7x7x7, METH_VARARGS,
   "V.GetKernel7x7x7() -> (float, ...)\nC++: double *GetKernel7x7x7()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageConvolve_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingGeneralPython.vtkImageConvolve", // tp_name
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
  PyvtkImageConvolve_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageConvolve_StaticNew()
{
  return vtkImageConvolve::New();
}

PyObject *PyvtkImageConvolve_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageConvolve_Type, PyvtkImageConvolve_Methods,
    "vtkImageConvolve",
 &PyvtkImageConvolve_StaticNew);

  PyTypeObject *pytype = &PyvtkImageConvolve_Type;

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

void PyVTKAddFile_vtkImageConvolve(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageConvolve_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageConvolve", o) != 0)
  {
    Py_DECREF(o);
  }

}

