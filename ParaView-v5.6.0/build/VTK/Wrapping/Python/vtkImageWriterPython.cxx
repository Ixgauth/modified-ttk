// python wrapper for vtkImageWriter
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
#include "vtkImageWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkImageWriter_Doc =
  "vtkImageWriter - Writes images to files.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageWriter writes images to files with any data type. The data\n"
  "type of the file is the same scalar type as the input.  The\n"
  "dimensionality determines whether the data will be written in one or\n"
  "multiple files. This class is used as the superclass of most image\n"
  "writing classes such as vtkBMPWriter etc. It supports streaming.\n\n";


static PyObject *
PyvtkImageWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageWriter *tempr = vtkImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageWriter::NewInstance());

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
PyvtkImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

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
      op->vtkImageWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkImageWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePrefix(temp0);
    }
    else
    {
      op->vtkImageWriter::SetFilePrefix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFilePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePrefix() :
      op->vtkImageWriter::GetFilePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilePattern(temp0);
    }
    else
    {
      op->vtkImageWriter::SetFilePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFilePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFilePattern() :
      op->vtkImageWriter::GetFilePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_SetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileDimensionality(temp0);
    }
    else
    {
      op->vtkImageWriter::SetFileDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_GetFileDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileDimensionality() :
      op->vtkImageWriter::GetFileDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkImageWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWriter_DeleteFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWriter *op = static_cast<vtkImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteFiles();
    }
    else
    {
      op->vtkImageWriter::DeleteFiles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkImageWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageWriter\nC++: static vtkImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageWriter\nC++: vtkImageWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkImageWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name for the image file. You should specify either a\nFileName or a FilePrefix. Use FilePrefix if the data is stored in\nmultiple files.\n"},
  {"GetFileName", PyvtkImageWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSpecify file name for the image file. You should specify either a\nFileName or a FilePrefix. Use FilePrefix if the data is stored in\nmultiple files.\n"},
  {"SetFilePrefix", PyvtkImageWriter_SetFilePrefix, METH_VARARGS,
   "V.SetFilePrefix(string)\nC++: virtual void SetFilePrefix(const char *_arg)\n\nSpecify file prefix for the image file(s).You should specify\neither a FileName or FilePrefix. Use FilePrefix if the data is\nstored in multiple files.\n"},
  {"GetFilePrefix", PyvtkImageWriter_GetFilePrefix, METH_VARARGS,
   "V.GetFilePrefix() -> string\nC++: virtual char *GetFilePrefix()\n\nSpecify file prefix for the image file(s).You should specify\neither a FileName or FilePrefix. Use FilePrefix if the data is\nstored in multiple files.\n"},
  {"SetFilePattern", PyvtkImageWriter_SetFilePattern, METH_VARARGS,
   "V.SetFilePattern(string)\nC++: virtual void SetFilePattern(const char *_arg)\n\nThe snprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {"GetFilePattern", PyvtkImageWriter_GetFilePattern, METH_VARARGS,
   "V.GetFilePattern() -> string\nC++: virtual char *GetFilePattern()\n\nThe snprintf format used to build filename from FilePrefix and\nnumber.\n"},
  {"SetFileDimensionality", PyvtkImageWriter_SetFileDimensionality, METH_VARARGS,
   "V.SetFileDimensionality(int)\nC++: virtual void SetFileDimensionality(int _arg)\n\nWhat dimension are the files to be written. Usually this is 2, or\n3. If it is 2 and the input is a volume then the volume will be\nwritten as a series of 2d slices.\n"},
  {"GetFileDimensionality", PyvtkImageWriter_GetFileDimensionality, METH_VARARGS,
   "V.GetFileDimensionality() -> int\nC++: virtual int GetFileDimensionality()\n\nWhat dimension are the files to be written. Usually this is 2, or\n3. If it is 2 and the input is a volume then the volume will be\nwritten as a series of 2d slices.\n"},
  {"GetInput", PyvtkImageWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSet/Get the input object from the image pipeline.\n"},
  {"Write", PyvtkImageWriter_Write, METH_VARARGS,
   "V.Write()\nC++: virtual void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {"DeleteFiles", PyvtkImageWriter_DeleteFiles, METH_VARARGS,
   "V.DeleteFiles()\nC++: void DeleteFiles()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkImageWriter", // tp_name
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
  PyvtkImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageWriter_StaticNew()
{
  return vtkImageWriter::New();
}

PyObject *PyvtkImageWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageWriter_Type, PyvtkImageWriter_Methods,
    "vtkImageWriter",
 &PyvtkImageWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkImageWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

