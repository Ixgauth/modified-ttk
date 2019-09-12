// python wrapper for vtkSMReaderReloadHelper
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
#include "vtkSMReaderReloadHelper.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMReaderReloadHelper(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMReaderReloadHelper_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMReaderReloadHelper_Doc =
  "vtkSMReaderReloadHelper - helper to help reload a reader.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSMReaderReloadHelper helps make a reader reload its files. There\n"
  "are two ways of reloading: reload existing data files, or extend the\n"
  "file series with any new files that are now available. This class\n"
  "supports both. Use vtkSMReaderReloadHelper::ReloadFiles() to reload\n"
  "existing files (potentially using a specific property on the reader\n"
  "proxy for reloading, if available). Use\n"
  "vtkSMReaderReloadHelper::ExtendFileSeries() to detect new files in a\n"
  "file series and update the reader to use those.\n\n";


static PyObject *
PyvtkSMReaderReloadHelper_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMReaderReloadHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMReaderReloadHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMReaderReloadHelper *tempr = vtkSMReaderReloadHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMReaderReloadHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMReaderReloadHelper::NewInstance());

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
PyvtkSMReaderReloadHelper_SupportsReload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsReload");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsReload(temp0) :
      op->vtkSMReaderReloadHelper::SupportsReload(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_SupportsFileSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportsFileSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportsFileSeries(temp0) :
      op->vtkSMReaderReloadHelper::SupportsFileSeries(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_ReloadFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReloadFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->ReloadFiles(temp0) :
      op->vtkSMReaderReloadHelper::ReloadFiles(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMReaderReloadHelper_ExtendFileSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendFileSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMReaderReloadHelper *op = static_cast<vtkSMReaderReloadHelper *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtendFileSeries(temp0) :
      op->vtkSMReaderReloadHelper::ExtendFileSeries(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMReaderReloadHelper_Methods[] = {
  {"IsTypeOf", PyvtkSMReaderReloadHelper_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMReaderReloadHelper_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMReaderReloadHelper_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMReaderReloadHelper\nC++: static vtkSMReaderReloadHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMReaderReloadHelper_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMReaderReloadHelper\nC++: vtkSMReaderReloadHelper *NewInstance()\n\n"},
  {"SupportsReload", PyvtkSMReaderReloadHelper_SupportsReload, METH_VARARGS,
   "V.SupportsReload(vtkSMSourceProxy) -> bool\nC++: virtual bool SupportsReload(vtkSMSourceProxy *proxy)\n\nReturns true if its possible to reload data files for the given\nproxy i.e. checks if the proxy is a reader. If not, returns\nfalse.\n"},
  {"SupportsFileSeries", PyvtkSMReaderReloadHelper_SupportsFileSeries, METH_VARARGS,
   "V.SupportsFileSeries(vtkSMSourceProxy) -> bool\nC++: virtual bool SupportsFileSeries(vtkSMSourceProxy *proxy)\n\nReturns true if the reader supports file series.\n"},
  {"ReloadFiles", PyvtkSMReaderReloadHelper_ReloadFiles, METH_VARARGS,
   "V.ReloadFiles(vtkSMSourceProxy) -> bool\nC++: virtual bool ReloadFiles(vtkSMSourceProxy *proxy)\n\nMake the reader reload its data file(s). If a reader supports API\nto support such reloads in  a smart way, then the reader proxy\nshould use the `<ReloadFiles />` hint to name the property. In\nthat case, this method will use that property. Otherwise, it will\nuse vtkSMProxy::RecreateVTKObjects() to simply recreate the VTK\nobject and update its state.\n"},
  {"ExtendFileSeries", PyvtkSMReaderReloadHelper_ExtendFileSeries, METH_VARARGS,
   "V.ExtendFileSeries(vtkSMSourceProxy) -> bool\nC++: virtual bool ExtendFileSeries(vtkSMSourceProxy *proxy)\n\nAttempts to find more files in a file series specified on the\nreader proxy and all those files to the reader. This should be\ncalled only when IsFileSeriesCapable() returns true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMReaderReloadHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMReaderReloadHelper", // tp_name
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
  PyvtkSMReaderReloadHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMReaderReloadHelper_StaticNew()
{
  return vtkSMReaderReloadHelper::New();
}

PyObject *PyvtkSMReaderReloadHelper_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMReaderReloadHelper_Type, PyvtkSMReaderReloadHelper_Methods,
    "vtkSMReaderReloadHelper",
 &PyvtkSMReaderReloadHelper_StaticNew);

  PyTypeObject *pytype = &PyvtkSMReaderReloadHelper_Type;

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

void PyVTKAddFile_vtkSMReaderReloadHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMReaderReloadHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMReaderReloadHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

