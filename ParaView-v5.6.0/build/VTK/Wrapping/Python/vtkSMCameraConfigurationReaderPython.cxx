// python wrapper for vtkSMCameraConfigurationReader
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
#include "vtkSMCameraConfigurationReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMCameraConfigurationReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMCameraConfigurationReader_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxyConfigurationReader_ClassNew
extern "C" { PyObject *PyvtkSMProxyConfigurationReader_ClassNew(); }
#define DECLARED_PyvtkSMProxyConfigurationReader_ClassNew
#endif

static const char *PyvtkSMCameraConfigurationReader_Doc =
  "vtkSMCameraConfigurationReader - A reader for XML camera\nconfiguration.\n\n"
  "Superclass: vtkSMProxyConfigurationReader\n\n"
  "A reader for XML camera configuration. Reades camera configuration\n"
  "files. written by the vtkSMCameraConfigurationWriter.\n\n"
  "@sa\n"
  "vtkSMCameraConfigurationWriter, vtkSMProxyConfigurationReader\n\n"
  "@par Thanks: This class was contributed by SciberQuest Inc.\n\n";


static PyObject *
PyvtkSMCameraConfigurationReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMCameraConfigurationReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMCameraConfigurationReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMCameraConfigurationReader *tempr = vtkSMCameraConfigurationReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMCameraConfigurationReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMCameraConfigurationReader::NewInstance());

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
PyvtkSMCameraConfigurationReader_SetRenderViewProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderViewProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetRenderViewProxy(temp0);
    }
    else
    {
      op->vtkSMCameraConfigurationReader::SetRenderViewProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMCameraConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration(temp0) :
      op->vtkSMCameraConfigurationReader::ReadConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMCameraConfigurationReader *op = static_cast<vtkSMCameraConfigurationReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ReadConfiguration() :
      op->vtkSMCameraConfigurationReader::ReadConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMCameraConfigurationReader_ReadConfiguration_Methods[] = {
  {nullptr, PyvtkSMCameraConfigurationReader_ReadConfiguration_s1, METH_VARARGS,
   "@z"},
  {nullptr, PyvtkSMCameraConfigurationReader_ReadConfiguration_s2, METH_VARARGS,
   "@V *vtkPVXMLElement"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMCameraConfigurationReader_ReadConfiguration(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSMCameraConfigurationReader_ReadConfiguration_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMCameraConfigurationReader_ReadConfiguration_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReadConfiguration");
  return nullptr;
}


static PyMethodDef PyvtkSMCameraConfigurationReader_Methods[] = {
  {"IsTypeOf", PyvtkSMCameraConfigurationReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMCameraConfigurationReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMCameraConfigurationReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMCameraConfigurationReader\nC++: static vtkSMCameraConfigurationReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMCameraConfigurationReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMCameraConfigurationReader\nC++: vtkSMCameraConfigurationReader *NewInstance()\n\n"},
  {"SetRenderViewProxy", PyvtkSMCameraConfigurationReader_SetRenderViewProxy, METH_VARARGS,
   "V.SetRenderViewProxy(vtkSMProxy)\nC++: void SetRenderViewProxy(vtkSMProxy *rvProxy)\n\nSet the render view proxy to extract camera properties from.\n"},
  {"ReadConfiguration", PyvtkSMCameraConfigurationReader_ReadConfiguration, METH_VARARGS,
   "V.ReadConfiguration(string) -> int\nC++: int ReadConfiguration(const char *filename) override;\nV.ReadConfiguration(vtkPVXMLElement) -> int\nC++: int ReadConfiguration(vtkPVXMLElement *x) override;\nV.ReadConfiguration() -> int\nC++: int ReadConfiguration() override;\n\nRead the named file, and push the properties into the underying\nmanaged render view proxy. This will make sure the renderview is\nupdated after the read.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMCameraConfigurationReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMCameraConfigurationReader", // tp_name
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
  PyvtkSMCameraConfigurationReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMCameraConfigurationReader_StaticNew()
{
  return vtkSMCameraConfigurationReader::New();
}

PyObject *PyvtkSMCameraConfigurationReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMCameraConfigurationReader_Type, PyvtkSMCameraConfigurationReader_Methods,
    "vtkSMCameraConfigurationReader",
 &PyvtkSMCameraConfigurationReader_StaticNew);

  PyTypeObject *pytype = &PyvtkSMCameraConfigurationReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxyConfigurationReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMCameraConfigurationReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMCameraConfigurationReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMCameraConfigurationReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

