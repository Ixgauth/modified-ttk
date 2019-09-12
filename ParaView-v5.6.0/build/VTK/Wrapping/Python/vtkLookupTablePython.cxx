// python wrapper for vtkLookupTable
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
#include "vtkLookupTable.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLookupTable(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLookupTable_ClassNew(); }

#ifndef DECLARED_PyvtkScalarsToColors_ClassNew
extern "C" { PyObject *PyvtkScalarsToColors_ClassNew(); }
#define DECLARED_PyvtkScalarsToColors_ClassNew
#endif

static const char *PyvtkLookupTable_Doc =
  "vtkLookupTable - map scalar values into colors via a lookup table\n\n"
  "Superclass: vtkScalarsToColors\n\n"
  "vtkLookupTable is an object that is used by mapper objects to map\n"
  "scalar values into RGBA (red-green-blue-alpha) color specification,\n"
  "or RGBA into scalar values. The color table can be created by direct\n"
  "insertion of color values, or by specifying a hue, saturation, value,\n"
  "and alpha range and generating a table.\n\n"
  "A special color for NaN values in the data can be specified via\n"
  "SetNanColor(). In addition, a color for data values below the lookup\n"
  "table range minimum can be specified with SetBelowRangeColor(), and\n"
  "that color will be used for values below the range minimum when\n"
  "UseBelowRangeColor is on.  Likewise, a color for data values above\n"
  "the lookup table range maximum can be specified with\n"
  "SetAboveRangeColor(), and it is used when UseAboveRangeColor is on.\n\n"
  "This class behaves differently depending on how IndexedLookup is set.\n"
  "When true, vtkLookupTable enters a mode for representing categorical\n"
  "color maps. By setting IndexedLookup to true, you indicate that the\n"
  "annotated values are the only valid values for which entries in the\n"
  "color table should be returned. The colors in the lookup Table are\n"
  "assigned to annotated values by taking the modulus of their index in\n"
  "the list of annotations. IndexedLookup changes the behavior of\n"
  "GetIndex, which in turn changes the way MapScalarsThroughTable2\n"
  "behaves; when IndexedLookup is true, MapScalarsThroughTable2 will\n"
  "search for scalar values in AnnotatedValues and use the resulting\n"
  "index to determine the color. If a scalar value is not present in\n"
  "AnnotatedValues, then NanColor will be used.\n\n"
  "@warning\n"
  "You need to explicitly call Build() when constructing the LUT by\n"
  "hand.\n\n"
  "@sa\n"
  "vtkLogLookupTable vtkWindowLevelLookupTable\n\n";


static PyObject *
PyvtkLookupTable_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLookupTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLookupTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLookupTable *tempr = vtkLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLookupTable::NewInstance());

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
PyvtkLookupTable_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkLookupTable::IsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0 = 256;
  int temp1 = 256;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkLookupTable::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkLookupTable::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_ForceBuild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuild();
    }
    else
    {
      op->vtkLookupTable::ForceBuild();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_BuildSpecialColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildSpecialColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildSpecialColors();
    }
    else
    {
      op->vtkLookupTable::BuildSpecialColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRamp(temp0);
    }
    else
    {
      op->vtkLookupTable::SetRamp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRampToLinear();
    }
    else
    {
      op->vtkLookupTable::SetRampToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRampToSCurve();
    }
    else
    {
      op->vtkLookupTable::SetRampToSCurve();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRampToSQRT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRampToSQRT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRampToSQRT();
    }
    else
    {
      op->vtkLookupTable::SetRampToSQRT();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetRamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRamp() :
      op->vtkLookupTable::GetRamp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkLookupTable::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToLinear();
    }
    else
    {
      op->vtkLookupTable::SetScaleToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetScaleToLog10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToLog10");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToLog10();
    }
    else
    {
      op->vtkLookupTable::SetScaleToLog10();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkLookupTable::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTableRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetTableRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTableRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetTableRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLookupTable_SetTableRange_s1(self, args);
    case 2:
      return PyvtkLookupTable_SetTableRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTableRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetTableRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTableRange() :
      op->vtkLookupTable::GetTableRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHueRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetHueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHueRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetHueRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetHueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetHueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHueRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetHueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHueRange() :
      op->vtkLookupTable::GetHueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSaturationRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetSaturationRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSaturationRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetSaturationRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetSaturationRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetSaturationRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSaturationRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetSaturationRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSaturationRange() :
      op->vtkLookupTable::GetSaturationRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValueRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetValueRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetValueRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetValueRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetValueRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetValueRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValueRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetValueRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValueRange() :
      op->vtkLookupTable::GetValueRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAlphaRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetAlphaRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetAlphaRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetAlphaRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetAlphaRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAlphaRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetAlphaRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAlphaRange() :
      op->vtkLookupTable::GetAlphaRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
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
      op->SetNanColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLookupTable::SetNanColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNanColor(temp0);
    }
    else
    {
      op->vtkLookupTable::SetNanColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkLookupTable_SetNanColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetNanColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNanColor() :
      op->vtkLookupTable::GetNanColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNanColorAsUnsignedChars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanColorAsUnsignedChars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetNanColorAsUnsignedChars() :
      op->vtkLookupTable::GetNanColorAsUnsignedChars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetColorAsUnsignedChars(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorAsUnsignedChars");

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 4;
  unsigned char temp1[4];
  unsigned char save1[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkLookupTable::GetColorAsUnsignedChars(temp0, temp1);

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
PyvtkLookupTable_SetBelowRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
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
      op->SetBelowRangeColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLookupTable::SetBelowRangeColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetBelowRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBelowRangeColor(temp0);
    }
    else
    {
      op->vtkLookupTable::SetBelowRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetBelowRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkLookupTable_SetBelowRangeColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetBelowRangeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBelowRangeColor");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBelowRangeColor() :
      op->vtkLookupTable::GetBelowRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBelowRangeColor(temp0);
    }
    else
    {
      op->vtkLookupTable::SetUseBelowRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetUseBelowRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBelowRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseBelowRangeColor() :
      op->vtkLookupTable::GetUseBelowRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_UseBelowRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBelowRangeColorOn();
    }
    else
    {
      op->vtkLookupTable::UseBelowRangeColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_UseBelowRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBelowRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBelowRangeColorOff();
    }
    else
    {
      op->vtkLookupTable::UseBelowRangeColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetAboveRangeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
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
      op->SetAboveRangeColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLookupTable::SetAboveRangeColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAboveRangeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAboveRangeColor(temp0);
    }
    else
    {
      op->vtkLookupTable::SetAboveRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetAboveRangeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkLookupTable_SetAboveRangeColor_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetAboveRangeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAboveRangeColor");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAboveRangeColor() :
      op->vtkLookupTable::GetAboveRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAboveRangeColor(temp0);
    }
    else
    {
      op->vtkLookupTable::SetUseAboveRangeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetUseAboveRangeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAboveRangeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseAboveRangeColor() :
      op->vtkLookupTable::GetUseAboveRangeColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_UseAboveRangeColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAboveRangeColorOn();
    }
    else
    {
      op->vtkLookupTable::UseAboveRangeColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_UseAboveRangeColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAboveRangeColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAboveRangeColorOff();
    }
    else
    {
      op->vtkLookupTable::UseAboveRangeColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkLookupTable::MapValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
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
      op->GetColor(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::GetColor(temp0, temp1);
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
PyvtkLookupTable_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkLookupTable::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetIndex(temp0) :
      op->vtkLookupTable::GetIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTableValues(temp0);
    }
    else
    {
      op->vtkLookupTable::SetNumberOfTableValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfTableValues() :
      op->vtkLookupTable::GetNumberOfTableValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  const size_t size1 = 4;
  double temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetTableValue(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetTableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1.0;
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
      op->SetTableValue(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkLookupTable::SetTableValue(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetTableValue_s1(self, args);
    case 4:
    case 5:
      return PyvtkLookupTable_SetTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTableValue");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetTableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTableValue(temp0) :
      op->vtkLookupTable::GetTableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_GetTableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
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
      op->GetTableValue(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::GetTableValue(temp0, temp1);
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
PyvtkLookupTable_GetTableValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLookupTable_GetTableValue_s1(self, args);
    case 2:
      return PyvtkLookupTable_GetTableValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTableValue");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetPointer(temp0) :
      op->vtkLookupTable::GetPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_WritePointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WritePointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->WritePointer(temp0, temp1) :
      op->vtkLookupTable::WritePointer(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkLookupTable::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkLookupTable::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLookupTable_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLookupTable_SetRange_s1(self, args);
    case 1:
      return PyvtkLookupTable_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}



static PyObject *
PyvtkLookupTable_GetLogRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLogRange");

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    vtkLookupTable::GetLogRange(temp0, temp1);

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
PyvtkLookupTable_ApplyLogScale(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyLogScale");

  double temp0;
  const size_t size1 = 2;
  double temp1[2];
  const size_t size2 = 2;
  double temp2[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    double tempr = vtkLookupTable::ApplyLogScale(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfColors(temp0);
    }
    else
    {
      op->vtkLookupTable::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMinValue() :
      op->vtkLookupTable::GetNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMaxValue() :
      op->vtkLookupTable::GetNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkLookupTable::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_SetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetTable(temp0);
    }
    else
    {
      op->vtkLookupTable::SetTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetTable() :
      op->vtkLookupTable::GetTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLookupTable::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkLookupTable_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkLookupTable::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkLookupTable::UsingLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkLookupTable::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTable_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTable *op = static_cast<vtkLookupTable *>(vp);

  vtkIdType temp0;
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
      op->GetIndexedColor(temp0, temp1);
    }
    else
    {
      op->vtkLookupTable::GetIndexedColor(temp0, temp1);
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

static PyMethodDef PyvtkLookupTable_Methods[] = {
  {"IsTypeOf", PyvtkLookupTable_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLookupTable_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLookupTable_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLookupTable\nC++: static vtkLookupTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLookupTable_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLookupTable\nC++: vtkLookupTable *NewInstance()\n\n"},
  {"IsOpaque", PyvtkLookupTable_IsOpaque, METH_VARARGS,
   "V.IsOpaque() -> int\nC++: int IsOpaque() override;\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1.\n"},
  {"Allocate", PyvtkLookupTable_Allocate, METH_VARARGS,
   "V.Allocate(int, int) -> int\nC++: int Allocate(int sz=256, int ext=256)\n\nAllocate a color table of specified size. Note that ext is no\nlonger used.\n"},
  {"Build", PyvtkLookupTable_Build, METH_VARARGS,
   "V.Build()\nC++: void Build() override;\n\nGenerate lookup table from hue, saturation, value, alpha min/max\nvalues. Table is built from linear ramp of each value.\n"},
  {"ForceBuild", PyvtkLookupTable_ForceBuild, METH_VARARGS,
   "V.ForceBuild()\nC++: virtual void ForceBuild()\n\nForce the lookup table to regenerate from hue, saturation, value,\nand alpha min/max values.  Table is built from a linear ramp of\neach value.  ForceBuild() is useful if a lookup table has been\ndefined manually (using SetTableValue) and then an application\ndecides to rebuild the lookup table using the implicit process.\n"},
  {"BuildSpecialColors", PyvtkLookupTable_BuildSpecialColors, METH_VARARGS,
   "V.BuildSpecialColors()\nC++: void BuildSpecialColors()\n\nCopies the \"special\" colors into the given table.\n"},
  {"SetRamp", PyvtkLookupTable_SetRamp, METH_VARARGS,
   "V.SetRamp(int)\nC++: virtual void SetRamp(int _arg)\n\nSet the shape of the table ramp to either S-curve, linear, or\nsqrt. The default is S-curve, which tails off gradually at either\nend.\n\nThe equation used for the S-curve is y = (sin((x - 1/2)*pi) +\n1)/2, For an S-curve greyscale ramp, you should set\nNumberOfTableValues to 402 (which is 256*pi/2) to provide room\nfor the tails of the ramp.\n\nThe equation for the linear ramp is simply y = x.\n\nThe equation for the SQRT is y = sqrt(x).\n"},
  {"SetRampToLinear", PyvtkLookupTable_SetRampToLinear, METH_VARARGS,
   "V.SetRampToLinear()\nC++: void SetRampToLinear()\n\nSet the shape of the table ramp to either S-curve, linear, or\nsqrt. The default is S-curve, which tails off gradually at either\nend.\n\nThe equation used for the S-curve is y = (sin((x - 1/2)*pi) +\n1)/2, For an S-curve greyscale ramp, you should set\nNumberOfTableValues to 402 (which is 256*pi/2) to provide room\nfor the tails of the ramp.\n\nThe equation for the linear ramp is simply y = x.\n\nThe equation for the SQRT is y = sqrt(x).\n"},
  {"SetRampToSCurve", PyvtkLookupTable_SetRampToSCurve, METH_VARARGS,
   "V.SetRampToSCurve()\nC++: void SetRampToSCurve()\n\nSet the shape of the table ramp to either S-curve, linear, or\nsqrt. The default is S-curve, which tails off gradually at either\nend.\n\nThe equation used for the S-curve is y = (sin((x - 1/2)*pi) +\n1)/2, For an S-curve greyscale ramp, you should set\nNumberOfTableValues to 402 (which is 256*pi/2) to provide room\nfor the tails of the ramp.\n\nThe equation for the linear ramp is simply y = x.\n\nThe equation for the SQRT is y = sqrt(x).\n"},
  {"SetRampToSQRT", PyvtkLookupTable_SetRampToSQRT, METH_VARARGS,
   "V.SetRampToSQRT()\nC++: void SetRampToSQRT()\n\nSet the shape of the table ramp to either S-curve, linear, or\nsqrt. The default is S-curve, which tails off gradually at either\nend.\n\nThe equation used for the S-curve is y = (sin((x - 1/2)*pi) +\n1)/2, For an S-curve greyscale ramp, you should set\nNumberOfTableValues to 402 (which is 256*pi/2) to provide room\nfor the tails of the ramp.\n\nThe equation for the linear ramp is simply y = x.\n\nThe equation for the SQRT is y = sqrt(x).\n"},
  {"GetRamp", PyvtkLookupTable_GetRamp, METH_VARARGS,
   "V.GetRamp() -> int\nC++: virtual int GetRamp()\n\nSet the shape of the table ramp to either S-curve, linear, or\nsqrt. The default is S-curve, which tails off gradually at either\nend.\n\nThe equation used for the S-curve is y = (sin((x - 1/2)*pi) +\n1)/2, For an S-curve greyscale ramp, you should set\nNumberOfTableValues to 402 (which is 256*pi/2) to provide room\nfor the tails of the ramp.\n\nThe equation for the linear ramp is simply y = x.\n\nThe equation for the SQRT is y = sqrt(x).\n"},
  {"SetScale", PyvtkLookupTable_SetScale, METH_VARARGS,
   "V.SetScale(int)\nC++: void SetScale(int scale)\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {"SetScaleToLinear", PyvtkLookupTable_SetScaleToLinear, METH_VARARGS,
   "V.SetScaleToLinear()\nC++: void SetScaleToLinear()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {"SetScaleToLog10", PyvtkLookupTable_SetScaleToLog10, METH_VARARGS,
   "V.SetScaleToLog10()\nC++: void SetScaleToLog10()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {"GetScale", PyvtkLookupTable_GetScale, METH_VARARGS,
   "V.GetScale() -> int\nC++: virtual int GetScale()\n\nSet the type of scale to use, linear or logarithmic.  The default\nis linear.  If the scale is logarithmic, then the TableRange must\nnot cross the value zero.\n"},
  {"SetTableRange", PyvtkLookupTable_SetTableRange, METH_VARARGS,
   "V.SetTableRange((float, float))\nC++: virtual void SetTableRange(const double r[2])\nV.SetTableRange(float, float)\nC++: virtual void SetTableRange(double min, double max)\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n\n* The TableRange values are only used when IndexedLookup is\n  false.\n"},
  {"GetTableRange", PyvtkLookupTable_GetTableRange, METH_VARARGS,
   "V.GetTableRange() -> (float, float)\nC++: double *GetTableRange()\n\nSet/Get the minimum/maximum scalar values for scalar mapping.\nScalar values less than minimum range value are clamped to\nminimum range value. Scalar values greater than maximum range\nvalue are clamped to maximum range value.\n\n* The TableRange values are only used when IndexedLookup is\n  false.\n"},
  {"SetHueRange", PyvtkLookupTable_SetHueRange, METH_VARARGS,
   "V.SetHueRange(float, float)\nC++: void SetHueRange(double, double)\nV.SetHueRange((float, float))\nC++: void SetHueRange(double a[2])\n\n"},
  {"GetHueRange", PyvtkLookupTable_GetHueRange, METH_VARARGS,
   "V.GetHueRange() -> (float, float)\nC++: double *GetHueRange()\n\n"},
  {"SetSaturationRange", PyvtkLookupTable_SetSaturationRange, METH_VARARGS,
   "V.SetSaturationRange(float, float)\nC++: void SetSaturationRange(double, double)\nV.SetSaturationRange((float, float))\nC++: void SetSaturationRange(double a[2])\n\n"},
  {"GetSaturationRange", PyvtkLookupTable_GetSaturationRange, METH_VARARGS,
   "V.GetSaturationRange() -> (float, float)\nC++: double *GetSaturationRange()\n\n"},
  {"SetValueRange", PyvtkLookupTable_SetValueRange, METH_VARARGS,
   "V.SetValueRange(float, float)\nC++: void SetValueRange(double, double)\nV.SetValueRange((float, float))\nC++: void SetValueRange(double a[2])\n\n"},
  {"GetValueRange", PyvtkLookupTable_GetValueRange, METH_VARARGS,
   "V.GetValueRange() -> (float, float)\nC++: double *GetValueRange()\n\n"},
  {"SetAlphaRange", PyvtkLookupTable_SetAlphaRange, METH_VARARGS,
   "V.SetAlphaRange(float, float)\nC++: void SetAlphaRange(double, double)\nV.SetAlphaRange((float, float))\nC++: void SetAlphaRange(double a[2])\n\n"},
  {"GetAlphaRange", PyvtkLookupTable_GetAlphaRange, METH_VARARGS,
   "V.GetAlphaRange() -> (float, float)\nC++: double *GetAlphaRange()\n\n"},
  {"SetNanColor", PyvtkLookupTable_SetNanColor, METH_VARARGS,
   "V.SetNanColor(float, float, float, float)\nC++: void SetNanColor(double, double, double, double)\nV.SetNanColor((float, float, float, float))\nC++: void SetNanColor(double a[4])\n\n"},
  {"GetNanColor", PyvtkLookupTable_GetNanColor, METH_VARARGS,
   "V.GetNanColor() -> (float, float, float, float)\nC++: double *GetNanColor()\n\n"},
  {"GetNanColorAsUnsignedChars", PyvtkLookupTable_GetNanColorAsUnsignedChars, METH_VARARGS,
   "V.GetNanColorAsUnsignedChars() -> (int, ...)\nC++: unsigned char *GetNanColorAsUnsignedChars()\n\nReturn the NanColor as a pointer to 4 unsigned chars. This will\noverwrite any data returned by previous calls to MapValue.\n"},
  {"GetColorAsUnsignedChars", PyvtkLookupTable_GetColorAsUnsignedChars, METH_VARARGS,
   "V.GetColorAsUnsignedChars((float, float, float, float), [int, int,\n     int, int])\nC++: static void GetColorAsUnsignedChars(const double colorIn[4],\n    unsigned char colorOut[4])\n\nGiven an RGBA[4] color in the [0,1] range, convert it to RGBA[4]\nin the [0,255] range.\n"},
  {"SetBelowRangeColor", PyvtkLookupTable_SetBelowRangeColor, METH_VARARGS,
   "V.SetBelowRangeColor(float, float, float, float)\nC++: void SetBelowRangeColor(double, double, double, double)\nV.SetBelowRangeColor((float, float, float, float))\nC++: void SetBelowRangeColor(double a[4])\n\n"},
  {"GetBelowRangeColor", PyvtkLookupTable_GetBelowRangeColor, METH_VARARGS,
   "V.GetBelowRangeColor() -> (float, float, float, float)\nC++: double *GetBelowRangeColor()\n\n"},
  {"SetUseBelowRangeColor", PyvtkLookupTable_SetUseBelowRangeColor, METH_VARARGS,
   "V.SetUseBelowRangeColor(int)\nC++: virtual void SetUseBelowRangeColor(vtkTypeBool _arg)\n\nSet whether the below range color should be used.\n"},
  {"GetUseBelowRangeColor", PyvtkLookupTable_GetUseBelowRangeColor, METH_VARARGS,
   "V.GetUseBelowRangeColor() -> int\nC++: virtual vtkTypeBool GetUseBelowRangeColor()\n\nSet whether the below range color should be used.\n"},
  {"UseBelowRangeColorOn", PyvtkLookupTable_UseBelowRangeColorOn, METH_VARARGS,
   "V.UseBelowRangeColorOn()\nC++: virtual void UseBelowRangeColorOn()\n\nSet whether the below range color should be used.\n"},
  {"UseBelowRangeColorOff", PyvtkLookupTable_UseBelowRangeColorOff, METH_VARARGS,
   "V.UseBelowRangeColorOff()\nC++: virtual void UseBelowRangeColorOff()\n\nSet whether the below range color should be used.\n"},
  {"SetAboveRangeColor", PyvtkLookupTable_SetAboveRangeColor, METH_VARARGS,
   "V.SetAboveRangeColor(float, float, float, float)\nC++: void SetAboveRangeColor(double, double, double, double)\nV.SetAboveRangeColor((float, float, float, float))\nC++: void SetAboveRangeColor(double a[4])\n\n"},
  {"GetAboveRangeColor", PyvtkLookupTable_GetAboveRangeColor, METH_VARARGS,
   "V.GetAboveRangeColor() -> (float, float, float, float)\nC++: double *GetAboveRangeColor()\n\n"},
  {"SetUseAboveRangeColor", PyvtkLookupTable_SetUseAboveRangeColor, METH_VARARGS,
   "V.SetUseAboveRangeColor(int)\nC++: virtual void SetUseAboveRangeColor(vtkTypeBool _arg)\n\nSet whether the above range color should be used.\n"},
  {"GetUseAboveRangeColor", PyvtkLookupTable_GetUseAboveRangeColor, METH_VARARGS,
   "V.GetUseAboveRangeColor() -> int\nC++: virtual vtkTypeBool GetUseAboveRangeColor()\n\nSet whether the above range color should be used.\n"},
  {"UseAboveRangeColorOn", PyvtkLookupTable_UseAboveRangeColorOn, METH_VARARGS,
   "V.UseAboveRangeColorOn()\nC++: virtual void UseAboveRangeColorOn()\n\nSet whether the above range color should be used.\n"},
  {"UseAboveRangeColorOff", PyvtkLookupTable_UseAboveRangeColorOff, METH_VARARGS,
   "V.UseAboveRangeColorOff()\nC++: virtual void UseAboveRangeColorOff()\n\nSet whether the above range color should be used.\n"},
  {"MapValue", PyvtkLookupTable_MapValue, METH_VARARGS,
   "V.MapValue(float) -> (int, ...)\nC++: const unsigned char *MapValue(double v) override;\n\nMap one value through the lookup table, returning an RBGA[4]\ncolor.\n"},
  {"GetColor", PyvtkLookupTable_GetColor, METH_VARARGS,
   "V.GetColor(float, [float, float, float])\nC++: void GetColor(double x, double rgb[3]) override;\n\nMap one value through the lookup table and return the color as an\nRGB[3] array of doubles between 0 and 1. Note lack of alpha.\n"},
  {"GetOpacity", PyvtkLookupTable_GetOpacity, METH_VARARGS,
   "V.GetOpacity(float) -> float\nC++: double GetOpacity(double v) override;\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1.\n"},
  {"GetIndex", PyvtkLookupTable_GetIndex, METH_VARARGS,
   "V.GetIndex(float) -> int\nC++: virtual vtkIdType GetIndex(double v)\n\nReturn the table index associated with a particular value.\nReturns -1 if v is NaN.\n\n* Do not use this function when IndexedLookup is true:\n* in that case, the set of values v may take on is exactly the\n  integers\n* from 0 to GetNumberOfTableValues() - 1;\n* and v serves directly as an index into TableValues.\n"},
  {"SetNumberOfTableValues", PyvtkLookupTable_SetNumberOfTableValues, METH_VARARGS,
   "V.SetNumberOfTableValues(int)\nC++: void SetNumberOfTableValues(vtkIdType number)\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {"GetNumberOfTableValues", PyvtkLookupTable_GetNumberOfTableValues, METH_VARARGS,
   "V.GetNumberOfTableValues() -> int\nC++: vtkIdType GetNumberOfTableValues()\n\nSpecify the number of values (i.e., colors) in the lookup table.\n"},
  {"SetTableValue", PyvtkLookupTable_SetTableValue, METH_VARARGS,
   "V.SetTableValue(int, (float, float, float, float))\nC++: virtual void SetTableValue(vtkIdType indx,\n    const double rgba[4])\nV.SetTableValue(int, float, float, float, float)\nC++: virtual void SetTableValue(vtkIdType indx, double r,\n    double g, double b, double a=1.0)\n\nDirectly load color into lookup table. Use [0,1] double values\nfor color component specification. Make sure that you've either\nused the Build() method or used SetNumberOfTableValues() prior to\nusing this method.\n"},
  {"GetTableValue", PyvtkLookupTable_GetTableValue, METH_VARARGS,
   "V.GetTableValue(int) -> (float, float, float, float)\nC++: double *GetTableValue(vtkIdType id)\nV.GetTableValue(int, [float, float, float, float])\nC++: void GetTableValue(vtkIdType id, double rgba[4])\n\nReturn an RGBA color value for the given index into the lookup\ntable. Color components are expressed as [0,1] double values.\n"},
  {"GetPointer", PyvtkLookupTable_GetPointer, METH_VARARGS,
   "V.GetPointer(int) -> (int, ...)\nC++: unsigned char *GetPointer(vtkIdType id)\n\nGet pointer to color table data. Format is array of unsigned char\nR-G-B-A...R-G-B-A.\n"},
  {"WritePointer", PyvtkLookupTable_WritePointer, METH_VARARGS,
   "V.WritePointer(int, int) -> (int, ...)\nC++: unsigned char *WritePointer(vtkIdType id, int number)\n\nGet pointer to data. Useful for direct writes into object. MaxId\nis bumped by number (and memory allocated if necessary). Id is\nthe location you wish to write into; number is the number of rgba\nvalues to write.\n\n* \\warning If you modify the table data via the pointer returned\n  by this\n* member function, you must call\n  vtkLookupTable::BuildSpecialColors()\n* afterwards to ensure that the special colors (below/above range\nand NaN\n* value) are up-to-date.\n"},
  {"GetRange", PyvtkLookupTable_GetRange, METH_VARARGS,
   "V.GetRange() -> (float, float)\nC++: double *GetRange() override;\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {"SetRange", PyvtkLookupTable_SetRange, METH_VARARGS,
   "V.SetRange(float, float)\nC++: void SetRange(double min, double max) override;\nV.SetRange((float, float))\nC++: void SetRange(const double rng[2]) override;\n\nSets/Gets the range of scalars which will be mapped.  This is a\nduplicate of Get/SetTableRange.\n"},
  {"GetLogRange", PyvtkLookupTable_GetLogRange, METH_VARARGS,
   "V.GetLogRange((float, float), [float, float])\nC++: static void GetLogRange(const double range[2],\n    double log_range[2])\n\nReturns the log of range in log_range. There is a little more to\nthis than simply taking the log10 of the two range values: we do\nconversion of negative ranges to positive ranges, and conversion\nof zero to a 'very small number'.\n"},
  {"ApplyLogScale", PyvtkLookupTable_ApplyLogScale, METH_VARARGS,
   "V.ApplyLogScale(float, (float, float), (float, float)) -> float\nC++: static double ApplyLogScale(double v, const double range[2],\n    const double log_range[2])\n\nApply log to value, with appropriate constraints.\n"},
  {"SetNumberOfColors", PyvtkLookupTable_SetNumberOfColors, METH_VARARGS,
   "V.SetNumberOfColors(int)\nC++: virtual void SetNumberOfColors(vtkIdType _arg)\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {"GetNumberOfColorsMinValue", PyvtkLookupTable_GetNumberOfColorsMinValue, METH_VARARGS,
   "V.GetNumberOfColorsMinValue() -> int\nC++: virtual vtkIdType GetNumberOfColorsMinValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {"GetNumberOfColorsMaxValue", PyvtkLookupTable_GetNumberOfColorsMaxValue, METH_VARARGS,
   "V.GetNumberOfColorsMaxValue() -> int\nC++: virtual vtkIdType GetNumberOfColorsMaxValue()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {"GetNumberOfColors", PyvtkLookupTable_GetNumberOfColors, METH_VARARGS,
   "V.GetNumberOfColors() -> int\nC++: virtual vtkIdType GetNumberOfColors()\n\nSet the number of colors in the lookup table.  Use\nSetNumberOfTableValues() instead, it can be used both before and\nafter the table has been built whereas SetNumberOfColors() has no\neffect after the table has been built.\n"},
  {"SetTable", PyvtkLookupTable_SetTable, METH_VARARGS,
   "V.SetTable(vtkUnsignedCharArray)\nC++: void SetTable(vtkUnsignedCharArray *)\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {"GetTable", PyvtkLookupTable_GetTable, METH_VARARGS,
   "V.GetTable() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetTable()\n\nSet/Get the internal table array that is used to map the scalars\nto colors.  The table array is an unsigned char array with 4\ncomponents representing RGBA.\n"},
  {"MapScalarsThroughTable2", PyvtkLookupTable_MapScalarsThroughTable2, METH_VARARGS,
   "V.MapScalarsThroughTable2(void, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputIncrement) override;\n\nMap a set of scalars through the lookup table.\n\n* This member function is thread safe.\n"},
  {"DeepCopy", PyvtkLookupTable_DeepCopy, METH_VARARGS,
   "V.DeepCopy(vtkScalarsToColors)\nC++: void DeepCopy(vtkScalarsToColors *lut) override;\n\nCopy the contents from another LookupTable.\n"},
  {"UsingLogScale", PyvtkLookupTable_UsingLogScale, METH_VARARGS,
   "V.UsingLogScale() -> int\nC++: int UsingLogScale() override;\n\nThis should return 1 if the subclass is using log scale for\nmapping scalars to colors. Returns 1 is scale == VTK_SCALE_LOG10.\n"},
  {"GetNumberOfAvailableColors", PyvtkLookupTable_GetNumberOfAvailableColors, METH_VARARGS,
   "V.GetNumberOfAvailableColors() -> int\nC++: vtkIdType GetNumberOfAvailableColors() override;\n\nGet the number of available colors for mapping to.\n"},
  {"GetIndexedColor", PyvtkLookupTable_GetIndexedColor, METH_VARARGS,
   "V.GetIndexedColor(int, [float, float, float, float])\nC++: void GetIndexedColor(vtkIdType idx, double rgba[4]) override;\n\nReturn a color given an integer index.\n\n* This is used to assign colors to annotations (given an offset\n  into the\n* list of annotations).\n* If the table is empty or idx < 0, then NanColor is returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLookupTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkLookupTable", // tp_name
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
  PyvtkLookupTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLookupTable_StaticNew()
{
  return vtkLookupTable::New();
}

PyObject *PyvtkLookupTable_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLookupTable_Type, PyvtkLookupTable_Methods,
    "vtkLookupTable",
 &PyvtkLookupTable_StaticNew);

  PyTypeObject *pytype = &PyvtkLookupTable_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkScalarsToColors_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLookupTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLookupTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLookupTable", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_RAMP_LINEAR", 0 },
        { "VTK_RAMP_SCURVE", 1 },
        { "VTK_RAMP_SQRT", 2 },
        { "VTK_SCALE_LINEAR", 0 },
        { "VTK_SCALE_LOG10", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

