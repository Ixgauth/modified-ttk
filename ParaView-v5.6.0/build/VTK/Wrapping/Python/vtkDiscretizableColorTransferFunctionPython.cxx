// python wrapper for vtkDiscretizableColorTransferFunction
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
#include "vtkDiscretizableColorTransferFunction.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscretizableColorTransferFunction(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiscretizableColorTransferFunction_ClassNew(); }

#ifndef DECLARED_PyvtkColorTransferFunction_ClassNew
extern "C" { PyObject *PyvtkColorTransferFunction_ClassNew(); }
#define DECLARED_PyvtkColorTransferFunction_ClassNew
#endif

static const char *PyvtkDiscretizableColorTransferFunction_Doc =
  "vtkDiscretizableColorTransferFunction - a combination of\nvtkColorTransferFunction and vtkLookupTable.\n\n"
  "Superclass: vtkColorTransferFunction\n\n"
  "This is a cross between a vtkColorTransferFunction and a\n"
  "vtkLookupTable selectively combining the functionality of both. This\n"
  "class is a vtkColorTransferFunction allowing users to specify the RGB\n"
  "control points that control the color transfer function. At the same\n"
  "time, by settingDiscretize to 1 (true), one can force the transfer\n"
  "function to only haveNumberOfValues discrete colors.\n\n"
  "When IndexedLookup is true, this class behaves differently. The\n"
  "annotated values are considered to the be only valid values for which\n"
  "entries in the color table should be returned. The colors for\n"
  "annotated values are those specified using AddIndexedColors.\n"
  "Typically, there must be at least as many indexed colors specified as\n"
  "the annotations. For backwards compatibility, if no indexed-colors\n"
  "are specified, the colors in the lookup Table are assigned to\n"
  "annotated values by taking the modulus of their index in the list of\n"
  "annotations. If a scalar value is not present in AnnotatedValues,\n"
  "then NanColor will be used.\n\n"
  "One can set a scalar opacity function to map scalars to color types\n"
  "handling transparency (VTK_RGBA, VTK_LUMINANCE_ALPHA). Opacity\n"
  "mapping is off by default. Call EnableOpacityMappingOn() to handle\n"
  "mapping of alpha values.\n\n"
  "NOTE: One must call Build() after making any changes to the points in\n"
  "the ColorTransferFunction to ensure that the discrete and\n"
  "non-discrete versions match up.\n\n";


static PyObject *
PyvtkDiscretizableColorTransferFunction_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscretizableColorTransferFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscretizableColorTransferFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscretizableColorTransferFunction *tempr = vtkDiscretizableColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscretizableColorTransferFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscretizableColorTransferFunction::NewInstance());

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
PyvtkDiscretizableColorTransferFunction_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsOpaque() :
      op->vtkDiscretizableColorTransferFunction::IsOpaque());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColorRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColorRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetIndexedColorRGB(temp0, temp1);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetIndexedColorRGB(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColorRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColorRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  const size_t size1 = 4;
  double temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetIndexedColorRGBA(temp0, temp1);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetIndexedColorRGBA(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
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
      op->SetIndexedColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetIndexedColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetIndexedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->vtkDiscretizableColorTransferFunction::GetIndexedColor(temp0, temp1);
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
PyvtkDiscretizableColorTransferFunction_SetNumberOfIndexedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIndexedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIndexedColors(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetNumberOfIndexedColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfIndexedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndexedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfIndexedColors() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfIndexedColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Build();
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::Build();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiscretize(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetDiscretize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiscretize() :
      op->vtkDiscretizableColorTransferFunction::GetDiscretize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DiscretizeOn();
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DiscretizeOff();
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLogScale(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetUseLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLogScale() :
      op->vtkDiscretizableColorTransferFunction::GetUseLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfValues(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetNumberOfValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfValues() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_MapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned char *tempr = (ap.IsBound() ?
      op->MapValue(temp0) :
      op->vtkDiscretizableColorTransferFunction::MapValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->vtkDiscretizableColorTransferFunction::GetColor(temp0, temp1);
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
PyvtkDiscretizableColorTransferFunction_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity(temp0) :
      op->vtkDiscretizableColorTransferFunction::GetOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->vtkDiscretizableColorTransferFunction::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkDiscretizableColorTransferFunction_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
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
      op->vtkDiscretizableColorTransferFunction::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNanColor(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0);
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
PyvtkDiscretizableColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return nullptr;
}



static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNanOpacity(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetNanOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UsingLogScale() :
      op->vtkDiscretizableColorTransferFunction::UsingLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfAvailableColors() :
      op->vtkDiscretizableColorTransferFunction::GetNumberOfAvailableColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkPiecewiseFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPiecewiseFunction"))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityFunction(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetScalarOpacityFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetScalarOpacityFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPiecewiseFunction *tempr = (ap.IsBound() ?
      op->GetScalarOpacityFunction() :
      op->vtkDiscretizableColorTransferFunction::GetScalarOpacityFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetEnableOpacityMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableOpacityMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableOpacityMapping(temp0);
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::SetEnableOpacityMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetEnableOpacityMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableOpacityMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableOpacityMapping() :
      op->vtkDiscretizableColorTransferFunction::GetEnableOpacityMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOpacityMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOpacityMappingOn();
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::EnableOpacityMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOpacityMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOpacityMappingOff();
    }
    else
    {
      op->vtkDiscretizableColorTransferFunction::EnableOpacityMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiscretizableColorTransferFunction::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscretizableColorTransferFunction_Methods[] = {
  {"IsTypeOf", PyvtkDiscretizableColorTransferFunction_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiscretizableColorTransferFunction_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiscretizableColorTransferFunction_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkDiscretizableColorTransferFunction\nC++: static vtkDiscretizableColorTransferFunction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiscretizableColorTransferFunction_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiscretizableColorTransferFunction\nC++: vtkDiscretizableColorTransferFunction *NewInstance()\n\n"},
  {"IsOpaque", PyvtkDiscretizableColorTransferFunction_IsOpaque, METH_VARARGS,
   "V.IsOpaque() -> int\nC++: int IsOpaque() override;\n\nReturns the negation of EnableOpacityMapping.\n"},
  {"SetIndexedColorRGB", PyvtkDiscretizableColorTransferFunction_SetIndexedColorRGB, METH_VARARGS,
   "V.SetIndexedColorRGB(int, (float, float, float))\nC++: void SetIndexedColorRGB(unsigned int index,\n    const double rgb[3])\n\nAdd colors to use when IndexedLookup is true.SetIndexedColor()\nwill automatically call SetNumberOfIndexedColors(index+1) if the\ncurrent number of indexed colors is not sufficient for the\nspecified index and all will be initialized to the RGBA/RGB\nvalues passed to this call.\n"},
  {"SetIndexedColorRGBA", PyvtkDiscretizableColorTransferFunction_SetIndexedColorRGBA, METH_VARARGS,
   "V.SetIndexedColorRGBA(int, (float, float, float, float))\nC++: void SetIndexedColorRGBA(unsigned int index,\n    const double rgba[4])\n\n"},
  {"SetIndexedColor", PyvtkDiscretizableColorTransferFunction_SetIndexedColor, METH_VARARGS,
   "V.SetIndexedColor(int, float, float, float, float)\nC++: void SetIndexedColor(unsigned int index, double r, double g,\n    double b, double a=1.0)\n\n"},
  {"GetIndexedColor", PyvtkDiscretizableColorTransferFunction_GetIndexedColor, METH_VARARGS,
   "V.GetIndexedColor(int, [float, float, float, float])\nC++: void GetIndexedColor(vtkIdType i, double rgba[4]) override;\n\nGet the \"indexed color\" assigned to an index.\n\n* The index is used in IndexedLookup mode to assign colors to\n  annotations (in the order\n* the annotations were set).\n* Subclasses must implement this and interpret how to treat the\n  index.\n* vtkLookupTable simply returns GetTableValue( index %\n  this->GetNumberOfTableValues()).\n* vtkColorTransferFunction returns the color associated with node\nindex % this->GetSize().\n\n* Note that implementations *must* set the opacity (alpha)\n  component of the color, even if they\n* do not provide opacity values in their colormaps. In that case,\nalpha = 1 should be used.\n"},
  {"SetNumberOfIndexedColors", PyvtkDiscretizableColorTransferFunction_SetNumberOfIndexedColors, METH_VARARGS,
   "V.SetNumberOfIndexedColors(int)\nC++: void SetNumberOfIndexedColors(unsigned int count)\n\nSet the number of indexed colors. These are used when\nIndexedLookup is true. If no indexed colors are specified, for\nbackwards compatibility, this class reverts to using the\nRGBPoints for colors.\n"},
  {"GetNumberOfIndexedColors", PyvtkDiscretizableColorTransferFunction_GetNumberOfIndexedColors, METH_VARARGS,
   "V.GetNumberOfIndexedColors() -> int\nC++: unsigned int GetNumberOfIndexedColors()\n\nSet the number of indexed colors. These are used when\nIndexedLookup is true. If no indexed colors are specified, for\nbackwards compatibility, this class reverts to using the\nRGBPoints for colors.\n"},
  {"Build", PyvtkDiscretizableColorTransferFunction_Build, METH_VARARGS,
   "V.Build()\nC++: void Build() override;\n\nGenerate discretized lookup table, if applicable. This method\nmust be called after changes to the ColorTransferFunction\notherwise the discretized version will be inconsistent with the\nnon-discretized one.\n"},
  {"SetDiscretize", PyvtkDiscretizableColorTransferFunction_SetDiscretize, METH_VARARGS,
   "V.SetDiscretize(int)\nC++: virtual void SetDiscretize(vtkTypeBool _arg)\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {"GetDiscretize", PyvtkDiscretizableColorTransferFunction_GetDiscretize, METH_VARARGS,
   "V.GetDiscretize() -> int\nC++: virtual vtkTypeBool GetDiscretize()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {"DiscretizeOn", PyvtkDiscretizableColorTransferFunction_DiscretizeOn, METH_VARARGS,
   "V.DiscretizeOn()\nC++: virtual void DiscretizeOn()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {"DiscretizeOff", PyvtkDiscretizableColorTransferFunction_DiscretizeOff, METH_VARARGS,
   "V.DiscretizeOff()\nC++: virtual void DiscretizeOff()\n\nSet if the values are to be mapped after discretization. The\nnumber of discrete values is set by using SetNumberOfValues().\nNot set by default, i.e. color value is determined by\ninterpolating at the scalar value.\n"},
  {"SetUseLogScale", PyvtkDiscretizableColorTransferFunction_SetUseLogScale, METH_VARARGS,
   "V.SetUseLogScale(int)\nC++: virtual void SetUseLogScale(int useLogScale)\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {"GetUseLogScale", PyvtkDiscretizableColorTransferFunction_GetUseLogScale, METH_VARARGS,
   "V.GetUseLogScale() -> int\nC++: virtual int GetUseLogScale()\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {"SetNumberOfValues", PyvtkDiscretizableColorTransferFunction_SetNumberOfValues, METH_VARARGS,
   "V.SetNumberOfValues(int)\nC++: virtual void SetNumberOfValues(vtkIdType _arg)\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {"GetNumberOfValues", PyvtkDiscretizableColorTransferFunction_GetNumberOfValues, METH_VARARGS,
   "V.GetNumberOfValues() -> int\nC++: virtual vtkIdType GetNumberOfValues()\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {"MapValue", PyvtkDiscretizableColorTransferFunction_MapValue, METH_VARARGS,
   "V.MapValue(float) -> (int, ...)\nC++: const unsigned char *MapValue(double v) override;\n\nMap one value through the lookup table and return a color defined\nas a RGBA unsigned char tuple (4 bytes).\n"},
  {"GetColor", PyvtkDiscretizableColorTransferFunction_GetColor, METH_VARARGS,
   "V.GetColor(float, [float, float, float])\nC++: void GetColor(double v, double rgb[3]) override;\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {"GetOpacity", PyvtkDiscretizableColorTransferFunction_GetOpacity, METH_VARARGS,
   "V.GetOpacity(float) -> float\nC++: double GetOpacity(double v) override;\n\nReturn the opacity of a given scalar.\n"},
  {"MapScalarsThroughTable2", PyvtkDiscretizableColorTransferFunction_MapScalarsThroughTable2, METH_VARARGS,
   "V.MapScalarsThroughTable2(void, [int, ...], int, int, int, int)\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat) override;\n\nMap a set of scalars through the lookup table. Overridden to map\nthe opacity value. This internal method is inherited from\nvtkScalarsToColors and should never be called directly.\n"},
  {"SetAlpha", PyvtkDiscretizableColorTransferFunction_SetAlpha, METH_VARARGS,
   "V.SetAlpha(float)\nC++: void SetAlpha(double alpha) override;\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Overridden to pass the alpha to the\ninternal vtkLookupTable.\n"},
  {"SetNanColor", PyvtkDiscretizableColorTransferFunction_SetNanColor, METH_VARARGS,
   "V.SetNanColor(float, float, float)\nC++: void SetNanColor(double r, double g, double b) override;\nV.SetNanColor([float, float, float])\nC++: void SetNanColor(double rgb[3]) override;\n\nSet the color to use when a NaN (not a number) is encountered. \nThis is an RGB 3-tuple color of doubles in the range [0, 1].\nOverridden to pass the NanColor to the internal vtkLookupTable.\n"},
  {"SetNanOpacity", PyvtkDiscretizableColorTransferFunction_SetNanOpacity, METH_VARARGS,
   "V.SetNanOpacity(float)\nC++: void SetNanOpacity(double a) override;\n\nSet the opacity to use when a NaN (not a number) is encountered. \nThis is an double in the range [0, 1]. Overridden to pass the\nNanOpacity to the internal vtkLookupTable.\n"},
  {"UsingLogScale", PyvtkDiscretizableColorTransferFunction_UsingLogScale, METH_VARARGS,
   "V.UsingLogScale() -> int\nC++: int UsingLogScale() override;\n\nThis should return 1 if the subclass is using log scale for\nmapping scalars to colors.\n"},
  {"GetNumberOfAvailableColors", PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors, METH_VARARGS,
   "V.GetNumberOfAvailableColors() -> int\nC++: vtkIdType GetNumberOfAvailableColors() override;\n\nGet the number of available colors for mapping to.\n"},
  {"SetScalarOpacityFunction", PyvtkDiscretizableColorTransferFunction_SetScalarOpacityFunction, METH_VARARGS,
   "V.SetScalarOpacityFunction(vtkPiecewiseFunction)\nC++: virtual void SetScalarOpacityFunction(\n    vtkPiecewiseFunction *function)\n\nSet/get the opacity function to use.\n"},
  {"GetScalarOpacityFunction", PyvtkDiscretizableColorTransferFunction_GetScalarOpacityFunction, METH_VARARGS,
   "V.GetScalarOpacityFunction() -> vtkPiecewiseFunction\nC++: virtual vtkPiecewiseFunction *GetScalarOpacityFunction()\n\nSet/get the opacity function to use.\n"},
  {"SetEnableOpacityMapping", PyvtkDiscretizableColorTransferFunction_SetEnableOpacityMapping, METH_VARARGS,
   "V.SetEnableOpacityMapping(bool)\nC++: virtual void SetEnableOpacityMapping(bool _arg)\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {"GetEnableOpacityMapping", PyvtkDiscretizableColorTransferFunction_GetEnableOpacityMapping, METH_VARARGS,
   "V.GetEnableOpacityMapping() -> bool\nC++: virtual bool GetEnableOpacityMapping()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {"EnableOpacityMappingOn", PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOn, METH_VARARGS,
   "V.EnableOpacityMappingOn()\nC++: virtual void EnableOpacityMappingOn()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {"EnableOpacityMappingOff", PyvtkDiscretizableColorTransferFunction_EnableOpacityMappingOff, METH_VARARGS,
   "V.EnableOpacityMappingOff()\nC++: virtual void EnableOpacityMappingOff()\n\nEnable/disable the usage of the scalar opacity function.\n"},
  {"GetMTime", PyvtkDiscretizableColorTransferFunction_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include the ScalarOpacityFunction's MTime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiscretizableColorTransferFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkDiscretizableColorTransferFunction", // tp_name
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
  PyvtkDiscretizableColorTransferFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscretizableColorTransferFunction_StaticNew()
{
  return vtkDiscretizableColorTransferFunction::New();
}

PyObject *PyvtkDiscretizableColorTransferFunction_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiscretizableColorTransferFunction_Type, PyvtkDiscretizableColorTransferFunction_Methods,
    "vtkDiscretizableColorTransferFunction",
 &PyvtkDiscretizableColorTransferFunction_StaticNew);

  PyTypeObject *pytype = &PyvtkDiscretizableColorTransferFunction_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkColorTransferFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiscretizableColorTransferFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscretizableColorTransferFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscretizableColorTransferFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

