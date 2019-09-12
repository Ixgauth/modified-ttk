// python wrapper for vtkSMProxyConfigurationWriter
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
#include "vtkSMProxyConfigurationWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyConfigurationWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyConfigurationWriter_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyConfigurationWriter_Doc =
  "vtkSMProxyConfigurationWriter - Base readers of a vtkSMProxy's\nvtkSMProperty's.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyConfigurationWriter writes state for properties for a\n"
  "single proxy. Internally the ParaView state machinery is employed.\n\n"
  "The notion of proxy configuration is similar to state but lighter as\n"
  "the proxy its domains and and its server side objects are assumed to\n"
  "already exist. Configuration also provides subseting mechanism so\n"
  "that properties may be excluded if needed.\n\n"
  "Subsetting is achieved through a specialized iterator derived from\n"
  "vtkSMPropertyIterator.\n\n"
  "@sa\n"
  "vtkSMProxyConfigurationReader, vtkSMPropertyIterator,\n"
  "vtkSMNamedPropertyIterator\n\n"
  "@par Thanks: This class was contribued by SciberQuest Inc.\n\n";


static PyObject *
PyvtkSMProxyConfigurationWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyConfigurationWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyConfigurationWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyConfigurationWriter *tempr = vtkSMProxyConfigurationWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyConfigurationWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyConfigurationWriter::NewInstance());

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
PyvtkSMProxyConfigurationWriter_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetProxy(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyConfigurationWriter::GetProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  vtkSMPropertyIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMPropertyIterator"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyIterator(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetPropertyIterator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyIterator *tempr = (ap.IsBound() ?
      op->GetPropertyIterator() :
      op->vtkSMProxyConfigurationWriter::GetPropertyIterator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMProxyConfigurationWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileIdentifier(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetFileIdentifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileIdentifier() :
      op->vtkSMProxyConfigurationWriter::GetFileIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileDescription(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetFileDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileDescription() :
      op->vtkSMProxyConfigurationWriter::GetFileDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_SetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileExtension(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationWriter::SetFileExtension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMProxyConfigurationWriter::GetFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_GetWriterVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriterVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetWriterVersion() :
      op->vtkSMProxyConfigurationWriter::GetWriterVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->WriteConfiguration() :
      op->vtkSMProxyConfigurationWriter::WriteConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationWriter *op = static_cast<vtkSMProxyConfigurationWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->WriteConfiguration(temp0) :
      op->vtkSMProxyConfigurationWriter::WriteConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationWriter_WriteConfiguration(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMProxyConfigurationWriter_WriteConfiguration_s1(self, args);
    case 1:
      return PyvtkSMProxyConfigurationWriter_WriteConfiguration_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WriteConfiguration");
  return nullptr;
}


static PyMethodDef PyvtkSMProxyConfigurationWriter_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyConfigurationWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyConfigurationWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyConfigurationWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyConfigurationWriter\nC++: static vtkSMProxyConfigurationWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyConfigurationWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyConfigurationWriter\nC++: vtkSMProxyConfigurationWriter *NewInstance()\n\n"},
  {"SetProxy", PyvtkSMProxyConfigurationWriter_SetProxy, METH_VARARGS,
   "V.SetProxy(vtkSMProxy)\nC++: virtual void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to write out.\n"},
  {"GetProxy", PyvtkSMProxyConfigurationWriter_GetProxy, METH_VARARGS,
   "V.GetProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetProxy()\n\nSet the proxy to write out.\n"},
  {"SetPropertyIterator", PyvtkSMProxyConfigurationWriter_SetPropertyIterator, METH_VARARGS,
   "V.SetPropertyIterator(vtkSMPropertyIterator)\nC++: virtual void SetPropertyIterator(vtkSMPropertyIterator *iter)\n\nSet the ieterator used to traverse properties during the write.\nIf no iterator is set then all properties are written.\n"},
  {"GetPropertyIterator", PyvtkSMProxyConfigurationWriter_GetPropertyIterator, METH_VARARGS,
   "V.GetPropertyIterator() -> vtkSMPropertyIterator\nC++: virtual vtkSMPropertyIterator *GetPropertyIterator()\n\nSet the ieterator used to traverse properties during the write.\nIf no iterator is set then all properties are written.\n"},
  {"SetFileName", PyvtkSMProxyConfigurationWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the file name.\n"},
  {"GetFileName", PyvtkSMProxyConfigurationWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the file name.\n"},
  {"SetFileIdentifier", PyvtkSMProxyConfigurationWriter_SetFileIdentifier, METH_VARARGS,
   "V.SetFileIdentifier(string)\nC++: virtual void SetFileIdentifier(const char *_arg)\n\nSet/get file meta data.\n"},
  {"GetFileIdentifier", PyvtkSMProxyConfigurationWriter_GetFileIdentifier, METH_VARARGS,
   "V.GetFileIdentifier() -> string\nC++: virtual char *GetFileIdentifier()\n\nSet/get file meta data.\n"},
  {"SetFileDescription", PyvtkSMProxyConfigurationWriter_SetFileDescription, METH_VARARGS,
   "V.SetFileDescription(string)\nC++: virtual void SetFileDescription(const char *_arg)\n\n"},
  {"GetFileDescription", PyvtkSMProxyConfigurationWriter_GetFileDescription, METH_VARARGS,
   "V.GetFileDescription() -> string\nC++: virtual char *GetFileDescription()\n\n"},
  {"SetFileExtension", PyvtkSMProxyConfigurationWriter_SetFileExtension, METH_VARARGS,
   "V.SetFileExtension(string)\nC++: virtual void SetFileExtension(const char *_arg)\n\n"},
  {"GetFileExtension", PyvtkSMProxyConfigurationWriter_GetFileExtension, METH_VARARGS,
   "V.GetFileExtension() -> string\nC++: virtual char *GetFileExtension()\n\n"},
  {"GetWriterVersion", PyvtkSMProxyConfigurationWriter_GetWriterVersion, METH_VARARGS,
   "V.GetWriterVersion() -> string\nC++: virtual const char *GetWriterVersion()\n\nReturn the writer version string.\n"},
  {"WriteConfiguration", PyvtkSMProxyConfigurationWriter_WriteConfiguration, METH_VARARGS,
   "V.WriteConfiguration() -> int\nC++: virtual int WriteConfiguration()\nV.WriteConfiguration(string) -> int\nC++: virtual int WriteConfiguration(const char *fileName)\n\nWrite the proxy's state directly to an XML file, in PV state\nformat.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyConfigurationWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMProxyConfigurationWriter", // tp_name
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
  PyvtkSMProxyConfigurationWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyConfigurationWriter_StaticNew()
{
  return vtkSMProxyConfigurationWriter::New();
}

PyObject *PyvtkSMProxyConfigurationWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyConfigurationWriter_Type, PyvtkSMProxyConfigurationWriter_Methods,
    "vtkSMProxyConfigurationWriter",
 &PyvtkSMProxyConfigurationWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyConfigurationWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxyConfigurationWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyConfigurationWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyConfigurationWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

