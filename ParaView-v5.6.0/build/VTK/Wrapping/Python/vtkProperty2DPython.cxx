// python wrapper for vtkProperty2D
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
#include "vtkProperty2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProperty2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProperty2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkProperty2D_Doc =
  "vtkProperty2D - represent surface properties of a 2D image\n\n"
  "Superclass: vtkObject\n\n"
  "vtkProperty2D contains properties used to render two dimensional\n"
  "images and annotations.\n\n"
  "@sa\n"
  "vtkActor2D\n\n";


static PyObject *
PyvtkProperty2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProperty2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProperty2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProperty2D *tempr = vtkProperty2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProperty2D::NewInstance());

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
PyvtkProperty2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkProperty2D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty2D::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkProperty2D::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty2D_SetColor_s1(self, args);
    case 1:
      return PyvtkProperty2D_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkProperty2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkProperty2D::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkProperty2D::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkProperty2D::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkProperty2D::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMinValue() :
      op->vtkProperty2D::GetPointSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMaxValue() :
      op->vtkProperty2D::GetPointSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkProperty2D::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkProperty2D::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMinValue() :
      op->vtkProperty2D::GetLineWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMaxValue() :
      op->vtkProperty2D::GetLineWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkProperty2D::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStipplePattern(temp0);
    }
    else
    {
      op->vtkProperty2D::SetLineStipplePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStipplePattern() :
      op->vtkProperty2D::GetLineStipplePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStippleRepeatFactor(temp0);
    }
    else
    {
      op->vtkProperty2D::SetLineStippleRepeatFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMinValue() :
      op->vtkProperty2D::GetLineStippleRepeatFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMaxValue() :
      op->vtkProperty2D::GetLineStippleRepeatFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactor() :
      op->vtkProperty2D::GetLineStippleRepeatFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayLocation(temp0);
    }
    else
    {
      op->vtkProperty2D::SetDisplayLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocationMinValue() :
      op->vtkProperty2D::GetDisplayLocationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocationMaxValue() :
      op->vtkProperty2D::GetDisplayLocationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_GetDisplayLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayLocation() :
      op->vtkProperty2D::GetDisplayLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocationToBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocationToBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayLocationToBackground();
    }
    else
    {
      op->vtkProperty2D::SetDisplayLocationToBackground();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_SetDisplayLocationToForeground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayLocationToForeground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayLocationToForeground();
    }
    else
    {
      op->vtkProperty2D::SetDisplayLocationToForeground();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty2D_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty2D *op = static_cast<vtkProperty2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkProperty2D::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty2D_Methods[] = {
  {"IsTypeOf", PyvtkProperty2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProperty2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProperty2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProperty2D\nC++: static vtkProperty2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProperty2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProperty2D\nC++: vtkProperty2D *NewInstance()\n\n"},
  {"DeepCopy", PyvtkProperty2D_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkProperty2D)\nC++: void DeepCopy(vtkProperty2D *p)\n\nAssign one property to another.\n"},
  {"SetColor", PyvtkProperty2D_SetColor, METH_VARARGS,
   "V.SetColor(float, float, float)\nC++: void SetColor(double, double, double)\nV.SetColor((float, float, float))\nC++: void SetColor(double a[3])\n\n"},
  {"GetColor", PyvtkProperty2D_GetColor, METH_VARARGS,
   "V.GetColor() -> (float, float, float)\nC++: double *GetColor()\n\n"},
  {"GetOpacity", PyvtkProperty2D_GetOpacity, METH_VARARGS,
   "V.GetOpacity() -> float\nC++: virtual double GetOpacity()\n\nSet/Get the Opacity of this property.\n"},
  {"SetOpacity", PyvtkProperty2D_SetOpacity, METH_VARARGS,
   "V.SetOpacity(float)\nC++: virtual void SetOpacity(double _arg)\n\nSet/Get the Opacity of this property.\n"},
  {"SetPointSize", PyvtkProperty2D_SetPointSize, METH_VARARGS,
   "V.SetPointSize(float)\nC++: virtual void SetPointSize(float _arg)\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSizeMinValue", PyvtkProperty2D_GetPointSizeMinValue, METH_VARARGS,
   "V.GetPointSizeMinValue() -> float\nC++: virtual float GetPointSizeMinValue()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSizeMaxValue", PyvtkProperty2D_GetPointSizeMaxValue, METH_VARARGS,
   "V.GetPointSizeMaxValue() -> float\nC++: virtual float GetPointSizeMaxValue()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSize", PyvtkProperty2D_GetPointSize, METH_VARARGS,
   "V.GetPointSize() -> float\nC++: virtual float GetPointSize()\n\nSet/Get the diameter of a Point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"SetLineWidth", PyvtkProperty2D_SetLineWidth, METH_VARARGS,
   "V.SetLineWidth(float)\nC++: virtual void SetLineWidth(float _arg)\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidthMinValue", PyvtkProperty2D_GetLineWidthMinValue, METH_VARARGS,
   "V.GetLineWidthMinValue() -> float\nC++: virtual float GetLineWidthMinValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidthMaxValue", PyvtkProperty2D_GetLineWidthMaxValue, METH_VARARGS,
   "V.GetLineWidthMaxValue() -> float\nC++: virtual float GetLineWidthMaxValue()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidth", PyvtkProperty2D_GetLineWidth, METH_VARARGS,
   "V.GetLineWidth() -> float\nC++: virtual float GetLineWidth()\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"SetLineStipplePattern", PyvtkProperty2D_SetLineStipplePattern, METH_VARARGS,
   "V.SetLineStipplePattern(int)\nC++: virtual void SetLineStipplePattern(int _arg)\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL, not OpenGL2. The default is 0xFFFF.\n"},
  {"GetLineStipplePattern", PyvtkProperty2D_GetLineStipplePattern, METH_VARARGS,
   "V.GetLineStipplePattern() -> int\nC++: virtual int GetLineStipplePattern()\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL, not OpenGL2. The default is 0xFFFF.\n"},
  {"SetLineStippleRepeatFactor", PyvtkProperty2D_SetLineStippleRepeatFactor, METH_VARARGS,
   "V.SetLineStippleRepeatFactor(int)\nC++: virtual void SetLineStippleRepeatFactor(int _arg)\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactorMinValue", PyvtkProperty2D_GetLineStippleRepeatFactorMinValue, METH_VARARGS,
   "V.GetLineStippleRepeatFactorMinValue() -> int\nC++: virtual int GetLineStippleRepeatFactorMinValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactorMaxValue", PyvtkProperty2D_GetLineStippleRepeatFactorMaxValue, METH_VARARGS,
   "V.GetLineStippleRepeatFactorMaxValue() -> int\nC++: virtual int GetLineStippleRepeatFactorMaxValue()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactor", PyvtkProperty2D_GetLineStippleRepeatFactor, METH_VARARGS,
   "V.GetLineStippleRepeatFactor() -> int\nC++: virtual int GetLineStippleRepeatFactor()\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"SetDisplayLocation", PyvtkProperty2D_SetDisplayLocation, METH_VARARGS,
   "V.SetDisplayLocation(int)\nC++: virtual void SetDisplayLocation(int _arg)\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"GetDisplayLocationMinValue", PyvtkProperty2D_GetDisplayLocationMinValue, METH_VARARGS,
   "V.GetDisplayLocationMinValue() -> int\nC++: virtual int GetDisplayLocationMinValue()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"GetDisplayLocationMaxValue", PyvtkProperty2D_GetDisplayLocationMaxValue, METH_VARARGS,
   "V.GetDisplayLocationMaxValue() -> int\nC++: virtual int GetDisplayLocationMaxValue()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"GetDisplayLocation", PyvtkProperty2D_GetDisplayLocation, METH_VARARGS,
   "V.GetDisplayLocation() -> int\nC++: virtual int GetDisplayLocation()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"SetDisplayLocationToBackground", PyvtkProperty2D_SetDisplayLocationToBackground, METH_VARARGS,
   "V.SetDisplayLocationToBackground()\nC++: void SetDisplayLocationToBackground()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"SetDisplayLocationToForeground", PyvtkProperty2D_SetDisplayLocationToForeground, METH_VARARGS,
   "V.SetDisplayLocationToForeground()\nC++: void SetDisplayLocationToForeground()\n\nThe DisplayLocation is either background or foreground. If it is\nbackground, then this 2D actor will be drawn behind all 3D props\nor foreground 2D actors. If it is background, then this 2D actor\nwill be drawn in front of all 3D props and background 2D actors.\nWithin 2D actors of the same DisplayLocation type, order is\ndetermined by the order in which the 2D actors were added to the\nviewport.\n"},
  {"Render", PyvtkProperty2D_Render, METH_VARARGS,
   "V.Render(vtkViewport)\nC++: virtual void Render(vtkViewport *viewport)\n\nHave the device specific subclass render this property.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProperty2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkProperty2D", // tp_name
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
  PyvtkProperty2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProperty2D_StaticNew()
{
  return vtkProperty2D::New();
}

PyObject *PyvtkProperty2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProperty2D_Type, PyvtkProperty2D_Methods,
    "vtkProperty2D",
 &PyvtkProperty2D_StaticNew);

  PyTypeObject *pytype = &PyvtkProperty2D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProperty2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProperty2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProperty2D", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_BACKGROUND_LOCATION", 0 },
        { "VTK_FOREGROUND_LOCATION", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

