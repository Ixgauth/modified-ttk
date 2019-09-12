// python wrapper for vtkSplineFilter
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
#include "vtkSplineFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplineFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSplineFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkSplineFilter_Doc =
  "vtkSplineFilter - generate uniformly subdivided polylines from a set\nof input polyline using a vtkSpline\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSplineFilter is a filter that generates an output polylines from\n"
  "an input set of polylines. The polylines are uniformly subdivided and\n"
  "produced with the help of a vtkSpline class that the user can specify\n"
  "(by default a vtkCardinalSpline is used). The number of subdivisions\n"
  "of the line can be controlled in several ways. The user can either\n"
  "specify the number of subdivisions or a length of each subdivision\n"
  "can be provided (and the class will figure out how many subdivisions\n"
  "is required over the whole polyline). The maximum number of\n"
  "subdivisions can also be set.\n\n"
  "The output of this filter is a polyline per input polyline (or line).\n"
  "New points and texture coordinates are created. Point data is\n"
  "interpolated and cell data passed on. Any polylines with less than\n"
  "two points, or who have coincident points, are ignored.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkTubeFilter\n\n";


static PyObject *
PyvtkSplineFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplineFilter *tempr = vtkSplineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineFilter::NewInstance());

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
PyvtkSplineFilter_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetMaximumNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkSplineFilter::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivide(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetSubdivide(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMinValue() :
      op->vtkSplineFilter::GetSubdivideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideMaxValue() :
      op->vtkSplineFilter::GetSubdivideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivide(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivide");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivide() :
      op->vtkSplineFilter::GetSubdivide());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivideToSpecified();
    }
    else
    {
      op->vtkSplineFilter::SetSubdivideToSpecified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSubdivideToLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideToLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivideToLength();
    }
    else
    {
      op->vtkSplineFilter::SetSubdivideToLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSubdivideAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSubdivideAsString() :
      op->vtkSplineFilter::GetSubdivideAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMinValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisionsMaxValue() :
      op->vtkSplineFilter::GetNumberOfSubdivisionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkSplineFilter::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLength(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthMinValue() :
      op->vtkSplineFilter::GetLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthMaxValue() :
      op->vtkSplineFilter::GetLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkSplineFilter::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetSpline(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetSpline() :
      op->vtkSplineFilter::GetSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoords(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMinValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsMaxValue() :
      op->vtkSplineFilter::GetGenerateTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTCoords() :
      op->vtkSplineFilter::GetGenerateTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToOff();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToNormalizedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToNormalizedLength();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToNormalizedLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseLength();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToUseLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetGenerateTCoordsToUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTCoordsToUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTCoordsToUseScalars();
    }
    else
    {
      op->vtkSplineFilter::SetGenerateTCoordsToUseScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetGenerateTCoordsAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTCoordsAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGenerateTCoordsAsString() :
      op->vtkSplineFilter::GetGenerateTCoordsAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_SetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureLength(temp0);
    }
    else
    {
      op->vtkSplineFilter::SetTextureLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMinValue() :
      op->vtkSplineFilter::GetTextureLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLengthMaxValue() :
      op->vtkSplineFilter::GetTextureLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineFilter_GetTextureLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineFilter *op = static_cast<vtkSplineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureLength() :
      op->vtkSplineFilter::GetTextureLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSplineFilter_Methods[] = {
  {"IsTypeOf", PyvtkSplineFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplineFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplineFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSplineFilter\nC++: static vtkSplineFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplineFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSplineFilter\nC++: vtkSplineFilter *NewInstance()\n\n"},
  {"SetMaximumNumberOfSubdivisions", PyvtkSplineFilter_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   "V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(int _arg)\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {"GetMaximumNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfSubdivisionsMinValue() -> int\nC++: virtual int GetMaximumNumberOfSubdivisionsMinValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {"GetMaximumNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetMaximumNumberOfSubdivisionsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfSubdivisionsMaxValue() -> int\nC++: virtual int GetMaximumNumberOfSubdivisionsMaxValue()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {"GetMaximumNumberOfSubdivisions", PyvtkSplineFilter_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   "V.GetMaximumNumberOfSubdivisions() -> int\nC++: virtual int GetMaximumNumberOfSubdivisions()\n\nSet the maximum number of subdivisions that are created for each\npolyline.\n"},
  {"SetSubdivide", PyvtkSplineFilter_SetSubdivide, METH_VARARGS,
   "V.SetSubdivide(int)\nC++: virtual void SetSubdivide(int _arg)\n\nSpecify how the number of subdivisions is determined.\n"},
  {"GetSubdivideMinValue", PyvtkSplineFilter_GetSubdivideMinValue, METH_VARARGS,
   "V.GetSubdivideMinValue() -> int\nC++: virtual int GetSubdivideMinValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"GetSubdivideMaxValue", PyvtkSplineFilter_GetSubdivideMaxValue, METH_VARARGS,
   "V.GetSubdivideMaxValue() -> int\nC++: virtual int GetSubdivideMaxValue()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"GetSubdivide", PyvtkSplineFilter_GetSubdivide, METH_VARARGS,
   "V.GetSubdivide() -> int\nC++: virtual int GetSubdivide()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"SetSubdivideToSpecified", PyvtkSplineFilter_SetSubdivideToSpecified, METH_VARARGS,
   "V.SetSubdivideToSpecified()\nC++: void SetSubdivideToSpecified()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"SetSubdivideToLength", PyvtkSplineFilter_SetSubdivideToLength, METH_VARARGS,
   "V.SetSubdivideToLength()\nC++: void SetSubdivideToLength()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"GetSubdivideAsString", PyvtkSplineFilter_GetSubdivideAsString, METH_VARARGS,
   "V.GetSubdivideAsString() -> string\nC++: const char *GetSubdivideAsString()\n\nSpecify how the number of subdivisions is determined.\n"},
  {"SetNumberOfSubdivisions", PyvtkSplineFilter_SetNumberOfSubdivisions, METH_VARARGS,
   "V.SetNumberOfSubdivisions(int)\nC++: virtual void SetNumberOfSubdivisions(int _arg)\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {"GetNumberOfSubdivisionsMinValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMinValue, METH_VARARGS,
   "V.GetNumberOfSubdivisionsMinValue() -> int\nC++: virtual int GetNumberOfSubdivisionsMinValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {"GetNumberOfSubdivisionsMaxValue", PyvtkSplineFilter_GetNumberOfSubdivisionsMaxValue, METH_VARARGS,
   "V.GetNumberOfSubdivisionsMaxValue() -> int\nC++: virtual int GetNumberOfSubdivisionsMaxValue()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {"GetNumberOfSubdivisions", PyvtkSplineFilter_GetNumberOfSubdivisions, METH_VARARGS,
   "V.GetNumberOfSubdivisions() -> int\nC++: virtual int GetNumberOfSubdivisions()\n\nSet the number of subdivisions that are created for the polyline.\nThis method only has effect if Subdivisions is set to\nSetSubdivisionsToSpecify().\n"},
  {"SetLength", PyvtkSplineFilter_SetLength, METH_VARARGS,
   "V.SetLength(float)\nC++: virtual void SetLength(double _arg)\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {"GetLengthMinValue", PyvtkSplineFilter_GetLengthMinValue, METH_VARARGS,
   "V.GetLengthMinValue() -> float\nC++: virtual double GetLengthMinValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {"GetLengthMaxValue", PyvtkSplineFilter_GetLengthMaxValue, METH_VARARGS,
   "V.GetLengthMaxValue() -> float\nC++: virtual double GetLengthMaxValue()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {"GetLength", PyvtkSplineFilter_GetLength, METH_VARARGS,
   "V.GetLength() -> float\nC++: virtual double GetLength()\n\nControl the number of subdivisions that are created for the\npolyline based on an absolute length. The length of the spline is\ndivided by this length to determine the number of subdivisions.\n"},
  {"SetSpline", PyvtkSplineFilter_SetSpline, METH_VARARGS,
   "V.SetSpline(vtkSpline)\nC++: virtual void SetSpline(vtkSpline *)\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {"GetSpline", PyvtkSplineFilter_GetSpline, METH_VARARGS,
   "V.GetSpline() -> vtkSpline\nC++: virtual vtkSpline *GetSpline()\n\nSpecify an instance of vtkSpline to use to perform the\ninterpolation.\n"},
  {"SetGenerateTCoords", PyvtkSplineFilter_SetGenerateTCoords, METH_VARARGS,
   "V.SetGenerateTCoords(int)\nC++: virtual void SetGenerateTCoords(int _arg)\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"GetGenerateTCoordsMinValue", PyvtkSplineFilter_GetGenerateTCoordsMinValue, METH_VARARGS,
   "V.GetGenerateTCoordsMinValue() -> int\nC++: virtual int GetGenerateTCoordsMinValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"GetGenerateTCoordsMaxValue", PyvtkSplineFilter_GetGenerateTCoordsMaxValue, METH_VARARGS,
   "V.GetGenerateTCoordsMaxValue() -> int\nC++: virtual int GetGenerateTCoordsMaxValue()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"GetGenerateTCoords", PyvtkSplineFilter_GetGenerateTCoords, METH_VARARGS,
   "V.GetGenerateTCoords() -> int\nC++: virtual int GetGenerateTCoords()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"SetGenerateTCoordsToOff", PyvtkSplineFilter_SetGenerateTCoordsToOff, METH_VARARGS,
   "V.SetGenerateTCoordsToOff()\nC++: void SetGenerateTCoordsToOff()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"SetGenerateTCoordsToNormalizedLength", PyvtkSplineFilter_SetGenerateTCoordsToNormalizedLength, METH_VARARGS,
   "V.SetGenerateTCoordsToNormalizedLength()\nC++: void SetGenerateTCoordsToNormalizedLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"SetGenerateTCoordsToUseLength", PyvtkSplineFilter_SetGenerateTCoordsToUseLength, METH_VARARGS,
   "V.SetGenerateTCoordsToUseLength()\nC++: void SetGenerateTCoordsToUseLength()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"SetGenerateTCoordsToUseScalars", PyvtkSplineFilter_SetGenerateTCoordsToUseScalars, METH_VARARGS,
   "V.SetGenerateTCoordsToUseScalars()\nC++: void SetGenerateTCoordsToUseScalars()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"GetGenerateTCoordsAsString", PyvtkSplineFilter_GetGenerateTCoordsAsString, METH_VARARGS,
   "V.GetGenerateTCoordsAsString() -> string\nC++: const char *GetGenerateTCoordsAsString()\n\nControl whether and how texture coordinates are produced. This is\nuseful for striping the output polyline. The texture coordinates\ncan be generated in three ways: a normalized (0,1) generation;\nbased on the length (divided by the texture length); and by using\nthe input scalar values.\n"},
  {"SetTextureLength", PyvtkSplineFilter_SetTextureLength, METH_VARARGS,
   "V.SetTextureLength(float)\nC++: virtual void SetTextureLength(double _arg)\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMinValue", PyvtkSplineFilter_GetTextureLengthMinValue, METH_VARARGS,
   "V.GetTextureLengthMinValue() -> float\nC++: virtual double GetTextureLengthMinValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLengthMaxValue", PyvtkSplineFilter_GetTextureLengthMaxValue, METH_VARARGS,
   "V.GetTextureLengthMaxValue() -> float\nC++: virtual double GetTextureLengthMaxValue()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {"GetTextureLength", PyvtkSplineFilter_GetTextureLength, METH_VARARGS,
   "V.GetTextureLength() -> float\nC++: virtual double GetTextureLength()\n\nControl the conversion of units during the texture coordinates\ncalculation. The TextureLength indicates what length (whether\ncalculated from scalars or length) is mapped to the [0,1) texture\nspace.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSplineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkSplineFilter", // tp_name
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
  PyvtkSplineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplineFilter_StaticNew()
{
  return vtkSplineFilter::New();
}

PyObject *PyvtkSplineFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSplineFilter_Type, PyvtkSplineFilter_Methods,
    "vtkSplineFilter",
 &PyvtkSplineFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkSplineFilter_Type;

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

void PyVTKAddFile_vtkSplineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_SUBDIVIDE_SPECIFIED", 0 },
        { "VTK_SUBDIVIDE_LENGTH", 1 },
        { "VTK_TCOORDS_OFF", 0 },
        { "VTK_TCOORDS_FROM_NORMALIZED_LENGTH", 1 },
        { "VTK_TCOORDS_FROM_LENGTH", 2 },
        { "VTK_TCOORDS_FROM_SCALARS", 3 },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

