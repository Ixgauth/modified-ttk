// python wrapper for vtkMetaReader
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
#include "vtkMetaReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMetaReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMetaReader_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataObjectAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataObjectAlgorithm_ClassNew
#endif

static const char *PyvtkMetaReader_Doc =
  "vtkMetaReader - Common functionality for meta-readers.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "to another Reader.  The Reader reads from a file selected from a list\n"
  "of files using a FileIndex.\n\n";


static PyObject *
PyvtkMetaReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMetaReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMetaReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMetaReader *tempr = vtkMetaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMetaReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMetaReader::NewInstance());

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
PyvtkMetaReader_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetReader(temp0);
    }
    else
    {
      op->vtkMetaReader::SetReader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkMetaReader::GetReader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_SetMetaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMetaFileName(temp0);
    }
    else
    {
      op->vtkMetaReader::SetMetaFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetMetaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMetaFileName() :
      op->vtkMetaReader::GetMetaFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileIndexRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIndexRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType *tempr = (ap.IsBound() ?
      op->GetFileIndexRange() :
      op->vtkMetaReader::GetFileIndexRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetFileIndex() :
      op->vtkMetaReader::GetFileIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_SetFileIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileIndex(temp0);
    }
    else
    {
      op->vtkMetaReader::SetFileIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMetaReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_SetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameMethod(temp0);
    }
    else
    {
      op->vtkMetaReader::SetFileNameMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMetaReader_GetFileNameMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMetaReader *op = static_cast<vtkMetaReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileNameMethod() :
      op->vtkMetaReader::GetFileNameMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMetaReader_Methods[] = {
  {"IsTypeOf", PyvtkMetaReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMetaReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMetaReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMetaReader\nC++: static vtkMetaReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMetaReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMetaReader\nC++: vtkMetaReader *NewInstance()\n\n"},
  {"SetReader", PyvtkMetaReader_SetReader, METH_VARARGS,
   "V.SetReader(vtkAlgorithm)\nC++: virtual void SetReader(vtkAlgorithm *_arg)\n\nSet/get the internal reader.\n"},
  {"GetReader", PyvtkMetaReader_GetReader, METH_VARARGS,
   "V.GetReader() -> vtkAlgorithm\nC++: virtual vtkAlgorithm *GetReader()\n\nSet/get the internal reader.\n"},
  {"SetMetaFileName", PyvtkMetaReader_SetMetaFileName, METH_VARARGS,
   "V.SetMetaFileName(string)\nC++: void SetMetaFileName(const char *name)\n\nGet/set the filename for the meta-file. Description: Get/Set the\nmeta-file name\n"},
  {"GetMetaFileName", PyvtkMetaReader_GetMetaFileName, METH_VARARGS,
   "V.GetMetaFileName() -> string\nC++: char *GetMetaFileName()\n\nGet/set the filename for the meta-file. Description: Get/Set the\nmeta-file name\n"},
  {"GetFileIndexRange", PyvtkMetaReader_GetFileIndexRange, METH_VARARGS,
   "V.GetFileIndexRange() -> (int, int)\nC++: vtkIdType *GetFileIndexRange()\n\n"},
  {"GetFileIndex", PyvtkMetaReader_GetFileIndex, METH_VARARGS,
   "V.GetFileIndex() -> int\nC++: vtkIdType GetFileIndex()\n\nGet/set the index of the file to read.\n"},
  {"SetFileIndex", PyvtkMetaReader_SetFileIndex, METH_VARARGS,
   "V.SetFileIndex(int)\nC++: void SetFileIndex(vtkIdType i)\n\nGet/set the index of the file to read.\n"},
  {"GetMTime", PyvtkMetaReader_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime when also considering the internal reader.\n"},
  {"SetFileNameMethod", PyvtkMetaReader_SetFileNameMethod, METH_VARARGS,
   "V.SetFileNameMethod(string)\nC++: virtual void SetFileNameMethod(const char *_arg)\n\nName of the method used to set the file name of the internal\nreader. By default, this is SetFileName.\n"},
  {"GetFileNameMethod", PyvtkMetaReader_GetFileNameMethod, METH_VARARGS,
   "V.GetFileNameMethod() -> string\nC++: virtual char *GetFileNameMethod()\n\nName of the method used to set the file name of the internal\nreader. By default, this is SetFileName.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMetaReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsCorePython.vtkMetaReader", // tp_name
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
  PyvtkMetaReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMetaReader_StaticNew()
{
  return vtkMetaReader::New();
}

PyObject *PyvtkMetaReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMetaReader_Type, PyvtkMetaReader_Methods,
    "vtkMetaReader",
 &PyvtkMetaReader_StaticNew);

  PyTypeObject *pytype = &PyvtkMetaReader_Type;

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

void PyVTKAddFile_vtkMetaReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMetaReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMetaReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

