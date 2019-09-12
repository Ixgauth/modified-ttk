// python wrapper for vtkSMProxyConfigurationReader
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
#include "vtkSMProxyConfigurationReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxyConfigurationReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxyConfigurationReader_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMProxyConfigurationReader_Doc =
  "vtkSMProxyConfigurationReader - Base readers of a vtkSMProxy's\nvtkSMProperty's.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMProxyConfigurationReader reads state for properties for a single\n"
  "proxy. Internally the ParaView state machinery is employed.\n\n"
  "The notion of proxy configuration is similar to state but lighter as\n"
  "the proxy its domains and and its server side objects are assumed to\n"
  "already exist. Configuration also provides subseting mechanism so\n"
  "that properties may be excluded if needed.\n\n"
  "The subsetting mechanism is implemented in the writer, the reader\n"
  "simply reads which ever properties are found.\n\n"
  "@sa\n"
  "vtkSMProxyConfigurationWriter\n\n"
  "@par Thanks: This class was contribued by SciberQuest Inc.\n\n";


static PyObject *
PyvtkSMProxyConfigurationReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxyConfigurationReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxyConfigurationReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxyConfigurationReader *tempr = vtkSMProxyConfigurationReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyConfigurationReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxyConfigurationReader::NewInstance());

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
PyvtkSMProxyConfigurationReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSMProxyConfigurationReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMProxyConfigurationReader::GetProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileIdentifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileIdentifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileIdentifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileIdentifier() :
      op->vtkSMProxyConfigurationReader::GetFileIdentifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileDescription() :
      op->vtkSMProxyConfigurationReader::GetFileDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

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
      op->vtkSMProxyConfigurationReader::SetFileExtension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMProxyConfigurationReader::GetFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_SetValidateProxyType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidateProxyType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidateProxyType(temp0);
    }
    else
    {
      op->vtkSMProxyConfigurationReader::SetValidateProxyType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetValidateProxyType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidateProxyType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetValidateProxyType() :
      op->vtkSMProxyConfigurationReader::GetValidateProxyType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_GetReaderVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReaderVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetReaderVersion() :
      op->vtkSMProxyConfigurationReader::GetReaderVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_CanReadVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadVersion(temp0) :
      op->vtkSMProxyConfigurationReader::CanReadVersion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration() :
      op->vtkSMProxyConfigurationReader::ReadConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMProxyConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxyConfigurationReader *op = static_cast<vtkSMProxyConfigurationReader *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMProxyConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxyConfigurationReader_ReadConfiguration_Methods[] = {
  {nullptr, PyvtkSMProxyConfigurationReader_ReadConfiguration_s2, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMProxyConfigurationReader_ReadConfiguration_s3, METH_VARARGS,
   "@V *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMProxyConfigurationReader_ReadConfiguration(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMProxyConfigurationReader_ReadConfiguration_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMProxyConfigurationReader_ReadConfiguration_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadConfiguration");
  return nullptr;
}


static PyMethodDef PyvtkSMProxyConfigurationReader_Methods[] = {
  {"IsTypeOf", PyvtkSMProxyConfigurationReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxyConfigurationReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxyConfigurationReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxyConfigurationReader\nC++: static vtkSMProxyConfigurationReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxyConfigurationReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxyConfigurationReader\nC++: vtkSMProxyConfigurationReader *NewInstance()\n\n"},
  {"SetFileName", PyvtkSMProxyConfigurationReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the file name.\n"},
  {"GetFileName", PyvtkSMProxyConfigurationReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/Get the file name.\n"},
  {"SetProxy", PyvtkSMProxyConfigurationReader_SetProxy, METH_VARARGS,
   "V.SetProxy(vtkSMProxy)\nC++: virtual void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to write out.\n"},
  {"GetProxy", PyvtkSMProxyConfigurationReader_GetProxy, METH_VARARGS,
   "V.GetProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetProxy()\n\nSet the proxy to write out.\n"},
  {"SetFileIdentifier", PyvtkSMProxyConfigurationReader_SetFileIdentifier, METH_VARARGS,
   "V.SetFileIdentifier(string)\nC++: virtual void SetFileIdentifier(const char *_arg)\n\nSet/get file meta data.\n"},
  {"GetFileIdentifier", PyvtkSMProxyConfigurationReader_GetFileIdentifier, METH_VARARGS,
   "V.GetFileIdentifier() -> string\nC++: virtual char *GetFileIdentifier()\n\nSet/get file meta data.\n"},
  {"SetFileDescription", PyvtkSMProxyConfigurationReader_SetFileDescription, METH_VARARGS,
   "V.SetFileDescription(string)\nC++: virtual void SetFileDescription(const char *_arg)\n\n"},
  {"GetFileDescription", PyvtkSMProxyConfigurationReader_GetFileDescription, METH_VARARGS,
   "V.GetFileDescription() -> string\nC++: virtual char *GetFileDescription()\n\n"},
  {"SetFileExtension", PyvtkSMProxyConfigurationReader_SetFileExtension, METH_VARARGS,
   "V.SetFileExtension(string)\nC++: virtual void SetFileExtension(const char *_arg)\n\n"},
  {"GetFileExtension", PyvtkSMProxyConfigurationReader_GetFileExtension, METH_VARARGS,
   "V.GetFileExtension() -> string\nC++: virtual char *GetFileExtension()\n\n"},
  {"SetValidateProxyType", PyvtkSMProxyConfigurationReader_SetValidateProxyType, METH_VARARGS,
   "V.SetValidateProxyType(int)\nC++: virtual void SetValidateProxyType(int _arg)\n\nTurns on/off proxy type validation. If on then the proxy's type\nis compared with that found in the configuration file. The read\nfails if they do not match. The feature is on by default.\n"},
  {"GetValidateProxyType", PyvtkSMProxyConfigurationReader_GetValidateProxyType, METH_VARARGS,
   "V.GetValidateProxyType() -> int\nC++: virtual int GetValidateProxyType()\n\nTurns on/off proxy type validation. If on then the proxy's type\nis compared with that found in the configuration file. The read\nfails if they do not match. The feature is on by default.\n"},
  {"GetReaderVersion", PyvtkSMProxyConfigurationReader_GetReaderVersion, METH_VARARGS,
   "V.GetReaderVersion() -> string\nC++: virtual const char *GetReaderVersion()\n\nReturn the reader version.\n"},
  {"CanReadVersion", PyvtkSMProxyConfigurationReader_CanReadVersion, METH_VARARGS,
   "V.CanReadVersion(string) -> bool\nC++: virtual bool CanReadVersion(const char *version)\n\nReturn true if the reader can read the specified version.\n"},
  {"ReadConfiguration", PyvtkSMProxyConfigurationReader_ReadConfiguration, METH_VARARGS,
   "V.ReadConfiguration() -> int\nC++: virtual int ReadConfiguration()\nV.ReadConfiguration(string) -> int\nC++: virtual int ReadConfiguration(const char *filename)\nV.ReadConfiguration(vtkPVXMLElement) -> int\nC++: virtual int ReadConfiguration(vtkPVXMLElement *xmlStream)\n\nRead the configuration from the file. UpdateVTKObjects is\nintentionally not called so that caller may have full control as\nto when the push from client to server takes place.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxyConfigurationReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMProxyConfigurationReader", // tp_name
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
  PyvtkSMProxyConfigurationReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxyConfigurationReader_StaticNew()
{
  return vtkSMProxyConfigurationReader::New();
}

PyObject *PyvtkSMProxyConfigurationReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxyConfigurationReader_Type, PyvtkSMProxyConfigurationReader_Methods,
    "vtkSMProxyConfigurationReader",
 &PyvtkSMProxyConfigurationReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxyConfigurationReader_Type;

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

void PyVTKAddFile_vtkSMProxyConfigurationReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxyConfigurationReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxyConfigurationReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

