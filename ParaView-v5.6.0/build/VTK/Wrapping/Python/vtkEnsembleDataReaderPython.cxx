// python wrapper for vtkEnsembleDataReader
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
#include "vtkEnsembleDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnsembleDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnsembleDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkEnsembleDataReader_Doc =
  "vtkEnsembleDataReader - reader for ensemble data sets\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkEnsembleDataReader reads a collection of data sources from a\n"
  "metadata file (of extension .pve). 'pve' a simply CSV file with the\n"
  "last column being the relative filename and other columns for each of\n"
  "the variables in the ensemble.\n\n";


static PyObject *
PyvtkEnsembleDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnsembleDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnsembleDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnsembleDataReader *tempr = vtkEnsembleDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnsembleDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnsembleDataReader::NewInstance());

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
PyvtkEnsembleDataReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

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
      op->vtkEnsembleDataReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkEnsembleDataReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_SetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentMember(temp0);
    }
    else
    {
      op->vtkEnsembleDataReader::SetCurrentMember(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_GetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentMember() :
      op->vtkEnsembleDataReader::GetCurrentMember());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_GetNumberOfMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMembers() :
      op->vtkEnsembleDataReader::GetNumberOfMembers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_GetCurrentMemberRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMemberRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetCurrentMemberRange() :
      op->vtkEnsembleDataReader::GetCurrentMemberRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_GetFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetFilePath(temp0) :
      op->vtkEnsembleDataReader::GetFilePath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  unsigned int temp0;
  vtkAlgorithm *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetReader(temp0, temp1);
    }
    else
    {
      op->vtkEnsembleDataReader::SetReader(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_ResetReaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetReaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetReaders();
    }
    else
    {
      op->vtkEnsembleDataReader::ResetReaders();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleDataReader_UpdateMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleDataReader *op = static_cast<vtkEnsembleDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateMetaData() :
      op->vtkEnsembleDataReader::UpdateMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnsembleDataReader_Methods[] = {
  {"IsTypeOf", PyvtkEnsembleDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnsembleDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnsembleDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnsembleDataReader\nC++: static vtkEnsembleDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnsembleDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnsembleDataReader\nC++: vtkEnsembleDataReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkEnsembleDataReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the filename of the ensemble (.pve extension).\n"},
  {"GetFileName", PyvtkEnsembleDataReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the filename of the ensemble (.pve extension).\n"},
  {"SetCurrentMember", PyvtkEnsembleDataReader_SetCurrentMember, METH_VARARGS,
   "V.SetCurrentMember(int)\nC++: virtual void SetCurrentMember(unsigned int _arg)\n\nSet/Get the current ensemble member to process.\n"},
  {"GetCurrentMember", PyvtkEnsembleDataReader_GetCurrentMember, METH_VARARGS,
   "V.GetCurrentMember() -> int\nC++: virtual unsigned int GetCurrentMember()\n\nSet/Get the current ensemble member to process.\n"},
  {"GetNumberOfMembers", PyvtkEnsembleDataReader_GetNumberOfMembers, METH_VARARGS,
   "V.GetNumberOfMembers() -> int\nC++: unsigned int GetNumberOfMembers()\n\nReturns the number of ensemble members\n"},
  {"GetCurrentMemberRange", PyvtkEnsembleDataReader_GetCurrentMemberRange, METH_VARARGS,
   "V.GetCurrentMemberRange() -> (int, int)\nC++: unsigned int *GetCurrentMemberRange()\n\n"},
  {"GetFilePath", PyvtkEnsembleDataReader_GetFilePath, METH_VARARGS,
   "V.GetFilePath(int) -> string\nC++: vtkStdString GetFilePath(unsigned int rowIndex)\n\nGet the file path associated with the specified row of the meta\ndata\n"},
  {"SetReader", PyvtkEnsembleDataReader_SetReader, METH_VARARGS,
   "V.SetReader(int, vtkAlgorithm)\nC++: void SetReader(unsigned int rowIndex, vtkAlgorithm *reader)\n\nSet the file reader for the specified row of data\n"},
  {"ResetReaders", PyvtkEnsembleDataReader_ResetReaders, METH_VARARGS,
   "V.ResetReaders()\nC++: void ResetReaders()\n\nRemoves all readers set using SetReader().\n"},
  {"UpdateMetaData", PyvtkEnsembleDataReader_UpdateMetaData, METH_VARARGS,
   "V.UpdateMetaData() -> bool\nC++: bool UpdateMetaData()\n\nUse this method to update the meta data, if needed. This will\nonly read the file again if cache is obsolete.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnsembleDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkEnsembleDataReader", // tp_name
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
  PyvtkEnsembleDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnsembleDataReader_StaticNew()
{
  return vtkEnsembleDataReader::New();
}

PyObject *PyvtkEnsembleDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnsembleDataReader_Type, PyvtkEnsembleDataReader_Methods,
    "vtkEnsembleDataReader",
 &PyvtkEnsembleDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkEnsembleDataReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnsembleDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnsembleDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnsembleDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

