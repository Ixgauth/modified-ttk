// python wrapper for vtkBlueObeliskData
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
#include "vtkBlueObeliskData.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlueObeliskData(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBlueObeliskData_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkBlueObeliskData_Doc =
  "vtkBlueObeliskData - Contains chemical data from the Blue\n\n"
  "Superclass: vtkObject\n\n"
  "Obelisk Data Repository\n\n"
  "The Blue Obelisk Data Repository is a free, open repository of\n"
  "chemical information. This class is a container for this information.\n\n"
  "ote This class contains only the raw arrays parsed from the BODR. For\n"
  "more convenient access to this data, use the vtkPeriodicTable class.\n\n"
  "ote If you must use this class directly, consider using the static\n"
  "vtkBlueObeliskData object accessible through\n"
  "vtkPeriodicTable::GetBlueObeliskData(). This object is automatically\n"
  "populated on the first instantiation of vtkPeriodicTable.\n\n";


static PyObject *
PyvtkBlueObeliskData_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlueObeliskData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlueObeliskData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlueObeliskData *tempr = vtkBlueObeliskData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlueObeliskData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlueObeliskData::NewInstance());

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
PyvtkBlueObeliskData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBlueObeliskData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_IsInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInitialized() :
      op->vtkBlueObeliskData::IsInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkBlueObeliskData::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetSymbols(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbols");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSymbols() :
      op->vtkBlueObeliskData::GetSymbols());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetLowerSymbols(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerSymbols");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLowerSymbols() :
      op->vtkBlueObeliskData::GetLowerSymbols());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNames() :
      op->vtkBlueObeliskData::GetNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetLowerNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLowerNames() :
      op->vtkBlueObeliskData::GetLowerNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPeriodicTableBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodicTableBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetPeriodicTableBlocks() :
      op->vtkBlueObeliskData::GetPeriodicTableBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetElectronicConfigurations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronicConfigurations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetElectronicConfigurations() :
      op->vtkBlueObeliskData::GetElectronicConfigurations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFamilies() :
      op->vtkBlueObeliskData::GetFamilies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetMasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetMasses() :
      op->vtkBlueObeliskData::GetMasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetExactMasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExactMasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetExactMasses() :
      op->vtkBlueObeliskData::GetExactMasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetIonizationEnergies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIonizationEnergies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetIonizationEnergies() :
      op->vtkBlueObeliskData::GetIonizationEnergies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetElectronAffinities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronAffinities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetElectronAffinities() :
      op->vtkBlueObeliskData::GetElectronAffinities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPaulingElectronegativities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaulingElectronegativities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetPaulingElectronegativities() :
      op->vtkBlueObeliskData::GetPaulingElectronegativities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetCovalentRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCovalentRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCovalentRadii() :
      op->vtkBlueObeliskData::GetCovalentRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetVDWRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVDWRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetVDWRadii() :
      op->vtkBlueObeliskData::GetVDWRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetDefaultColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetDefaultColors() :
      op->vtkBlueObeliskData::GetDefaultColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetBoilingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoilingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetBoilingPoints() :
      op->vtkBlueObeliskData::GetBoilingPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetMeltingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeltingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetMeltingPoints() :
      op->vtkBlueObeliskData::GetMeltingPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetPeriods() :
      op->vtkBlueObeliskData::GetPeriods());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetGroups() :
      op->vtkBlueObeliskData::GetGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlueObeliskData_Methods[] = {
  {"IsTypeOf", PyvtkBlueObeliskData_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlueObeliskData_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlueObeliskData_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBlueObeliskData\nC++: static vtkBlueObeliskData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlueObeliskData_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBlueObeliskData\nC++: vtkBlueObeliskData *NewInstance()\n\n"},
  {"Initialize", PyvtkBlueObeliskData_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nFill this object using an internal vtkBlueObeliskDataParser\ninstance. Check that the vtkSimpleMutexLock GetWriteMutex() is\nlocked before calling this method on a static instance in a\nmultithreaded environment.\n"},
  {"IsInitialized", PyvtkBlueObeliskData_IsInitialized, METH_VARARGS,
   "V.IsInitialized() -> bool\nC++: bool IsInitialized()\n\nCheck if this object has been initialized yet.\n"},
  {"GetNumberOfElements", PyvtkBlueObeliskData_GetNumberOfElements, METH_VARARGS,
   "V.GetNumberOfElements() -> int\nC++: virtual unsigned short GetNumberOfElements()\n\nReturn the number of elements for which this vtkBlueObeliskData\ninstance contains information.\n"},
  {"GetSymbols", PyvtkBlueObeliskData_GetSymbols, METH_VARARGS,
   "V.GetSymbols() -> vtkStringArray\nC++: virtual vtkStringArray *GetSymbols()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetLowerSymbols", PyvtkBlueObeliskData_GetLowerSymbols, METH_VARARGS,
   "V.GetLowerSymbols() -> vtkStringArray\nC++: virtual vtkStringArray *GetLowerSymbols()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetNames", PyvtkBlueObeliskData_GetNames, METH_VARARGS,
   "V.GetNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetNames()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetLowerNames", PyvtkBlueObeliskData_GetLowerNames, METH_VARARGS,
   "V.GetLowerNames() -> vtkStringArray\nC++: virtual vtkStringArray *GetLowerNames()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetPeriodicTableBlocks", PyvtkBlueObeliskData_GetPeriodicTableBlocks, METH_VARARGS,
   "V.GetPeriodicTableBlocks() -> vtkStringArray\nC++: virtual vtkStringArray *GetPeriodicTableBlocks()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetElectronicConfigurations", PyvtkBlueObeliskData_GetElectronicConfigurations, METH_VARARGS,
   "V.GetElectronicConfigurations() -> vtkStringArray\nC++: virtual vtkStringArray *GetElectronicConfigurations()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetFamilies", PyvtkBlueObeliskData_GetFamilies, METH_VARARGS,
   "V.GetFamilies() -> vtkStringArray\nC++: virtual vtkStringArray *GetFamilies()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetMasses", PyvtkBlueObeliskData_GetMasses, METH_VARARGS,
   "V.GetMasses() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetMasses()\n\n"},
  {"GetExactMasses", PyvtkBlueObeliskData_GetExactMasses, METH_VARARGS,
   "V.GetExactMasses() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetExactMasses()\n\n"},
  {"GetIonizationEnergies", PyvtkBlueObeliskData_GetIonizationEnergies, METH_VARARGS,
   "V.GetIonizationEnergies() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetIonizationEnergies()\n\n"},
  {"GetElectronAffinities", PyvtkBlueObeliskData_GetElectronAffinities, METH_VARARGS,
   "V.GetElectronAffinities() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetElectronAffinities()\n\n"},
  {"GetPaulingElectronegativities", PyvtkBlueObeliskData_GetPaulingElectronegativities, METH_VARARGS,
   "V.GetPaulingElectronegativities() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetPaulingElectronegativities()\n\n"},
  {"GetCovalentRadii", PyvtkBlueObeliskData_GetCovalentRadii, METH_VARARGS,
   "V.GetCovalentRadii() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetCovalentRadii()\n\n"},
  {"GetVDWRadii", PyvtkBlueObeliskData_GetVDWRadii, METH_VARARGS,
   "V.GetVDWRadii() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetVDWRadii()\n\n"},
  {"GetDefaultColors", PyvtkBlueObeliskData_GetDefaultColors, METH_VARARGS,
   "V.GetDefaultColors() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetDefaultColors()\n\n"},
  {"GetBoilingPoints", PyvtkBlueObeliskData_GetBoilingPoints, METH_VARARGS,
   "V.GetBoilingPoints() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetBoilingPoints()\n\n"},
  {"GetMeltingPoints", PyvtkBlueObeliskData_GetMeltingPoints, METH_VARARGS,
   "V.GetMeltingPoints() -> vtkFloatArray\nC++: virtual vtkFloatArray *GetMeltingPoints()\n\n"},
  {"GetPeriods", PyvtkBlueObeliskData_GetPeriods, METH_VARARGS,
   "V.GetPeriods() -> vtkUnsignedShortArray\nC++: virtual vtkUnsignedShortArray *GetPeriods()\n\n"},
  {"GetGroups", PyvtkBlueObeliskData_GetGroups, METH_VARARGS,
   "V.GetGroups() -> vtkUnsignedShortArray\nC++: virtual vtkUnsignedShortArray *GetGroups()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBlueObeliskData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkDomainsChemistryPython.vtkBlueObeliskData", // tp_name
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
  PyvtkBlueObeliskData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlueObeliskData_StaticNew()
{
  return vtkBlueObeliskData::New();
}

PyObject *PyvtkBlueObeliskData_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBlueObeliskData_Type, PyvtkBlueObeliskData_Methods,
    "vtkBlueObeliskData",
 &PyvtkBlueObeliskData_StaticNew);

  PyTypeObject *pytype = &PyvtkBlueObeliskData_Type;

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

void PyVTKAddFile_vtkBlueObeliskData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlueObeliskData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlueObeliskData", o) != 0)
  {
    Py_DECREF(o);
  }

}

