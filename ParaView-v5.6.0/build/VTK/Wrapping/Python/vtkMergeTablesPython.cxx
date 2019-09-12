// python wrapper for vtkMergeTables
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
#include "vtkMergeTables.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeTables(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMergeTables_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkMergeTables_Doc =
  "vtkMergeTables - combine two tables\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Combines the columns of two tables into one larger table. The number\n"
  "of rows in the resulting table is the sum of the number of rows in\n"
  "each of the input tables. The number of columns in the output is\n"
  "generally the sum of the number of columns in each input table,\n"
  "except in the case where column names are duplicated in both tables.\n"
  "In this case, if MergeColumnsByName is on (the default), the two\n"
  "columns will be merged into a single column of the same name. If\n"
  "MergeColumnsByName is off, both columns will exist in the output. You\n"
  "may set the FirstTablePrefix and SecondTablePrefix to define how the\n"
  "columns named are modified.  One of these prefixes may be the empty\n"
  "string, but they must be different.\n\n";


static PyObject *
PyvtkMergeTables_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeTables::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeTables::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeTables *tempr = vtkMergeTables::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeTables *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeTables::NewInstance());

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
PyvtkMergeTables_SetFirstTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFirstTablePrefix(temp0);
    }
    else
    {
      op->vtkMergeTables::SetFirstTablePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_GetFirstTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFirstTablePrefix() :
      op->vtkMergeTables::GetFirstTablePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_SetSecondTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondTablePrefix(temp0);
    }
    else
    {
      op->vtkMergeTables::SetSecondTablePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_GetSecondTablePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondTablePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSecondTablePrefix() :
      op->vtkMergeTables::GetSecondTablePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_SetMergeColumnsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeColumnsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeColumnsByName(temp0);
    }
    else
    {
      op->vtkMergeTables::SetMergeColumnsByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_GetMergeColumnsByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeColumnsByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeColumnsByName() :
      op->vtkMergeTables::GetMergeColumnsByName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_MergeColumnsByNameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeColumnsByNameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeColumnsByNameOn();
    }
    else
    {
      op->vtkMergeTables::MergeColumnsByNameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_MergeColumnsByNameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeColumnsByNameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeColumnsByNameOff();
    }
    else
    {
      op->vtkMergeTables::MergeColumnsByNameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_SetPrefixAllButMerged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefixAllButMerged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefixAllButMerged(temp0);
    }
    else
    {
      op->vtkMergeTables::SetPrefixAllButMerged(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_GetPrefixAllButMerged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefixAllButMerged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPrefixAllButMerged() :
      op->vtkMergeTables::GetPrefixAllButMerged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_PrefixAllButMergedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefixAllButMergedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrefixAllButMergedOn();
    }
    else
    {
      op->vtkMergeTables::PrefixAllButMergedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTables_PrefixAllButMergedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefixAllButMergedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTables *op = static_cast<vtkMergeTables *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrefixAllButMergedOff();
    }
    else
    {
      op->vtkMergeTables::PrefixAllButMergedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeTables_Methods[] = {
  {"IsTypeOf", PyvtkMergeTables_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeTables_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeTables_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMergeTables\nC++: static vtkMergeTables *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeTables_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMergeTables\nC++: vtkMergeTables *NewInstance()\n\n"},
  {"SetFirstTablePrefix", PyvtkMergeTables_SetFirstTablePrefix, METH_VARARGS,
   "V.SetFirstTablePrefix(string)\nC++: virtual void SetFirstTablePrefix(const char *_arg)\n\nThe prefix to give to same-named fields from the first table.\nDefault is \"Table1.\".\n"},
  {"GetFirstTablePrefix", PyvtkMergeTables_GetFirstTablePrefix, METH_VARARGS,
   "V.GetFirstTablePrefix() -> string\nC++: virtual char *GetFirstTablePrefix()\n\nThe prefix to give to same-named fields from the first table.\nDefault is \"Table1.\".\n"},
  {"SetSecondTablePrefix", PyvtkMergeTables_SetSecondTablePrefix, METH_VARARGS,
   "V.SetSecondTablePrefix(string)\nC++: virtual void SetSecondTablePrefix(const char *_arg)\n\nThe prefix to give to same-named fields from the second table.\nDefault is \"Table2.\".\n"},
  {"GetSecondTablePrefix", PyvtkMergeTables_GetSecondTablePrefix, METH_VARARGS,
   "V.GetSecondTablePrefix() -> string\nC++: virtual char *GetSecondTablePrefix()\n\nThe prefix to give to same-named fields from the second table.\nDefault is \"Table2.\".\n"},
  {"SetMergeColumnsByName", PyvtkMergeTables_SetMergeColumnsByName, METH_VARARGS,
   "V.SetMergeColumnsByName(bool)\nC++: virtual void SetMergeColumnsByName(bool _arg)\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {"GetMergeColumnsByName", PyvtkMergeTables_GetMergeColumnsByName, METH_VARARGS,
   "V.GetMergeColumnsByName() -> bool\nC++: virtual bool GetMergeColumnsByName()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {"MergeColumnsByNameOn", PyvtkMergeTables_MergeColumnsByNameOn, METH_VARARGS,
   "V.MergeColumnsByNameOn()\nC++: virtual void MergeColumnsByNameOn()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {"MergeColumnsByNameOff", PyvtkMergeTables_MergeColumnsByNameOff, METH_VARARGS,
   "V.MergeColumnsByNameOff()\nC++: virtual void MergeColumnsByNameOff()\n\nIf on, merges columns with the same name. If off, keeps both\ncolumns, but calls one FirstTablePrefix + name, and the other\nSecondTablePrefix + name. Default is on.\n"},
  {"SetPrefixAllButMerged", PyvtkMergeTables_SetPrefixAllButMerged, METH_VARARGS,
   "V.SetPrefixAllButMerged(bool)\nC++: virtual void SetPrefixAllButMerged(bool _arg)\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {"GetPrefixAllButMerged", PyvtkMergeTables_GetPrefixAllButMerged, METH_VARARGS,
   "V.GetPrefixAllButMerged() -> bool\nC++: virtual bool GetPrefixAllButMerged()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {"PrefixAllButMergedOn", PyvtkMergeTables_PrefixAllButMergedOn, METH_VARARGS,
   "V.PrefixAllButMergedOn()\nC++: virtual void PrefixAllButMergedOn()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {"PrefixAllButMergedOff", PyvtkMergeTables_PrefixAllButMergedOff, METH_VARARGS,
   "V.PrefixAllButMergedOff()\nC++: virtual void PrefixAllButMergedOff()\n\nIf on, all columns will have prefixes except merged columns. If\noff, only unmerged columns with the same name will have prefixes.\nDefault is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMergeTables_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkMergeTables", // tp_name
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
  PyvtkMergeTables_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeTables_StaticNew()
{
  return vtkMergeTables::New();
}

PyObject *PyvtkMergeTables_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMergeTables_Type, PyvtkMergeTables_Methods,
    "vtkMergeTables",
 &PyvtkMergeTables_StaticNew);

  PyTypeObject *pytype = &PyvtkMergeTables_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeTables(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeTables_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeTables", o) != 0)
  {
    Py_DECREF(o);
  }

}

