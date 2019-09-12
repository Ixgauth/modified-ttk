// python wrapper for vtkPDirectory
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
#include "vtkPDirectory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPDirectory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPDirectory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPDirectory_Doc =
  "vtkPDirectory - vtkPDirectory provides a portable way of finding the\nnames of the files in a system directory where process 0 finds the\ninformation and broadcasts it to other processes.\n\n"
  "Superclass: vtkObject\n\n"
  "It tries to replicate the API for both Directory and vtkDirectory\n"
  "though there are slight mismatches between the two. This is a\n"
  "blocking collective operation.\n\n";


static PyObject *
PyvtkPDirectory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPDirectory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDirectory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPDirectory *tempr = vtkPDirectory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPDirectory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDirectory::NewInstance());

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
PyvtkPDirectory_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Load(temp0) :
      op->vtkPDirectory::Load(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkPDirectory::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetNumberOfFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFiles() :
      op->vtkPDirectory::GetNumberOfFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFile(temp0) :
      op->vtkPDirectory::GetFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_FileIsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FileIsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FileIsDirectory(temp0) :
      op->vtkPDirectory::FileIsDirectory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFiles() :
      op->vtkPDirectory::GetFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkPDirectory::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDirectory_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDirectory *op = static_cast<vtkPDirectory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkPDirectory::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPDirectory_Methods[] = {
  {"IsTypeOf", PyvtkPDirectory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPDirectory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPDirectory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPDirectory\nC++: static vtkPDirectory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPDirectory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPDirectory\nC++: vtkPDirectory *NewInstance()\n\n"},
  {"Load", PyvtkPDirectory_Load, METH_VARARGS,
   "V.Load(string) -> bool\nC++: bool Load(const std::string &)\n\nOpen/Load the specified directory and load the names of the files\nin that directory. false/0 is returned if the directory can not\nbe opened, true/1 if it is opened. The reason that there are two\nversions of this is that Directory uses Load() and vtkDirectory\nuses Open() for this functionality.\n"},
  {"Open", PyvtkPDirectory_Open, METH_VARARGS,
   "V.Open(string) -> int\nC++: int Open(const char *dir)\n\nOpen/Load the specified directory and load the names of the files\nin that directory. false/0 is returned if the directory can not\nbe opened, true/1 if it is opened. The reason that there are two\nversions of this is that Directory uses Load() and vtkDirectory\nuses Open() for this functionality.\n"},
  {"GetNumberOfFiles", PyvtkPDirectory_GetNumberOfFiles, METH_VARARGS,
   "V.GetNumberOfFiles() -> int\nC++: vtkIdType GetNumberOfFiles()\n\nReturn the number of files in the current directory.\n"},
  {"GetFile", PyvtkPDirectory_GetFile, METH_VARARGS,
   "V.GetFile(int) -> string\nC++: const char *GetFile(vtkIdType index)\n\nReturn the file at the given index, the indexing is 0 based\n"},
  {"FileIsDirectory", PyvtkPDirectory_FileIsDirectory, METH_VARARGS,
   "V.FileIsDirectory(string) -> int\nC++: int FileIsDirectory(const char *name)\n\nReturn true if the file is a directory.  If the file is not an\nabsolute path, it is assumed to be relative to the opened\ndirectory. If no directory has been opened, it is assumed to be\nrelative to the current working directory.\n"},
  {"GetFiles", PyvtkPDirectory_GetFiles, METH_VARARGS,
   "V.GetFiles() -> vtkStringArray\nC++: virtual vtkStringArray *GetFiles()\n\nGet an array that contains all the file names.\n"},
  {"GetPath", PyvtkPDirectory_GetPath, METH_VARARGS,
   "V.GetPath() -> string\nC++: const char *GetPath()\n\nReturn the path to Open'ed directory\n"},
  {"Clear", PyvtkPDirectory_Clear, METH_VARARGS,
   "V.Clear()\nC++: void Clear()\n\nClear the internal structure. Used internally at beginning of\nLoad(...) to clear the cache.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPDirectory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkPDirectory", // tp_name
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
  PyvtkPDirectory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPDirectory_StaticNew()
{
  return vtkPDirectory::New();
}

PyObject *PyvtkPDirectory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPDirectory_Type, PyvtkPDirectory_Methods,
    "vtkPDirectory",
 &PyvtkPDirectory_StaticNew);

  PyTypeObject *pytype = &PyvtkPDirectory_Type;

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

void PyVTKAddFile_vtkPDirectory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPDirectory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPDirectory", o) != 0)
  {
    Py_DECREF(o);
  }

}

