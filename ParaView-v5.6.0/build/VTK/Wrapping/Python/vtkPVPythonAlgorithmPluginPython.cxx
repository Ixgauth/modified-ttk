// python wrapper for vtkPVPythonAlgorithmPlugin
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPVPythonAlgorithmPlugin.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVPythonAlgorithmPlugin(PyObject *); }

static const char *PyvtkPVPythonAlgorithmPlugin_Doc =
  "vtkPVPythonAlgorithmPlugin - packages a Python module into a ParaView\nplugin.\n\n"
  "vtkPVPythonAlgorithmPlugin helps us support loading a Python module\n"
  "as a ParaView `plugin`. The only supported type of plugin is a\n"
  "server-manager plugin that adds support for algorithm proxies i.e.\n"
  "readers, filters, and writers.\n\n"
  "vtkPVPythonAlgorithmPlugin(const char *pythonmodule)\n";


static PyObject *
PyvtkPVPythonAlgorithmPlugin_GetPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginName");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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
PyvtkPVPythonAlgorithmPlugin_GetPluginVersionString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPluginVersionString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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
PyvtkPVPythonAlgorithmPlugin_GetRequiredOnServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnServer");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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
PyvtkPVPythonAlgorithmPlugin_GetRequiredOnClient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredOnClient");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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
PyvtkPVPythonAlgorithmPlugin_GetRequiredPlugins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredPlugins");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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
PyvtkPVPythonAlgorithmPlugin_GetEULA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEULA");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPVPythonAlgorithmPlugin *op = static_cast<vtkPVPythonAlgorithmPlugin *>(vp);

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

static PyMethodDef PyvtkPVPythonAlgorithmPlugin_Methods[] = {
  {"GetPluginName", PyvtkPVPythonAlgorithmPlugin_GetPluginName, METH_VARARGS,
   "V.GetPluginName() -> string\nC++: const char *GetPluginName() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {"GetPluginVersionString", PyvtkPVPythonAlgorithmPlugin_GetPluginVersionString, METH_VARARGS,
   "V.GetPluginVersionString() -> string\nC++: const char *GetPluginVersionString() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {"GetRequiredOnServer", PyvtkPVPythonAlgorithmPlugin_GetRequiredOnServer, METH_VARARGS,
   "V.GetRequiredOnServer() -> bool\nC++: bool GetRequiredOnServer() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {"GetRequiredOnClient", PyvtkPVPythonAlgorithmPlugin_GetRequiredOnClient, METH_VARARGS,
   "V.GetRequiredOnClient() -> bool\nC++: bool GetRequiredOnClient() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {"GetRequiredPlugins", PyvtkPVPythonAlgorithmPlugin_GetRequiredPlugins, METH_VARARGS,
   "V.GetRequiredPlugins() -> string\nC++: const char *GetRequiredPlugins() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {"GetEULA", PyvtkPVPythonAlgorithmPlugin_GetEULA, METH_VARARGS,
   "V.GetEULA() -> string\nC++: const char *GetEULA() override;\n\nImplementation of the vtkPVPlugin interface.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPVPythonAlgorithmPlugin_vtkPVPythonAlgorithmPlugin(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPythonAlgorithmPlugin");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPVPythonAlgorithmPlugin *op = new vtkPVPythonAlgorithmPlugin(temp0);

    result = PyVTKSpecialObject_New("vtkPVPythonAlgorithmPlugin", op);
  }

  return result;
}

static PyMethodDef PyvtkPVPythonAlgorithmPlugin_vtkPVPythonAlgorithmPlugin_Methods[] = {
  {nullptr, PyvtkPVPythonAlgorithmPlugin_vtkPVPythonAlgorithmPlugin, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVPythonAlgorithmPlugin_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPVPythonAlgorithmPlugin_vtkPVPythonAlgorithmPlugin(nullptr, args);
}

static void PyvtkPVPythonAlgorithmPlugin_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVPythonAlgorithmPlugin *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVPythonAlgorithmPlugin_Hash(PyObject *self)
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

static PyTypeObject PyvtkPVPythonAlgorithmPlugin_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVPythonAlgorithmPython.vtkPVPythonAlgorithmPlugin", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVPythonAlgorithmPlugin_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVPythonAlgorithmPlugin_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVPythonAlgorithmPlugin_Doc, // tp_doc
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
  PyvtkPVPythonAlgorithmPlugin_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPythonAlgorithmPlugin_TypeNew(); }

PyObject *PyvtkPVPythonAlgorithmPlugin_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVPythonAlgorithmPlugin_Type,
    PyvtkPVPythonAlgorithmPlugin_Methods,
    PyvtkPVPythonAlgorithmPlugin_vtkPVPythonAlgorithmPlugin_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkPVPythonAlgorithmPlugin_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static const char *PyvtkPVPythonAlgorithmPluginLoaderInitializer_Doc =
  "vtkPVPythonAlgorithmPluginLoaderInitializer - no description provided.\n\n"

  "vtkPVPythonAlgorithmPluginLoaderInitializer()\n"
  "vtkPVPythonAlgorithmPluginLoaderInitializer(\n    const &vtkPVPythonAlgorithmPluginLoaderInitializer)\n";

static PyMethodDef PyvtkPVPythonAlgorithmPluginLoaderInitializer_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPythonAlgorithmPluginLoaderInitializer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPVPythonAlgorithmPluginLoaderInitializer *op = new vtkPVPythonAlgorithmPluginLoaderInitializer();

    result = PyVTKSpecialObject_New("vtkPVPythonAlgorithmPluginLoaderInitializer", op);
  }

  return result;
}

static PyObject *
PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPVPythonAlgorithmPluginLoaderInitializer");

  vtkPVPythonAlgorithmPluginLoaderInitializer *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPVPythonAlgorithmPluginLoaderInitializer"))
  {
    vtkPVPythonAlgorithmPluginLoaderInitializer *op = new vtkPVPythonAlgorithmPluginLoaderInitializer(*temp0);

    result = PyVTKSpecialObject_New("vtkPVPythonAlgorithmPluginLoaderInitializer", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_Methods[] = {
  {nullptr, PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_s2, METH_VARARGS,
   "@W vtkPVPythonAlgorithmPluginLoaderInitializer"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_s1(self, args);
    case 1:
      return PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPVPythonAlgorithmPluginLoaderInitializer");
  return nullptr;
}


static PyObject *
PyvtkPVPythonAlgorithmPluginLoaderInitializer_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer(nullptr, args);
}

static void PyvtkPVPythonAlgorithmPluginLoaderInitializer_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPVPythonAlgorithmPluginLoaderInitializer *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPVPythonAlgorithmPluginLoaderInitializer_Hash(PyObject *self)
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

static PyTypeObject PyvtkPVPythonAlgorithmPluginLoaderInitializer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVPythonAlgorithmPython.vtkPVPythonAlgorithmPluginLoaderInitializer", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPVPythonAlgorithmPluginLoaderInitializer_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkPVPythonAlgorithmPluginLoaderInitializer_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPVPythonAlgorithmPluginLoaderInitializer_Doc, // tp_doc
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
  PyvtkPVPythonAlgorithmPluginLoaderInitializer_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPVPythonAlgorithmPluginLoaderInitializer_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPVPythonAlgorithmPluginLoaderInitializer(*static_cast<const vtkPVPythonAlgorithmPluginLoaderInitializer*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVPythonAlgorithmPluginLoaderInitializer_TypeNew(); }

PyObject *PyvtkPVPythonAlgorithmPluginLoaderInitializer_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkPVPythonAlgorithmPluginLoaderInitializer_Type,
    PyvtkPVPythonAlgorithmPluginLoaderInitializer_Methods,
    PyvtkPVPythonAlgorithmPluginLoaderInitializer_vtkPVPythonAlgorithmPluginLoaderInitializer_Methods,
    &PyvtkPVPythonAlgorithmPluginLoaderInitializer_CCopy);

  PyTypeObject *pytype = &PyvtkPVPythonAlgorithmPluginLoaderInitializer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVPythonAlgorithmPlugin(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVPythonAlgorithmPlugin_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPythonAlgorithmPlugin", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkPVPythonAlgorithmPluginLoaderInitializer_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPVPythonAlgorithmPluginLoaderInitializer", o) != 0)
  {
    Py_DECREF(o);
  }

}

