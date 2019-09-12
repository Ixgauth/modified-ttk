// python wrapper for vtkSMStateLoader
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
#include "vtkSMStateLoader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMStateLoader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMStateLoader_ClassNew(); }

#ifndef DECLARED_PyvtkSMDeserializerXML_ClassNew
extern "C" { PyObject *PyvtkSMDeserializerXML_ClassNew(); }
#define DECLARED_PyvtkSMDeserializerXML_ClassNew
#endif

static const char *PyvtkSMStateLoader_Doc =
  "vtkSMStateLoader - Utility class to load state from XML\n\n"
  "Superclass: vtkSMDeserializerXML\n\n"
  "vtkSMStateLoader can load server manager state from a given\n"
  "vtkPVXMLElement. This element is usually populated by a\n"
  "vtkPVXMLParser.\n"
  "@sa\n"
  "vtkPVXMLParser vtkPVXMLElement\n\n";


static PyObject *
PyvtkSMStateLoader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMStateLoader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMStateLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMStateLoader *tempr = vtkSMStateLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMStateLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMStateLoader::NewInstance());

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
PyvtkSMStateLoader_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->LoadState(temp0, temp1) :
      op->vtkSMStateLoader::LoadState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_SetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  vtkSMProxyLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->SetProxyLocator(temp0);
    }
    else
    {
      op->vtkSMStateLoader::SetProxyLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetProxyLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxyLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxyLocator *tempr = (ap.IsBound() ?
      op->GetProxyLocator() :
      op->vtkSMStateLoader::GetProxyLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_SetKeepIdMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepIdMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepIdMapping(temp0);
    }
    else
    {
      op->vtkSMStateLoader::SetKeepIdMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetKeepIdMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepIdMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeepIdMapping() :
      op->vtkSMStateLoader::GetKeepIdMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_KeepIdMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepIdMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepIdMappingOn();
    }
    else
    {
      op->vtkSMStateLoader::KeepIdMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_KeepIdMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepIdMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepIdMappingOff();
    }
    else
    {
      op->vtkSMStateLoader::KeepIdMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMStateLoader_GetMappingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMStateLoader *op = static_cast<vtkSMStateLoader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetMappingArray(temp0) :
      op->vtkSMStateLoader::GetMappingArray(temp0));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMStateLoader_Methods[] = {
  {"IsTypeOf", PyvtkSMStateLoader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMStateLoader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMStateLoader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMStateLoader\nC++: static vtkSMStateLoader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMStateLoader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMStateLoader\nC++: vtkSMStateLoader *NewInstance()\n\n"},
  {"LoadState", PyvtkSMStateLoader_LoadState, METH_VARARGS,
   "V.LoadState(vtkPVXMLElement, bool) -> int\nC++: int LoadState(vtkPVXMLElement *rootElement,\n    bool keepOriginalId=false)\n\nLoad the state from the given root element.\n"},
  {"SetProxyLocator", PyvtkSMStateLoader_SetProxyLocator, METH_VARARGS,
   "V.SetProxyLocator(vtkSMProxyLocator)\nC++: void SetProxyLocator(vtkSMProxyLocator *loc)\n\nGet/Set the proxy locator to use. Default is vtkSMProxyLocator\nwill be used.\n"},
  {"GetProxyLocator", PyvtkSMStateLoader_GetProxyLocator, METH_VARARGS,
   "V.GetProxyLocator() -> vtkSMProxyLocator\nC++: virtual vtkSMProxyLocator *GetProxyLocator()\n\nGet/Set the proxy locator to use. Default is vtkSMProxyLocator\nwill be used.\n"},
  {"SetKeepIdMapping", PyvtkSMStateLoader_SetKeepIdMapping, METH_VARARGS,
   "V.SetKeepIdMapping(int)\nC++: virtual void SetKeepIdMapping(int _arg)\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {"GetKeepIdMapping", PyvtkSMStateLoader_GetKeepIdMapping, METH_VARARGS,
   "V.GetKeepIdMapping() -> int\nC++: virtual int GetKeepIdMapping()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {"KeepIdMappingOn", PyvtkSMStateLoader_KeepIdMappingOn, METH_VARARGS,
   "V.KeepIdMappingOn()\nC++: virtual void KeepIdMappingOn()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {"KeepIdMappingOff", PyvtkSMStateLoader_KeepIdMappingOff, METH_VARARGS,
   "V.KeepIdMappingOff()\nC++: virtual void KeepIdMappingOff()\n\nAllow the loader to keep the mapping between the id from the\nloaded state to the current proxy attributed id.\n"},
  {"GetMappingArray", PyvtkSMStateLoader_GetMappingArray, METH_VARARGS,
   "V.GetMappingArray(int) -> (int, ...)\nC++: vtkTypeUInt32 *GetMappingArray(int &size)\n\nReturn an array of ids. The ids are stored in the following order\nand the size of the array is provided as argument. [key, value,\nkey, value, ...] The array is kept internally using a std::vector\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMStateLoader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMStateLoader", // tp_name
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
  PyvtkSMStateLoader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMStateLoader_StaticNew()
{
  return vtkSMStateLoader::New();
}

PyObject *PyvtkSMStateLoader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMStateLoader_Type, PyvtkSMStateLoader_Methods,
    "vtkSMStateLoader",
 &PyvtkSMStateLoader_StaticNew);

  PyTypeObject *pytype = &PyvtkSMStateLoader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMDeserializerXML_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMStateLoader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMStateLoader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMStateLoader", o) != 0)
  {
    Py_DECREF(o);
  }

}

