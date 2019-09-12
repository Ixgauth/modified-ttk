// python wrapper for vtkUnstructuredGridGhostCellsGenerator
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
#include "vtkUnstructuredGridGhostCellsGenerator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridGhostCellsGenerator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkUnstructuredGridGhostCellsGenerator_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkUnstructuredGridGhostCellsGenerator_Doc =
  "vtkUnstructuredGridGhostCellsGenerator - Builds ghost cells for a\ndistributed unstructured grid dataset.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "This filter is a serial implementation of the\n"
  "vtkPUnstructuredGridGhostCellsGenerator filter with the intent that\n"
  "it can be used in non-MPI builds. Both the serial and parallel\n"
  "version act as a \"pass-through\" filter when run in serial. The\n"
  "combination of these filters serves to unify the API for serial and\n"
  "parallel builds.\n\n"
  "@sa\n"
  "vtkDistributedDataFilter vtkPUnstructuredGridGhostCellsGenerator\n\n";


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridGhostCellsGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridGhostCellsGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridGhostCellsGenerator *tempr = vtkUnstructuredGridGhostCellsGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridGhostCellsGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridGhostCellsGenerator::NewInstance());

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
PyvtkUnstructuredGridGhostCellsGenerator_SetUseGlobalPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalPointIds(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetUseGlobalPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetUseGlobalPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseGlobalPointIds() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetUseGlobalPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_UseGlobalPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalPointIdsOn();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::UseGlobalPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_UseGlobalPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalPointIdsOff();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::UseGlobalPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SetGlobalPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalPointIdsArrayName(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetGlobalPointIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetGlobalPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGlobalPointIdsArrayName() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetGlobalPointIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SetHasGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasGlobalCellIds(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetHasGlobalCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetHasGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasGlobalCellIds() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetHasGlobalCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_HasGlobalCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGlobalCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasGlobalCellIdsOn();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::HasGlobalCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_HasGlobalCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGlobalCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasGlobalCellIdsOff();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::HasGlobalCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SetGlobalCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalCellIdsArrayName(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetGlobalCellIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetGlobalCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGlobalCellIdsArrayName() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetGlobalCellIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SetBuildIfRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildIfRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildIfRequired(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetBuildIfRequired(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetBuildIfRequired(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildIfRequired");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildIfRequired() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetBuildIfRequired());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_BuildIfRequiredOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildIfRequiredOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildIfRequiredOn();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::BuildIfRequiredOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_BuildIfRequiredOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildIfRequiredOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildIfRequiredOff();
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::BuildIfRequiredOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_SetMinimumNumberOfGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumNumberOfGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumNumberOfGhostLevels(temp0);
    }
    else
    {
      op->vtkUnstructuredGridGhostCellsGenerator::SetMinimumNumberOfGhostLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumNumberOfGhostLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumNumberOfGhostLevelsMinValue() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetMinimumNumberOfGhostLevelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumNumberOfGhostLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumNumberOfGhostLevelsMaxValue() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetMinimumNumberOfGhostLevelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumNumberOfGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridGhostCellsGenerator *op = static_cast<vtkUnstructuredGridGhostCellsGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinimumNumberOfGhostLevels() :
      op->vtkUnstructuredGridGhostCellsGenerator::GetMinimumNumberOfGhostLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridGhostCellsGenerator_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridGhostCellsGenerator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridGhostCellsGenerator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridGhostCellsGenerator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkUnstructuredGridGhostCellsGenerator\nC++: static vtkUnstructuredGridGhostCellsGenerator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridGhostCellsGenerator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkUnstructuredGridGhostCellsGenerator\nC++: vtkUnstructuredGridGhostCellsGenerator *NewInstance()\n\n"},
  {"SetUseGlobalPointIds", PyvtkUnstructuredGridGhostCellsGenerator_SetUseGlobalPointIds, METH_VARARGS,
   "V.SetUseGlobalPointIds(bool)\nC++: virtual void SetUseGlobalPointIds(bool _arg)\n\nSpecify if the filter must take benefit of global point ids if\nthey exist. If false, point coordinates are used. Default is\nTRUE.\n"},
  {"GetUseGlobalPointIds", PyvtkUnstructuredGridGhostCellsGenerator_GetUseGlobalPointIds, METH_VARARGS,
   "V.GetUseGlobalPointIds() -> bool\nC++: virtual bool GetUseGlobalPointIds()\n\nSpecify if the filter must take benefit of global point ids if\nthey exist. If false, point coordinates are used. Default is\nTRUE.\n"},
  {"UseGlobalPointIdsOn", PyvtkUnstructuredGridGhostCellsGenerator_UseGlobalPointIdsOn, METH_VARARGS,
   "V.UseGlobalPointIdsOn()\nC++: virtual void UseGlobalPointIdsOn()\n\nSpecify if the filter must take benefit of global point ids if\nthey exist. If false, point coordinates are used. Default is\nTRUE.\n"},
  {"UseGlobalPointIdsOff", PyvtkUnstructuredGridGhostCellsGenerator_UseGlobalPointIdsOff, METH_VARARGS,
   "V.UseGlobalPointIdsOff()\nC++: virtual void UseGlobalPointIdsOff()\n\nSpecify if the filter must take benefit of global point ids if\nthey exist. If false, point coordinates are used. Default is\nTRUE.\n"},
  {"SetGlobalPointIdsArrayName", PyvtkUnstructuredGridGhostCellsGenerator_SetGlobalPointIdsArrayName, METH_VARARGS,
   "V.SetGlobalPointIdsArrayName(string)\nC++: virtual void SetGlobalPointIdsArrayName(const char *_arg)\n\nSpecify the name of the global point ids data array if the\nGlobalIds attribute array is not set. Default is \"GlobalNodeIds\".\n"},
  {"GetGlobalPointIdsArrayName", PyvtkUnstructuredGridGhostCellsGenerator_GetGlobalPointIdsArrayName, METH_VARARGS,
   "V.GetGlobalPointIdsArrayName() -> string\nC++: virtual char *GetGlobalPointIdsArrayName()\n\nSpecify the name of the global point ids data array if the\nGlobalIds attribute array is not set. Default is \"GlobalNodeIds\".\n"},
  {"SetHasGlobalCellIds", PyvtkUnstructuredGridGhostCellsGenerator_SetHasGlobalCellIds, METH_VARARGS,
   "V.SetHasGlobalCellIds(bool)\nC++: virtual void SetHasGlobalCellIds(bool _arg)\n\nSpecify if the data has global cell ids. If more than one layer\nof ghost cells is needed, global cell ids are necessary. If\nglobal cell ids are not provided, they will be computed\ninternally. If false, global cell ids will be computed, then\ndeleted afterwards. Default is FALSE.\n"},
  {"GetHasGlobalCellIds", PyvtkUnstructuredGridGhostCellsGenerator_GetHasGlobalCellIds, METH_VARARGS,
   "V.GetHasGlobalCellIds() -> bool\nC++: virtual bool GetHasGlobalCellIds()\n\nSpecify if the data has global cell ids. If more than one layer\nof ghost cells is needed, global cell ids are necessary. If\nglobal cell ids are not provided, they will be computed\ninternally. If false, global cell ids will be computed, then\ndeleted afterwards. Default is FALSE.\n"},
  {"HasGlobalCellIdsOn", PyvtkUnstructuredGridGhostCellsGenerator_HasGlobalCellIdsOn, METH_VARARGS,
   "V.HasGlobalCellIdsOn()\nC++: virtual void HasGlobalCellIdsOn()\n\nSpecify if the data has global cell ids. If more than one layer\nof ghost cells is needed, global cell ids are necessary. If\nglobal cell ids are not provided, they will be computed\ninternally. If false, global cell ids will be computed, then\ndeleted afterwards. Default is FALSE.\n"},
  {"HasGlobalCellIdsOff", PyvtkUnstructuredGridGhostCellsGenerator_HasGlobalCellIdsOff, METH_VARARGS,
   "V.HasGlobalCellIdsOff()\nC++: virtual void HasGlobalCellIdsOff()\n\nSpecify if the data has global cell ids. If more than one layer\nof ghost cells is needed, global cell ids are necessary. If\nglobal cell ids are not provided, they will be computed\ninternally. If false, global cell ids will be computed, then\ndeleted afterwards. Default is FALSE.\n"},
  {"SetGlobalCellIdsArrayName", PyvtkUnstructuredGridGhostCellsGenerator_SetGlobalCellIdsArrayName, METH_VARARGS,
   "V.SetGlobalCellIdsArrayName(string)\nC++: virtual void SetGlobalCellIdsArrayName(const char *_arg)\n\nSpecify the name of the global cell ids data array if the\nGlobalIds attribute array is not set. Default is \"GlobalNodeIds\".\n"},
  {"GetGlobalCellIdsArrayName", PyvtkUnstructuredGridGhostCellsGenerator_GetGlobalCellIdsArrayName, METH_VARARGS,
   "V.GetGlobalCellIdsArrayName() -> string\nC++: virtual char *GetGlobalCellIdsArrayName()\n\nSpecify the name of the global cell ids data array if the\nGlobalIds attribute array is not set. Default is \"GlobalNodeIds\".\n"},
  {"SetBuildIfRequired", PyvtkUnstructuredGridGhostCellsGenerator_SetBuildIfRequired, METH_VARARGS,
   "V.SetBuildIfRequired(bool)\nC++: virtual void SetBuildIfRequired(bool _arg)\n\nSpecify if the filter must generate the ghost cells only if\nrequired by the pipeline. If false, ghost cells are computed even\nif they are not required. Default is TRUE.\n"},
  {"GetBuildIfRequired", PyvtkUnstructuredGridGhostCellsGenerator_GetBuildIfRequired, METH_VARARGS,
   "V.GetBuildIfRequired() -> bool\nC++: virtual bool GetBuildIfRequired()\n\nSpecify if the filter must generate the ghost cells only if\nrequired by the pipeline. If false, ghost cells are computed even\nif they are not required. Default is TRUE.\n"},
  {"BuildIfRequiredOn", PyvtkUnstructuredGridGhostCellsGenerator_BuildIfRequiredOn, METH_VARARGS,
   "V.BuildIfRequiredOn()\nC++: virtual void BuildIfRequiredOn()\n\nSpecify if the filter must generate the ghost cells only if\nrequired by the pipeline. If false, ghost cells are computed even\nif they are not required. Default is TRUE.\n"},
  {"BuildIfRequiredOff", PyvtkUnstructuredGridGhostCellsGenerator_BuildIfRequiredOff, METH_VARARGS,
   "V.BuildIfRequiredOff()\nC++: virtual void BuildIfRequiredOff()\n\nSpecify if the filter must generate the ghost cells only if\nrequired by the pipeline. If false, ghost cells are computed even\nif they are not required. Default is TRUE.\n"},
  {"SetMinimumNumberOfGhostLevels", PyvtkUnstructuredGridGhostCellsGenerator_SetMinimumNumberOfGhostLevels, METH_VARARGS,
   "V.SetMinimumNumberOfGhostLevels(int)\nC++: virtual void SetMinimumNumberOfGhostLevels(int _arg)\n\nWhen BuildIfRequired is `false`, this can be used to set the\nminimum number of ghost levels to generate. Note, if the\ndownstream pipeline requests more ghost levels than the number\nspecified here, then the filter will generate those extra ghost\nlevels as needed. Accepted values are in the interval [1,\nVTK_INT_MAX].\n"},
  {"GetMinimumNumberOfGhostLevelsMinValue", PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevelsMinValue, METH_VARARGS,
   "V.GetMinimumNumberOfGhostLevelsMinValue() -> int\nC++: virtual int GetMinimumNumberOfGhostLevelsMinValue()\n\nWhen BuildIfRequired is `false`, this can be used to set the\nminimum number of ghost levels to generate. Note, if the\ndownstream pipeline requests more ghost levels than the number\nspecified here, then the filter will generate those extra ghost\nlevels as needed. Accepted values are in the interval [1,\nVTK_INT_MAX].\n"},
  {"GetMinimumNumberOfGhostLevelsMaxValue", PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevelsMaxValue, METH_VARARGS,
   "V.GetMinimumNumberOfGhostLevelsMaxValue() -> int\nC++: virtual int GetMinimumNumberOfGhostLevelsMaxValue()\n\nWhen BuildIfRequired is `false`, this can be used to set the\nminimum number of ghost levels to generate. Note, if the\ndownstream pipeline requests more ghost levels than the number\nspecified here, then the filter will generate those extra ghost\nlevels as needed. Accepted values are in the interval [1,\nVTK_INT_MAX].\n"},
  {"GetMinimumNumberOfGhostLevels", PyvtkUnstructuredGridGhostCellsGenerator_GetMinimumNumberOfGhostLevels, METH_VARARGS,
   "V.GetMinimumNumberOfGhostLevels() -> int\nC++: virtual int GetMinimumNumberOfGhostLevels()\n\nWhen BuildIfRequired is `false`, this can be used to set the\nminimum number of ghost levels to generate. Note, if the\ndownstream pipeline requests more ghost levels than the number\nspecified here, then the filter will generate those extra ghost\nlevels as needed. Accepted values are in the interval [1,\nVTK_INT_MAX].\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkUnstructuredGridGhostCellsGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkUnstructuredGridGhostCellsGenerator", // tp_name
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
  PyvtkUnstructuredGridGhostCellsGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridGhostCellsGenerator_StaticNew()
{
  return vtkUnstructuredGridGhostCellsGenerator::New();
}

PyObject *PyvtkUnstructuredGridGhostCellsGenerator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkUnstructuredGridGhostCellsGenerator_Type, PyvtkUnstructuredGridGhostCellsGenerator_Methods,
    "vtkUnstructuredGridGhostCellsGenerator",
 &PyvtkUnstructuredGridGhostCellsGenerator_StaticNew);

  PyTypeObject *pytype = &PyvtkUnstructuredGridGhostCellsGenerator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridGhostCellsGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridGhostCellsGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridGhostCellsGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

