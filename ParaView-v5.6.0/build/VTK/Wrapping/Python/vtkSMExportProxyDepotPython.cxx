// python wrapper for vtkSMExportProxyDepot
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
#include "vtkSMExportProxyDepot.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMExportProxyDepot(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMExportProxyDepot_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSMExportProxyDepot_Doc =
  "vtkSMExportProxyDepot - access proxies that define catalyst export\nstate\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSMExportProxyDepot is a container for export proxies. These\n"
  "include Writer proxies, SaveScreenShot proxies and the global\n"
  "Catalyst Options Proxy. It is a helper class for the\n"
  "SMSessionProxyManager intended to standardize an API for working with\n"
  "them.\n\n";


static PyObject *
PyvtkSMExportProxyDepot_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMExportProxyDepot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMExportProxyDepot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMExportProxyDepot *tempr = vtkSMExportProxyDepot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMExportProxyDepot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMExportProxyDepot::NewInstance());

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
PyvtkSMExportProxyDepot_GetGlobalOptions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalOptions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetGlobalOptions() :
      op->vtkSMExportProxyDepot::GetGlobalOptions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_HasWriterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasWriterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasWriterProxy(temp0, temp1) :
      op->vtkSMExportProxyDepot::HasWriterProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_GetWriterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetWriterProxy(temp0, temp1, temp2) :
      op->vtkSMExportProxyDepot::GetWriterProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_InitNextWriterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitNextWriterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitNextWriterProxy();
    }
    else
    {
      op->vtkSMExportProxyDepot::InitNextWriterProxy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_GetNextWriterProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextWriterProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSourceProxy *tempr = (ap.IsBound() ?
      op->GetNextWriterProxy() :
      op->vtkSMExportProxyDepot::GetNextWriterProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_HasScreenshotProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScreenshotProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasScreenshotProxy(temp0, temp1) :
      op->vtkSMExportProxyDepot::HasScreenshotProxy(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_GetScreenshotProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenshotProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetScreenshotProxy(temp0, temp1, temp2) :
      op->vtkSMExportProxyDepot::GetScreenshotProxy(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_InitNextScreenshotProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitNextScreenshotProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitNextScreenshotProxy();
    }
    else
    {
      op->vtkSMExportProxyDepot::InitNextScreenshotProxy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExportProxyDepot_GetNextScreenshotProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextScreenshotProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExportProxyDepot *op = static_cast<vtkSMExportProxyDepot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetNextScreenshotProxy() :
      op->vtkSMExportProxyDepot::GetNextScreenshotProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMExportProxyDepot_Methods[] = {
  {"IsTypeOf", PyvtkSMExportProxyDepot_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMExportProxyDepot_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMExportProxyDepot_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMExportProxyDepot\nC++: static vtkSMExportProxyDepot *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMExportProxyDepot_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMExportProxyDepot\nC++: vtkSMExportProxyDepot *NewInstance()\n\n"},
  {"GetGlobalOptions", PyvtkSMExportProxyDepot_GetGlobalOptions, METH_VARARGS,
   "V.GetGlobalOptions() -> vtkSMProxy\nC++: vtkSMProxy *GetGlobalOptions()\n\nGlobal options for the entire catalyst export.\n"},
  {"HasWriterProxy", PyvtkSMExportProxyDepot_HasWriterProxy, METH_VARARGS,
   "V.HasWriterProxy(string, string) -> bool\nC++: bool HasWriterProxy(const char *group, const char *format)\n\nOptions for exporting a source proxy.\n"},
  {"GetWriterProxy", PyvtkSMExportProxyDepot_GetWriterProxy, METH_VARARGS,
   "V.GetWriterProxy(vtkSMSourceProxy, string, string)\n    -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetWriterProxy(vtkSMSourceProxy *filter,\n    const char *group, const char *format)\n\nOptions for exporting a source proxy.\n"},
  {"InitNextWriterProxy", PyvtkSMExportProxyDepot_InitNextWriterProxy, METH_VARARGS,
   "V.InitNextWriterProxy()\nC++: void InitNextWriterProxy()\n\nIterate through source proxy exports.\n"},
  {"GetNextWriterProxy", PyvtkSMExportProxyDepot_GetNextWriterProxy, METH_VARARGS,
   "V.GetNextWriterProxy() -> vtkSMSourceProxy\nC++: vtkSMSourceProxy *GetNextWriterProxy()\n\nIterate through source proxy exports.\n"},
  {"HasScreenshotProxy", PyvtkSMExportProxyDepot_HasScreenshotProxy, METH_VARARGS,
   "V.HasScreenshotProxy(string, string) -> bool\nC++: bool HasScreenshotProxy(const char *group,\n    const char *format)\n\nOptions for exporting a screen shot.\n"},
  {"GetScreenshotProxy", PyvtkSMExportProxyDepot_GetScreenshotProxy, METH_VARARGS,
   "V.GetScreenshotProxy(vtkSMProxy, string, string) -> vtkSMProxy\nC++: vtkSMProxy *GetScreenshotProxy(vtkSMProxy *view,\n    const char *group, const char *format)\n\nOptions for exporting a screen shot.\n"},
  {"InitNextScreenshotProxy", PyvtkSMExportProxyDepot_InitNextScreenshotProxy, METH_VARARGS,
   "V.InitNextScreenshotProxy()\nC++: void InitNextScreenshotProxy()\n\nIterate through screen shot exports.\n"},
  {"GetNextScreenshotProxy", PyvtkSMExportProxyDepot_GetNextScreenshotProxy, METH_VARARGS,
   "V.GetNextScreenshotProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetNextScreenshotProxy()\n\nIterate through screen shot exports.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMExportProxyDepot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMExportProxyDepot", // tp_name
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
  PyvtkSMExportProxyDepot_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMExportProxyDepot_StaticNew()
{
  return vtkSMExportProxyDepot::New();
}

PyObject *PyvtkSMExportProxyDepot_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMExportProxyDepot_Type, PyvtkSMExportProxyDepot_Methods,
    "vtkSMExportProxyDepot",
 &PyvtkSMExportProxyDepot_StaticNew);

  PyTypeObject *pytype = &PyvtkSMExportProxyDepot_Type;

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

void PyVTKAddFile_vtkSMExportProxyDepot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMExportProxyDepot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMExportProxyDepot", o) != 0)
  {
    Py_DECREF(o);
  }

}

