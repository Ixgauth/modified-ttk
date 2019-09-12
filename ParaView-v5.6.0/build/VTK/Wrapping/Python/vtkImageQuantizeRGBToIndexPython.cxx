// python wrapper for vtkImageQuantizeRGBToIndex
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
#include "vtkImageQuantizeRGBToIndex.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageQuantizeRGBToIndex(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageQuantizeRGBToIndex_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageQuantizeRGBToIndex_Doc =
  "vtkImageQuantizeRGBToIndex - generalized histograms up to 4 dimensions\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageQuantizeRGBToIndex takes a 3 component RGB image as input and\n"
  "produces a one component index image as output, along with a lookup\n"
  "table that contains the color definitions for the index values. This\n"
  "filter works on the entire input extent - it does not perform\n"
  "streaming, and it does not supported threaded execution (because it\n"
  "has to process the entire image).\n\n"
  "To use this filter, you typically set the number of colors (between 2\n"
  "and 65536), execute it, and then retrieve the lookup table. The\n"
  "colors can then be using the lookup table and the image index.\n\n"
  "This filter can run faster, by initially sampling the colors at a\n"
  "coarser level. This can be specified by the SamplingRate parameter.\n\n"
  "The \"index-image\" viewed as a greyscale image, is usually quite\n"
  "arbitrary, accentuating contrast where none can be perceived in the\n"
  "original color image. To make the index image more meaningful (e.g.\n"
  "for image segmentation operating on scalar images), we sort the mean\n"
  "colors by luminance and re-map the indices accordingly. This option\n"
  "does not introduce any computational complexity and has no impact on\n"
  "actual colors in the lookup table (only their order).\n\n";


static PyObject *
PyvtkImageQuantizeRGBToIndex_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageQuantizeRGBToIndex::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageQuantizeRGBToIndex::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageQuantizeRGBToIndex *tempr = vtkImageQuantizeRGBToIndex::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageQuantizeRGBToIndex *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageQuantizeRGBToIndex::NewInstance());

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
PyvtkImageQuantizeRGBToIndex_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int temp0;
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
      op->vtkImageQuantizeRGBToIndex::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMinValue() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMaxValue() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSamplingRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSamplingRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingRate(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSamplingRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s1(self, args);
    case 1:
      return PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingRate");
  return nullptr;
}



static PyObject *
PyvtkImageQuantizeRGBToIndex_GetSamplingRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingRate() :
      op->vtkImageQuantizeRGBToIndex::GetSamplingRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSortIndexByLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortIndexByLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortIndexByLuminance(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSortIndexByLuminance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetSortIndexByLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortIndexByLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSortIndexByLuminance() :
      op->vtkImageQuantizeRGBToIndex::GetSortIndexByLuminance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortIndexByLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortIndexByLuminanceOn();
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortIndexByLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortIndexByLuminanceOff();
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageQuantizeRGBToIndex::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitializeExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetInitializeExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBuildTreeExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetBuildTreeExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLookupIndexExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetLookupIndexExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputType() :
      op->vtkImageQuantizeRGBToIndex::GetInputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitializeExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetInitializeExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildTreeExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetBuildTreeExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLookupIndexExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetLookupIndexExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageQuantizeRGBToIndex_Methods[] = {
  {"IsTypeOf", PyvtkImageQuantizeRGBToIndex_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageQuantizeRGBToIndex_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageQuantizeRGBToIndex_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageQuantizeRGBToIndex\nC++: static vtkImageQuantizeRGBToIndex *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageQuantizeRGBToIndex_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageQuantizeRGBToIndex\nC++: vtkImageQuantizeRGBToIndex *NewInstance()\n\n"},
  {"SetNumberOfColors", PyvtkImageQuantizeRGBToIndex_SetNumberOfColors, METH_VARARGS,
   "V.SetNumberOfColors(int)\nC++: virtual void SetNumberOfColors(int _arg)\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {"GetNumberOfColorsMinValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue, METH_VARARGS,
   "V.GetNumberOfColorsMinValue() -> int\nC++: virtual int GetNumberOfColorsMinValue()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {"GetNumberOfColorsMaxValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue, METH_VARARGS,
   "V.GetNumberOfColorsMaxValue() -> int\nC++: virtual int GetNumberOfColorsMaxValue()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {"GetNumberOfColors", PyvtkImageQuantizeRGBToIndex_GetNumberOfColors, METH_VARARGS,
   "V.GetNumberOfColors() -> int\nC++: virtual int GetNumberOfColors()\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {"SetSamplingRate", PyvtkImageQuantizeRGBToIndex_SetSamplingRate, METH_VARARGS,
   "V.SetSamplingRate(int, int, int)\nC++: void SetSamplingRate(int, int, int)\nV.SetSamplingRate((int, int, int))\nC++: void SetSamplingRate(int a[3])\n\n"},
  {"GetSamplingRate", PyvtkImageQuantizeRGBToIndex_GetSamplingRate, METH_VARARGS,
   "V.GetSamplingRate() -> (int, int, int)\nC++: int *GetSamplingRate()\n\n"},
  {"SetSortIndexByLuminance", PyvtkImageQuantizeRGBToIndex_SetSortIndexByLuminance, METH_VARARGS,
   "V.SetSortIndexByLuminance(bool)\nC++: virtual void SetSortIndexByLuminance(bool _arg)\n\n"},
  {"GetSortIndexByLuminance", PyvtkImageQuantizeRGBToIndex_GetSortIndexByLuminance, METH_VARARGS,
   "V.GetSortIndexByLuminance() -> bool\nC++: virtual bool GetSortIndexByLuminance()\n\n"},
  {"SortIndexByLuminanceOn", PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOn, METH_VARARGS,
   "V.SortIndexByLuminanceOn()\nC++: virtual void SortIndexByLuminanceOn()\n\n"},
  {"SortIndexByLuminanceOff", PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOff, METH_VARARGS,
   "V.SortIndexByLuminanceOff()\nC++: virtual void SortIndexByLuminanceOff()\n\n"},
  {"GetLookupTable", PyvtkImageQuantizeRGBToIndex_GetLookupTable, METH_VARARGS,
   "V.GetLookupTable() -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nGet the resulting lookup table that contains the color\ndefinitions corresponding to the index values in the output\nimage.\n"},
  {"GetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime, METH_VARARGS,
   "V.GetInitializeExecuteTime() -> float\nC++: virtual double GetInitializeExecuteTime()\n\n"},
  {"GetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime, METH_VARARGS,
   "V.GetBuildTreeExecuteTime() -> float\nC++: virtual double GetBuildTreeExecuteTime()\n\n"},
  {"GetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime, METH_VARARGS,
   "V.GetLookupIndexExecuteTime() -> float\nC++: virtual double GetLookupIndexExecuteTime()\n\n"},
  {"GetInputType", PyvtkImageQuantizeRGBToIndex_GetInputType, METH_VARARGS,
   "V.GetInputType() -> int\nC++: virtual int GetInputType()\n\nFor internal use only - get the type of the image\n"},
  {"SetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime, METH_VARARGS,
   "V.SetInitializeExecuteTime(float)\nC++: virtual void SetInitializeExecuteTime(double _arg)\n\nFor internal use only - set the times for execution\n"},
  {"SetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime, METH_VARARGS,
   "V.SetBuildTreeExecuteTime(float)\nC++: virtual void SetBuildTreeExecuteTime(double _arg)\n\nFor internal use only - set the times for execution\n"},
  {"SetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime, METH_VARARGS,
   "V.SetLookupIndexExecuteTime(float)\nC++: virtual void SetLookupIndexExecuteTime(double _arg)\n\nFor internal use only - set the times for execution\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageQuantizeRGBToIndex_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkImagingColorPython.vtkImageQuantizeRGBToIndex", // tp_name
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
  PyvtkImageQuantizeRGBToIndex_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageQuantizeRGBToIndex_StaticNew()
{
  return vtkImageQuantizeRGBToIndex::New();
}

PyObject *PyvtkImageQuantizeRGBToIndex_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageQuantizeRGBToIndex_Type, PyvtkImageQuantizeRGBToIndex_Methods,
    "vtkImageQuantizeRGBToIndex",
 &PyvtkImageQuantizeRGBToIndex_StaticNew);

  PyTypeObject *pytype = &PyvtkImageQuantizeRGBToIndex_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageQuantizeRGBToIndex(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageQuantizeRGBToIndex_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageQuantizeRGBToIndex", o) != 0)
  {
    Py_DECREF(o);
  }

}

