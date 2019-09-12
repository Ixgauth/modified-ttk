// python wrapper for vtkSMLoadStateOptionsProxy
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
#include "vtkSMLoadStateOptionsProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMLoadStateOptionsProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMLoadStateOptionsProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMLoadStateOptionsProxy_Doc =
  "vtkSMLoadStateOptionsProxy - proxy for managing data files when\nloading a state file.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMLoadStateOptionsProxy provides a dialog to allow a user to\n"
  "change the locations of data files when loading a state file. The\n"
  "user can give a directory where the data files reside or explicitly\n"
  "change the path for each data file.\n\n";


static PyObject *
PyvtkSMLoadStateOptionsProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMLoadStateOptionsProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMLoadStateOptionsProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMLoadStateOptionsProxy *tempr = vtkSMLoadStateOptionsProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMLoadStateOptionsProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMLoadStateOptionsProxy::NewInstance());

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
PyvtkSMLoadStateOptionsProxy_PrepareToLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareToLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->PrepareToLoad(temp0) :
      op->vtkSMLoadStateOptionsProxy::PrepareToLoad(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_HasDataFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasDataFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasDataFiles() :
      op->vtkSMLoadStateOptionsProxy::HasDataFiles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Load() :
      op->vtkSMLoadStateOptionsProxy::Load());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_SetDataFileOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataFileOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataFileOptions(temp0);
    }
    else
    {
      op->vtkSMLoadStateOptionsProxy::SetDataFileOptions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_GetDataFileOptionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFileOptionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataFileOptionsMinValue() :
      op->vtkSMLoadStateOptionsProxy::GetDataFileOptionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_GetDataFileOptionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFileOptionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataFileOptionsMaxValue() :
      op->vtkSMLoadStateOptionsProxy::GetDataFileOptionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMLoadStateOptionsProxy_SetOnlyUseFilesInDataDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnlyUseFilesInDataDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMLoadStateOptionsProxy *op = static_cast<vtkSMLoadStateOptionsProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnlyUseFilesInDataDirectory(temp0);
    }
    else
    {
      op->vtkSMLoadStateOptionsProxy::SetOnlyUseFilesInDataDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMLoadStateOptionsProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMLoadStateOptionsProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMLoadStateOptionsProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMLoadStateOptionsProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMLoadStateOptionsProxy\nC++: static vtkSMLoadStateOptionsProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMLoadStateOptionsProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMLoadStateOptionsProxy\nC++: vtkSMLoadStateOptionsProxy *NewInstance()\n\n"},
  {"PrepareToLoad", PyvtkSMLoadStateOptionsProxy_PrepareToLoad, METH_VARARGS,
   "V.PrepareToLoad(string) -> bool\nC++: virtual bool PrepareToLoad(const char *statefilename)\n\nSet the state file to load. This may read the file and collect\ninformation about the file. Returns false if the filename is\ninvalid or cannot be read.\n"},
  {"HasDataFiles", PyvtkSMLoadStateOptionsProxy_HasDataFiles, METH_VARARGS,
   "V.HasDataFiles() -> bool\nC++: virtual bool HasDataFiles()\n\nCheck if state file has any data files.\n@returns whether the state file refers to any data files to be\n    loaded.\n"},
  {"Load", PyvtkSMLoadStateOptionsProxy_Load, METH_VARARGS,
   "V.Load() -> bool\nC++: virtual bool Load()\n\nDo the state loading.\n"},
  {"SetDataFileOptions", PyvtkSMLoadStateOptionsProxy_SetDataFileOptions, METH_VARARGS,
   "V.SetDataFileOptions(int)\nC++: virtual void SetDataFileOptions(int _arg)\n\n"},
  {"GetDataFileOptionsMinValue", PyvtkSMLoadStateOptionsProxy_GetDataFileOptionsMinValue, METH_VARARGS,
   "V.GetDataFileOptionsMinValue() -> int\nC++: virtual int GetDataFileOptionsMinValue()\n\n"},
  {"GetDataFileOptionsMaxValue", PyvtkSMLoadStateOptionsProxy_GetDataFileOptionsMaxValue, METH_VARARGS,
   "V.GetDataFileOptionsMaxValue() -> int\nC++: virtual int GetDataFileOptionsMaxValue()\n\n"},
  {"SetOnlyUseFilesInDataDirectory", PyvtkSMLoadStateOptionsProxy_SetOnlyUseFilesInDataDirectory, METH_VARARGS,
   "V.SetOnlyUseFilesInDataDirectory(bool)\nC++: virtual void SetOnlyUseFilesInDataDirectory(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMLoadStateOptionsProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMLoadStateOptionsProxy", // tp_name
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
  PyvtkSMLoadStateOptionsProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMLoadStateOptionsProxy_StaticNew()
{
  return vtkSMLoadStateOptionsProxy::New();
}

PyObject *PyvtkSMLoadStateOptionsProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMLoadStateOptionsProxy_Type, PyvtkSMLoadStateOptionsProxy_Methods,
    "vtkSMLoadStateOptionsProxy",
 &PyvtkSMLoadStateOptionsProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMLoadStateOptionsProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "USE_FILES_FROM_STATE", vtkSMLoadStateOptionsProxy::USE_FILES_FROM_STATE },
        { "USE_DATA_DIRECTORY", vtkSMLoadStateOptionsProxy::USE_DATA_DIRECTORY },
        { "CHOOSE_FILES_EXPLICITLY", vtkSMLoadStateOptionsProxy::CHOOSE_FILES_EXPLICITLY },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMLoadStateOptionsProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMLoadStateOptionsProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMLoadStateOptionsProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

