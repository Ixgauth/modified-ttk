// python wrapper for vtkDirectory
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
#include "vtkDirectory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDirectory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDirectory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkDirectory_Doc =
  "vtkDirectory - OS independent class for access and manipulation of\nsystem directories\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDirectory provides a portable way of finding the names of the\n"
  "files in a system directory.  It also provides methods of\n"
  "manipulating directories.\n\n"
  "@warning\n"
  "vtkDirectory works with windows and unix only.\n\n";


static PyObject *
PyvtkDirectory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDirectory *tempr = vtkDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectory::NewInstance());

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
PyvtkDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkDirectory::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkDirectory::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFile(temp0) :
      op->vtkDirectory::GetFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FileIsDirectory(temp0) :
      op->vtkDirectory::FileIsDirectory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectory *op = static_cast<vtkDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkDirectory::GetFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_GetCurrentWorkingDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    const char *tempr = vtkDirectory::GetCurrentWorkingDirectory(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_MakeDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectory::MakeDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_DeleteDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "DeleteDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectory::DeleteDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectory_Rename(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Rename");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = vtkDirectory::Rename(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectory_Methods[] = {
  {"IsTypeOf", PyvtkDirectory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn the class name as a string.\n"},
  {"IsA", PyvtkDirectory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn the class name as a string.\n"},
  {"SafeDownCast", PyvtkDirectory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDirectory\nC++: static vtkDirectory *SafeDownCast(vtkObjectBase *o)\n\nReturn the class name as a string.\n"},
  {"NewInstance", PyvtkDirectory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDirectory\nC++: vtkDirectory *NewInstance()\n\nReturn the class name as a string.\n"},
  {"Open", PyvtkDirectory_Open, METH_VARARGS,
   "V.Open(string) -> int\nC++: int Open(const char *dir)\n\nOpen the specified directory and load the names of the files in\nthat directory. 0 is returned if the directory can not be opened,\n1 if it is opened.\n"},
  {"GetNumberOfFiles", PyvtkDirectory_GetNumberOfFiles, METH_VARARGS,
   "V.GetNumberOfFiles() -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {"GetFile", PyvtkDirectory_GetFile, METH_VARARGS,
   "V.GetFile(int) -> string\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {"FileIsDirectory", PyvtkDirectory_FileIsDirectory, METH_VARARGS,
   "V.FileIsDirectory(string) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {"GetFiles", PyvtkDirectory_GetFiles, METH_VARARGS,
   "V.GetFiles() -> vtkStringArray\nC++: virtual vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {"GetCurrentWorkingDirectory", PyvtkDirectory_GetCurrentWorkingDirectory, METH_VARARGS,
   "V.GetCurrentWorkingDirectory(string, int) -> string\nC++: static const char *GetCurrentWorkingDirectory(char *buf,\n    unsigned int len)\n\nGet the current working directory.\n"},
  {"MakeDirectory", PyvtkDirectory_MakeDirectory, METH_VARARGS,
   "V.MakeDirectory(string) -> int\nC++: static int MakeDirectory(const char *dir)\n\nCreate directory.\n"},
  {"DeleteDirectory", PyvtkDirectory_DeleteDirectory, METH_VARARGS,
   "V.DeleteDirectory(string) -> int\nC++: static int DeleteDirectory(const char *dir)\n\nRemove a directory.\n"},
  {"Rename", PyvtkDirectory_Rename, METH_VARARGS,
   "V.Rename(string, string) -> int\nC++: static int Rename(const char *oldname, const char *newname)\n\nRename a file or directory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDirectory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonSystemPython.vtkDirectory", // tp_name
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
  PyvtkDirectory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDirectory_StaticNew()
{
  return vtkDirectory::New();
}

PyObject *PyvtkDirectory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDirectory_Type, PyvtkDirectory_Methods,
    "vtkDirectory",
 &PyvtkDirectory_StaticNew);

  PyTypeObject *pytype = &PyvtkDirectory_Type;

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

void PyVTKAddFile_vtkDirectory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDirectory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDirectory", o) != 0)
  {
    Py_DECREF(o);
  }

}

