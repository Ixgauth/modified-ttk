// python wrapper for vtkLoadStateOptions
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
#include "vtkLoadStateOptions.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLoadStateOptions(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLoadStateOptions_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkLoadStateOptions_Doc =
  "vtkLoadStateOptions - supports locating files in directory when\nloading a state file.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkLoadStateOptions supports vtkSMLoadStateOptionsProxy by locating\n"
  "data files in a directory on the data server specified by the user.\n\n";


static PyObject *
PyvtkLoadStateOptions_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLoadStateOptions::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoadStateOptions_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoadStateOptions *op = static_cast<vtkLoadStateOptions *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLoadStateOptions::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoadStateOptions_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLoadStateOptions *tempr = vtkLoadStateOptions::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoadStateOptions_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoadStateOptions *op = static_cast<vtkLoadStateOptions *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLoadStateOptions *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLoadStateOptions::NewInstance());

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
PyvtkLoadStateOptions_SetDataDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoadStateOptions *op = static_cast<vtkLoadStateOptions *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataDirectory(temp0);
    }
    else
    {
      op->vtkLoadStateOptions::SetDataDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoadStateOptions_LocateFileInDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LocateFileInDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoadStateOptions *op = static_cast<vtkLoadStateOptions *>(vp);

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->LocateFileInDirectory(temp0, temp1) :
      op->vtkLoadStateOptions::LocateFileInDirectory(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLoadStateOptions_Methods[] = {
  {"IsTypeOf", PyvtkLoadStateOptions_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLoadStateOptions_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLoadStateOptions_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLoadStateOptions\nC++: static vtkLoadStateOptions *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLoadStateOptions_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLoadStateOptions\nC++: vtkLoadStateOptions *NewInstance()\n\n"},
  {"SetDataDirectory", PyvtkLoadStateOptions_SetDataDirectory, METH_VARARGS,
   "V.SetDataDirectory(string)\nC++: virtual void SetDataDirectory(std::string _arg)\n\n"},
  {"LocateFileInDirectory", PyvtkLoadStateOptions_LocateFileInDirectory, METH_VARARGS,
   "V.LocateFileInDirectory(string, int) -> string\nC++: std::string LocateFileInDirectory(\n    const std::string &filepath, int isPath)\n\nAttempts to locate a file specified by filepath in the directory\nspecified by the DataDirectory member variable. If the file\ncannot be found, the original filepath is returned. Set the\nisPath parameter to 0 if you want to locate a file, and set it to\n1 if your aim is to replace the directory in the filepath with\nthe DataDirectory member variable if the new directory exists.\nThis can be useful for determining how a file prefix should be\nchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLoadStateOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkLoadStateOptions", // tp_name
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
  PyvtkLoadStateOptions_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLoadStateOptions_StaticNew()
{
  return vtkLoadStateOptions::New();
}

PyObject *PyvtkLoadStateOptions_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLoadStateOptions_Type, PyvtkLoadStateOptions_Methods,
    "vtkLoadStateOptions",
 &PyvtkLoadStateOptions_StaticNew);

  PyTypeObject *pytype = &PyvtkLoadStateOptions_Type;

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

void PyVTKAddFile_vtkLoadStateOptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLoadStateOptions_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLoadStateOptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

