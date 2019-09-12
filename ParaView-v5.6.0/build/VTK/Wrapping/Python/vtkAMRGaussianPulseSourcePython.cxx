// python wrapper for vtkAMRGaussianPulseSource
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
#include "vtkAMRGaussianPulseSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRGaussianPulseSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRGaussianPulseSource_ClassNew(); }

#ifndef DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkOverlappingAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
#endif

static const char *PyvtkAMRGaussianPulseSource_Doc =
  "vtkAMRGaussianPulseSource -  A source that generates sample AMR data\nwith gaussian pulse field.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "The user\n"
  " can control the refinement ratio as well as the pulse attributes\n"
  "such as\n"
  " the pulse origin, length and amplitude.\n\n"
  "@sa\n"
  " vtkOverlappingAMR\n\n";


static PyObject *
PyvtkAMRGaussianPulseSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRGaussianPulseSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRGaussianPulseSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRGaussianPulseSource *tempr = vtkAMRGaussianPulseSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRGaussianPulseSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRGaussianPulseSource::NewInstance());

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
PyvtkAMRGaussianPulseSource_SetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimension(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLevels(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetNumberOfLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRefinementRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefinementRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRefinementRatio(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetRefinementRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetRootSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootSpacing(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetRootSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

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
      op->SetPulseOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseOrigin");
  return nullptr;
}



static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPulseOrigin() :
      op->vtkAMRGaussianPulseSource::GetPulseOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetXPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetYPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPulseOrigin(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetZPulseOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

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
      op->SetPulseWidth(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseWidth(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s1(self, args);
    case 1:
      return PyvtkAMRGaussianPulseSource_SetPulseWidth_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPulseWidth");
  return nullptr;
}



static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPulseWidth() :
      op->vtkAMRGaussianPulseSource::GetPulseWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetXPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetXPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetYPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetYPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetZPulseWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPulseWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPulseWidth(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetZPulseWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_SetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPulseAmplitude(temp0);
    }
    else
    {
      op->vtkAMRGaussianPulseSource::SetPulseAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRGaussianPulseSource_GetPulseAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPulseAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRGaussianPulseSource *op = static_cast<vtkAMRGaussianPulseSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPulseAmplitude() :
      op->vtkAMRGaussianPulseSource::GetPulseAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRGaussianPulseSource_Methods[] = {
  {"IsTypeOf", PyvtkAMRGaussianPulseSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRGaussianPulseSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRGaussianPulseSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRGaussianPulseSource\nC++: static vtkAMRGaussianPulseSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRGaussianPulseSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRGaussianPulseSource\nC++: vtkAMRGaussianPulseSource *NewInstance()\n\n"},
  {"SetDimension", PyvtkAMRGaussianPulseSource_SetDimension, METH_VARARGS,
   "V.SetDimension(int)\nC++: virtual void SetDimension(int _arg)\n\nSets the dimension of the AMR dataset to generate\n"},
  {"SetNumberOfLevels", PyvtkAMRGaussianPulseSource_SetNumberOfLevels, METH_VARARGS,
   "V.SetNumberOfLevels(int)\nC++: virtual void SetNumberOfLevels(int _arg)\n\nSets the number of levels to generate\n"},
  {"SetRefinementRatio", PyvtkAMRGaussianPulseSource_SetRefinementRatio, METH_VARARGS,
   "V.SetRefinementRatio(int)\nC++: void SetRefinementRatio(int r)\n\nSet the refinement ratio\n"},
  {"SetRootSpacing", PyvtkAMRGaussianPulseSource_SetRootSpacing, METH_VARARGS,
   "V.SetRootSpacing(float)\nC++: void SetRootSpacing(double h0)\n\nSet the root spacing\n"},
  {"SetPulseOrigin", PyvtkAMRGaussianPulseSource_SetPulseOrigin, METH_VARARGS,
   "V.SetPulseOrigin(float, float, float)\nC++: void SetPulseOrigin(double, double, double)\nV.SetPulseOrigin((float, float, float))\nC++: void SetPulseOrigin(double a[3])\n\n"},
  {"GetPulseOrigin", PyvtkAMRGaussianPulseSource_GetPulseOrigin, METH_VARARGS,
   "V.GetPulseOrigin() -> (float, float, float)\nC++: double *GetPulseOrigin()\n\n"},
  {"SetXPulseOrigin", PyvtkAMRGaussianPulseSource_SetXPulseOrigin, METH_VARARGS,
   "V.SetXPulseOrigin(float)\nC++: void SetXPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {"SetYPulseOrigin", PyvtkAMRGaussianPulseSource_SetYPulseOrigin, METH_VARARGS,
   "V.SetYPulseOrigin(float)\nC++: void SetYPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {"SetZPulseOrigin", PyvtkAMRGaussianPulseSource_SetZPulseOrigin, METH_VARARGS,
   "V.SetZPulseOrigin(float)\nC++: void SetZPulseOrigin(double f)\n\nSet & Get macro for the pulse origin\n"},
  {"SetPulseWidth", PyvtkAMRGaussianPulseSource_SetPulseWidth, METH_VARARGS,
   "V.SetPulseWidth(float, float, float)\nC++: void SetPulseWidth(double, double, double)\nV.SetPulseWidth((float, float, float))\nC++: void SetPulseWidth(double a[3])\n\n"},
  {"GetPulseWidth", PyvtkAMRGaussianPulseSource_GetPulseWidth, METH_VARARGS,
   "V.GetPulseWidth() -> (float, float, float)\nC++: double *GetPulseWidth()\n\n"},
  {"SetXPulseWidth", PyvtkAMRGaussianPulseSource_SetXPulseWidth, METH_VARARGS,
   "V.SetXPulseWidth(float)\nC++: void SetXPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {"SetYPulseWidth", PyvtkAMRGaussianPulseSource_SetYPulseWidth, METH_VARARGS,
   "V.SetYPulseWidth(float)\nC++: void SetYPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {"SetZPulseWidth", PyvtkAMRGaussianPulseSource_SetZPulseWidth, METH_VARARGS,
   "V.SetZPulseWidth(float)\nC++: void SetZPulseWidth(double f)\n\nSet & Get macro for the pulse width\n"},
  {"SetPulseAmplitude", PyvtkAMRGaussianPulseSource_SetPulseAmplitude, METH_VARARGS,
   "V.SetPulseAmplitude(float)\nC++: virtual void SetPulseAmplitude(double _arg)\n\nSet & Get macro for the pulse amplitude\n"},
  {"GetPulseAmplitude", PyvtkAMRGaussianPulseSource_GetPulseAmplitude, METH_VARARGS,
   "V.GetPulseAmplitude() -> float\nC++: virtual double GetPulseAmplitude()\n\nSet & Get macro for the pulse amplitude\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRGaussianPulseSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersAMRPython.vtkAMRGaussianPulseSource", // tp_name
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
  PyvtkAMRGaussianPulseSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRGaussianPulseSource_StaticNew()
{
  return vtkAMRGaussianPulseSource::New();
}

PyObject *PyvtkAMRGaussianPulseSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRGaussianPulseSource_Type, PyvtkAMRGaussianPulseSource_Methods,
    "vtkAMRGaussianPulseSource",
 &PyvtkAMRGaussianPulseSource_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRGaussianPulseSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOverlappingAMRAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRGaussianPulseSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRGaussianPulseSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRGaussianPulseSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

