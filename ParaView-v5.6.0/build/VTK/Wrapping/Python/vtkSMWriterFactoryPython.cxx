// python wrapper for vtkSMWriterFactory
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
#include "vtkSMWriterFactory.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMWriterFactory(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMWriterFactory_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMWriterFactory_Doc =
  "vtkSMWriterFactory - is a factory or creating a writer based on the\ndata type information from the output port.\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMWriterFactory is a factory for creating a writer to write the\n"
  "data provided at an output port. This is done whenever a new proxy\n"
  "definition is added in the writers group.\n\n"
  "Alternatively, one can register prototypes using RegisterPrototype\n"
  "API. The proxy definitions for the writer proxies must provide hints\n"
  "that indicate the file extension and description for the writer.\n\n"
  "Once the factory has been configured, the API to create writers, get\n"
  "available writers etc. can be used.\n\n";


static PyObject *
PyvtkSMWriterFactory_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMWriterFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMWriterFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMWriterFactory *tempr = vtkSMWriterFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMWriterFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMWriterFactory::NewInstance());

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
PyvtkSMWriterFactory_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSMWriterFactory::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_RegisterPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterPrototype(temp0, temp1);
    }
    else
    {
      op->vtkSMWriterFactory::RegisterPrototype(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_CanWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanWrite(temp0, temp1) :
      op->vtkSMWriterFactory::CanWrite(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_CreateWriter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  unsigned int temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateWriter(temp0, temp1, temp2, temp3) :
      op->vtkSMWriterFactory::CreateWriter(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_CreateWriter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  vtkSMSourceProxy *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSMSourceProxy"))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->CreateWriter(temp0, temp1) :
      op->vtkSMWriterFactory::CreateWriter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_CreateWriter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkSMWriterFactory_CreateWriter_s1(self, args);
    case 2:
      return PyvtkSMWriterFactory_CreateWriter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateWriter");
  return nullptr;
}



static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0, temp1) :
      op->vtkSMWriterFactory::GetSupportedFileTypes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedFileTypes(temp0) :
      op->vtkSMWriterFactory::GetSupportedFileTypes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMWriterFactory_GetSupportedFileTypes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSMWriterFactory_GetSupportedFileTypes_s1(self, args);
    case 1:
      return PyvtkSMWriterFactory_GetSupportedFileTypes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSupportedFileTypes");
  return nullptr;
}



static PyObject *
PyvtkSMWriterFactory_GetSupportedWriterProxies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedWriterProxies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSupportedWriterProxies(temp0, temp1) :
      op->vtkSMWriterFactory::GetSupportedWriterProxies(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_GetNumberOfRegisteredPrototypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredPrototypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredPrototypes() :
      op->vtkSMWriterFactory::GetNumberOfRegisteredPrototypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_UpdateAvailableWriters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAvailableWriters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAvailableWriters();
    }
    else
    {
      op->vtkSMWriterFactory::UpdateAvailableWriters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_AddGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddGroup(temp0);
    }
    else
    {
      op->vtkSMWriterFactory::AddGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_RemoveGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveGroup(temp0);
    }
    else
    {
      op->vtkSMWriterFactory::RemoveGroup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMWriterFactory *op = static_cast<vtkSMWriterFactory *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->GetGroups(temp0);
    }
    else
    {
      op->vtkSMWriterFactory::GetGroups(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMWriterFactory_AddWriterToWhitelist(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AddWriterToWhitelist");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMWriterFactory::AddWriterToWhitelist(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMWriterFactory_Methods[] = {
  {"IsTypeOf", PyvtkSMWriterFactory_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMWriterFactory_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMWriterFactory_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMWriterFactory\nC++: static vtkSMWriterFactory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMWriterFactory_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMWriterFactory\nC++: vtkSMWriterFactory *NewInstance()\n\n"},
  {"Initialize", PyvtkSMWriterFactory_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nCleanup all registered prototypes.\n"},
  {"RegisterPrototype", PyvtkSMWriterFactory_RegisterPrototype, METH_VARARGS,
   "V.RegisterPrototype(string, string)\nC++: void RegisterPrototype(const char *xmlgroup,\n    const char *xmlname)\n\nRegister a prototype.\n"},
  {"CanWrite", PyvtkSMWriterFactory_CanWrite, METH_VARARGS,
   "V.CanWrite(vtkSMSourceProxy, int) -> bool\nC++: bool CanWrite(vtkSMSourceProxy *, unsigned int outputport)\n\nReturns true if the data from the output port can be written at\nall.\n"},
  {"CreateWriter", PyvtkSMWriterFactory_CreateWriter, METH_VARARGS,
   "V.CreateWriter(string, vtkSMSourceProxy, int, bool) -> vtkSMProxy\nC++: vtkSMProxy *CreateWriter(const char *filename,\n    vtkSMSourceProxy *, unsigned int outputport,\n    bool proxyname=false)\nV.CreateWriter(string, vtkSMSourceProxy) -> vtkSMProxy\nC++: vtkSMProxy *CreateWriter(const char *filename,\n    vtkSMSourceProxy *pxy)\n\nCreate a new writer proxy to write the data from the specified\noutput port to the file specified, if possible. As internally\nUpdatePipeline() will be called on the source proxy, in order to\nprevent a double pipeline execution when you want to write a\ngiven timestep, you should call updatePipeline( time ) before the\nCreateWriter call. The proxybyname flag tells the factory to use\nthe proxy name rather than a filename.extension to lookup the\nright proxy.\n"},
  {"GetSupportedFileTypes", PyvtkSMWriterFactory_GetSupportedFileTypes, METH_VARARGS,
   "V.GetSupportedFileTypes(vtkSMSourceProxy, int) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSourceProxy *source,\n    unsigned int outputport)\nV.GetSupportedFileTypes(vtkSMSourceProxy) -> string\nC++: const char *GetSupportedFileTypes(vtkSMSourceProxy *source)\n\nReturns a formatted string with all supported file types. An\nexample returned string would look like:\n \"PVD Files (*.pvd);;VTK Files (*.vtk)\"\n \n"},
  {"GetSupportedWriterProxies", PyvtkSMWriterFactory_GetSupportedWriterProxies, METH_VARARGS,
   "V.GetSupportedWriterProxies(vtkSMSourceProxy, int) -> string\nC++: const char *GetSupportedWriterProxies(\n    vtkSMSourceProxy *source, unsigned int outputport)\n\nA variation on GetSupportedFileTypes that obtains a list of\nprototype proxy names.\n"},
  {"GetNumberOfRegisteredPrototypes", PyvtkSMWriterFactory_GetNumberOfRegisteredPrototypes, METH_VARARGS,
   "V.GetNumberOfRegisteredPrototypes() -> int\nC++: unsigned int GetNumberOfRegisteredPrototypes()\n\n"},
  {"UpdateAvailableWriters", PyvtkSMWriterFactory_UpdateAvailableWriters, METH_VARARGS,
   "V.UpdateAvailableWriters()\nC++: void UpdateAvailableWriters()\n\nEvery time a new proxy definition is added we check to see if it\nis a writer and then we add it to the list of available writers.\n"},
  {"AddGroup", PyvtkSMWriterFactory_AddGroup, METH_VARARGS,
   "V.AddGroup(string)\nC++: void AddGroup(const char *groupName)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {"RemoveGroup", PyvtkSMWriterFactory_RemoveGroup, METH_VARARGS,
   "V.RemoveGroup(string)\nC++: void RemoveGroup(const char *groupName)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {"GetGroups", PyvtkSMWriterFactory_GetGroups, METH_VARARGS,
   "V.GetGroups(vtkStringList)\nC++: void GetGroups(vtkStringList *groups)\n\nAdd/remove a group name to look for writers in. By default\n\"writers\" is included.\n"},
  {"AddWriterToWhitelist", PyvtkSMWriterFactory_AddWriterToWhitelist, METH_VARARGS,
   "V.AddWriterToWhitelist(string, string)\nC++: static void AddWriterToWhitelist(const char *writerxmlgroup,\n    const char *writerxmlname)\n\nThis function is for ParaView based applications that only wish\nto expose a subset of the writers.  If this function is never\ncalled, the reader factory will expose all the writers as it has\nin the past.  However, if any writers are specified by passing\ntheir group name and reader name to this function, then only\nthose writers will be available in any reader factories created\nby the application.  This is intended to be called at the\nbeginning of the application's execution before any sessions are\ncreated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMWriterFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMWriterFactory", // tp_name
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
  PyvtkSMWriterFactory_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMWriterFactory_StaticNew()
{
  return vtkSMWriterFactory::New();
}

PyObject *PyvtkSMWriterFactory_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMWriterFactory_Type, PyvtkSMWriterFactory_Methods,
    "vtkSMWriterFactory",
 &PyvtkSMWriterFactory_StaticNew);

  PyTypeObject *pytype = &PyvtkSMWriterFactory_Type;

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

void PyVTKAddFile_vtkSMWriterFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMWriterFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMWriterFactory", o) != 0)
  {
    Py_DECREF(o);
  }

}

