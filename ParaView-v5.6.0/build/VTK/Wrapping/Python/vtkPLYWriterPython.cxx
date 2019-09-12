// python wrapper for vtkPLYWriter
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
#include "vtkPLYWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLYWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPLYWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkPLYWriter_Doc =
  "vtkPLYWriter - write Stanford PLY file format\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkPLYWriter writes polygonal data in Stanford University PLY format\n"
  "(see http://graphics.stanford.edu/data/3Dscanrep/). The data can be\n"
  "written in either binary (little or big endian) or ASCII\n"
  "representation. As for PointData and CellData, vtkPLYWriter cannot\n"
  "handle normals or vectors. It only handles RGB PointData and\n"
  "CellData. You need to set the name of the array (using SetName for\n"
  "the array and SetArrayName for the writer). If the array is not a\n"
  "vtkUnsignedCharArray with 3 or 4 components, you need to specify a\n"
  "vtkLookupTable to map the scalars to RGB.\n\n"
  "To enable saving out alpha (opacity) values, you must enable alpha\n"
  "using `vtkPLYWriter::SetEnableAlpha()`.\n\n"
  "@warning\n"
  "PLY does not handle big endian versus little endian correctly.\n\n"
  "@sa\n"
  "vtkPLYReader\n\n";


static PyObject *
PyvtkPLYWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLYWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLYWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPLYWriter *tempr = vtkPLYWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPLYWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLYWriter::NewInstance());

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
PyvtkPLYWriter_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMinValue() :
      op->vtkPLYWriter::GetDataByteOrderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMaxValue() :
      op->vtkPLYWriter::GetDataByteOrderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkPLYWriter::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkPLYWriter::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformCellColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformCellColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformPointColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformPointColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToOff();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAlpha(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetEnableAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableAlpha() :
      op->vtkPLYWriter::GetEnableAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_EnableAlphaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAlphaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAlphaOn();
    }
    else
    {
      op->vtkPLYWriter::EnableAlphaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_EnableAlphaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAlphaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAlphaOff();
    }
    else
    {
      op->vtkPLYWriter::EnableAlphaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPLYWriter::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkPLYWriter::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkPLYWriter::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkPLYWriter::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPLYWriter::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
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
      op->vtkPLYWriter::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
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
      op->vtkPLYWriter::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPLYWriter_SetColor_s1(self, args);
    case 1:
      return PyvtkPLYWriter_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}



static PyObject *
PyvtkPLYWriter_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkPLYWriter::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkPLYWriter::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPLYWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkPLYWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPLYWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkPLYWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}



static PyObject *
PyvtkPLYWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPLYWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkPLYWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkPLYWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkPLYWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkPLYWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkPLYWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesName(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesNameMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesNameMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesNameMinValue() :
      op->vtkPLYWriter::GetTextureCoordinatesNameMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesNameMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesNameMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesNameMaxValue() :
      op->vtkPLYWriter::GetTextureCoordinatesNameMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesName() :
      op->vtkPLYWriter::GetTextureCoordinatesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesNameToUV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesNameToUV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesNameToUV();
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesNameToUV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesNameToTextureUV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesNameToTextureUV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesNameToTextureUV();
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesNameToTextureUV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_AddComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddComment(temp0);
    }
    else
    {
      op->vtkPLYWriter::AddComment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPLYWriter_Methods[] = {
  {"IsTypeOf", PyvtkPLYWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPLYWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPLYWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPLYWriter\nC++: static vtkPLYWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPLYWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPLYWriter\nC++: vtkPLYWriter *NewInstance()\n\n"},
  {"SetDataByteOrder", PyvtkPLYWriter_SetDataByteOrder, METH_VARARGS,
   "V.SetDataByteOrder(int)\nC++: virtual void SetDataByteOrder(int _arg)\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"GetDataByteOrderMinValue", PyvtkPLYWriter_GetDataByteOrderMinValue, METH_VARARGS,
   "V.GetDataByteOrderMinValue() -> int\nC++: virtual int GetDataByteOrderMinValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"GetDataByteOrderMaxValue", PyvtkPLYWriter_GetDataByteOrderMaxValue, METH_VARARGS,
   "V.GetDataByteOrderMaxValue() -> int\nC++: virtual int GetDataByteOrderMaxValue()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"GetDataByteOrder", PyvtkPLYWriter_GetDataByteOrder, METH_VARARGS,
   "V.GetDataByteOrder() -> int\nC++: virtual int GetDataByteOrder()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"SetDataByteOrderToBigEndian", PyvtkPLYWriter_SetDataByteOrderToBigEndian, METH_VARARGS,
   "V.SetDataByteOrderToBigEndian()\nC++: void SetDataByteOrderToBigEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkPLYWriter_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "V.SetDataByteOrderToLittleEndian()\nC++: void SetDataByteOrderToLittleEndian()\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"SetColorMode", PyvtkPLYWriter_SetColorMode, METH_VARARGS,
   "V.SetColorMode(int)\nC++: virtual void SetColorMode(int _arg)\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"GetColorMode", PyvtkPLYWriter_GetColorMode, METH_VARARGS,
   "V.GetColorMode() -> int\nC++: virtual int GetColorMode()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetColorModeToDefault", PyvtkPLYWriter_SetColorModeToDefault, METH_VARARGS,
   "V.SetColorModeToDefault()\nC++: void SetColorModeToDefault()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetColorModeToUniformCellColor", PyvtkPLYWriter_SetColorModeToUniformCellColor, METH_VARARGS,
   "V.SetColorModeToUniformCellColor()\nC++: void SetColorModeToUniformCellColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetColorModeToUniformPointColor", PyvtkPLYWriter_SetColorModeToUniformPointColor, METH_VARARGS,
   "V.SetColorModeToUniformPointColor()\nC++: void SetColorModeToUniformPointColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetColorModeToUniformColor", PyvtkPLYWriter_SetColorModeToUniformColor, METH_VARARGS,
   "V.SetColorModeToUniformColor()\nC++: void SetColorModeToUniformColor()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetColorModeToOff", PyvtkPLYWriter_SetColorModeToOff, METH_VARARGS,
   "V.SetColorModeToOff()\nC++: void SetColorModeToOff()\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"SetEnableAlpha", PyvtkPLYWriter_SetEnableAlpha, METH_VARARGS,
   "V.SetEnableAlpha(bool)\nC++: virtual void SetEnableAlpha(bool _arg)\n\nEnable alpha output. Default is off, i.e. only color values will\nbe saved based on ColorMode.\n"},
  {"GetEnableAlpha", PyvtkPLYWriter_GetEnableAlpha, METH_VARARGS,
   "V.GetEnableAlpha() -> bool\nC++: virtual bool GetEnableAlpha()\n\nEnable alpha output. Default is off, i.e. only color values will\nbe saved based on ColorMode.\n"},
  {"EnableAlphaOn", PyvtkPLYWriter_EnableAlphaOn, METH_VARARGS,
   "V.EnableAlphaOn()\nC++: virtual void EnableAlphaOn()\n\nEnable alpha output. Default is off, i.e. only color values will\nbe saved based on ColorMode.\n"},
  {"EnableAlphaOff", PyvtkPLYWriter_EnableAlphaOff, METH_VARARGS,
   "V.EnableAlphaOff()\nC++: virtual void EnableAlphaOff()\n\nEnable alpha output. Default is off, i.e. only color values will\nbe saved based on ColorMode.\n"},
  {"SetArrayName", PyvtkPLYWriter_SetArrayName, METH_VARARGS,
   "V.SetArrayName(string)\nC++: virtual void SetArrayName(const char *_arg)\n\nSpecify the array name to use to color the data.\n"},
  {"GetArrayName", PyvtkPLYWriter_GetArrayName, METH_VARARGS,
   "V.GetArrayName() -> string\nC++: virtual char *GetArrayName()\n\nSpecify the array name to use to color the data.\n"},
  {"SetComponent", PyvtkPLYWriter_SetComponent, METH_VARARGS,
   "V.SetComponent(int)\nC++: virtual void SetComponent(int _arg)\n\nSpecify the array component to use to color the data.\n"},
  {"GetComponentMinValue", PyvtkPLYWriter_GetComponentMinValue, METH_VARARGS,
   "V.GetComponentMinValue() -> int\nC++: virtual int GetComponentMinValue()\n\nSpecify the array component to use to color the data.\n"},
  {"GetComponentMaxValue", PyvtkPLYWriter_GetComponentMaxValue, METH_VARARGS,
   "V.GetComponentMaxValue() -> int\nC++: virtual int GetComponentMaxValue()\n\nSpecify the array component to use to color the data.\n"},
  {"GetComponent", PyvtkPLYWriter_GetComponent, METH_VARARGS,
   "V.GetComponent() -> int\nC++: virtual int GetComponent()\n\nSpecify the array component to use to color the data.\n"},
  {"SetLookupTable", PyvtkPLYWriter_SetLookupTable, METH_VARARGS,
   "V.SetLookupTable(vtkScalarsToColors)\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {"GetLookupTable", PyvtkPLYWriter_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {"SetColor", PyvtkPLYWriter_SetColor, METH_VARARGS,
   "V.SetColor(int, int, int)\nC++: void SetColor(unsigned char, unsigned char, unsigned char)\nV.SetColor((int, int, int))\nC++: void SetColor(unsigned char a[3])\n\n"},
  {"GetColor", PyvtkPLYWriter_GetColor, METH_VARARGS,
   "V.GetColor() -> (int, int, int)\nC++: unsigned char *GetColor()\n\n"},
  {"SetAlpha", PyvtkPLYWriter_SetAlpha, METH_VARARGS,
   "V.SetAlpha(int)\nC++: virtual void SetAlpha(unsigned char _arg)\n\nSet the alpha to use when using a uniform color (effect point or\ncells, or both) and EnableAlpha is ON.\n"},
  {"GetAlpha", PyvtkPLYWriter_GetAlpha, METH_VARARGS,
   "V.GetAlpha() -> int\nC++: virtual unsigned char GetAlpha()\n\nSet the alpha to use when using a uniform color (effect point or\ncells, or both) and EnableAlpha is ON.\n"},
  {"GetInput", PyvtkPLYWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\nV.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetFileName", PyvtkPLYWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkPLYWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"SetFileType", PyvtkPLYWriter_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: virtual void SetFileType(int _arg)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMinValue", PyvtkPLYWriter_GetFileTypeMinValue, METH_VARARGS,
   "V.GetFileTypeMinValue() -> int\nC++: virtual int GetFileTypeMinValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMaxValue", PyvtkPLYWriter_GetFileTypeMaxValue, METH_VARARGS,
   "V.GetFileTypeMaxValue() -> int\nC++: virtual int GetFileTypeMaxValue()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileType", PyvtkPLYWriter_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: virtual int GetFileType()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToASCII", PyvtkPLYWriter_SetFileTypeToASCII, METH_VARARGS,
   "V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetFileTypeToBinary", PyvtkPLYWriter_SetFileTypeToBinary, METH_VARARGS,
   "V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"SetTextureCoordinatesName", PyvtkPLYWriter_SetTextureCoordinatesName, METH_VARARGS,
   "V.SetTextureCoordinatesName(int)\nC++: virtual void SetTextureCoordinatesName(int _arg)\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"GetTextureCoordinatesNameMinValue", PyvtkPLYWriter_GetTextureCoordinatesNameMinValue, METH_VARARGS,
   "V.GetTextureCoordinatesNameMinValue() -> int\nC++: virtual int GetTextureCoordinatesNameMinValue()\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"GetTextureCoordinatesNameMaxValue", PyvtkPLYWriter_GetTextureCoordinatesNameMaxValue, METH_VARARGS,
   "V.GetTextureCoordinatesNameMaxValue() -> int\nC++: virtual int GetTextureCoordinatesNameMaxValue()\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"GetTextureCoordinatesName", PyvtkPLYWriter_GetTextureCoordinatesName, METH_VARARGS,
   "V.GetTextureCoordinatesName() -> int\nC++: virtual int GetTextureCoordinatesName()\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"SetTextureCoordinatesNameToUV", PyvtkPLYWriter_SetTextureCoordinatesNameToUV, METH_VARARGS,
   "V.SetTextureCoordinatesNameToUV()\nC++: void SetTextureCoordinatesNameToUV()\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"SetTextureCoordinatesNameToTextureUV", PyvtkPLYWriter_SetTextureCoordinatesNameToTextureUV, METH_VARARGS,
   "V.SetTextureCoordinatesNameToTextureUV()\nC++: void SetTextureCoordinatesNameToTextureUV()\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"AddComment", PyvtkPLYWriter_AddComment, METH_VARARGS,
   "V.AddComment(string)\nC++: void AddComment(const std::string &comment)\n\nAdd a comment in the header part.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPLYWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOPLYPython.vtkPLYWriter", // tp_name
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
  PyvtkPLYWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPLYWriter_StaticNew()
{
  return vtkPLYWriter::New();
}

PyObject *PyvtkPLYWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPLYWriter_Type, PyvtkPLYWriter_Methods,
    "vtkPLYWriter",
 &PyvtkPLYWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkPLYWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLYWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLYWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPLYWriter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_LITTLE_ENDIAN", 0 },
        { "VTK_BIG_ENDIAN", 1 },
        { "VTK_COLOR_MODE_DEFAULT", 0 },
        { "VTK_COLOR_MODE_UNIFORM_CELL_COLOR", 1 },
        { "VTK_COLOR_MODE_UNIFORM_POINT_COLOR", 2 },
        { "VTK_COLOR_MODE_UNIFORM_COLOR", 3 },
        { "VTK_COLOR_MODE_OFF", 4 },
        { "VTK_TEXTURECOORDS_UV", 0 },
        { "VTK_TEXTURECOORDS_TEXTUREUV", 1 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

