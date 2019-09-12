// python wrapper for vtkSMTransferFunctionPresets
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
#include "vtkSMTransferFunctionPresets.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMTransferFunctionPresets(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMTransferFunctionPresets_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMTransferFunctionPresets_Doc =
  "vtkSMTransferFunctionPresets - manages presets for color, opacity,\nand annotation presets.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMTransferFunctionPresets is a manager to manage all color,\n"
  "opacity, and annotation presets. It also uses vtkSMSettings to\n"
  "support persistent customizations besides hard-coded/builtin presets.\n\n"
  "vtkSMTransferFunctionPresets designed to be instantiated, used and\n"
  "then destroyed. While there is no explicit synchronization between\n"
  "multiple instances of vtkSMTransferFunctionPresets, there should not\n"
  "be any need to have multiple instances alive at the same time.\n\n";


static PyObject *
PyvtkSMTransferFunctionPresets_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMTransferFunctionPresets::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMTransferFunctionPresets::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMTransferFunctionPresets *tempr = vtkSMTransferFunctionPresets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMTransferFunctionPresets *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMTransferFunctionPresets::NewInstance());

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
PyvtkSMTransferFunctionPresets_GetNumberOfPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfPresets() :
      op->vtkSMTransferFunctionPresets::GetNumberOfPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_GetPresetAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetPresetAsString(temp0) :
      op->vtkSMTransferFunctionPresets::GetPresetAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_AddPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  const char *temp0 = nullptr;
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddPreset(temp0, temp1) :
      op->vtkSMTransferFunctionPresets::AddPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_RemovePreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePreset(temp0) :
      op->vtkSMTransferFunctionPresets::RemovePreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_GetPresetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetPresetName(temp0) :
      op->vtkSMTransferFunctionPresets::GetPresetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_GetPresetHasOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetHasOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPresetHasOpacities(temp0) :
      op->vtkSMTransferFunctionPresets::GetPresetHasOpacities(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_GetPresetHasIndexedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetHasIndexedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPresetHasIndexedColors(temp0) :
      op->vtkSMTransferFunctionPresets::GetPresetHasIndexedColors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_GetPresetHasAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPresetHasAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPresetHasAnnotations(temp0) :
      op->vtkSMTransferFunctionPresets::GetPresetHasAnnotations(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_IsPresetDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPresetDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPresetDefault(temp0) :
      op->vtkSMTransferFunctionPresets::IsPresetDefault(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_IsPresetBuiltin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPresetBuiltin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPresetBuiltin(temp0) :
      op->vtkSMTransferFunctionPresets::IsPresetBuiltin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_RenamePreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenamePreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RenamePreset(temp0, temp1) :
      op->vtkSMTransferFunctionPresets::RenamePreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMTransferFunctionPresets_ImportPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImportPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMTransferFunctionPresets *op = static_cast<vtkSMTransferFunctionPresets *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ImportPresets(temp0) :
      op->vtkSMTransferFunctionPresets::ImportPresets(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMTransferFunctionPresets_Methods[] = {
  {"IsTypeOf", PyvtkSMTransferFunctionPresets_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMTransferFunctionPresets_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMTransferFunctionPresets_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMTransferFunctionPresets\nC++: static vtkSMTransferFunctionPresets *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMTransferFunctionPresets_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMTransferFunctionPresets\nC++: vtkSMTransferFunctionPresets *NewInstance()\n\n"},
  {"GetNumberOfPresets", PyvtkSMTransferFunctionPresets_GetNumberOfPresets, METH_VARARGS,
   "V.GetNumberOfPresets() -> int\nC++: unsigned int GetNumberOfPresets()\n\nReturns the number of presets current available (including\nbuiltin and custom).\n"},
  {"GetPresetAsString", PyvtkSMTransferFunctionPresets_GetPresetAsString, METH_VARARGS,
   "V.GetPresetAsString(int) -> string\nC++: vtkStdString GetPresetAsString(unsigned int index)\n\nGets the raw text for a preset given its index. The preset is\nprovided as a JSON string. Returns an empty string when not\navailable.\n"},
  {"AddPreset", PyvtkSMTransferFunctionPresets_AddPreset, METH_VARARGS,
   "V.AddPreset(string, string) -> bool\nC++: bool AddPreset(const char *name, const vtkStdString &preset)\n\nAdd a new preset. This will get saved across sessions using\nvtkSMSettings, as appropriate. If name provided already exists,\nthis will override the existing preset (even for builtin\npresets).preset must be a valid JSON string. If not, this will\nreturn failure.\n"},
  {"RemovePreset", PyvtkSMTransferFunctionPresets_RemovePreset, METH_VARARGS,
   "V.RemovePreset(int) -> bool\nC++: bool RemovePreset(unsigned int index)\n\nRemove a preset. This has no effect for builtin presets.\n"},
  {"GetPresetName", PyvtkSMTransferFunctionPresets_GetPresetName, METH_VARARGS,
   "V.GetPresetName(int) -> string\nC++: vtkStdString GetPresetName(unsigned int index)\n\nReturns the name for a preset at the given index.\n"},
  {"GetPresetHasOpacities", PyvtkSMTransferFunctionPresets_GetPresetHasOpacities, METH_VARARGS,
   "V.GetPresetHasOpacities(int) -> bool\nC++: bool GetPresetHasOpacities(unsigned int index)\n\n"},
  {"GetPresetHasIndexedColors", PyvtkSMTransferFunctionPresets_GetPresetHasIndexedColors, METH_VARARGS,
   "V.GetPresetHasIndexedColors(int) -> bool\nC++: bool GetPresetHasIndexedColors(unsigned int index)\n\n"},
  {"GetPresetHasAnnotations", PyvtkSMTransferFunctionPresets_GetPresetHasAnnotations, METH_VARARGS,
   "V.GetPresetHasAnnotations(int) -> bool\nC++: bool GetPresetHasAnnotations(unsigned int index)\n\n"},
  {"IsPresetDefault", PyvtkSMTransferFunctionPresets_IsPresetDefault, METH_VARARGS,
   "V.IsPresetDefault(int) -> bool\nC++: bool IsPresetDefault(unsigned int index)\n\n"},
  {"IsPresetBuiltin", PyvtkSMTransferFunctionPresets_IsPresetBuiltin, METH_VARARGS,
   "V.IsPresetBuiltin(int) -> bool\nC++: bool IsPresetBuiltin(unsigned int index)\n\nReturns true if the preset is a builtin preset. The preset is\nidentified by its index.\n"},
  {"RenamePreset", PyvtkSMTransferFunctionPresets_RenamePreset, METH_VARARGS,
   "V.RenamePreset(int, string) -> bool\nC++: bool RenamePreset(unsigned int index, const char *newname)\n\nRename a preset.\n"},
  {"ImportPresets", PyvtkSMTransferFunctionPresets_ImportPresets, METH_VARARGS,
   "V.ImportPresets(string) -> bool\nC++: bool ImportPresets(const char *filename)\n\nLoad presets from a file. All presets are added to \"custom\"\npresets list and are considered as non-builtin. If the filename\nends with a .xml, it's assumed to be a legacy color map XML and\nwill be converted to the new format before processing.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMTransferFunctionPresets_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMTransferFunctionPresets", // tp_name
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
  PyvtkSMTransferFunctionPresets_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMTransferFunctionPresets_StaticNew()
{
  return vtkSMTransferFunctionPresets::New();
}

PyObject *PyvtkSMTransferFunctionPresets_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMTransferFunctionPresets_Type, PyvtkSMTransferFunctionPresets_Methods,
    "vtkSMTransferFunctionPresets",
 &PyvtkSMTransferFunctionPresets_StaticNew);

  PyTypeObject *pytype = &PyvtkSMTransferFunctionPresets_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMTransferFunctionPresets(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMTransferFunctionPresets_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMTransferFunctionPresets", o) != 0)
  {
    Py_DECREF(o);
  }

}

