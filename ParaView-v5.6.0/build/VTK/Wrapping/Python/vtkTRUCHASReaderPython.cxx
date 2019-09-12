// python wrapper for vtkTRUCHASReader
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
#include "vtkTRUCHASReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTRUCHASReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTRUCHASReader_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkTRUCHASReader_Doc =
  "vtkTRUCHASReader - read GE TRUCHAS format HDF5 files\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkTRUCHASReader is a source object that reads TRUCHAS simulation\n"
  "data from HDF5 files.\n\n";


static PyObject *
PyvtkTRUCHASReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTRUCHASReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTRUCHASReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTRUCHASReader *tempr = vtkTRUCHASReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTRUCHASReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTRUCHASReader::NewInstance());

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
PyvtkTRUCHASReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkTRUCHASReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkTRUCHASReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTRUCHASReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetNumberOfBlockArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlockArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlockArrays() :
      op->vtkTRUCHASReader::GetNumberOfBlockArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBlockArrayName(temp0) :
      op->vtkTRUCHASReader::GetBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_SetBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkTRUCHASReader::SetBlockArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetBlockArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayStatus(temp0) :
      op->vtkTRUCHASReader::GetBlockArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkTRUCHASReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkTRUCHASReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkTRUCHASReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

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
      op->vtkTRUCHASReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkTRUCHASReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkTRUCHASReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkTRUCHASReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTRUCHASReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTRUCHASReader *op = static_cast<vtkTRUCHASReader *>(vp);

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
      op->vtkTRUCHASReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTRUCHASReader_Methods[] = {
  {"IsTypeOf", PyvtkTRUCHASReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTRUCHASReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTRUCHASReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTRUCHASReader\nC++: static vtkTRUCHASReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTRUCHASReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTRUCHASReader\nC++: vtkTRUCHASReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkTRUCHASReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk data file to read.\n"},
  {"GetFileName", PyvtkTRUCHASReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name of vtk data file to read.\n"},
  {"CanReadFile", PyvtkTRUCHASReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nA simple, non-exhaustive check to see if a file is a valid\ntruchas file.\n"},
  {"GetNumberOfBlockArrays", PyvtkTRUCHASReader_GetNumberOfBlockArrays, METH_VARARGS,
   "V.GetNumberOfBlockArrays() -> int\nC++: int GetNumberOfBlockArrays()\n\nGet/Set information about blocks. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetBlockArrayName", PyvtkTRUCHASReader_GetBlockArrayName, METH_VARARGS,
   "V.GetBlockArrayName(int) -> string\nC++: const char *GetBlockArrayName(int index)\n\nGet/Set information about blocks. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"SetBlockArrayStatus", PyvtkTRUCHASReader_SetBlockArrayStatus, METH_VARARGS,
   "V.SetBlockArrayStatus(string, int)\nC++: void SetBlockArrayStatus(const char *gridname, int status)\n\nGet/Set information about blocks. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetBlockArrayStatus", PyvtkTRUCHASReader_GetBlockArrayStatus, METH_VARARGS,
   "V.GetBlockArrayStatus(string) -> int\nC++: int GetBlockArrayStatus(const char *gridname)\n\nGet/Set information about blocks. As is typical with readers this\nis valid only after the filename as been set and\nUpdateInformation() has been called.\n"},
  {"GetNumberOfPointArrays", PyvtkTRUCHASReader_GetNumberOfPointArrays, METH_VARARGS,
   "V.GetNumberOfPointArrays() -> int\nC++: int GetNumberOfPointArrays()\n\nGet information about point-based arrays. As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetPointArrayName", PyvtkTRUCHASReader_GetPointArrayName, METH_VARARGS,
   "V.GetPointArrayName(int) -> string\nC++: const char *GetPointArrayName(int index)\n\nReturns the name of point array at the give index. Returns\nnullptr if index is invalid.\n"},
  {"GetPointArrayStatus", PyvtkTRUCHASReader_GetPointArrayStatus, METH_VARARGS,
   "V.GetPointArrayStatus(string) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set the point array status.\n"},
  {"SetPointArrayStatus", PyvtkTRUCHASReader_SetPointArrayStatus, METH_VARARGS,
   "V.SetPointArrayStatus(string, int)\nC++: void SetPointArrayStatus(const char *name, int status)\n\nGet/Set the point array status.\n"},
  {"GetNumberOfCellArrays", PyvtkTRUCHASReader_GetNumberOfCellArrays, METH_VARARGS,
   "V.GetNumberOfCellArrays() -> int\nC++: int GetNumberOfCellArrays()\n\nGet information about cell-based arrays. As is typical with\nreaders this in only valid after the filename is set and\nUpdateInformation() has been called.\n"},
  {"GetCellArrayName", PyvtkTRUCHASReader_GetCellArrayName, METH_VARARGS,
   "V.GetCellArrayName(int) -> string\nC++: const char *GetCellArrayName(int index)\n\nReturns the name of cell array at the give index. Returns nullptr\nif index is invalid.\n"},
  {"GetCellArrayStatus", PyvtkTRUCHASReader_GetCellArrayStatus, METH_VARARGS,
   "V.GetCellArrayStatus(string) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set the cell array status.\n"},
  {"SetCellArrayStatus", PyvtkTRUCHASReader_SetCellArrayStatus, METH_VARARGS,
   "V.SetCellArrayStatus(string, int)\nC++: void SetCellArrayStatus(const char *name, int status)\n\nGet/Set the cell array status.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTRUCHASReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOTRUCHASPython.vtkTRUCHASReader", // tp_name
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
  PyvtkTRUCHASReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTRUCHASReader_StaticNew()
{
  return vtkTRUCHASReader::New();
}

PyObject *PyvtkTRUCHASReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTRUCHASReader_Type, PyvtkTRUCHASReader_Methods,
    "vtkTRUCHASReader",
 &PyvtkTRUCHASReader_StaticNew);

  PyTypeObject *pytype = &PyvtkTRUCHASReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTRUCHASReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTRUCHASReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTRUCHASReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

