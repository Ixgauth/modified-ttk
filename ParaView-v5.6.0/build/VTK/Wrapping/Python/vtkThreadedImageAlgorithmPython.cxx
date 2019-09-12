// python wrapper for vtkThreadedImageAlgorithm
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
#include "vtkInformationVector.h"
#include "vtkImageData.h"
#include "vtkThreadedImageAlgorithm.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkThreadedImageAlgorithm(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkThreadedImageAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkThreadedImageAlgorithm_Doc =
  "vtkThreadedImageAlgorithm - Generic filter that has one input.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkThreadedImageAlgorithm is a filter superclass that hides much of\n"
  "the pipeline complexity. It handles breaking the pipeline execution\n"
  "into smaller extents so that the vtkImageData limits are observed. It\n"
  "also provides support for multithreading. If you don't need any of\n"
  "this functionality, consider using vtkSimpleImageToImageAlgorithm\n"
  "instead.\n"
  "@sa\n"
  "vtkSimpleImageToImageAlgorithm\n\n";


static PyObject *
PyvtkThreadedImageAlgorithm_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkThreadedImageAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkThreadedImageAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkThreadedImageAlgorithm *tempr = vtkThreadedImageAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkThreadedImageAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkThreadedImageAlgorithm::NewInstance());

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
PyvtkThreadedImageAlgorithm_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ThreadedExecute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::ThreadedExecute(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetEnableSMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableSMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableSMP() :
      op->vtkThreadedImageAlgorithm::GetEnableSMP());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetEnableSMP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableSMP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableSMP(temp0);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetEnableSMP(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetGlobalDefaultEnableSMP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalDefaultEnableSMP");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkThreadedImageAlgorithm::SetGlobalDefaultEnableSMP(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetGlobalDefaultEnableSMP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalDefaultEnableSMP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkThreadedImageAlgorithm::GetGlobalDefaultEnableSMP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetMinimumPieceSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumPieceSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

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
      op->SetMinimumPieceSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetMinimumPieceSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThreadedImageAlgorithm_SetMinimumPieceSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumPieceSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumPieceSize(temp0);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetMinimumPieceSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkThreadedImageAlgorithm_SetMinimumPieceSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkThreadedImageAlgorithm_SetMinimumPieceSize_s1(self, args);
    case 1:
      return PyvtkThreadedImageAlgorithm_SetMinimumPieceSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumPieceSize");
  return nullptr;
}



static PyObject *
PyvtkThreadedImageAlgorithm_GetMinimumPieceSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumPieceSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMinimumPieceSize() :
      op->vtkThreadedImageAlgorithm::GetMinimumPieceSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetDesiredBytesPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredBytesPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredBytesPerPiece(temp0);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetDesiredBytesPerPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetDesiredBytesPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredBytesPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetDesiredBytesPerPiece() :
      op->vtkThreadedImageAlgorithm::GetDesiredBytesPerPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitMode(temp0);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetSplitMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetSplitModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitModeMinValue() :
      op->vtkThreadedImageAlgorithm::GetSplitModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetSplitModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitModeMaxValue() :
      op->vtkThreadedImageAlgorithm::GetSplitModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetSplitModeToSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToSlab();
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetSplitModeToSlab();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetSplitModeToBeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToBeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToBeam();
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetSplitModeToBeam();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetSplitModeToBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSplitModeToBlock();
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetSplitModeToBlock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitMode() :
      op->vtkThreadedImageAlgorithm::GetSplitMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkThreadedImageAlgorithm::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkThreadedImageAlgorithm::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkThreadedImageAlgorithm_SplitExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplitExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedImageAlgorithm *op = static_cast<vtkThreadedImageAlgorithm *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SplitExtent(temp0, temp1, temp2, temp3) :
      op->vtkThreadedImageAlgorithm::SplitExtent(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkThreadedImageAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkThreadedImageAlgorithm_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkThreadedImageAlgorithm_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkThreadedImageAlgorithm_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkThreadedImageAlgorithm\nC++: static vtkThreadedImageAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkThreadedImageAlgorithm_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkThreadedImageAlgorithm\nC++: vtkThreadedImageAlgorithm *NewInstance()\n\n"},
  {"ThreadedExecute", PyvtkThreadedImageAlgorithm_ThreadedExecute, METH_VARARGS,
   "V.ThreadedExecute(vtkImageData, vtkImageData, [int, int, int, int,\n     int, int], int)\nC++: virtual void ThreadedExecute(vtkImageData *inData,\n    vtkImageData *outData, int extent[6], int threadId)\n\n"},
  {"GetEnableSMP", PyvtkThreadedImageAlgorithm_GetEnableSMP, METH_VARARGS,
   "V.GetEnableSMP() -> bool\nC++: virtual bool GetEnableSMP()\n\nEnable/Disable SMP for threading.\n"},
  {"SetEnableSMP", PyvtkThreadedImageAlgorithm_SetEnableSMP, METH_VARARGS,
   "V.SetEnableSMP(bool)\nC++: virtual void SetEnableSMP(bool _arg)\n\nEnable/Disable SMP for threading.\n"},
  {"SetGlobalDefaultEnableSMP", PyvtkThreadedImageAlgorithm_SetGlobalDefaultEnableSMP, METH_VARARGS,
   "V.SetGlobalDefaultEnableSMP(bool)\nC++: static void SetGlobalDefaultEnableSMP(bool enable)\n\nGlobal Disable SMP for all derived Imaging filters.\n"},
  {"GetGlobalDefaultEnableSMP", PyvtkThreadedImageAlgorithm_GetGlobalDefaultEnableSMP, METH_VARARGS,
   "V.GetGlobalDefaultEnableSMP() -> bool\nC++: static bool GetGlobalDefaultEnableSMP()\n\nGlobal Disable SMP for all derived Imaging filters.\n"},
  {"SetMinimumPieceSize", PyvtkThreadedImageAlgorithm_SetMinimumPieceSize, METH_VARARGS,
   "V.SetMinimumPieceSize(int, int, int)\nC++: void SetMinimumPieceSize(int, int, int)\nV.SetMinimumPieceSize((int, int, int))\nC++: void SetMinimumPieceSize(int a[3])\n\n"},
  {"GetMinimumPieceSize", PyvtkThreadedImageAlgorithm_GetMinimumPieceSize, METH_VARARGS,
   "V.GetMinimumPieceSize() -> (int, int, int)\nC++: int *GetMinimumPieceSize()\n\n"},
  {"SetDesiredBytesPerPiece", PyvtkThreadedImageAlgorithm_SetDesiredBytesPerPiece, METH_VARARGS,
   "V.SetDesiredBytesPerPiece(int)\nC++: virtual void SetDesiredBytesPerPiece(vtkIdType _arg)\n\nThe desired bytes per piece when volume is split for execution.\nWhen SMP is enabled, this is used to subdivide the volume into\npieces. Smaller pieces allow for better dynamic load balancing,\nbut increase the total overhead. The default is 65536 bytes.\n"},
  {"GetDesiredBytesPerPiece", PyvtkThreadedImageAlgorithm_GetDesiredBytesPerPiece, METH_VARARGS,
   "V.GetDesiredBytesPerPiece() -> int\nC++: virtual vtkIdType GetDesiredBytesPerPiece()\n\nThe desired bytes per piece when volume is split for execution.\nWhen SMP is enabled, this is used to subdivide the volume into\npieces. Smaller pieces allow for better dynamic load balancing,\nbut increase the total overhead. The default is 65536 bytes.\n"},
  {"SetSplitMode", PyvtkThreadedImageAlgorithm_SetSplitMode, METH_VARARGS,
   "V.SetSplitMode(int)\nC++: virtual void SetSplitMode(int _arg)\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"GetSplitModeMinValue", PyvtkThreadedImageAlgorithm_GetSplitModeMinValue, METH_VARARGS,
   "V.GetSplitModeMinValue() -> int\nC++: virtual int GetSplitModeMinValue()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"GetSplitModeMaxValue", PyvtkThreadedImageAlgorithm_GetSplitModeMaxValue, METH_VARARGS,
   "V.GetSplitModeMaxValue() -> int\nC++: virtual int GetSplitModeMaxValue()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"SetSplitModeToSlab", PyvtkThreadedImageAlgorithm_SetSplitModeToSlab, METH_VARARGS,
   "V.SetSplitModeToSlab()\nC++: void SetSplitModeToSlab()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"SetSplitModeToBeam", PyvtkThreadedImageAlgorithm_SetSplitModeToBeam, METH_VARARGS,
   "V.SetSplitModeToBeam()\nC++: void SetSplitModeToBeam()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"SetSplitModeToBlock", PyvtkThreadedImageAlgorithm_SetSplitModeToBlock, METH_VARARGS,
   "V.SetSplitModeToBlock()\nC++: void SetSplitModeToBlock()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"GetSplitMode", PyvtkThreadedImageAlgorithm_GetSplitMode, METH_VARARGS,
   "V.GetSplitMode() -> int\nC++: virtual int GetSplitMode()\n\nSet the method used to divide the volume into pieces. Slab mode\nsplits the volume along the Z direction first, Beam mode splits\nevenly along the Z and Y directions, and Block mode splits evenly\nalong all three directions. Most filters use Slab mode as the\ndefault.\n"},
  {"SetNumberOfThreads", PyvtkThreadedImageAlgorithm_SetNumberOfThreads, METH_VARARGS,
   "V.SetNumberOfThreads(int)\nC++: virtual void SetNumberOfThreads(int _arg)\n\nGet/Set the number of threads to create when rendering. This is\nignored if EnableSMP is On.\n"},
  {"GetNumberOfThreadsMinValue", PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMinValue, METH_VARARGS,
   "V.GetNumberOfThreadsMinValue() -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create when rendering. This is\nignored if EnableSMP is On.\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkThreadedImageAlgorithm_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "V.GetNumberOfThreadsMaxValue() -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create when rendering. This is\nignored if EnableSMP is On.\n"},
  {"GetNumberOfThreads", PyvtkThreadedImageAlgorithm_GetNumberOfThreads, METH_VARARGS,
   "V.GetNumberOfThreads() -> int\nC++: virtual int GetNumberOfThreads()\n\nGet/Set the number of threads to create when rendering. This is\nignored if EnableSMP is On.\n"},
  {"SplitExtent", PyvtkThreadedImageAlgorithm_SplitExtent, METH_VARARGS,
   "V.SplitExtent([int, int, int, int, int, int], [int, int, int, int,\n     int, int], int, int) -> int\nC++: virtual int SplitExtent(int splitExt[6], int startExt[6],\n    int num, int total)\n\nPutting this here until I merge graphics and imaging streaming.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkThreadedImageAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkThreadedImageAlgorithm", // tp_name
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
  PyvtkThreadedImageAlgorithm_Doc, // tp_doc
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

PyObject *PyvtkThreadedImageAlgorithm_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkThreadedImageAlgorithm_Type, PyvtkThreadedImageAlgorithm_Methods,
    "vtkThreadedImageAlgorithm",
 nullptr);

  PyTypeObject *pytype = &PyvtkThreadedImageAlgorithm_Type;

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

void PyVTKAddFile_vtkThreadedImageAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkThreadedImageAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkThreadedImageAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

