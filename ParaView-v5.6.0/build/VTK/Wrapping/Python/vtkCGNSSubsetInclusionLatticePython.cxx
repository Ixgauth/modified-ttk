// python wrapper for vtkCGNSSubsetInclusionLattice
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
#include "vtkCGNSSubsetInclusionLattice.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSSubsetInclusionLattice(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCGNSSubsetInclusionLattice_ClassNew(); }

#ifndef DECLARED_PyvtkSubsetInclusionLattice_ClassNew
extern "C" { PyObject *PyvtkSubsetInclusionLattice_ClassNew(); }
#define DECLARED_PyvtkSubsetInclusionLattice_ClassNew
#endif

static const char *PyvtkCGNSSubsetInclusionLattice_Doc =
  "vtkCGNSSubsetInclusionLattice - extends vtkSubsetInclusionLattice to\nCGNS friendly API.\n\n"
  "Superclass: vtkSubsetInclusionLattice\n\n"
  "vtkCGNSSubsetInclusionLattice simply makes it easier for users (and\n"
  "the vtkCGNSReader) to query vtkSubsetInclusionLattice using CGNS\n"
  "terminology.\n\n"
  "@par Zone names and partitioned files\n\n"
  "vtkCGNSFileSeriesReader supports reading of a partitioned file series\n"
  "where each file has all timesteps but only the data from the rank the\n"
  "file was written out on. In those cases, some sims use suffixes for\n"
  "zone names to identify proc number e.g. `blk-1_proc-0`,\n"
  "`blk-1_proc-1`, etc. Since this has a tendency to make the SIL\n"
  "unwieldy, we sanitize zonenames by default to remove the `_proc-.*`\n"
  "suffix. All API on vtkCGNSFileSeriesReader that takes a zonename\n"
  "sanitizes it. If you use API on vtkSubsetInclusionLattice you may\n"
  "need to sanitize zonenames manually by calling `SanitizeZoneName`.\n\n";


static PyObject *
PyvtkCGNSSubsetInclusionLattice_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSSubsetInclusionLattice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSSubsetInclusionLattice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSSubsetInclusionLattice *tempr = vtkCGNSSubsetInclusionLattice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSSubsetInclusionLattice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSSubsetInclusionLattice::NewInstance());

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
PyvtkCGNSSubsetInclusionLattice_SelectBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectBase(temp0);
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::SelectBase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_DeselectBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeselectBase(temp0);
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::DeselectBase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_SelectAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectAllBases();
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::SelectAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_DeselectAllBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAllBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeselectAllBases();
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::DeselectAllBases();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_GetNumberOfBases(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBases");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBases() :
      op->vtkCGNSSubsetInclusionLattice::GetNumberOfBases());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBaseName(temp0) :
      op->vtkCGNSSubsetInclusionLattice::GetBaseName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_SelectFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectFamily(temp0);
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::SelectFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_DeselectFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeselectFamily(temp0);
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::DeselectFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_SelectAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectAllFamilies();
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::SelectAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_DeselectAllFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAllFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeselectAllFamilies();
    }
    else
    {
      op->vtkCGNSSubsetInclusionLattice::DeselectAllFamilies();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_GetNumberOfFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFamilies() :
      op->vtkCGNSSubsetInclusionLattice::GetNumberOfFamilies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_GetFamilyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFamilyName(temp0) :
      op->vtkCGNSSubsetInclusionLattice::GetFamilyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_ReadGridForZone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadGridForZone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadGridForZone(temp0, temp1) :
      op->vtkCGNSSubsetInclusionLattice::ReadGridForZone(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_ReadPatchesForZone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPatchesForZone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadPatchesForZone(temp0, temp1) :
      op->vtkCGNSSubsetInclusionLattice::ReadPatchesForZone(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_ReadPatchesForBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPatchesForBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadPatchesForBase(temp0) :
      op->vtkCGNSSubsetInclusionLattice::ReadPatchesForBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_ReadPatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadPatch(temp0, temp1, temp2) :
      op->vtkCGNSSubsetInclusionLattice::ReadPatch(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_AddZoneNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddZoneNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSSubsetInclusionLattice *op = static_cast<vtkCGNSSubsetInclusionLattice *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddZoneNode(temp0, temp1) :
      op->vtkCGNSSubsetInclusionLattice::AddZoneNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSSubsetInclusionLattice_SanitizeZoneName(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SanitizeZoneName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkCGNSSubsetInclusionLattice::SanitizeZoneName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSSubsetInclusionLattice_Methods[] = {
  {"IsTypeOf", PyvtkCGNSSubsetInclusionLattice_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSSubsetInclusionLattice_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSSubsetInclusionLattice_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCGNSSubsetInclusionLattice\nC++: static vtkCGNSSubsetInclusionLattice *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSSubsetInclusionLattice_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCGNSSubsetInclusionLattice\nC++: vtkCGNSSubsetInclusionLattice *NewInstance()\n\n"},
  {"SelectBase", PyvtkCGNSSubsetInclusionLattice_SelectBase, METH_VARARGS,
   "V.SelectBase(string)\nC++: void SelectBase(const char *basename)\n\nSelect/deselect the base state.\n"},
  {"DeselectBase", PyvtkCGNSSubsetInclusionLattice_DeselectBase, METH_VARARGS,
   "V.DeselectBase(string)\nC++: void DeselectBase(const char *basename)\n\nSelect/deselect the base state.\n"},
  {"SelectAllBases", PyvtkCGNSSubsetInclusionLattice_SelectAllBases, METH_VARARGS,
   "V.SelectAllBases()\nC++: void SelectAllBases()\n\nSelect/deselect the base state.\n"},
  {"DeselectAllBases", PyvtkCGNSSubsetInclusionLattice_DeselectAllBases, METH_VARARGS,
   "V.DeselectAllBases()\nC++: void DeselectAllBases()\n\nSelect/deselect the base state.\n"},
  {"GetNumberOfBases", PyvtkCGNSSubsetInclusionLattice_GetNumberOfBases, METH_VARARGS,
   "V.GetNumberOfBases() -> int\nC++: int GetNumberOfBases()\n\nAPI to query information about bases.\n"},
  {"GetBaseName", PyvtkCGNSSubsetInclusionLattice_GetBaseName, METH_VARARGS,
   "V.GetBaseName(int) -> string\nC++: const char *GetBaseName(int index)\n\nAPI to query information about bases.\n"},
  {"SelectFamily", PyvtkCGNSSubsetInclusionLattice_SelectFamily, METH_VARARGS,
   "V.SelectFamily(string)\nC++: void SelectFamily(const char *familyname)\n\nSelect/deselect a family.\n"},
  {"DeselectFamily", PyvtkCGNSSubsetInclusionLattice_DeselectFamily, METH_VARARGS,
   "V.DeselectFamily(string)\nC++: void DeselectFamily(const char *familyname)\n\nSelect/deselect a family.\n"},
  {"SelectAllFamilies", PyvtkCGNSSubsetInclusionLattice_SelectAllFamilies, METH_VARARGS,
   "V.SelectAllFamilies()\nC++: void SelectAllFamilies()\n\nSelect/deselect a family.\n"},
  {"DeselectAllFamilies", PyvtkCGNSSubsetInclusionLattice_DeselectAllFamilies, METH_VARARGS,
   "V.DeselectAllFamilies()\nC++: void DeselectAllFamilies()\n\nSelect/deselect a family.\n"},
  {"GetNumberOfFamilies", PyvtkCGNSSubsetInclusionLattice_GetNumberOfFamilies, METH_VARARGS,
   "V.GetNumberOfFamilies() -> int\nC++: int GetNumberOfFamilies()\n\nAPI to query information about families.\n"},
  {"GetFamilyName", PyvtkCGNSSubsetInclusionLattice_GetFamilyName, METH_VARARGS,
   "V.GetFamilyName(int) -> string\nC++: const char *GetFamilyName(int index)\n\nAPI to query information about families.\n"},
  {"ReadGridForZone", PyvtkCGNSSubsetInclusionLattice_ReadGridForZone, METH_VARARGS,
   "V.ReadGridForZone(string, string) -> bool\nC++: bool ReadGridForZone(const char *basename,\n    const char *zonename)\n\nReturns true if the grid/mesh for the given zone is selected.\n"},
  {"ReadPatchesForZone", PyvtkCGNSSubsetInclusionLattice_ReadPatchesForZone, METH_VARARGS,
   "V.ReadPatchesForZone(string, string) -> bool\nC++: bool ReadPatchesForZone(const char *basename,\n    const char *zonename)\n\nReturns true if any of the patches for a given zone are enabled.\n"},
  {"ReadPatchesForBase", PyvtkCGNSSubsetInclusionLattice_ReadPatchesForBase, METH_VARARGS,
   "V.ReadPatchesForBase(string) -> bool\nC++: bool ReadPatchesForBase(const char *basename)\n\nReturns true if any of the patches for a given base are enabled.\n"},
  {"ReadPatch", PyvtkCGNSSubsetInclusionLattice_ReadPatch, METH_VARARGS,
   "V.ReadPatch(string, string, string) -> bool\nC++: bool ReadPatch(const char *basename, const char *zonename,\n    const char *patchname)\n\nReturns true of a patch identified by basename, zonename and\npatchname is enabled. TODO: wonder if these should be called\n'IsEnabled...` instead.\n"},
  {"AddZoneNode", PyvtkCGNSSubsetInclusionLattice_AddZoneNode, METH_VARARGS,
   "V.AddZoneNode(string, int) -> int\nC++: int AddZoneNode(const char *basename, int parentnode)\n\nConvenience API to add nodes.\n"},
  {"SanitizeZoneName", PyvtkCGNSSubsetInclusionLattice_SanitizeZoneName, METH_VARARGS,
   "V.SanitizeZoneName(string) -> string\nC++: static std::string SanitizeZoneName(const char *zonename)\n\nSanitizes zonenames by removed any `_proc-[0-9]+` suffix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCGNSSubsetInclusionLattice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCGNSReaderPython.vtkCGNSSubsetInclusionLattice", // tp_name
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
  PyvtkCGNSSubsetInclusionLattice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSSubsetInclusionLattice_StaticNew()
{
  return vtkCGNSSubsetInclusionLattice::New();
}

PyObject *PyvtkCGNSSubsetInclusionLattice_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCGNSSubsetInclusionLattice_Type, PyvtkCGNSSubsetInclusionLattice_Methods,
    "vtkCGNSSubsetInclusionLattice",
 &PyvtkCGNSSubsetInclusionLattice_StaticNew);

  PyTypeObject *pytype = &PyvtkCGNSSubsetInclusionLattice_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSubsetInclusionLattice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCGNSSubsetInclusionLattice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSSubsetInclusionLattice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSSubsetInclusionLattice", o) != 0)
  {
    Py_DECREF(o);
  }

}

