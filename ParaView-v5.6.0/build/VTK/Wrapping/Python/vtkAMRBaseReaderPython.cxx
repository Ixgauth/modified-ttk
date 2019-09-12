// python wrapper for vtkAMRBaseReader
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
#include "vtkAMRBaseReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRBaseReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRBaseReader_ClassNew(); }

#ifndef DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkOverlappingAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
#endif

static const char *PyvtkAMRBaseReader_Doc =
  "vtkAMRBaseReader - An abstract class that encapsulates common\nfunctionality for all AMR readers.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
;


static PyObject *
PyvtkAMRBaseReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRBaseReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRBaseReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRBaseReader *tempr = vtkAMRBaseReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRBaseReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRBaseReader::NewInstance());

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
PyvtkAMRBaseReader_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkAMRBaseReader::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetEnableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableCaching(temp0);
    }
    else
    {
      op->vtkAMRBaseReader::SetEnableCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetEnableCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableCaching() :
      op->vtkAMRBaseReader::GetEnableCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_EnableCachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableCachingOn();
    }
    else
    {
      op->vtkAMRBaseReader::EnableCachingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_EnableCachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableCachingOff();
    }
    else
    {
      op->vtkAMRBaseReader::EnableCachingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_IsCachingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCachingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCachingEnabled() :
      op->vtkAMRBaseReader::IsCachingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRBaseReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRBaseReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkAMRBaseReader::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetCellDataArraySelection() :
      op->vtkAMRBaseReader::GetCellDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointDataArraySelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataArraySelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetPointDataArraySelection() :
      op->vtkAMRBaseReader::GetPointDataArraySelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkAMRBaseReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkAMRBaseReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkAMRBaseReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkAMRBaseReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkAMRBaseReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkAMRBaseReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAMRBaseReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAMRBaseReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAMRBaseReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetFileName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfBlocks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRBaseReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRBaseReader *op = static_cast<vtkAMRBaseReader *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfLevels();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRBaseReader_Methods[] = {
  {"IsTypeOf", PyvtkAMRBaseReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRBaseReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRBaseReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRBaseReader\nC++: static vtkAMRBaseReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRBaseReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRBaseReader\nC++: vtkAMRBaseReader *NewInstance()\n\n"},
  {"Initialize", PyvtkAMRBaseReader_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitializes the AMR reader. All concrete instances must call this\nmethod in their constructor.\n"},
  {"SetEnableCaching", PyvtkAMRBaseReader_SetEnableCaching, METH_VARARGS,
   "V.SetEnableCaching(int)\nC++: virtual void SetEnableCaching(vtkTypeBool _arg)\n\nSet/Get Reader caching property\n"},
  {"GetEnableCaching", PyvtkAMRBaseReader_GetEnableCaching, METH_VARARGS,
   "V.GetEnableCaching() -> int\nC++: virtual vtkTypeBool GetEnableCaching()\n\nSet/Get Reader caching property\n"},
  {"EnableCachingOn", PyvtkAMRBaseReader_EnableCachingOn, METH_VARARGS,
   "V.EnableCachingOn()\nC++: virtual void EnableCachingOn()\n\nSet/Get Reader caching property\n"},
  {"EnableCachingOff", PyvtkAMRBaseReader_EnableCachingOff, METH_VARARGS,
   "V.EnableCachingOff()\nC++: virtual void EnableCachingOff()\n\nSet/Get Reader caching property\n"},
  {"IsCachingEnabled", PyvtkAMRBaseReader_IsCachingEnabled, METH_VARARGS,
   "V.IsCachingEnabled() -> bool\nC++: bool IsCachingEnabled()\n\nSet/Get Reader caching property\n"},
  {"SetController", PyvtkAMRBaseReader_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *_arg)\n\nSet/Get a multiprocess-controller for reading in parallel. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"GetController", PyvtkAMRBaseReader_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet/Get a multiprocess-controller for reading in parallel. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"SetMaxLevel", PyvtkAMRBaseReader_SetMaxLevel, METH_VARARGS,
   "V.SetMaxLevel(int)\nC++: virtual void SetMaxLevel(int _arg)\n\nSet the level, up to which the blocks are loaded.\n"},
  {"GetCellDataArraySelection", PyvtkAMRBaseReader_GetCellDataArraySelection, METH_VARARGS,
   "V.GetCellDataArraySelection() -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetCellDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetPointDataArraySelection", PyvtkAMRBaseReader_GetPointDataArraySelection, METH_VARARGS,
   "V.GetPointDataArraySelection() -> vtkDataArraySelection\nC++: virtual vtkDataArraySelection *GetPointDataArraySelection()\n\nGet the data array selection tables used to configure which data\narrays are loaded by the reader.\n"},
  {"GetNumberOfPointArrays", PyvtkAMRBaseReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetNumberOfCellArrays", PyvtkAMRBaseReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of point or cell arrays available in the input.\n"},
  {"GetPointArrayName", PyvtkAMRBaseReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetCellArrayName", PyvtkAMRBaseReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the point or cell array with the given index in\nthe input.\n"},
  {"GetPointArrayStatus", PyvtkAMRBaseReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"GetCellArrayStatus", PyvtkAMRBaseReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"SetPointArrayStatus", PyvtkAMRBaseReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"SetCellArrayStatus", PyvtkAMRBaseReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set whether the point or cell array with the given name is to\nbe read.\n"},
  {"GetFileName", PyvtkAMRBaseReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the filename. Concrete instances of this class must\nimplement the SetFileName method accordingly.\n"},
  {"SetFileName", PyvtkAMRBaseReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *fileName)\n\nSet/Get the filename. Concrete instances of this class must\nimplement the SetFileName method accordingly.\n"},
  {"GetNumberOfBlocks", PyvtkAMRBaseReader_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: virtual int GetNumberOfBlocks()\n\nReturns the total number of blocks. Implemented by concrete\ninstances.\n"},
  {"GetNumberOfLevels", PyvtkAMRBaseReader_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: virtual int GetNumberOfLevels()\n\nReturns the total number of levels. Implemented by concrete\ninstances.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRBaseReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOAMRPython.vtkAMRBaseReader", // tp_name
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
  PyvtkAMRBaseReader_Doc, // tp_doc
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

PyObject *PyvtkAMRBaseReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRBaseReader_Type, PyvtkAMRBaseReader_Methods,
    "vtkAMRBaseReader",
 nullptr);

  PyTypeObject *pytype = &PyvtkAMRBaseReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOverlappingAMRAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRBaseReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRBaseReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRBaseReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

