// python wrapper for vtkNamedColors
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
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkColor.h"
#include "vtkNamedColors.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNamedColors(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkNamedColors_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkNamedColors_Doc =
  "vtkNamedColors - A class holding colors and their names.\n\n"
  "Superclass: vtkObject\n\n"
  "For a web page of VTK Named Colors and their RGB values, see: <a\n"
  "href=\"http://htmlpreview.github.io/?https://github.com/lorensen/VTKExamples/blob/master/src/Python/Visualization/VTKNamedColorPatches.html\"\n"
  ">VTKNamedColorPatches. Use <a\n"
  "href=\"https://lorensen.github.io/VTKExamples/site/Python/Visualization/NamedColorPatches/\"\n"
  ">NamedColorPatches to generate this table.\n\n"
  "Color names are case insensitive and are stored as lower-case names\n"
  "along with a 4-element array whose elements are red, green, blue and\n"
  "alpha, in that order, corresponding to the RGBA value of the color.\n\n"
  "It is assumed that if the RGBA values are unsigned char then each\n"
  "element lies in the range 0...255 and if the RGBA values are double\n"
  "then each element lies in the range 0...1.\n\n"
  "The colors and names are those in <a\n"
  "href=\"http://en.wikipedia.org/wiki/Web_colors\">Web colors that are\n"
  "derived from the CSS3 specification: <a\n"
  "href=\"http://www.w3.org/TR/css3-color/#svg-color\">CSS Color Module\n"
  "Level 3 In this table common synonyms such as cyan/aqua and\n"
  "magenta/fuchsia are also included.\n\n"
  "Also included in this class are names and colors taken from\n"
  "Wrapping/Tcl/vtktesting/colors.tcl and\n"
  "Wrapping/Python/vtk/util/colors.py.\n\n"
  "Web colors and names in <a\n"
  "href=\"http://en.wikipedia.org/wiki/Web_colors\">Web colorstake\n"
  "precedence over those in colors.py. One consequence of this is that\n"
  "while colors.py specifies green as equivalent to (0,255,0), the web\n"
  "color standard defines it as (0,128,0).\n\n"
  "The SetColor methods will overwrite existing colors if the name of\n"
  "the color being set matches an existing color. Note that\n"
  "ColorExists() can be used to test for existence of the color being\n"
  "set.\n\n"
  "In the case of the GetColor methods returning doubles, alternative\n"
  "versions, identified by the letters RGB in the names, are provided.\n"
  "These get functions return just the red, green and blue components of\n"
  "a color.\n\n"
  "The class also provides methods for defining a color through an HTML\n"
  "color string. The following formats are supported:\n\n"
  "- #RGB                  (3-digit hexadecimal number, where #4F2 is a\n"
  "  shortcut for #44FF22)\n"
  "- #RRGGBB               (6-digit hexadecimal number)\n"
  "- rgb(r, g, b)          (where r, g, b are in 0..255 or percentage\n"
  "  values)\n"
  "- rgba(r, g, b, a)      (where r, g, b, are in 0..255 or percentage\n"
  "  values, a is in 0.0..1.0)\n"
  "- a CSS3 color name     (e.g. \"steelblue\")\n\n";


static PyObject *
PyvtkNamedColors_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNamedColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNamedColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNamedColors *tempr = vtkNamedColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNamedColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNamedColors::NewInstance());

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
PyvtkNamedColors_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkNamedColors::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_ResetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetColors();
    }
    else
    {
      op->vtkNamedColors::ResetColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_ColorExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ColorExists(temp0) :
      op->vtkNamedColors::ColorExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor4ub(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor4ub");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetColor4ub(temp0) :
      op->vtkNamedColors::GetColor4ub(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  unsigned char temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  unsigned char temp1[4];
  unsigned char save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, temp1);
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
PyvtkNamedColors_GetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, temp1);
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
PyvtkNamedColors_GetColor_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4d *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor4d"))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColor_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3d *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkColor3d"))
  {
    if (ap.IsBound())
    {
      op->GetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::GetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNamedColors_GetColor_Methods[] = {
  {nullptr, PyvtkNamedColors_GetColor_s1, METH_VARARGS,
   "@sBBBB"},
  {nullptr, PyvtkNamedColors_GetColor_s2, METH_VARARGS,
   "@sP *B"},
  {nullptr, PyvtkNamedColors_GetColor_s3, METH_VARARGS,
   "@sW &vtkColor4ub"},
  {nullptr, PyvtkNamedColors_GetColor_s4, METH_VARARGS,
   "@sdddd"},
  {nullptr, PyvtkNamedColors_GetColor_s5, METH_VARARGS,
   "@sP *d"},
  {nullptr, PyvtkNamedColors_GetColor_s6, METH_VARARGS,
   "@sW &vtkColor4d"},
  {nullptr, PyvtkNamedColors_GetColor_s8, METH_VARARGS,
   "@sW &vtkColor3ub"},
  {nullptr, PyvtkNamedColors_GetColor_s9, METH_VARARGS,
   "@sW &vtkColor3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNamedColors_GetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNamedColors_GetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkNamedColors_GetColor_s7(self, args);
    case 2:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}



static PyObject *
PyvtkNamedColors_GetColor4d(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor4d");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4d tempr = (ap.IsBound() ?
      op->GetColor4d(temp0) :
      op->vtkNamedColors::GetColor4d(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4d");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor3ub(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor3ub");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->GetColor3ub(temp0) :
      op->vtkNamedColors::GetColor3ub(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColor3d(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor3d");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetColor3d(temp0) :
      op->vtkNamedColors::GetColor3d(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColorRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetColorRGB(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::GetColorRGB(temp0, temp1);
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
PyvtkNamedColors_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  unsigned char temp4 = 255;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  unsigned char temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3ub"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  double temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor4d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4d"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkColor3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor3d"))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, *temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkNamedColors_SetColor_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1);
    }
    else
    {
      op->vtkNamedColors::SetColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNamedColors_SetColor_Methods[] = {
  {nullptr, PyvtkNamedColors_SetColor_s1, METH_VARARGS,
   "@sBBB|B"},
  {nullptr, PyvtkNamedColors_SetColor_s2, METH_VARARGS,
   "@sddd|d"},
  {nullptr, PyvtkNamedColors_SetColor_s3, METH_VARARGS,
   "@sP *B"},
  {nullptr, PyvtkNamedColors_SetColor_s4, METH_VARARGS,
   "@sW vtkColor4ub"},
  {nullptr, PyvtkNamedColors_SetColor_s5, METH_VARARGS,
   "@sW vtkColor3ub"},
  {nullptr, PyvtkNamedColors_SetColor_s6, METH_VARARGS,
   "@sP *d"},
  {nullptr, PyvtkNamedColors_SetColor_s7, METH_VARARGS,
   "@sW vtkColor4d"},
  {nullptr, PyvtkNamedColors_SetColor_s8, METH_VARARGS,
   "@sW vtkColor3d"},
  {nullptr, PyvtkNamedColors_SetColor_s9, METH_VARARGS,
   "@ss"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNamedColors_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNamedColors_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkNamedColors_RemoveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColor(temp0);
    }
    else
    {
      op->vtkNamedColors::RemoveColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_GetColorNames_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorNames() :
      op->vtkNamedColors::GetColorNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColorNames_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetColorNames(temp0);
    }
    else
    {
      op->vtkNamedColors::GetColorNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNamedColors_GetColorNames(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkNamedColors_GetColorNames_s1(self, args);
    case 1:
      return PyvtkNamedColors_GetColorNames_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColorNames");
  return nullptr;
}



static PyObject *
PyvtkNamedColors_GetSynonyms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynonyms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSynonyms() :
      op->vtkNamedColors::GetSynonyms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_HTMLColorToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HTMLColorToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->HTMLColorToRGBA(temp0) :
      op->vtkNamedColors::HTMLColorToRGBA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_HTMLColorToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HTMLColorToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor3ub tempr = (ap.IsBound() ?
      op->HTMLColorToRGB(temp0) :
      op->vtkNamedColors::HTMLColorToRGB(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3ub");
    }
  }

  return result;
}


static PyObject *
PyvtkNamedColors_RGBToHTMLColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RGBToHTMLColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkColor3ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3ub"))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->RGBToHTMLColor(*temp0) :
      op->vtkNamedColors::RGBToHTMLColor(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkNamedColors_RGBAToHTMLColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RGBAToHTMLColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNamedColors *op = static_cast<vtkNamedColors *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->RGBAToHTMLColor(*temp0) :
      op->vtkNamedColors::RGBAToHTMLColor(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkNamedColors_Methods[] = {
  {"IsTypeOf", PyvtkNamedColors_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNamedColors_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNamedColors_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkNamedColors\nC++: static vtkNamedColors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNamedColors_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkNamedColors\nC++: vtkNamedColors *NewInstance()\n\n"},
  {"GetNumberOfColors", PyvtkNamedColors_GetNumberOfColors, METH_VARARGS,
   "V.GetNumberOfColors() -> int\nC++: int GetNumberOfColors()\n\nGet the number of colors.\n"},
  {"ResetColors", PyvtkNamedColors_ResetColors, METH_VARARGS,
   "V.ResetColors()\nC++: void ResetColors()\n\nReset the colors in the color map to the original colors. Any\ncolors inserted by the user will be lost.\n"},
  {"ColorExists", PyvtkNamedColors_ColorExists, METH_VARARGS,
   "V.ColorExists(string) -> bool\nC++: bool ColorExists(const vtkStdString &name)\n\nReturn true if the color exists.\n"},
  {"GetColor4ub", PyvtkNamedColors_GetColor4ub, METH_VARARGS,
   "V.GetColor4ub(string) -> vtkColor4ub\nC++: vtkColor4ub GetColor4ub(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor4ub class.\nThe color black is returned if the color is not found.\n"},
  {"GetColor", PyvtkNamedColors_GetColor, METH_VARARGS,
   "V.GetColor(string, int, int, int, int)\nC++: void GetColor(const vtkStdString &name, unsigned char &r,\n    unsigned char &g, unsigned char &b, unsigned char &a)\nV.GetColor(string, [int, int, int, int])\nC++: void GetColor(const vtkStdString &name,\n    unsigned char rgba[4])\nV.GetColor(string, vtkColor4ub)\nC++: void GetColor(const vtkStdString &name, vtkColor4ub &rgba)\nV.GetColor(string, float, float, float, float)\nC++: void GetColor(const vtkStdString &name, double &r, double &g,\n     double &b, double &a)\nV.GetColor(string, [float, float, float, float])\nC++: void GetColor(const vtkStdString &name, double rgba[4])\nV.GetColor(string, vtkColor4d)\nC++: void GetColor(const vtkStdString &name, vtkColor4d &rgba)\nV.GetColor(string, float, float, float)\nC++: void GetColor(const vtkStdString &name, double &r, double &g,\n     double &b)\nV.GetColor(string, vtkColor3ub)\nC++: void GetColor(const vtkStdString &name, vtkColor3ub &rgb)\nV.GetColor(string, vtkColor3d)\nC++: void GetColor(const vtkStdString &name, vtkColor3d &rgb)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as four unsigned char\nvariables: red, green, blue, alpha. The range of each element is\n0...255. The color black is returned if the color is not found.\n"},
  {"GetColor4d", PyvtkNamedColors_GetColor4d, METH_VARARGS,
   "V.GetColor4d(string) -> vtkColor4d\nC++: vtkColor4d GetColor4d(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor4d class.\nThe color black is returned if the color is not found.\n"},
  {"GetColor3ub", PyvtkNamedColors_GetColor3ub, METH_VARARGS,
   "V.GetColor3ub(string) -> vtkColor3ub\nC++: vtkColor3ub GetColor3ub(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor3ub class.\nThe color black is returned if the color is not found.\n"},
  {"GetColor3d", PyvtkNamedColors_GetColor3d, METH_VARARGS,
   "V.GetColor3d(string) -> vtkColor3d\nC++: vtkColor3d GetColor3d(const vtkStdString &name)\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a vtkColor3d class.\nThe color black is returned if the color is not found.\n"},
  {"GetColorRGB", PyvtkNamedColors_GetColorRGB, METH_VARARGS,
   "V.GetColorRGB(string, [float, float, float])\nC++: void GetColorRGB(const vtkStdString &name, double rgb[3])\n\nGet the color by name. The name is treated as being\ncase-insensitive. The color is returned as a double array: [red,\ngreen, blue]. The range of each element is 0...1. The color black\nis returned if the color is not found.\n"},
  {"SetColor", PyvtkNamedColors_SetColor, METH_VARARGS,
   "V.SetColor(string, int, int, int, int)\nC++: virtual void SetColor(const vtkStdString &name,\n    const unsigned char &r, const unsigned char &g,\n    const unsigned char &b, const unsigned char &a=255)\nV.SetColor(string, float, float, float, float)\nC++: virtual void SetColor(const vtkStdString &name,\n    const double &r, const double &g, const double &b,\n    const double &a=1)\nV.SetColor(string, (int, int, int, int))\nC++: virtual void SetColor(const vtkStdString &name,\n    const unsigned char rgba[4])\nV.SetColor(string, vtkColor4ub)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor4ub &rgba)\nV.SetColor(string, vtkColor3ub)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor3ub &rgb)\nV.SetColor(string, (float, float, float, float))\nC++: virtual void SetColor(const vtkStdString &name,\n    const double rgba[4])\nV.SetColor(string, vtkColor4d)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor4d &rgba)\nV.SetColor(string, vtkColor3d)\nC++: virtual void SetColor(const vtkStdString &name,\n    const vtkColor3d &rgb)\nV.SetColor(string, string)\nC++: void SetColor(const vtkStdString &name,\n    const vtkStdString &htmlString)\n\nSet the color by name. The name is treated as being\ncase-insensitive. The range of each color is 0...255. No color is\nset if the name is empty.\n"},
  {"RemoveColor", PyvtkNamedColors_RemoveColor, METH_VARARGS,
   "V.RemoveColor(string)\nC++: void RemoveColor(const vtkStdString &name)\n\nRemove the color by name. The name is treated as being\ncase-insensitive. Examples for parsing are provided in:\nTestNamedColors.cxx and TestNamedColorsIntegration.py\n"},
  {"GetColorNames", PyvtkNamedColors_GetColorNames, METH_VARARGS,
   "V.GetColorNames() -> string\nC++: vtkStdString GetColorNames()\nV.GetColorNames(vtkStringArray)\nC++: void GetColorNames(vtkStringArray *colorNames)\n\nReturn a string of color names with each name delimited by a line\nfeed. This is easily parsed by the user into whatever data\nstructure they require. Examples for parsing are provided in:\nTestNamedColors.cxx and TestNamedColorsIntegration.py\n"},
  {"GetSynonyms", PyvtkNamedColors_GetSynonyms, METH_VARARGS,
   "V.GetSynonyms() -> string\nC++: vtkStdString GetSynonyms()\n\nReturn a string of synonyms such as cyan/aqua and\nmagenta/fuchsia. The string is formatted such that a single line\nfeed delimits each color in the synonym and a double line feed\ndelimits each synonym. Warning this could take a long time for\nvery large color maps. This is easily parsed by the user into\nwhatever data structure they require.\n"},
  {"HTMLColorToRGBA", PyvtkNamedColors_HTMLColorToRGBA, METH_VARARGS,
   "V.HTMLColorToRGBA(string) -> vtkColor4ub\nC++: vtkColor4ub HTMLColorToRGBA(const vtkStdString &colorString)\n\nReturn a vtkColor4ub instance from an HTML color string in any of\nthe following formats:\n- #RGB\n- #RRGGBB\n- rgb(r, g, b)\n- rgba(r, g, b, a)\n- a CSS3 color name, e.g. \"steelblue\" If the string argument\n  defines a color using one of the above formats the method\n  returns the successfully parsed color else returns a color\n  equal to `rgba(0, 0, 0, 0)`.\n"},
  {"HTMLColorToRGB", PyvtkNamedColors_HTMLColorToRGB, METH_VARARGS,
   "V.HTMLColorToRGB(string) -> vtkColor3ub\nC++: vtkColor3ub HTMLColorToRGB(const vtkStdString &colorString)\n\nReturn a vtkColor3ub instance from an HTML color string in any of\nthe following formats:\n- #RGB\n- #RRGGBB\n- rgb(r, g, b)\n- rgba(r, g, b, a)\n- a CSS3 color name, e.g. \"steelblue\" If the string argument\n  defines a color using one of the above formats the method\n  returns the successfully parsed color else returns the color\n  black.\n"},
  {"RGBToHTMLColor", PyvtkNamedColors_RGBToHTMLColor, METH_VARARGS,
   "V.RGBToHTMLColor(vtkColor3ub) -> string\nC++: vtkStdString RGBToHTMLColor(const vtkColor3ub &rgb)\n\nGiven a vtkColor3ub instance as input color return a valid HTML\ncolor string in the `#RRGGBB` format.\n"},
  {"RGBAToHTMLColor", PyvtkNamedColors_RGBAToHTMLColor, METH_VARARGS,
   "V.RGBAToHTMLColor(vtkColor4ub) -> string\nC++: vtkStdString RGBAToHTMLColor(const vtkColor4ub &rgba)\n\nGiven a vtkColor4ub instance as input color return a valid HTML\ncolor string in the `rgba(r, g, b, a)` format.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkNamedColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonColorPython.vtkNamedColors", // tp_name
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
  PyvtkNamedColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNamedColors_StaticNew()
{
  return vtkNamedColors::New();
}

PyObject *PyvtkNamedColors_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkNamedColors_Type, PyvtkNamedColors_Methods,
    "vtkNamedColors",
 &PyvtkNamedColors_StaticNew);

  PyTypeObject *pytype = &PyvtkNamedColors_Type;

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

void PyVTKAddFile_vtkNamedColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNamedColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNamedColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

