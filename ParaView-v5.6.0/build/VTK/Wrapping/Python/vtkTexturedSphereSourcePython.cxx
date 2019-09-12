// python wrapper for vtkTexturedSphereSource
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
#include "vtkTexturedSphereSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTexturedSphereSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTexturedSphereSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkTexturedSphereSource_Doc =
  "vtkTexturedSphereSource - create a sphere centered at the origin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTexturedSphereSource creates a polygonal sphere of specified\n"
  "radius centered at the origin. The resolution (polygonal\n"
  "discretization) in both the latitude (phi) and longitude (theta)\n"
  "directions can be specified. It also is possible to create partial\n"
  "sphere by specifying maximum phi and theta angles.\n\n";


static PyObject *
PyvtkTexturedSphereSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTexturedSphereSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedSphereSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTexturedSphereSource *tempr = vtkTexturedSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedSphereSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedSphereSource::NewInstance());

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
PyvtkTexturedSphereSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkTexturedSphereSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkTexturedSphereSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkTexturedSphereSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkTexturedSphereSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaResolution(temp0);
    }
    else
    {
      op->vtkTexturedSphereSource::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMinValue() :
      op->vtkTexturedSphereSource::GetThetaResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMaxValue() :
      op->vtkTexturedSphereSource::GetThetaResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkTexturedSphereSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiResolution(temp0);
    }
    else
    {
      op->vtkTexturedSphereSource::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMinValue() :
      op->vtkTexturedSphereSource::GetPhiResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMaxValue() :
      op->vtkTexturedSphereSource::GetPhiResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkTexturedSphereSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTheta(temp0);
    }
    else
    {
      op->vtkTexturedSphereSource::SetTheta(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThetaMinValue() :
      op->vtkTexturedSphereSource::GetThetaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThetaMaxValue() :
      op->vtkTexturedSphereSource::GetThetaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTheta() :
      op->vtkTexturedSphereSource::GetTheta());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhi(temp0);
    }
    else
    {
      op->vtkTexturedSphereSource::SetPhi(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhiMinValue() :
      op->vtkTexturedSphereSource::GetPhiMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhiMaxValue() :
      op->vtkTexturedSphereSource::GetPhiMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhi() :
      op->vtkTexturedSphereSource::GetPhi());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

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
      op->vtkTexturedSphereSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedSphereSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedSphereSource *op = static_cast<vtkTexturedSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkTexturedSphereSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTexturedSphereSource_Methods[] = {
  {"IsTypeOf", PyvtkTexturedSphereSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTexturedSphereSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTexturedSphereSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTexturedSphereSource\nC++: static vtkTexturedSphereSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTexturedSphereSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTexturedSphereSource\nC++: vtkTexturedSphereSource *NewInstance()\n\n"},
  {"SetRadius", PyvtkTexturedSphereSource_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet radius of sphere.\n"},
  {"GetRadiusMinValue", PyvtkTexturedSphereSource_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet radius of sphere.\n"},
  {"GetRadiusMaxValue", PyvtkTexturedSphereSource_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet radius of sphere.\n"},
  {"GetRadius", PyvtkTexturedSphereSource_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet radius of sphere.\n"},
  {"SetThetaResolution", PyvtkTexturedSphereSource_SetThetaResolution, METH_VARARGS,
   "V.SetThetaResolution(int)\nC++: virtual void SetThetaResolution(int _arg)\n\nSet the number of points in the longitude direction.\n"},
  {"GetThetaResolutionMinValue", PyvtkTexturedSphereSource_GetThetaResolutionMinValue, METH_VARARGS,
   "V.GetThetaResolutionMinValue() -> int\nC++: virtual int GetThetaResolutionMinValue()\n\nSet the number of points in the longitude direction.\n"},
  {"GetThetaResolutionMaxValue", PyvtkTexturedSphereSource_GetThetaResolutionMaxValue, METH_VARARGS,
   "V.GetThetaResolutionMaxValue() -> int\nC++: virtual int GetThetaResolutionMaxValue()\n\nSet the number of points in the longitude direction.\n"},
  {"GetThetaResolution", PyvtkTexturedSphereSource_GetThetaResolution, METH_VARARGS,
   "V.GetThetaResolution() -> int\nC++: virtual int GetThetaResolution()\n\nSet the number of points in the longitude direction.\n"},
  {"SetPhiResolution", PyvtkTexturedSphereSource_SetPhiResolution, METH_VARARGS,
   "V.SetPhiResolution(int)\nC++: virtual void SetPhiResolution(int _arg)\n\nSet the number of points in the latitude direction.\n"},
  {"GetPhiResolutionMinValue", PyvtkTexturedSphereSource_GetPhiResolutionMinValue, METH_VARARGS,
   "V.GetPhiResolutionMinValue() -> int\nC++: virtual int GetPhiResolutionMinValue()\n\nSet the number of points in the latitude direction.\n"},
  {"GetPhiResolutionMaxValue", PyvtkTexturedSphereSource_GetPhiResolutionMaxValue, METH_VARARGS,
   "V.GetPhiResolutionMaxValue() -> int\nC++: virtual int GetPhiResolutionMaxValue()\n\nSet the number of points in the latitude direction.\n"},
  {"GetPhiResolution", PyvtkTexturedSphereSource_GetPhiResolution, METH_VARARGS,
   "V.GetPhiResolution() -> int\nC++: virtual int GetPhiResolution()\n\nSet the number of points in the latitude direction.\n"},
  {"SetTheta", PyvtkTexturedSphereSource_SetTheta, METH_VARARGS,
   "V.SetTheta(float)\nC++: virtual void SetTheta(double _arg)\n\nSet the maximum longitude angle.\n"},
  {"GetThetaMinValue", PyvtkTexturedSphereSource_GetThetaMinValue, METH_VARARGS,
   "V.GetThetaMinValue() -> float\nC++: virtual double GetThetaMinValue()\n\nSet the maximum longitude angle.\n"},
  {"GetThetaMaxValue", PyvtkTexturedSphereSource_GetThetaMaxValue, METH_VARARGS,
   "V.GetThetaMaxValue() -> float\nC++: virtual double GetThetaMaxValue()\n\nSet the maximum longitude angle.\n"},
  {"GetTheta", PyvtkTexturedSphereSource_GetTheta, METH_VARARGS,
   "V.GetTheta() -> float\nC++: virtual double GetTheta()\n\nSet the maximum longitude angle.\n"},
  {"SetPhi", PyvtkTexturedSphereSource_SetPhi, METH_VARARGS,
   "V.SetPhi(float)\nC++: virtual void SetPhi(double _arg)\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {"GetPhiMinValue", PyvtkTexturedSphereSource_GetPhiMinValue, METH_VARARGS,
   "V.GetPhiMinValue() -> float\nC++: virtual double GetPhiMinValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {"GetPhiMaxValue", PyvtkTexturedSphereSource_GetPhiMaxValue, METH_VARARGS,
   "V.GetPhiMaxValue() -> float\nC++: virtual double GetPhiMaxValue()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {"GetPhi", PyvtkTexturedSphereSource_GetPhi, METH_VARARGS,
   "V.GetPhi() -> float\nC++: virtual double GetPhi()\n\nSet the maximum latitude angle (0 is at north pole).\n"},
  {"SetOutputPointsPrecision", PyvtkTexturedSphereSource_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkTexturedSphereSource_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTexturedSphereSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkTexturedSphereSource", // tp_name
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
  PyvtkTexturedSphereSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTexturedSphereSource_StaticNew()
{
  return vtkTexturedSphereSource::New();
}

PyObject *PyvtkTexturedSphereSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTexturedSphereSource_Type, PyvtkTexturedSphereSource_Methods,
    "vtkTexturedSphereSource",
 &PyvtkTexturedSphereSource_StaticNew);

  PyTypeObject *pytype = &PyvtkTexturedSphereSource_Type;

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

void PyVTKAddFile_vtkTexturedSphereSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTexturedSphereSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTexturedSphereSource", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(1024);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_SPHERE_RESOLUTION", o);
    Py_DECREF(o);
  }
}

