// python wrapper for vtkSectorSource
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
#include "vtkSectorSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSectorSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSectorSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSectorSource_Doc =
  "vtkSectorSource - create a sector of a disk\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSectorSource creates a sector of a polygonal disk. The disk has\n"
  "zero height. The user can specify the inner and outer radius of the\n"
  "disk, the z-coordinate, and the radial and circumferential resolution\n"
  "of the polygonal representation.\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";


static PyObject *
PyvtkSectorSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSectorSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSectorSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSectorSource *tempr = vtkSectorSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSectorSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSectorSource::NewInstance());

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
PyvtkSectorSource_SetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInnerRadius(temp0);
    }
    else
    {
      op->vtkSectorSource::SetInnerRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMinValue() :
      op->vtkSectorSource::GetInnerRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadiusMaxValue() :
      op->vtkSectorSource::GetInnerRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetInnerRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInnerRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInnerRadius() :
      op->vtkSectorSource::GetInnerRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOuterRadius(temp0);
    }
    else
    {
      op->vtkSectorSource::SetOuterRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMinValue() :
      op->vtkSectorSource::GetOuterRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadiusMaxValue() :
      op->vtkSectorSource::GetOuterRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetOuterRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOuterRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOuterRadius() :
      op->vtkSectorSource::GetOuterRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZCoord(temp0);
    }
    else
    {
      op->vtkSectorSource::SetZCoord(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoordMinValue() :
      op->vtkSectorSource::GetZCoordMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoordMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoordMaxValue() :
      op->vtkSectorSource::GetZCoordMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetZCoord(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoord");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCoord() :
      op->vtkSectorSource::GetZCoord());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadialResolution(temp0);
    }
    else
    {
      op->vtkSectorSource::SetRadialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMinValue() :
      op->vtkSectorSource::GetRadialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolutionMaxValue() :
      op->vtkSectorSource::GetRadialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetRadialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadialResolution() :
      op->vtkSectorSource::GetRadialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircumferentialResolution(temp0);
    }
    else
    {
      op->vtkSectorSource::SetCircumferentialResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMinValue() :
      op->vtkSectorSource::GetCircumferentialResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolutionMaxValue() :
      op->vtkSectorSource::GetCircumferentialResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetCircumferentialResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircumferentialResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircumferentialResolution() :
      op->vtkSectorSource::GetCircumferentialResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartAngle(temp0);
    }
    else
    {
      op->vtkSectorSource::SetStartAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMinValue() :
      op->vtkSectorSource::GetStartAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngleMaxValue() :
      op->vtkSectorSource::GetStartAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetStartAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartAngle() :
      op->vtkSectorSource::GetStartAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_SetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndAngle(temp0);
    }
    else
    {
      op->vtkSectorSource::SetEndAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngleMinValue() :
      op->vtkSectorSource::GetEndAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngleMaxValue() :
      op->vtkSectorSource::GetEndAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSectorSource_GetEndAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSectorSource *op = static_cast<vtkSectorSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndAngle() :
      op->vtkSectorSource::GetEndAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSectorSource_Methods[] = {
  {"IsTypeOf", PyvtkSectorSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSectorSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSectorSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSectorSource\nC++: static vtkSectorSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSectorSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSectorSource\nC++: vtkSectorSource *NewInstance()\n\n"},
  {"SetInnerRadius", PyvtkSectorSource_SetInnerRadius, METH_VARARGS,
   "V.SetInnerRadius(float)\nC++: virtual void SetInnerRadius(double _arg)\n\nSpecify inner radius of the sector.\n"},
  {"GetInnerRadiusMinValue", PyvtkSectorSource_GetInnerRadiusMinValue, METH_VARARGS,
   "V.GetInnerRadiusMinValue() -> float\nC++: virtual double GetInnerRadiusMinValue()\n\nSpecify inner radius of the sector.\n"},
  {"GetInnerRadiusMaxValue", PyvtkSectorSource_GetInnerRadiusMaxValue, METH_VARARGS,
   "V.GetInnerRadiusMaxValue() -> float\nC++: virtual double GetInnerRadiusMaxValue()\n\nSpecify inner radius of the sector.\n"},
  {"GetInnerRadius", PyvtkSectorSource_GetInnerRadius, METH_VARARGS,
   "V.GetInnerRadius() -> float\nC++: virtual double GetInnerRadius()\n\nSpecify inner radius of the sector.\n"},
  {"SetOuterRadius", PyvtkSectorSource_SetOuterRadius, METH_VARARGS,
   "V.SetOuterRadius(float)\nC++: virtual void SetOuterRadius(double _arg)\n\nSpecify outer radius of the sector.\n"},
  {"GetOuterRadiusMinValue", PyvtkSectorSource_GetOuterRadiusMinValue, METH_VARARGS,
   "V.GetOuterRadiusMinValue() -> float\nC++: virtual double GetOuterRadiusMinValue()\n\nSpecify outer radius of the sector.\n"},
  {"GetOuterRadiusMaxValue", PyvtkSectorSource_GetOuterRadiusMaxValue, METH_VARARGS,
   "V.GetOuterRadiusMaxValue() -> float\nC++: virtual double GetOuterRadiusMaxValue()\n\nSpecify outer radius of the sector.\n"},
  {"GetOuterRadius", PyvtkSectorSource_GetOuterRadius, METH_VARARGS,
   "V.GetOuterRadius() -> float\nC++: virtual double GetOuterRadius()\n\nSpecify outer radius of the sector.\n"},
  {"SetZCoord", PyvtkSectorSource_SetZCoord, METH_VARARGS,
   "V.SetZCoord(float)\nC++: virtual void SetZCoord(double _arg)\n\nSpecify the z coordinate of the sector.\n"},
  {"GetZCoordMinValue", PyvtkSectorSource_GetZCoordMinValue, METH_VARARGS,
   "V.GetZCoordMinValue() -> float\nC++: virtual double GetZCoordMinValue()\n\nSpecify the z coordinate of the sector.\n"},
  {"GetZCoordMaxValue", PyvtkSectorSource_GetZCoordMaxValue, METH_VARARGS,
   "V.GetZCoordMaxValue() -> float\nC++: virtual double GetZCoordMaxValue()\n\nSpecify the z coordinate of the sector.\n"},
  {"GetZCoord", PyvtkSectorSource_GetZCoord, METH_VARARGS,
   "V.GetZCoord() -> float\nC++: virtual double GetZCoord()\n\nSpecify the z coordinate of the sector.\n"},
  {"SetRadialResolution", PyvtkSectorSource_SetRadialResolution, METH_VARARGS,
   "V.SetRadialResolution(int)\nC++: virtual void SetRadialResolution(int _arg)\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolutionMinValue", PyvtkSectorSource_GetRadialResolutionMinValue, METH_VARARGS,
   "V.GetRadialResolutionMinValue() -> int\nC++: virtual int GetRadialResolutionMinValue()\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolutionMaxValue", PyvtkSectorSource_GetRadialResolutionMaxValue, METH_VARARGS,
   "V.GetRadialResolutionMaxValue() -> int\nC++: virtual int GetRadialResolutionMaxValue()\n\nSet the number of points in radius direction.\n"},
  {"GetRadialResolution", PyvtkSectorSource_GetRadialResolution, METH_VARARGS,
   "V.GetRadialResolution() -> int\nC++: virtual int GetRadialResolution()\n\nSet the number of points in radius direction.\n"},
  {"SetCircumferentialResolution", PyvtkSectorSource_SetCircumferentialResolution, METH_VARARGS,
   "V.SetCircumferentialResolution(int)\nC++: virtual void SetCircumferentialResolution(int _arg)\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolutionMinValue", PyvtkSectorSource_GetCircumferentialResolutionMinValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMinValue() -> int\nC++: virtual int GetCircumferentialResolutionMinValue()\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolutionMaxValue", PyvtkSectorSource_GetCircumferentialResolutionMaxValue, METH_VARARGS,
   "V.GetCircumferentialResolutionMaxValue() -> int\nC++: virtual int GetCircumferentialResolutionMaxValue()\n\nSet the number of points in circumferential direction.\n"},
  {"GetCircumferentialResolution", PyvtkSectorSource_GetCircumferentialResolution, METH_VARARGS,
   "V.GetCircumferentialResolution() -> int\nC++: virtual int GetCircumferentialResolution()\n\nSet the number of points in circumferential direction.\n"},
  {"SetStartAngle", PyvtkSectorSource_SetStartAngle, METH_VARARGS,
   "V.SetStartAngle(float)\nC++: virtual void SetStartAngle(double _arg)\n\nSet the start angle of the sector.\n"},
  {"GetStartAngleMinValue", PyvtkSectorSource_GetStartAngleMinValue, METH_VARARGS,
   "V.GetStartAngleMinValue() -> float\nC++: virtual double GetStartAngleMinValue()\n\nSet the start angle of the sector.\n"},
  {"GetStartAngleMaxValue", PyvtkSectorSource_GetStartAngleMaxValue, METH_VARARGS,
   "V.GetStartAngleMaxValue() -> float\nC++: virtual double GetStartAngleMaxValue()\n\nSet the start angle of the sector.\n"},
  {"GetStartAngle", PyvtkSectorSource_GetStartAngle, METH_VARARGS,
   "V.GetStartAngle() -> float\nC++: virtual double GetStartAngle()\n\nSet the start angle of the sector.\n"},
  {"SetEndAngle", PyvtkSectorSource_SetEndAngle, METH_VARARGS,
   "V.SetEndAngle(float)\nC++: virtual void SetEndAngle(double _arg)\n\nSet the end angle of the sector.\n"},
  {"GetEndAngleMinValue", PyvtkSectorSource_GetEndAngleMinValue, METH_VARARGS,
   "V.GetEndAngleMinValue() -> float\nC++: virtual double GetEndAngleMinValue()\n\nSet the end angle of the sector.\n"},
  {"GetEndAngleMaxValue", PyvtkSectorSource_GetEndAngleMaxValue, METH_VARARGS,
   "V.GetEndAngleMaxValue() -> float\nC++: virtual double GetEndAngleMaxValue()\n\nSet the end angle of the sector.\n"},
  {"GetEndAngle", PyvtkSectorSource_GetEndAngle, METH_VARARGS,
   "V.GetEndAngle() -> float\nC++: virtual double GetEndAngle()\n\nSet the end angle of the sector.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSectorSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkSectorSource", // tp_name
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
  PyvtkSectorSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSectorSource_StaticNew()
{
  return vtkSectorSource::New();
}

PyObject *PyvtkSectorSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSectorSource_Type, PyvtkSectorSource_Methods,
    "vtkSectorSource",
 &PyvtkSectorSource_StaticNew);

  PyTypeObject *pytype = &PyvtkSectorSource_Type;

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

void PyVTKAddFile_vtkSectorSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSectorSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSectorSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

