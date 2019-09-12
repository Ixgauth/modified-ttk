// python wrapper for vtkCubeSource
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
#include "vtkCubeSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCubeSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCubeSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkCubeSource_Doc =
  "vtkCubeSource - create a polygonal representation of a cube\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCubeSource creates a cube centered at origin. The cube is\n"
  "represented with four-sided polygons. It is possible to specify the\n"
  "length, width, and height of the cube independently.\n\n";


static PyObject *
PyvtkCubeSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCubeSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCubeSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCubeSource *tempr = vtkCubeSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCubeSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCubeSource::NewInstance());

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
PyvtkCubeSource_SetXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXLength(temp0);
    }
    else
    {
      op->vtkCubeSource::SetXLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXLengthMinValue() :
      op->vtkCubeSource::GetXLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXLengthMaxValue() :
      op->vtkCubeSource::GetXLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXLength() :
      op->vtkCubeSource::GetXLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_SetYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYLength(temp0);
    }
    else
    {
      op->vtkCubeSource::SetYLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYLengthMinValue() :
      op->vtkCubeSource::GetYLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYLengthMaxValue() :
      op->vtkCubeSource::GetYLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYLength() :
      op->vtkCubeSource::GetYLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_SetZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZLength(temp0);
    }
    else
    {
      op->vtkCubeSource::SetZLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZLengthMinValue() :
      op->vtkCubeSource::GetZLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZLengthMaxValue() :
      op->vtkCubeSource::GetZLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZLength() :
      op->vtkCubeSource::GetZLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCubeSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkCubeSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCubeSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkCubeSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkCubeSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCubeSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkCubeSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkCubeSource::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCubeSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkCubeSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkCubeSource_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkCubeSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkCubeSource::GetBounds(temp0);
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
PyvtkCubeSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkCubeSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCubeSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCubeSource *op = static_cast<vtkCubeSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCubeSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCubeSource_Methods[] = {
  {"IsTypeOf", PyvtkCubeSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCubeSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCubeSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCubeSource\nC++: static vtkCubeSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCubeSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCubeSource\nC++: vtkCubeSource *NewInstance()\n\n"},
  {"SetXLength", PyvtkCubeSource_SetXLength, METH_VARARGS,
   "V.SetXLength(float)\nC++: virtual void SetXLength(double _arg)\n\nSet the length of the cube in the x-direction.\n"},
  {"GetXLengthMinValue", PyvtkCubeSource_GetXLengthMinValue, METH_VARARGS,
   "V.GetXLengthMinValue() -> float\nC++: virtual double GetXLengthMinValue()\n\nSet the length of the cube in the x-direction.\n"},
  {"GetXLengthMaxValue", PyvtkCubeSource_GetXLengthMaxValue, METH_VARARGS,
   "V.GetXLengthMaxValue() -> float\nC++: virtual double GetXLengthMaxValue()\n\nSet the length of the cube in the x-direction.\n"},
  {"GetXLength", PyvtkCubeSource_GetXLength, METH_VARARGS,
   "V.GetXLength() -> float\nC++: virtual double GetXLength()\n\nSet the length of the cube in the x-direction.\n"},
  {"SetYLength", PyvtkCubeSource_SetYLength, METH_VARARGS,
   "V.SetYLength(float)\nC++: virtual void SetYLength(double _arg)\n\nSet the length of the cube in the y-direction.\n"},
  {"GetYLengthMinValue", PyvtkCubeSource_GetYLengthMinValue, METH_VARARGS,
   "V.GetYLengthMinValue() -> float\nC++: virtual double GetYLengthMinValue()\n\nSet the length of the cube in the y-direction.\n"},
  {"GetYLengthMaxValue", PyvtkCubeSource_GetYLengthMaxValue, METH_VARARGS,
   "V.GetYLengthMaxValue() -> float\nC++: virtual double GetYLengthMaxValue()\n\nSet the length of the cube in the y-direction.\n"},
  {"GetYLength", PyvtkCubeSource_GetYLength, METH_VARARGS,
   "V.GetYLength() -> float\nC++: virtual double GetYLength()\n\nSet the length of the cube in the y-direction.\n"},
  {"SetZLength", PyvtkCubeSource_SetZLength, METH_VARARGS,
   "V.SetZLength(float)\nC++: virtual void SetZLength(double _arg)\n\nSet the length of the cube in the z-direction.\n"},
  {"GetZLengthMinValue", PyvtkCubeSource_GetZLengthMinValue, METH_VARARGS,
   "V.GetZLengthMinValue() -> float\nC++: virtual double GetZLengthMinValue()\n\nSet the length of the cube in the z-direction.\n"},
  {"GetZLengthMaxValue", PyvtkCubeSource_GetZLengthMaxValue, METH_VARARGS,
   "V.GetZLengthMaxValue() -> float\nC++: virtual double GetZLengthMaxValue()\n\nSet the length of the cube in the z-direction.\n"},
  {"GetZLength", PyvtkCubeSource_GetZLength, METH_VARARGS,
   "V.GetZLength() -> float\nC++: virtual double GetZLength()\n\nSet the length of the cube in the z-direction.\n"},
  {"SetCenter", PyvtkCubeSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkCubeSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the cube.\n"},
  {"SetBounds", PyvtkCubeSource_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(const double bounds[6])\n\nConvenience methods allows creation of cube by specifying\nbounding box.\n"},
  {"GetBounds", PyvtkCubeSource_GetBounds, METH_VARARGS,
   "V.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nConvenience methods allows creation of cube by specifying\nbounding box.\n"},
  {"SetOutputPointsPrecision", PyvtkCubeSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkCubeSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCubeSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkCubeSource", // tp_name
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
  PyvtkCubeSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCubeSource_StaticNew()
{
  return vtkCubeSource::New();
}

PyObject *PyvtkCubeSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCubeSource_Type, PyvtkCubeSource_Methods,
    "vtkCubeSource",
 &PyvtkCubeSource_StaticNew);

  PyTypeObject *pytype = &PyvtkCubeSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCubeSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCubeSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCubeSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

