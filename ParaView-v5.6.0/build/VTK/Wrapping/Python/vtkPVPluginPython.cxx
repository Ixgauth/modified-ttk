// python wrapper for vtkPVPlugin
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPVPlugin.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPlugin(PyObject *); }

static const char *PyvtkPVPlugin_Doc =
  "vtkPVPlugin - defines the core interface for any ParaView plugin.\n\n"
  "vtkPVPlugin defines the core interface for any ParaView plugin. A\n"
  "plugin implementing merely this interface is pretty much useless. The\n"
  "header file also defines few import macros that are required for\n"
  "exporting/importing plugins.\n\n"
  "When debugging issues with plugins try setting the PV_PLUGIN_DEBUG\n"
  "environment variable on all the processes where you are trying to\n"
  "load the plugin. That will print extra information as the plugin is\n"
  "being loaded.\n\n";


static PyObject *
PyvtkPVPlugin_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetFileName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetPluginName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetPluginVersionString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersionString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetPluginVersionString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetRequiredOnServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnServer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetRequiredOnServer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetRequiredOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnClient");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->GetRequiredOnClient();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetRequiredPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredPlugins");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetRequiredPlugins();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVPlugin_GetEULA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEULA");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPlugin *op = static_cast<vtkPVPlugin *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetEULA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPVPlugin_Methods[] = {
  {"GetFileName", PyvtkPVPlugin_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: const char *GetFileName()\n\n"},
  {"GetPluginName", PyvtkPVPlugin_GetPluginName, METH_VARARGS,
   "V.GetPluginName() -> string\nC++: virtual const char *GetPluginName()\n\nReturns the name for this plugin.\n"},
  {"GetPluginVersionString", PyvtkPVPlugin_GetPluginVersionString, METH_VARARGS,
   "V.GetPluginVersionString() -> string\nC++: virtual const char *GetPluginVersionString()\n\nReturns the version for this plugin.\n"},
  {"GetRequiredOnServer", PyvtkPVPlugin_GetRequiredOnServer, METH_VARARGS,
   "V.GetRequiredOnServer() -> bool\nC++: virtual bool GetRequiredOnServer()\n\nReturns true if this plugin is required on the server.\n"},
  {"GetRequiredOnClient", PyvtkPVPlugin_GetRequiredOnClient, METH_VARARGS,
   "V.GetRequiredOnClient() -> bool\nC++: virtual bool GetRequiredOnClient()\n\nReturns true if this plugin is required on the client.\n"},
  {"GetRequiredPlugins", PyvtkPVPlugin_GetRequiredPlugins, METH_VARARGS,
   "V.GetRequiredPlugins() -> string\nC++: virtual const char *GetRequiredPlugins()\n\nReturns a ';' separated list of plugin names required by this\nplugin.\n"},
  {"GetEULA", PyvtkPVPlugin_GetEULA, METH_VARARGS,
   "V.GetEULA() -> string\nC++: virtual const char *GetEULA()\n\nReturns EULA for the plugin, if any. If none, this will return\nnullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVPlugin_New(PyTypeObject *, PyObject *, PyObject *)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkPVPlugin_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVPlugin *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVPlugin_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkPVPlugin_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreCorePython.vtkPVPlugin", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVPlugin_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVPlugin_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVPlugin_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkPVPlugin_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPlugin_TypeNew(); }

PyObject *PyvtkPVPlugin_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVPlugin_Type,
    PyvtkPVPlugin_Methods,
    nullptr,
    nullptr);

  PyTypeObject *pytype = &PyvtkPVPlugin_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPlugin(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPlugin_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPlugin", o) != 0)
  {
    Py_DECREF(o);
  }

}

