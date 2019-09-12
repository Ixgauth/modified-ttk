// python wrapper for vtkIconGlyphFilter
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
#include "vtkIconGlyphFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIconGlyphFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIconGlyphFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkIconGlyphFilter_Doc =
  "vtkIconGlyphFilter - Filter that generates a polydata consisting of\nquads with texture coordinates referring to a set of icons within a\nsheet of icons.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkIconGlyphFilter takes in a vtkPointSet where each point\n"
  "corresponds to the center of an icon. Scalar integer data must also\n"
  "be set to give each point an icon index. This index is a zero based\n"
  "row major index into an image that contains a grid of icons (each\n"
  "icon is the same size). You must also specify 1) the size of the icon\n"
  "in the icon sheet (in pixels), 2) the size of the icon sheet (in\n"
  "pixels), and 3) the display size of each icon (again in display\n"
  "coordinates, or pixels).\n\n"
  "Various other parameters are used to control how this data is\n"
  "combined. If UseIconSize is true then the DisplaySize is ignored. If\n"
  "PassScalars is true, then the scalar index information is passed to\n"
  "the output. Also, there is an optional IconScale array which, if\n"
  "UseIconScaling is on, will scale each icon independently.\n\n"
  "@sa\n"
  "vtkPolyDataAlgorithm vtkGlyph3D vtkGlyph2D\n\n";


static PyObject *
PyvtkIconGlyphFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIconGlyphFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIconGlyphFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIconGlyphFilter *tempr = vtkIconGlyphFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIconGlyphFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIconGlyphFilter::NewInstance());

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
PyvtkIconGlyphFilter_SetIconSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetIconSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSize");
  return nullptr;
}



static PyObject *
PyvtkIconGlyphFilter_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkIconGlyphFilter::GetIconSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconSheetSize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetIconSheetSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconSheetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetIconSheetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetIconSheetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconSheetSize");
  return nullptr;
}



static PyObject *
PyvtkIconGlyphFilter_GetIconSheetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSheetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSheetSize() :
      op->vtkIconGlyphFilter::GetIconSheetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplaySize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetDisplaySize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetDisplaySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetDisplaySize_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetDisplaySize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDisplaySize");
  return nullptr;
}



static PyObject *
PyvtkIconGlyphFilter_GetDisplaySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDisplaySize() :
      op->vtkIconGlyphFilter::GetDisplaySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIconSize(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetUseIconSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetUseIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIconSize() :
      op->vtkIconGlyphFilter::GetUseIconSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIconSizeOn();
    }
    else
    {
      op->vtkIconGlyphFilter::UseIconSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_UseIconSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIconSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIconSizeOff();
    }
    else
    {
      op->vtkIconGlyphFilter::UseIconSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconScaling(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetIconScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIconScaling() :
      op->vtkIconGlyphFilter::GetIconScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIconScalingToScalingOff();
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScalingToScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetIconScalingToScalingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconScalingToScalingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIconScalingToScalingArray();
    }
    else
    {
      op->vtkIconGlyphFilter::SetIconScalingToScalingArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassScalars(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetPassScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetPassScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassScalars() :
      op->vtkIconGlyphFilter::GetPassScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassScalarsOn();
    }
    else
    {
      op->vtkIconGlyphFilter::PassScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_PassScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassScalarsOff();
    }
    else
    {
      op->vtkIconGlyphFilter::PassScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGravity(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkIconGlyphFilter::GetGravity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToTopLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToTopLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToTopLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToTopLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToCenterLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToCenterLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToCenterLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToCenterLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomRight();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomRight();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomCenter();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetGravityToBottomLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityToBottomLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGravityToBottomLeft();
    }
    else
    {
      op->vtkIconGlyphFilter::SetGravityToBottomLeft();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIconGlyphFilter_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0, temp1);
    }
    else
    {
      op->vtkIconGlyphFilter::SetOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkIconGlyphFilter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIconGlyphFilter_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIconGlyphFilter_SetOffset_s1(self, args);
    case 1:
      return PyvtkIconGlyphFilter_SetOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return nullptr;
}



static PyObject *
PyvtkIconGlyphFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIconGlyphFilter *op = static_cast<vtkIconGlyphFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkIconGlyphFilter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkIconGlyphFilter_Methods[] = {
  {"IsTypeOf", PyvtkIconGlyphFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkIconGlyphFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkIconGlyphFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIconGlyphFilter\nC++: static vtkIconGlyphFilter *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkIconGlyphFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIconGlyphFilter\nC++: vtkIconGlyphFilter *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetIconSize", PyvtkIconGlyphFilter_SetIconSize, METH_VARARGS,
   "V.SetIconSize(int, int)\nC++: void SetIconSize(int, int)\nV.SetIconSize((int, int))\nC++: void SetIconSize(int a[2])\n\n"},
  {"GetIconSize", PyvtkIconGlyphFilter_GetIconSize, METH_VARARGS,
   "V.GetIconSize() -> (int, int)\nC++: int *GetIconSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"SetIconSheetSize", PyvtkIconGlyphFilter_SetIconSheetSize, METH_VARARGS,
   "V.SetIconSheetSize(int, int)\nC++: void SetIconSheetSize(int, int)\nV.SetIconSheetSize((int, int))\nC++: void SetIconSheetSize(int a[2])\n\n"},
  {"GetIconSheetSize", PyvtkIconGlyphFilter_GetIconSheetSize, METH_VARARGS,
   "V.GetIconSheetSize() -> (int, int)\nC++: int *GetIconSheetSize()\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"SetDisplaySize", PyvtkIconGlyphFilter_SetDisplaySize, METH_VARARGS,
   "V.SetDisplaySize(int, int)\nC++: void SetDisplaySize(int, int)\nV.SetDisplaySize((int, int))\nC++: void SetDisplaySize(int a[2])\n\n"},
  {"GetDisplaySize", PyvtkIconGlyphFilter_GetDisplaySize, METH_VARARGS,
   "V.GetDisplaySize() -> (int, int)\nC++: int *GetDisplaySize()\n\nSpecify the Width and Height, in pixels, of the size of the icon\nwhen it is rendered. By default, the IconSize is used to set the\ndisplay size (i.e., UseIconSize is true by default). Note that\nassumes that IconScaling is disabled, or if enabled, the scale of\na particular icon is 1.\n"},
  {"SetUseIconSize", PyvtkIconGlyphFilter_SetUseIconSize, METH_VARARGS,
   "V.SetUseIconSize(bool)\nC++: virtual void SetUseIconSize(bool _arg)\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {"GetUseIconSize", PyvtkIconGlyphFilter_GetUseIconSize, METH_VARARGS,
   "V.GetUseIconSize() -> bool\nC++: virtual bool GetUseIconSize()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {"UseIconSizeOn", PyvtkIconGlyphFilter_UseIconSizeOn, METH_VARARGS,
   "V.UseIconSizeOn()\nC++: virtual void UseIconSizeOn()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {"UseIconSizeOff", PyvtkIconGlyphFilter_UseIconSizeOff, METH_VARARGS,
   "V.UseIconSizeOff()\nC++: virtual void UseIconSizeOff()\n\nSpecify whether the Quad generated to place the icon on will be\neither the dimensions specified by IconSize or the DisplaySize.\n"},
  {"SetIconScaling", PyvtkIconGlyphFilter_SetIconScaling, METH_VARARGS,
   "V.SetIconScaling(int)\nC++: virtual void SetIconScaling(int _arg)\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {"GetIconScaling", PyvtkIconGlyphFilter_GetIconScaling, METH_VARARGS,
   "V.GetIconScaling() -> int\nC++: virtual int GetIconScaling()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {"SetIconScalingToScalingOff", PyvtkIconGlyphFilter_SetIconScalingToScalingOff, METH_VARARGS,
   "V.SetIconScalingToScalingOff()\nC++: void SetIconScalingToScalingOff()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {"SetIconScalingToScalingArray", PyvtkIconGlyphFilter_SetIconScalingToScalingArray, METH_VARARGS,
   "V.SetIconScalingToScalingArray()\nC++: void SetIconScalingToScalingArray()\n\nSpecify how to specify individual icons. By default, icon scaling\nis off, but if it is on, then the filter looks for an array named\n\"IconScale\" to control individual icon size.\n"},
  {"SetPassScalars", PyvtkIconGlyphFilter_SetPassScalars, METH_VARARGS,
   "V.SetPassScalars(bool)\nC++: virtual void SetPassScalars(bool _arg)\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {"GetPassScalars", PyvtkIconGlyphFilter_GetPassScalars, METH_VARARGS,
   "V.GetPassScalars() -> bool\nC++: virtual bool GetPassScalars()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {"PassScalarsOn", PyvtkIconGlyphFilter_PassScalarsOn, METH_VARARGS,
   "V.PassScalarsOn()\nC++: virtual void PassScalarsOn()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {"PassScalarsOff", PyvtkIconGlyphFilter_PassScalarsOff, METH_VARARGS,
   "V.PassScalarsOff()\nC++: virtual void PassScalarsOff()\n\nSpecify whether to pass the scalar icon index to the output. By\ndefault this is not passed since it can affect color during the\nrendering process. Note that all other point data is passed to\nthe output regardless of the value of this flag.\n"},
  {"SetGravity", PyvtkIconGlyphFilter_SetGravity, METH_VARARGS,
   "V.SetGravity(int)\nC++: virtual void SetGravity(int _arg)\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"GetGravity", PyvtkIconGlyphFilter_GetGravity, METH_VARARGS,
   "V.GetGravity() -> int\nC++: virtual int GetGravity()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToTopRight", PyvtkIconGlyphFilter_SetGravityToTopRight, METH_VARARGS,
   "V.SetGravityToTopRight()\nC++: void SetGravityToTopRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToTopCenter", PyvtkIconGlyphFilter_SetGravityToTopCenter, METH_VARARGS,
   "V.SetGravityToTopCenter()\nC++: void SetGravityToTopCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToTopLeft", PyvtkIconGlyphFilter_SetGravityToTopLeft, METH_VARARGS,
   "V.SetGravityToTopLeft()\nC++: void SetGravityToTopLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToCenterRight", PyvtkIconGlyphFilter_SetGravityToCenterRight, METH_VARARGS,
   "V.SetGravityToCenterRight()\nC++: void SetGravityToCenterRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToCenterCenter", PyvtkIconGlyphFilter_SetGravityToCenterCenter, METH_VARARGS,
   "V.SetGravityToCenterCenter()\nC++: void SetGravityToCenterCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToCenterLeft", PyvtkIconGlyphFilter_SetGravityToCenterLeft, METH_VARARGS,
   "V.SetGravityToCenterLeft()\nC++: void SetGravityToCenterLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToBottomRight", PyvtkIconGlyphFilter_SetGravityToBottomRight, METH_VARARGS,
   "V.SetGravityToBottomRight()\nC++: void SetGravityToBottomRight()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToBottomCenter", PyvtkIconGlyphFilter_SetGravityToBottomCenter, METH_VARARGS,
   "V.SetGravityToBottomCenter()\nC++: void SetGravityToBottomCenter()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetGravityToBottomLeft", PyvtkIconGlyphFilter_SetGravityToBottomLeft, METH_VARARGS,
   "V.SetGravityToBottomLeft()\nC++: void SetGravityToBottomLeft()\n\nSpecify if the input points define the center of the icon quad or\none of top right corner, top center, top left corner, center\nright, center, center center left, bottom right corner, bottom\ncenter or bottom left corner.\n"},
  {"SetOffset", PyvtkIconGlyphFilter_SetOffset, METH_VARARGS,
   "V.SetOffset(int, int)\nC++: void SetOffset(int, int)\nV.SetOffset((int, int))\nC++: void SetOffset(int a[2])\n\n"},
  {"GetOffset", PyvtkIconGlyphFilter_GetOffset, METH_VARARGS,
   "V.GetOffset() -> (int, int)\nC++: int *GetOffset()\n\nSpecify an offset (in pixels or display coordinates) that offsets\nthe icons from their generating points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIconGlyphFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkIconGlyphFilter", // tp_name
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
  PyvtkIconGlyphFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIconGlyphFilter_StaticNew()
{
  return vtkIconGlyphFilter::New();
}

PyObject *PyvtkIconGlyphFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIconGlyphFilter_Type, PyvtkIconGlyphFilter_Methods,
    "vtkIconGlyphFilter",
 &PyvtkIconGlyphFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkIconGlyphFilter_Type;

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

void PyVTKAddFile_vtkIconGlyphFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIconGlyphFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIconGlyphFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "VTK_ICON_GRAVITY_TOP_RIGHT", 1 },
        { "VTK_ICON_GRAVITY_TOP_CENTER", 2 },
        { "VTK_ICON_GRAVITY_TOP_LEFT", 3 },
        { "VTK_ICON_GRAVITY_CENTER_RIGHT", 4 },
        { "VTK_ICON_GRAVITY_CENTER_CENTER", 5 },
        { "VTK_ICON_GRAVITY_CENTER_LEFT", 6 },
        { "VTK_ICON_GRAVITY_BOTTOM_RIGHT", 7 },
        { "VTK_ICON_GRAVITY_BOTTOM_CENTER", 8 },
        { "VTK_ICON_GRAVITY_BOTTOM_LEFT", 9 },
        { "VTK_ICON_SCALING_OFF", 0 },
        { "VTK_ICON_SCALING_USE_SCALING_ARRAY", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

