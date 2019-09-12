// python wrapper for vtkPSystemTools
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
#include "vtkPSystemTools.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPSystemTools(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPSystemTools_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPSystemTools_Doc =
  "vtkPSystemTools - System tools for file system introspection\n\n"
  "Superclass: vtkObject\n\n"
  "A class with only static methods for doing parallel file system\n"
  "introspection. It limits doing file stats on process 0 and\n"
  "broadcasting the results to other processes. It is built on VTK's\n"
  "SystemTools class and uses the global controller for communication.\n"
  "It uses blocking collective communication operations.\n\n";


static PyObject *
PyvtkPSystemTools_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPSystemTools::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSystemTools *op = static_cast<vtkPSystemTools *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPSystemTools::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPSystemTools *tempr = vtkPSystemTools::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPSystemTools *op = static_cast<vtkPSystemTools *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPSystemTools *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPSystemTools::NewInstance());

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
PyvtkPSystemTools_BroadcastString(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "BroadcastString");

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPSystemTools::BroadcastString(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_CollapseFullPath_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CollapseFullPath");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkPSystemTools::CollapseFullPath(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPSystemTools_CollapseFullPath_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CollapseFullPath");

  std::string temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkPSystemTools::CollapseFullPath(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPSystemTools_CollapseFullPath(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkPSystemTools_CollapseFullPath_s1(self, args);
    case 2:
      return PyvtkPSystemTools_CollapseFullPath_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CollapseFullPath");
  return nullptr;
}



static PyObject *
PyvtkPSystemTools_FileExists_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FileExists");

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkPSystemTools::FileExists(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPSystemTools_FileExists_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FileExists");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkPSystemTools::FileExists(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPSystemTools_FileExists(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPSystemTools_FileExists_s1(self, args);
    case 1:
      return PyvtkPSystemTools_FileExists_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FileExists");
  return nullptr;
}



static PyObject *
PyvtkPSystemTools_FileIsDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FileIsDirectory");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkPSystemTools::FileIsDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_FindProgramPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FindProgramPath");

  const char *temp0 = nullptr;
  std::string temp1;
  std::string temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  const char *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    bool tempr = vtkPSystemTools::FindProgramPath(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_GetCurrentWorkingDirectory(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurrentWorkingDirectory");

  bool temp0 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = vtkPSystemTools::GetCurrentWorkingDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPSystemTools_GetProgramPath(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProgramPath");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkPSystemTools::GetProgramPath(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPSystemTools_Methods[] = {
  {"IsTypeOf", PyvtkPSystemTools_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPSystemTools_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPSystemTools_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPSystemTools\nC++: static vtkPSystemTools *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPSystemTools_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPSystemTools\nC++: vtkPSystemTools *NewInstance()\n\n"},
  {"BroadcastString", PyvtkPSystemTools_BroadcastString, METH_VARARGS,
   "V.BroadcastString(string, int)\nC++: static void BroadcastString(std::string &, int proc)\n\nGiven a string on process proc, broadcast that string to all of\nthe other processes. This method does not have a correspondence\nto anything in SystemTools.\n"},
  {"CollapseFullPath", PyvtkPSystemTools_CollapseFullPath, METH_VARARGS,
   "V.CollapseFullPath(string) -> string\nC++: static std::string CollapseFullPath(\n    const std::string &in_relative)\nV.CollapseFullPath(string, string) -> string\nC++: static std::string CollapseFullPath(\n    const std::string &in_relative, const char *in_base)\n\nGiven a path to a file or directory, convert it to a full path.\nThis collapses away relative paths relative to the cwd argument\n(which defaults to the current working directory).  The full path\nis returned.\n"},
  {"FileExists", PyvtkPSystemTools_FileExists, METH_VARARGS,
   "V.FileExists(string, bool) -> bool\nC++: static bool FileExists(const std::string &filename,\n    bool isFile)\nV.FileExists(string) -> bool\nC++: static bool FileExists(const std::string &filename)\n\nReturn true if a file exists in the current directory. If isFile\n= true, then make sure the file is a file and not a directory. \nIf isFile = false, then return true if it is a file or a\ndirectory.  Note that the file will also be checked for read\naccess.  (Currently, this check for read access is only done on\nPOSIX systems.)\n"},
  {"FileIsDirectory", PyvtkPSystemTools_FileIsDirectory, METH_VARARGS,
   "V.FileIsDirectory(string) -> bool\nC++: static bool FileIsDirectory(const std::string &name)\n\nReturn true if the file is a directory\n"},
  {"FindProgramPath", PyvtkPSystemTools_FindProgramPath, METH_VARARGS,
   "V.FindProgramPath(string, string, string, string, string, string)\n    -> bool\nC++: static bool FindProgramPath(const char *argv0,\n    std::string &pathOut, std::string &errorMsg,\n    const char *exeName=nullptr, const char *buildDir=nullptr,\n    const char *installPrefix=nullptr)\n\nGiven argv[0] for a unix program find the full path to a running\nexecutable.  argv0 can be null for windows WinMain programs in\nthis case GetModuleFileName will be used to find the path to the\nrunning executable.  If argv0 is not a full path, then this will\ntry to find the full path.  If the path is not found false is\nreturned, if found true is returned.  An error message of the\nattempted paths is stored in errorMsg. exeName is the name of the\nexecutable. buildDir is a possibly null path to the build\ndirectory. installPrefix is a possibly null pointer to the\ninstall directory.\n"},
  {"GetCurrentWorkingDirectory", PyvtkPSystemTools_GetCurrentWorkingDirectory, METH_VARARGS,
   "V.GetCurrentWorkingDirectory(bool) -> string\nC++: static std::string GetCurrentWorkingDirectory(\n    bool collapse=true)\n\nGet current working directory CWD\n"},
  {"GetProgramPath", PyvtkPSystemTools_GetProgramPath, METH_VARARGS,
   "V.GetProgramPath(string) -> string\nC++: static std::string GetProgramPath(const std::string &)\n\nGiven the path to a program executable, get the directory part of\nthe path with the file stripped off.  If there is no directory\npart, the empty string is returned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPSystemTools_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkParallelCorePython.vtkPSystemTools", // tp_name
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
  PyvtkPSystemTools_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPSystemTools_StaticNew()
{
  return vtkPSystemTools::New();
}

PyObject *PyvtkPSystemTools_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPSystemTools_Type, PyvtkPSystemTools_Methods,
    "vtkPSystemTools",
 &PyvtkPSystemTools_StaticNew);

  PyTypeObject *pytype = &PyvtkPSystemTools_Type;

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

void PyVTKAddFile_vtkPSystemTools(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPSystemTools_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPSystemTools", o) != 0)
  {
    Py_DECREF(o);
  }

}

