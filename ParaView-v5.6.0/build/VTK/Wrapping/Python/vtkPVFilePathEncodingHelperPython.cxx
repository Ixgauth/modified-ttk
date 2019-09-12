// python wrapper for vtkPVFilePathEncodingHelper
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
#include "vtkPVFilePathEncodingHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVFilePathEncodingHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVFilePathEncodingHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkPVFilePathEncodingHelper_Doc =
  "vtkPVFilePathEncodingHelper - server side object used to check if\nmanipulate a directory\n\n"
  "Superclass: vtkObject\n\n"
  "Server side object to list, create and remove directory the main\n"
  "reason for this helper to exist is to convert the file path from utf8\n"
  "to locale encoding\n\n";


static PyObject *
PyvtkPVFilePathEncodingHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVFilePathEncodingHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVFilePathEncodingHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVFilePathEncodingHelper *tempr = vtkPVFilePathEncodingHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVFilePathEncodingHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVFilePathEncodingHelper::NewInstance());

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
PyvtkPVFilePathEncodingHelper_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkPVFilePathEncodingHelper::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkPVFilePathEncodingHelper::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_SetSecondaryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryPath(temp0);
    }
    else
    {
      op->vtkPVFilePathEncodingHelper::SetSecondaryPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_GetSecondaryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSecondaryPath() :
      op->vtkPVFilePathEncodingHelper::GetSecondaryPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_GetActiveGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveGlobalId() :
      op->vtkPVFilePathEncodingHelper::GetActiveGlobalId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_SetActiveGlobalId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveGlobalId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveGlobalId(temp0);
    }
    else
    {
      op->vtkPVFilePathEncodingHelper::SetActiveGlobalId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_MakeDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MakeDirectory() :
      op->vtkPVFilePathEncodingHelper::MakeDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_DeleteDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DeleteDirectory() :
      op->vtkPVFilePathEncodingHelper::DeleteDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_OpenDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->OpenDirectory() :
      op->vtkPVFilePathEncodingHelper::OpenDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_RenameDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenameDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->RenameDirectory() :
      op->vtkPVFilePathEncodingHelper::RenameDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_IsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDirectory() :
      op->vtkPVFilePathEncodingHelper::IsDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVFilePathEncodingHelper_GetActiveFileIsReadable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFileIsReadable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVFilePathEncodingHelper *op = static_cast<vtkPVFilePathEncodingHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActiveFileIsReadable() :
      op->vtkPVFilePathEncodingHelper::GetActiveFileIsReadable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVFilePathEncodingHelper_Methods[] = {
  {"IsTypeOf", PyvtkPVFilePathEncodingHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVFilePathEncodingHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVFilePathEncodingHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVFilePathEncodingHelper\nC++: static vtkPVFilePathEncodingHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVFilePathEncodingHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVFilePathEncodingHelper\nC++: vtkPVFilePathEncodingHelper *NewInstance()\n\n"},
  {"SetPath", PyvtkPVFilePathEncodingHelper_SetPath, METH_VARARGS,
   "V.SetPath(string)\nC++: virtual void SetPath(const char *_arg)\n\nGet/Set the path that will be used by the helper\n"},
  {"GetPath", PyvtkPVFilePathEncodingHelper_GetPath, METH_VARARGS,
   "V.GetPath() -> string\nC++: virtual char *GetPath()\n\nGet/Set the path that will be used by the helper\n"},
  {"SetSecondaryPath", PyvtkPVFilePathEncodingHelper_SetSecondaryPath, METH_VARARGS,
   "V.SetSecondaryPath(string)\nC++: virtual void SetSecondaryPath(const char *_arg)\n\nGet/Set the secondary path that will potentially be used by the\nhelper\n"},
  {"GetSecondaryPath", PyvtkPVFilePathEncodingHelper_GetSecondaryPath, METH_VARARGS,
   "V.GetSecondaryPath() -> string\nC++: virtual char *GetSecondaryPath()\n\nGet/Set the secondary path that will potentially be used by the\nhelper\n"},
  {"GetActiveGlobalId", PyvtkPVFilePathEncodingHelper_GetActiveGlobalId, METH_VARARGS,
   "V.GetActiveGlobalId() -> int\nC++: virtual int GetActiveGlobalId()\n\nGet/Set the globalId of the vtkDirectory present of the server\nthat we will use to manipulate directories.\n"},
  {"SetActiveGlobalId", PyvtkPVFilePathEncodingHelper_SetActiveGlobalId, METH_VARARGS,
   "V.SetActiveGlobalId(int)\nC++: virtual void SetActiveGlobalId(int _arg)\n\nGet/Set the globalId of the vtkDirectory present of the server\nthat we will use to manipulate directories.\n"},
  {"MakeDirectory", PyvtkPVFilePathEncodingHelper_MakeDirectory, METH_VARARGS,
   "V.MakeDirectory() -> bool\nC++: bool MakeDirectory()\n\nCreate a directory named Path\n"},
  {"DeleteDirectory", PyvtkPVFilePathEncodingHelper_DeleteDirectory, METH_VARARGS,
   "V.DeleteDirectory() -> bool\nC++: bool DeleteDirectory()\n\nDelete a directory named Path\n"},
  {"OpenDirectory", PyvtkPVFilePathEncodingHelper_OpenDirectory, METH_VARARGS,
   "V.OpenDirectory() -> bool\nC++: bool OpenDirectory()\n\nOpen a directory named Path\n"},
  {"RenameDirectory", PyvtkPVFilePathEncodingHelper_RenameDirectory, METH_VARARGS,
   "V.RenameDirectory() -> bool\nC++: bool RenameDirectory()\n\nRename a directory named Path to SecondaryPath\n"},
  {"IsDirectory", PyvtkPVFilePathEncodingHelper_IsDirectory, METH_VARARGS,
   "V.IsDirectory() -> bool\nC++: bool IsDirectory()\n\nCheck is directory named Path exists.\n"},
  {"GetActiveFileIsReadable", PyvtkPVFilePathEncodingHelper_GetActiveFileIsReadable, METH_VARARGS,
   "V.GetActiveFileIsReadable() -> bool\nC++: bool GetActiveFileIsReadable()\n\nReturns if this->Path is a readable file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVFilePathEncodingHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkPVFilePathEncodingHelper", // tp_name
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
  PyvtkPVFilePathEncodingHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVFilePathEncodingHelper_StaticNew()
{
  return vtkPVFilePathEncodingHelper::New();
}

PyObject *PyvtkPVFilePathEncodingHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVFilePathEncodingHelper_Type, PyvtkPVFilePathEncodingHelper_Methods,
    "vtkPVFilePathEncodingHelper",
 &PyvtkPVFilePathEncodingHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkPVFilePathEncodingHelper_Type;

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

void PyVTKAddFile_vtkPVFilePathEncodingHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVFilePathEncodingHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVFilePathEncodingHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

