// python wrapper for vtkArrowSource
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
#include "vtkArrowSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrowSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrowSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkArrowSource_Doc =
  "vtkArrowSource - Appends a cylinder to a cone to form an arrow.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkArrowSource was intended to be used as the source for a glyph. The\n"
  "shaft base is always at (0,0,0). The arrow tip is always at (1,0,0).\n"
  "If \"Invert\" is true, then the ends are flipped i.e. tip is at (0,0,0)\n"
  "while base is at (1, 0, 0). The resolution of the cone and shaft can\n"
  "be set and default to 6. The radius of the cone and shaft can be set\n"
  "and default to 0.03 and 0.1. The length of the tip can also be set,\n"
  "and defaults to 0.35.\n\n";


static PyObject *
PyvtkArrowSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrowSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrowSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrowSource *tempr = vtkArrowSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrowSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrowSource::NewInstance());

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
PyvtkArrowSource_SetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipLength(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMinValue() :
      op->vtkArrowSource::GetTipLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLengthMaxValue() :
      op->vtkArrowSource::GetTipLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipLength() :
      op->vtkArrowSource::GetTipLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipRadius(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadiusMinValue() :
      op->vtkArrowSource::GetTipRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadiusMaxValue() :
      op->vtkArrowSource::GetTipRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTipRadius() :
      op->vtkArrowSource::GetTipRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipResolution(temp0);
    }
    else
    {
      op->vtkArrowSource::SetTipResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolutionMinValue() :
      op->vtkArrowSource::GetTipResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolutionMaxValue() :
      op->vtkArrowSource::GetTipResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetTipResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipResolution() :
      op->vtkArrowSource::GetTipResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftRadius(temp0);
    }
    else
    {
      op->vtkArrowSource::SetShaftRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadiusMinValue() :
      op->vtkArrowSource::GetShaftRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadiusMaxValue() :
      op->vtkArrowSource::GetShaftRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShaftRadius() :
      op->vtkArrowSource::GetShaftRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftResolution(temp0);
    }
    else
    {
      op->vtkArrowSource::SetShaftResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMinValue() :
      op->vtkArrowSource::GetShaftResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolutionMaxValue() :
      op->vtkArrowSource::GetShaftResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetShaftResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftResolution() :
      op->vtkArrowSource::GetShaftResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOn();
    }
    else
    {
      op->vtkArrowSource::InvertOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_InvertOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertOff();
    }
    else
    {
      op->vtkArrowSource::InvertOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_SetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvert(temp0);
    }
    else
    {
      op->vtkArrowSource::SetInvert(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrowSource_GetInvert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrowSource *op = static_cast<vtkArrowSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInvert() :
      op->vtkArrowSource::GetInvert());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrowSource_Methods[] = {
  {"IsTypeOf", PyvtkArrowSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrowSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrowSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrowSource\nC++: static vtkArrowSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrowSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrowSource\nC++: vtkArrowSource *NewInstance()\n\n"},
  {"SetTipLength", PyvtkArrowSource_SetTipLength, METH_VARARGS,
   "V.SetTipLength(float)\nC++: virtual void SetTipLength(double _arg)\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipLengthMinValue", PyvtkArrowSource_GetTipLengthMinValue, METH_VARARGS,
   "V.GetTipLengthMinValue() -> float\nC++: virtual double GetTipLengthMinValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipLengthMaxValue", PyvtkArrowSource_GetTipLengthMaxValue, METH_VARARGS,
   "V.GetTipLengthMaxValue() -> float\nC++: virtual double GetTipLengthMaxValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipLength", PyvtkArrowSource_GetTipLength, METH_VARARGS,
   "V.GetTipLength() -> float\nC++: virtual double GetTipLength()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"SetTipRadius", PyvtkArrowSource_SetTipRadius, METH_VARARGS,
   "V.SetTipRadius(float)\nC++: virtual void SetTipRadius(double _arg)\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipRadiusMinValue", PyvtkArrowSource_GetTipRadiusMinValue, METH_VARARGS,
   "V.GetTipRadiusMinValue() -> float\nC++: virtual double GetTipRadiusMinValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipRadiusMaxValue", PyvtkArrowSource_GetTipRadiusMaxValue, METH_VARARGS,
   "V.GetTipRadiusMaxValue() -> float\nC++: virtual double GetTipRadiusMaxValue()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"GetTipRadius", PyvtkArrowSource_GetTipRadius, METH_VARARGS,
   "V.GetTipRadius() -> float\nC++: virtual double GetTipRadius()\n\nSet the length, and radius of the tip.  They default to 0.35 and\n0.1\n"},
  {"SetTipResolution", PyvtkArrowSource_SetTipResolution, METH_VARARGS,
   "V.SetTipResolution(int)\nC++: virtual void SetTipResolution(int _arg)\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {"GetTipResolutionMinValue", PyvtkArrowSource_GetTipResolutionMinValue, METH_VARARGS,
   "V.GetTipResolutionMinValue() -> int\nC++: virtual int GetTipResolutionMinValue()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {"GetTipResolutionMaxValue", PyvtkArrowSource_GetTipResolutionMaxValue, METH_VARARGS,
   "V.GetTipResolutionMaxValue() -> int\nC++: virtual int GetTipResolutionMaxValue()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {"GetTipResolution", PyvtkArrowSource_GetTipResolution, METH_VARARGS,
   "V.GetTipResolution() -> int\nC++: virtual int GetTipResolution()\n\nSet the resolution of the tip.  The tip behaves the same as a\ncone. Resoultion 1 gives a single triangle, 2 gives two crossed\ntriangles.\n"},
  {"SetShaftRadius", PyvtkArrowSource_SetShaftRadius, METH_VARARGS,
   "V.SetShaftRadius(float)\nC++: virtual void SetShaftRadius(double _arg)\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {"GetShaftRadiusMinValue", PyvtkArrowSource_GetShaftRadiusMinValue, METH_VARARGS,
   "V.GetShaftRadiusMinValue() -> float\nC++: virtual double GetShaftRadiusMinValue()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {"GetShaftRadiusMaxValue", PyvtkArrowSource_GetShaftRadiusMaxValue, METH_VARARGS,
   "V.GetShaftRadiusMaxValue() -> float\nC++: virtual double GetShaftRadiusMaxValue()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {"GetShaftRadius", PyvtkArrowSource_GetShaftRadius, METH_VARARGS,
   "V.GetShaftRadius() -> float\nC++: virtual double GetShaftRadius()\n\nSet the radius of the shaft.  Defaults to 0.03.\n"},
  {"SetShaftResolution", PyvtkArrowSource_SetShaftResolution, METH_VARARGS,
   "V.SetShaftResolution(int)\nC++: virtual void SetShaftResolution(int _arg)\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {"GetShaftResolutionMinValue", PyvtkArrowSource_GetShaftResolutionMinValue, METH_VARARGS,
   "V.GetShaftResolutionMinValue() -> int\nC++: virtual int GetShaftResolutionMinValue()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {"GetShaftResolutionMaxValue", PyvtkArrowSource_GetShaftResolutionMaxValue, METH_VARARGS,
   "V.GetShaftResolutionMaxValue() -> int\nC++: virtual int GetShaftResolutionMaxValue()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {"GetShaftResolution", PyvtkArrowSource_GetShaftResolution, METH_VARARGS,
   "V.GetShaftResolution() -> int\nC++: virtual int GetShaftResolution()\n\nSet the resolution of the shaft.  2 gives a rectangle. I would\nlike to extend the cone to produce a line, but this is not an\noption now.\n"},
  {"InvertOn", PyvtkArrowSource_InvertOn, METH_VARARGS,
   "V.InvertOn()\nC++: virtual void InvertOn()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {"InvertOff", PyvtkArrowSource_InvertOff, METH_VARARGS,
   "V.InvertOff()\nC++: virtual void InvertOff()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {"SetInvert", PyvtkArrowSource_SetInvert, METH_VARARGS,
   "V.SetInvert(bool)\nC++: virtual void SetInvert(bool _arg)\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {"GetInvert", PyvtkArrowSource_GetInvert, METH_VARARGS,
   "V.GetInvert() -> bool\nC++: virtual bool GetInvert()\n\nInverts the arrow direction. When set to true, base is at (1, 0,\n0) while the tip is at (0, 0, 0). The default is false, i.e. base\nat (0, 0, 0) and the tip at (1, 0, 0).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrowSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkArrowSource", // tp_name
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
  PyvtkArrowSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrowSource_StaticNew()
{
  return vtkArrowSource::New();
}

PyObject *PyvtkArrowSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrowSource_Type, PyvtkArrowSource_Methods,
    "vtkArrowSource",
 &PyvtkArrowSource_StaticNew);

  PyTypeObject *pytype = &PyvtkArrowSource_Type;

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

void PyVTKAddFile_vtkArrowSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrowSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrowSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

