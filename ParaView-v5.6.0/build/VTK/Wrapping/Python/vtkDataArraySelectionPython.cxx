// python wrapper for vtkDataArraySelection
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
#include "vtkDataArraySelection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataArraySelection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataArraySelection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDataArraySelection_Doc =
  "vtkDataArraySelection - Store on/off settings for data arrays for a\nvtkSource.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataArraySelection can be used by vtkSource subclasses to store\n"
  "on/off settings for whether each vtkDataArray in its input should be\n"
  "passed in the source's output.  This is primarily intended to allow\n"
  "file readers to configure what data arrays are read from the file.\n\n";


static PyObject *
PyvtkDataArraySelection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataArraySelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArraySelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataArraySelection *tempr = vtkDataArraySelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArraySelection::NewInstance());

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
PyvtkDataArraySelection_EnableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableArray(temp0);
    }
    else
    {
      op->vtkDataArraySelection::EnableArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableArray(temp0);
    }
    else
    {
      op->vtkDataArraySelection::DisableArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayIsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayIsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ArrayIsEnabled(temp0) :
      op->vtkDataArraySelection::ArrayIsEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ArrayExists(temp0) :
      op->vtkDataArraySelection::ArrayExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_EnableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::EnableAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::DisableAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkDataArraySelection::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArraysEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArraysEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArraysEnabled() :
      op->vtkDataArraySelection::GetNumberOfArraysEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkDataArraySelection::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayIndex(temp0) :
      op->vtkDataArraySelection::GetArrayIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetEnabledArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabledArrayIndex(temp0) :
      op->vtkDataArraySelection::GetEnabledArrayIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArraySetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArraySetting(temp0) :
      op->vtkDataArraySelection::GetArraySetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArraySelection_GetArraySetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArraySetting(temp0) :
      op->vtkDataArraySelection::GetArraySetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_GetArraySetting_Methods[] = {
  {nullptr, PyvtkDataArraySelection_GetArraySetting_s1, METH_VARARGS,
   "@i"},
  {nullptr, PyvtkDataArraySelection_GetArraySetting_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArraySelection_GetArraySetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArraySelection_GetArraySetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArraySetting");
  return nullptr;
}



static PyObject *
PyvtkDataArraySelection_SetArraySetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetArraySetting(temp0, temp1);
    }
    else
    {
      op->vtkDataArraySelection::SetArraySetting(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::RemoveAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddArray(temp0, temp1) :
      op->vtkDataArraySelection::AddArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArrayByIndex(temp0);
    }
    else
    {
      op->vtkDataArraySelection::RemoveArrayByIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArrayByName(temp0);
    }
    else
    {
      op->vtkDataArraySelection::RemoveArrayByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_CopySelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->CopySelections(temp0);
    }
    else
    {
      op->vtkDataArraySelection::CopySelections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_Union(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkDataArraySelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_Methods[] = {
  {"IsTypeOf", PyvtkDataArraySelection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataArraySelection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataArraySelection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataArraySelection\nC++: static vtkDataArraySelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataArraySelection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataArraySelection\nC++: vtkDataArraySelection *NewInstance()\n\n"},
  {"EnableArray", PyvtkDataArraySelection_EnableArray, METH_VARARGS,
   "V.EnableArray(string)\nC++: void EnableArray(const char *name)\n\nEnable the array with the given name.  Creates a new entry if\nnone exists.\n"},
  {"DisableArray", PyvtkDataArraySelection_DisableArray, METH_VARARGS,
   "V.DisableArray(string)\nC++: void DisableArray(const char *name)\n\nDisable the array with the given name.  Creates a new entry if\nnone exists.\n"},
  {"ArrayIsEnabled", PyvtkDataArraySelection_ArrayIsEnabled, METH_VARARGS,
   "V.ArrayIsEnabled(string) -> int\nC++: int ArrayIsEnabled(const char *name)\n\nReturn whether the array with the given name is enabled.  If\nthere is no entry, the array is assumed to be disabled.\n"},
  {"ArrayExists", PyvtkDataArraySelection_ArrayExists, METH_VARARGS,
   "V.ArrayExists(string) -> int\nC++: int ArrayExists(const char *name)\n\nReturn whether the array with the given name exists.\n"},
  {"EnableAllArrays", PyvtkDataArraySelection_EnableAllArrays, METH_VARARGS,
   "V.EnableAllArrays()\nC++: void EnableAllArrays()\n\nEnable all arrays that currently have an entry.\n"},
  {"DisableAllArrays", PyvtkDataArraySelection_DisableAllArrays, METH_VARARGS,
   "V.DisableAllArrays()\nC++: void DisableAllArrays()\n\nDisable all arrays that currently have an entry.\n"},
  {"GetNumberOfArrays", PyvtkDataArraySelection_GetNumberOfArrays, METH_VARARGS,
   "V.GetNumberOfArrays() -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays that currently have an entry.\n"},
  {"GetNumberOfArraysEnabled", PyvtkDataArraySelection_GetNumberOfArraysEnabled, METH_VARARGS,
   "V.GetNumberOfArraysEnabled() -> int\nC++: int GetNumberOfArraysEnabled()\n\nGet the number of arrays that are enabled.\n"},
  {"GetArrayName", PyvtkDataArraySelection_GetArrayName, METH_VARARGS,
   "V.GetArrayName(int) -> string\nC++: const char *GetArrayName(int index)\n\nGet the name of the array entry at the given index.\n"},
  {"GetArrayIndex", PyvtkDataArraySelection_GetArrayIndex, METH_VARARGS,
   "V.GetArrayIndex(string) -> int\nC++: int GetArrayIndex(const char *name)\n\nGet an index of the array with the given name.\n"},
  {"GetEnabledArrayIndex", PyvtkDataArraySelection_GetEnabledArrayIndex, METH_VARARGS,
   "V.GetEnabledArrayIndex(string) -> int\nC++: int GetEnabledArrayIndex(const char *name)\n\nGet the index of an array with the given name among those that\nare enabled.  Returns -1 if the array is not enabled.\n"},
  {"GetArraySetting", PyvtkDataArraySelection_GetArraySetting, METH_VARARGS,
   "V.GetArraySetting(int) -> int\nC++: int GetArraySetting(int index)\nV.GetArraySetting(string) -> int\nC++: int GetArraySetting(const char *name)\n\nGet whether the array at the given index is enabled.\n"},
  {"SetArraySetting", PyvtkDataArraySelection_SetArraySetting, METH_VARARGS,
   "V.SetArraySetting(string, int)\nC++: void SetArraySetting(const char *name, int status)\n\nSet array setting given the name. If the array doesn't exist, it\nwill be added.\n"},
  {"RemoveAllArrays", PyvtkDataArraySelection_RemoveAllArrays, METH_VARARGS,
   "V.RemoveAllArrays()\nC++: void RemoveAllArrays()\n\nRemove all array entries.\n"},
  {"AddArray", PyvtkDataArraySelection_AddArray, METH_VARARGS,
   "V.AddArray(string, bool) -> int\nC++: int AddArray(const char *name, bool state=true)\n\nAdd to the list of arrays that have entries.  For arrays that\nalready have entries, the settings are untouched.  For arrays\nthat don't already have an entry, they are assumed to be enabled\nby default. The state can also be passed as the second argument.\nThis method should be called only by the filter owning this\nobject.\n"},
  {"RemoveArrayByIndex", PyvtkDataArraySelection_RemoveArrayByIndex, METH_VARARGS,
   "V.RemoveArrayByIndex(int)\nC++: void RemoveArrayByIndex(int index)\n\nRemove an array setting given its index.\n"},
  {"RemoveArrayByName", PyvtkDataArraySelection_RemoveArrayByName, METH_VARARGS,
   "V.RemoveArrayByName(string)\nC++: void RemoveArrayByName(const char *name)\n\nRemove an array setting given its name.\n"},
  {"CopySelections", PyvtkDataArraySelection_CopySelections, METH_VARARGS,
   "V.CopySelections(vtkDataArraySelection)\nC++: void CopySelections(vtkDataArraySelection *selections)\n\nCopy the selections from the given vtkDataArraySelection\ninstance.\n"},
  {"Union", PyvtkDataArraySelection_Union, METH_VARARGS,
   "V.Union(vtkDataArraySelection)\nC++: void Union(vtkDataArraySelection *other)\n\nUpdate `this` to include values from `other`. For arrays that\ndon't exist in `this` but exist in `other`, they will get added\nto `this` with the same array setting as in `other`. Array\nsettings for arrays already in `this` are left unchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataArraySelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDataArraySelection", // tp_name
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
  PyvtkDataArraySelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataArraySelection_StaticNew()
{
  return vtkDataArraySelection::New();
}

PyObject *PyvtkDataArraySelection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataArraySelection_Type, PyvtkDataArraySelection_Methods,
    "vtkDataArraySelection",
 &PyvtkDataArraySelection_StaticNew);

  PyTypeObject *pytype = &PyvtkDataArraySelection_Type;

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

void PyVTKAddFile_vtkDataArraySelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataArraySelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataArraySelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

