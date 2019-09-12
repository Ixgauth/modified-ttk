// python wrapper for vtkButtonSource
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
#include "vtkButtonSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkButtonSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkButtonSource_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkButtonSource_Doc =
  "vtkButtonSource - abstract class for creating various button types\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkButtonSource is an abstract class that defines an API for creating\n"
  "\"button-like\" objects in VTK. A button is a geometry with a\n"
  "rectangular region that can be textured. The button is divided into\n"
  "two regions: the texture region and the shoulder region. The points\n"
  "in both regions are assigned texture coordinates. The texture region\n"
  "has texture coordinates consistent with the image to be placed on it.\n"
  " All points in the shoulder regions are assigned a texture coordinate\n"
  "specified by the user.  In this way the shoulder region can be\n"
  "colored by the texture.\n\n"
  "Creating a vtkButtonSource requires specifying its center point.\n"
  "(Subclasses have other attributes that must be set to control the\n"
  "shape of the button.) You must also specify how to control the shape\n"
  "of the texture region; i.e., whether to size the texture region\n"
  "proportional to the texture dimensions or whether to size the texture\n"
  "region proportional to the button. Also, buttons can be created\n"
  "single sided are mirrored to create two-sided buttons.\n\n"
  "@sa\n"
  "vtkEllipticalButtonSource vtkRectangularButtonSource\n\n"
  "@warning\n"
  "The button is defined in the x-y plane. Use\n"
  "vtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\n"
  "different direction.\n\n";


static PyObject *
PyvtkButtonSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkButtonSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkButtonSource *tempr = vtkButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonSource::NewInstance());

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
PyvtkButtonSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

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
      op->vtkButtonSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

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
      op->vtkButtonSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkButtonSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}



static PyObject *
PyvtkButtonSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkButtonSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyle(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTextureStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMinValue() :
      op->vtkButtonSource::GetTextureStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMaxValue() :
      op->vtkButtonSource::GetTextureStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyle() :
      op->vtkButtonSource::GetTextureStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToFitImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToFitImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyleToFitImage();
    }
    else
    {
      op->vtkButtonSource::SetTextureStyleToFitImage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToProportional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToProportional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyleToProportional();
    }
    else
    {
      op->vtkButtonSource::SetTextureStyleToProportional();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0, temp1);
    }
    else
    {
      op->vtkButtonSource::SetTextureDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTextureDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkButtonSource_SetTextureDimensions_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetTextureDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureDimensions");
  return nullptr;
}



static PyObject *
PyvtkButtonSource_GetTextureDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTextureDimensions() :
      op->vtkButtonSource::GetTextureDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShoulderTextureCoordinate(temp0, temp1);
    }
    else
    {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShoulderTextureCoordinate(temp0);
    }
    else
    {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShoulderTextureCoordinate");
  return nullptr;
}



static PyObject *
PyvtkButtonSource_GetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetShoulderTextureCoordinate() :
      op->vtkButtonSource::GetShoulderTextureCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoSided(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTwoSided(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoSided() :
      op->vtkButtonSource::GetTwoSided());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedOn();
    }
    else
    {
      op->vtkButtonSource::TwoSidedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedOff();
    }
    else
    {
      op->vtkButtonSource::TwoSidedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkButtonSource_Methods[] = {
  {"IsTypeOf", PyvtkButtonSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkButtonSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkButtonSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkButtonSource\nC++: static vtkButtonSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkButtonSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkButtonSource\nC++: vtkButtonSource *NewInstance()\n\n"},
  {"SetCenter", PyvtkButtonSource_SetCenter, METH_VARARGS,
   "V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {"GetCenter", PyvtkButtonSource_GetCenter, METH_VARARGS,
   "V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSpecify a point defining the origin (center) of the button.\n"},
  {"SetTextureStyle", PyvtkButtonSource_SetTextureStyle, METH_VARARGS,
   "V.SetTextureStyle(int)\nC++: virtual void SetTextureStyle(int _arg)\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"GetTextureStyleMinValue", PyvtkButtonSource_GetTextureStyleMinValue, METH_VARARGS,
   "V.GetTextureStyleMinValue() -> int\nC++: virtual int GetTextureStyleMinValue()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"GetTextureStyleMaxValue", PyvtkButtonSource_GetTextureStyleMaxValue, METH_VARARGS,
   "V.GetTextureStyleMaxValue() -> int\nC++: virtual int GetTextureStyleMaxValue()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"GetTextureStyle", PyvtkButtonSource_GetTextureStyle, METH_VARARGS,
   "V.GetTextureStyle() -> int\nC++: virtual int GetTextureStyle()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"SetTextureStyleToFitImage", PyvtkButtonSource_SetTextureStyleToFitImage, METH_VARARGS,
   "V.SetTextureStyleToFitImage()\nC++: void SetTextureStyleToFitImage()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"SetTextureStyleToProportional", PyvtkButtonSource_SetTextureStyleToProportional, METH_VARARGS,
   "V.SetTextureStyleToProportional()\nC++: void SetTextureStyleToProportional()\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"SetTextureDimensions", PyvtkButtonSource_SetTextureDimensions, METH_VARARGS,
   "V.SetTextureDimensions(int, int)\nC++: void SetTextureDimensions(int, int)\nV.SetTextureDimensions((int, int))\nC++: void SetTextureDimensions(int a[2])\n\n"},
  {"GetTextureDimensions", PyvtkButtonSource_GetTextureDimensions, METH_VARARGS,
   "V.GetTextureDimensions() -> (int, int)\nC++: int *GetTextureDimensions()\n\n"},
  {"SetShoulderTextureCoordinate", PyvtkButtonSource_SetShoulderTextureCoordinate, METH_VARARGS,
   "V.SetShoulderTextureCoordinate(float, float)\nC++: void SetShoulderTextureCoordinate(double, double)\nV.SetShoulderTextureCoordinate((float, float))\nC++: void SetShoulderTextureCoordinate(double a[2])\n\n"},
  {"GetShoulderTextureCoordinate", PyvtkButtonSource_GetShoulderTextureCoordinate, METH_VARARGS,
   "V.GetShoulderTextureCoordinate() -> (float, float)\nC++: double *GetShoulderTextureCoordinate()\n\n"},
  {"SetTwoSided", PyvtkButtonSource_SetTwoSided, METH_VARARGS,
   "V.SetTwoSided(int)\nC++: virtual void SetTwoSided(vtkTypeBool _arg)\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {"GetTwoSided", PyvtkButtonSource_GetTwoSided, METH_VARARGS,
   "V.GetTwoSided() -> int\nC++: virtual vtkTypeBool GetTwoSided()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {"TwoSidedOn", PyvtkButtonSource_TwoSidedOn, METH_VARARGS,
   "V.TwoSidedOn()\nC++: virtual void TwoSidedOn()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {"TwoSidedOff", PyvtkButtonSource_TwoSidedOff, METH_VARARGS,
   "V.TwoSidedOff()\nC++: virtual void TwoSidedOff()\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkButtonSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersSourcesPython.vtkButtonSource", // tp_name
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
  PyvtkButtonSource_Doc, // tp_doc
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

PyObject *PyvtkButtonSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkButtonSource_Type, PyvtkButtonSource_Methods,
    "vtkButtonSource",
 nullptr);

  PyTypeObject *pytype = &PyvtkButtonSource_Type;

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

void PyVTKAddFile_vtkButtonSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkButtonSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkButtonSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_TEXTURE_STYLE_FIT_IMAGE", 0 },
        { "VTK_TEXTURE_STYLE_PROPORTIONAL", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

