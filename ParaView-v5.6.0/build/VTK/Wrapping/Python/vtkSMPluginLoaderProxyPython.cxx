// python wrapper for vtkSMPluginLoaderProxy
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
#include "vtkSMPluginLoaderProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPluginLoaderProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMPluginLoaderProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMPluginLoaderProxy_Doc =
  "vtkSMPluginLoaderProxy - used to load a plugin remotely.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMPluginLoaderProxy is used to load a plugin on dataserver and\n"
  "renderserver processes. Simply call\n"
  "vtkSMPluginLoaderProxy::LoadPlugin() with the right path to load the\n"
  "plugin remotely.\n\n";


static PyObject *
PyvtkSMPluginLoaderProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPluginLoaderProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPluginLoaderProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPluginLoaderProxy *tempr = vtkSMPluginLoaderProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPluginLoaderProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPluginLoaderProxy::NewInstance());

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
PyvtkSMPluginLoaderProxy_LoadPlugin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPlugin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadPlugin(temp0) :
      op->vtkSMPluginLoaderProxy::LoadPlugin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPluginLoaderProxy_LoadPluginConfigurationXMLFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadPluginConfigurationXMLFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPluginLoaderProxy *op = static_cast<vtkSMPluginLoaderProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadPluginConfigurationXMLFromString(temp0);
    }
    else
    {
      op->vtkSMPluginLoaderProxy::LoadPluginConfigurationXMLFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPluginLoaderProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMPluginLoaderProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPluginLoaderProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPluginLoaderProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMPluginLoaderProxy\nC++: static vtkSMPluginLoaderProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPluginLoaderProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMPluginLoaderProxy\nC++: vtkSMPluginLoaderProxy *NewInstance()\n\n"},
  {"LoadPlugin", PyvtkSMPluginLoaderProxy_LoadPlugin, METH_VARARGS,
   "V.LoadPlugin(string) -> bool\nC++: bool LoadPlugin(const char *filename)\n\nLoads the plugin. Returns true on success else false. To get the\nerror string, call UpdatePropertyInformation() on this proxy and\nthen look at the ErrorString property.\n"},
  {"LoadPluginConfigurationXMLFromString", PyvtkSMPluginLoaderProxy_LoadPluginConfigurationXMLFromString, METH_VARARGS,
   "V.LoadPluginConfigurationXMLFromString(string)\nC++: void LoadPluginConfigurationXMLFromString(\n    const char *xmlcontents)\n\nLoads the configuration xml contents. Look at\nvtkPVPluginTracker::LoadPluginConfigurationXMLFromString() to see\nthe details about the configuration xml.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMPluginLoaderProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMPluginLoaderProxy", // tp_name
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
  PyvtkSMPluginLoaderProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPluginLoaderProxy_StaticNew()
{
  return vtkSMPluginLoaderProxy::New();
}

PyObject *PyvtkSMPluginLoaderProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMPluginLoaderProxy_Type, PyvtkSMPluginLoaderProxy_Methods,
    "vtkSMPluginLoaderProxy",
 &PyvtkSMPluginLoaderProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMPluginLoaderProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPluginLoaderProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPluginLoaderProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPluginLoaderProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

