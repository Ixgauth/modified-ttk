// python wrapper for vtkPVFileInformation
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
#include "vtkPVFileInformation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVFileInformation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVFileInformation_ClassNew(); }

#ifndef DECLARED_PyvtkPVInformation_ClassNew
extern "C" { PyObject *PyvtkPVInformation_ClassNew(); }
#define DECLARED_PyvtkPVInformation_ClassNew
#endif

static const char *PyvtkPVFileInformation_Doc =
  "vtkPVFileInformation - Information object that can be used to obtain\ninformation about a file/directory.\n\n"
  "Superclass: vtkPVInformation\n\n"
  "vtkPVFileInformation can be used to collect information about file or\n"
  "directory. vtkPVFileInformation can collect information from a\n"
  "vtkPVFileInformationHelper object alone.\n"
  "@sa\n"
  "vtkPVFileInformationHelper\n\n";

static PyTypeObject PyvtkPVFileInformation_FileTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkPVFileInformation.FileTypes", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPVFileInformation_FileTypes_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPVFileInformation_FileTypes_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPVFileInformation_FileTypes_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPVFileInformation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVFileInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFileInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVFileInformation *tempr = vtkPVFileInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVFileInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFileInformation::NewInstance());

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
PyvtkPVFileInformation_CopyFromObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFromObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->CopyFromObject(temp0);
    }
    else
    {
      op->vtkPVFileInformation::CopyFromObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_IsDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsDirectory");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkPVFileInformation::IsDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPVFileInformation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPVFileInformation::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetFullPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFullPath() :
      op->vtkPVFileInformation::GetFullPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkPVFileInformation::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetHidden(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHidden");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHidden() :
      op->vtkPVFileInformation::GetHidden());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetContents() :
      op->vtkPVFileInformation::GetContents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExtension() :
      op->vtkPVFileInformation::GetExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFileInformation *op = static_cast<vtkPVFileInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkPVFileInformation::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetParaViewSharedResourcesDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParaViewSharedResourcesDirectory");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkPVFileInformation::GetParaViewSharedResourcesDirectory();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetParaViewExampleFilesDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParaViewExampleFilesDirectory");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkPVFileInformation::GetParaViewExampleFilesDirectory();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFileInformation_GetParaViewDocDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParaViewDocDirectory");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkPVFileInformation::GetParaViewDocDirectory();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVFileInformation_Methods[] = {
  {"IsTypeOf", PyvtkPVFileInformation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVFileInformation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVFileInformation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVFileInformation\nC++: static vtkPVFileInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVFileInformation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVFileInformation\nC++: vtkPVFileInformation *NewInstance()\n\n"},
  {"CopyFromObject", PyvtkPVFileInformation_CopyFromObject, METH_VARARGS,
   "V.CopyFromObject(vtkObject)\nC++: void CopyFromObject(vtkObject *object) override;\n\nTransfer information about a single object into this object. The\nobject must be a vtkPVFileInformationHelper.\n"},
  {"IsDirectory", PyvtkPVFileInformation_IsDirectory, METH_VARARGS,
   "V.IsDirectory(int) -> bool\nC++: static bool IsDirectory(int t)\n\nHelper that returns whether a FileType is a directory (DIRECTORY,\nDRIVE, NETWORK_ROOT, etc...) Or in other words, a type that we\ncan do a DirectoryListing on.\n"},
  {"Initialize", PyvtkPVFileInformation_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitializes the information object.\n"},
  {"GetName", PyvtkPVFileInformation_GetName, METH_VARARGS,
   "V.GetName() -> string\nC++: virtual char *GetName()\n\nGet the name of the file/directory whose information is\nrepresented by this object.\n"},
  {"GetFullPath", PyvtkPVFileInformation_GetFullPath, METH_VARARGS,
   "V.GetFullPath() -> string\nC++: virtual char *GetFullPath()\n\nGet the full path of the file/directory whose information is\nrepresented by this object.\n"},
  {"GetType", PyvtkPVFileInformation_GetType, METH_VARARGS,
   "V.GetType() -> int\nC++: virtual int GetType()\n\nGet the type of this file object.\n"},
  {"GetHidden", PyvtkPVFileInformation_GetHidden, METH_VARARGS,
   "V.GetHidden() -> bool\nC++: virtual bool GetHidden()\n\nGet the state of the hidden flag for the file/directory.\n"},
  {"GetContents", PyvtkPVFileInformation_GetContents, METH_VARARGS,
   "V.GetContents() -> vtkCollection\nC++: virtual vtkCollection *GetContents()\n\nGet the Contents for this directory. Returns a collection with\nvtkPVFileInformation objects for the contents of this directory\nif Type == DIRECTORY or the contents of this file group if Type\n== FILE_GROUP or the contents of this directory group if Type ==\nDIRECTORY_GROUP.\n"},
  {"GetExtension", PyvtkPVFileInformation_GetExtension, METH_VARARGS,
   "V.GetExtension() -> string\nC++: virtual char *GetExtension()\n\nGet the Contents for this directory. Returns a collection with\nvtkPVFileInformation objects for the contents of this directory\nif Type == DIRECTORY or the contents of this file group if Type\n== FILE_GROUP or the contents of this directory group if Type ==\nDIRECTORY_GROUP.\n"},
  {"GetSize", PyvtkPVFileInformation_GetSize, METH_VARARGS,
   "V.GetSize() -> int\nC++: virtual long long GetSize()\n\nGet the Contents for this directory. Returns a collection with\nvtkPVFileInformation objects for the contents of this directory\nif Type == DIRECTORY or the contents of this file group if Type\n== FILE_GROUP or the contents of this directory group if Type ==\nDIRECTORY_GROUP.\n"},
  {"GetParaViewSharedResourcesDirectory", PyvtkPVFileInformation_GetParaViewSharedResourcesDirectory, METH_VARARGS,
   "V.GetParaViewSharedResourcesDirectory() -> string\nC++: static std::string GetParaViewSharedResourcesDirectory()\n\nReturns the path to the base data directory path holding various\nfiles packaged with ParaView.\n"},
  {"GetParaViewExampleFilesDirectory", PyvtkPVFileInformation_GetParaViewExampleFilesDirectory, METH_VARARGS,
   "V.GetParaViewExampleFilesDirectory() -> string\nC++: static std::string GetParaViewExampleFilesDirectory()\n\nReturn the path of the example data packaged with ParaView.\n"},
  {"GetParaViewDocDirectory", PyvtkPVFileInformation_GetParaViewDocDirectory, METH_VARARGS,
   "V.GetParaViewDocDirectory() -> string\nC++: static std::string GetParaViewDocDirectory()\n\nReturn the path of the documents packaged with ParaView.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVFileInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreDefaultPython.vtkPVFileInformation", // tp_name
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
  PyvtkPVFileInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVFileInformation_StaticNew()
{
  return vtkPVFileInformation::New();
}

PyObject *PyvtkPVFileInformation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVFileInformation_Type, PyvtkPVFileInformation_Methods,
    "vtkPVFileInformation",
 &PyvtkPVFileInformation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVFileInformation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPVInformation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPVFileInformation_FileTypes_Type);
  PyvtkPVFileInformation_FileTypes_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPVFileInformation_FileTypes_Type);

  o = (PyObject *)&PyvtkPVFileInformation_FileTypes_Type;
  if (PyDict_SetItemString(d, "FileTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkPVFileInformation::FileTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "INVALID", vtkPVFileInformation::INVALID },
        { "SINGLE_FILE", vtkPVFileInformation::SINGLE_FILE },
        { "SINGLE_FILE_LINK", vtkPVFileInformation::SINGLE_FILE_LINK },
        { "DIRECTORY", vtkPVFileInformation::DIRECTORY },
        { "DIRECTORY_LINK", vtkPVFileInformation::DIRECTORY_LINK },
        { "FILE_GROUP", vtkPVFileInformation::FILE_GROUP },
        { "DRIVE", vtkPVFileInformation::DRIVE },
        { "NETWORK_ROOT", vtkPVFileInformation::NETWORK_ROOT },
        { "NETWORK_DOMAIN", vtkPVFileInformation::NETWORK_DOMAIN },
        { "NETWORK_SERVER", vtkPVFileInformation::NETWORK_SERVER },
        { "NETWORK_SHARE", vtkPVFileInformation::NETWORK_SHARE },
        { "DIRECTORY_GROUP", vtkPVFileInformation::DIRECTORY_GROUP },
      };

    o = PyvtkPVFileInformation_FileTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVFileInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVFileInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVFileInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

