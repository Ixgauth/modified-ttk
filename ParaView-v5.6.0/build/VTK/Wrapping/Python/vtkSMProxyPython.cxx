// python wrapper for vtkSMProxy
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
#include "vtkSMProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRemoteObject_ClassNew
extern "C" { PyObject *PyvtkSMRemoteObject_ClassNew(); }
#define DECLARED_PyvtkSMRemoteObject_ClassNew
#endif

static const char *PyvtkSMProxy_Doc =
  "vtkSMProxy - proxy for a VTK object(s) on a server\n\n"
  "Superclass: vtkSMRemoteObject\n\n"
  "vtkSMProxy manages VTK object(s) that are created on a server using\n"
  "the proxy pattern. The managed object is manipulated through\n"
  "properties. The type of object created and managed by vtkSMProxy is\n"
  "determined by the VTKClassName variable. The object is managed by\n"
  "getting the desired property from the proxy, changing it's value and\n"
  "updating the server with UpdateVTKObjects(). A proxy can be\n"
  "composite. Sub-proxies can be added by the proxy manager. This is\n"
  "transparent to the user who sees all properties as if they belong to\n"
  "the root proxy.\n\n"
  "A proxy keeps an iVar ConnectionID. This is the connection ID for the\n"
  "connection on which this proxy exists. Currently, since a ParaView\n"
  "client is connected to 1 and only 1 server. This ID is insignificant.\n"
  "However, it provides the ground work to enable a client to connect\n"
  "with multiple servers.  ConnectionID must be set immediately after\n"
  "instantiating the proxy (if at all).  Changing the ConnectionID after\n"
  "that can be dangerous.\n\n"
  "Once a proxy has been defined, it can be listed in another secondary\n"
  "group<ProxyGroup name=\"new_group\">\n"
  " < Proxy group = \"group\" name =\"proxyname\" />\n\n"
  "When defining a proxy in the XML configuration file, to derive the\n"
  "property interface from another proxy definition, we can use\n"
  "attributes \"base_proxygroup\" and \"base_proxyname\" which identify the\n"
  "proxy group and proxy name of another proxy. Base interfaces can be\n"
  "defined recursively, however care must be taken to avoid cycles.\n\n"
  "There are several special XML features available for subproxies.\n"
  "\\li 1) It is possible to share properties among subproxies.\n"
  "   eg.   <Proxy name=\"Display\" class=\"Alpha\">\n"
  "     \n"
  "       <Proxy name=\"Mapper\" class=\"vtkPolyDataMapper\">\n"
  "         <InputProperty name=\"Input\" ...>\n"
  "           ...\n"
  "         \n"
  "         <IntVectorProperty name=\"ScalarVisibility\" ...>\n"
  "           ...\n"
  "         \n"
  "           ...\n"
  "       \n"
  "     \n"
  "     \n"
  "       <Proxy name=\"Mapper2\" class=\"vtkPolyDataMapper\">\n"
  "         <InputProperty name=\"Input\" ...>\n"
  "           ...\n"
  "         \n"
  "         <IntVectorProperty name=\"ScalarVisibility\" ...>\n"
  "           ...\n"
  "         \n"
  "           ...\n"
  "       \n"
  "       <ShareProperties subproxy=\"Mapper\">\n"
  "         <Exception name=\"Input\" />\n"
  "       \n"
  "     \n"
  "      \n\n"
  "   Thus, subproxies Mapper and Mapper2 share the properties that are\n"
  "   common to both; except those listed as exceptions using the\n"
  "\"Exception\"\n"
  "   tag.\n\n"
  "\\li 2) It is possible for a subproxy to use proxy definition defined\n"
  "    elsewhere\n"
  "    by identifying the interface with attributes \"proxygroup\" and\n"
  "\"proxyname\".\n"
  "    eg.    <SubProxy>\n"
  "      <Proxy name=\"Mapper\" proxygroup=\"mappers\"\n"
  "proxyname=\"PolyDataMapper\" />\n"
  "        \n\n"
  "\\li 3) It is possible to scope the properties exposed by a subproxy\n"
  "    and expose\n"
  "    only a fixed set of properties to be accessible from outside.\n"
  "Also,\n"
  "    while exposing the property, it can be exposed with a different\n"
  "name.\n"
  "    eg.    <Proxy name=\"Alpha\" ....>\n"
  "      ....\n"
  "      \n"
  "        <Proxy name=\"Mapper\" proxygroup=\"mappers\"\n"
  "proxyname=\"PolyDataMapper\" />\n"
  "        \n"
  "          <Property name=\"LookupTable\"\n"
  "exposed_name=\"MapperLookupTable\" />\n"
  "        \n"
  "      \n"
  "        \n\n"
  "    Here, for the proxy Alpha, the property with the name LookupTable\n"
  "from its\n"
  "    subproxy \"Mapper\" can be obtained by calling\n"
  "GetProperty(\"MapperLookupTable\")\n"
  "    on an instance of the proxy Alpha. \"exposed_name\" attribute is\n"
  "optional, if\n"
  "    not specified, then the \"name\" is used as the exposed property\n"
  "name.\n"
  "    Properties that are not exposed are treated as\n"
  "    non-saveable and non-animateable (see vtkSMProperty for details).\n"
  "    Exposed property restrictions only work when\n"
  "    using the GetProperty on the container proxy (in this case Alpha)\n"
  "or\n"
  "    using the PropertyIterator obtained from the container proxy. If\n"
  "one\n"
  "    is to some how obtain a pointer to the subproxy and call\n"
  "GetProperty on\n"
  "    it (or get a PropertyIterator for the subproxy), the properties\n"
  "exposed\n"
  "    by the container class are no longer applicable.\n"
  "    If two exposed properties are exposed with the same name, then a\n"
  "Warning is\n"
  "    flagged -- only one of the two exposed properties will get\n"
  "exposed.\n\n"
  "@sa\n"
  "vtkSMProxyManager vtkSMProperty vtkSMSourceProxy\n"
  "vtkSMPropertyIterator\n\n";

static PyTypeObject PyvtkSMProxy_ResetPropertiesMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxy.ResetPropertiesMode", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkSMProxy_ResetPropertiesMode_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkSMProxy_ResetPropertiesMode_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkSMProxy_ResetPropertiesMode_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkSMProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMProxy *tempr = vtkSMProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMProxy::NewInstance());

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
PyvtkSMProxy_SetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAnnotation(temp0, temp1);
    }
    else
    {
      op->vtkSMProxy::SetAnnotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAnnotation(temp0) :
      op->vtkSMProxy::GetAnnotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_RemoveAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAnnotation(temp0);
    }
    else
    {
      op->vtkSMProxy::RemoveAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_RemoveAllAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllAnnotations();
    }
    else
    {
      op->vtkSMProxy::RemoveAllAnnotations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_HasAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnnotation(temp0) :
      op->vtkSMProxy::HasAnnotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAnnotations() :
      op->vtkSMProxy::GetNumberOfAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetAnnotationKeyAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationKeyAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAnnotationKeyAt(temp0) :
      op->vtkSMProxy::GetAnnotationKeyAt(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocation(temp0);
    }
    else
    {
      op->vtkSMProxy::SetLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0) :
      op->vtkSMProxy::GetProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_GetProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty(temp0, temp1) :
      op->vtkSMProxy::GetProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_GetProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxy_GetProperty_s1(self, args);
    case 2:
      return PyvtkSMProxy_GetProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProperty");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_GetPropertyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyName(temp0) :
      op->vtkSMProxy::GetPropertyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateVTKObjects();
    }
    else
    {
      op->vtkSMProxy::UpdateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_RecreateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecreateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecreateVTKObjects();
    }
    else
    {
      op->vtkSMProxy::RecreateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateProperty(temp0) :
      op->vtkSMProxy::UpdateProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdateProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateProperty(temp0, temp1) :
      op->vtkSMProxy::UpdateProperty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdateProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxy_UpdateProperty_s1(self, args);
    case 2:
      return PyvtkSMProxy_UpdateProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateProperty");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_InvokeCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InvokeCommand(temp0);
    }
    else
    {
      op->vtkSMProxy::InvokeCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVTKClassName() :
      op->vtkSMProxy::GetVTKClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_SetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVTKClassName(temp0);
    }
    else
    {
      op->vtkSMProxy::SetVTKClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_NewPropertyIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewPropertyIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPropertyIterator *tempr = (ap.IsBound() ?
      op->NewPropertyIterator() :
      op->vtkSMProxy::NewPropertyIterator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfConsumers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConsumers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfConsumers() :
      op->vtkSMProxy::GetNumberOfConsumers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetConsumerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetConsumerProxy(temp0) :
      op->vtkSMProxy::GetConsumerProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetConsumerProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsumerProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetConsumerProperty(temp0) :
      op->vtkSMProxy::GetConsumerProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfProducers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProducers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfProducers() :
      op->vtkSMProxy::GetNumberOfProducers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProducerProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProducerProxy(temp0) :
      op->vtkSMProxy::GetProducerProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetProducerProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducerProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProducerProperty(temp0) :
      op->vtkSMProxy::GetProducerProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSMProxy::GetXMLName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLGroup() :
      op->vtkSMProxy::GetXMLGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetXMLLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLLabel() :
      op->vtkSMProxy::GetXMLLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdatePropertyInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePropertyInformation();
    }
    else
    {
      op->vtkSMProxy::UpdatePropertyInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdatePropertyInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->UpdatePropertyInformation(temp0);
    }
    else
    {
      op->vtkSMProxy::UpdatePropertyInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_UpdatePropertyInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMProxy_UpdatePropertyInformation_s1(self, args);
    case 1:
      return PyvtkSMProxy_UpdatePropertyInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePropertyInformation");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_MarkAllPropertiesAsModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkAllPropertiesAsModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkAllPropertiesAsModified();
    }
    else
    {
      op->vtkSMProxy::MarkAllPropertiesAsModified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_ResetPropertiesToXMLDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToXMLDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPropertiesToXMLDefaults();
    }
    else
    {
      op->vtkSMProxy::ResetPropertiesToXMLDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_ResetPropertiesToDomainDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToDomainDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPropertiesToDomainDefaults();
    }
    else
    {
      op->vtkSMProxy::ResetPropertiesToDomainDefaults();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_ResetPropertiesToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPropertiesToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  typedef vtkSMProxy::ResetPropertiesMode temp0_type;
  temp0_type temp0 = vtkSMProxy::DEFAULT;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetEnumValue(temp0, "vtkSMProxy.ResetPropertiesMode")))
  {
    if (ap.IsBound())
    {
      op->ResetPropertiesToDefault(temp0);
    }
    else
    {
      op->vtkSMProxy::ResetPropertiesToDefault(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_Copy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSMProxy::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0, temp1);
    }
    else
    {
      op->vtkSMProxy::Copy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSMProxy::Copy(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_Copy(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxy_Copy_s1(self, args);
    case 2:
      return PyvtkSMProxy_Copy_s2(self, args);
    case 3:
      return PyvtkSMProxy_Copy_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Copy");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_MarkModified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkModified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->MarkModified(temp0);
    }
    else
    {
      op->vtkSMProxy::MarkModified(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetDocumentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDocumentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDocumentation *tempr = (ap.IsBound() ?
      op->GetDocumentation() :
      op->vtkSMProxy::GetDocumentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetHints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->GetHints() :
      op->vtkSMProxy::GetHints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetObjectsCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectsCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetObjectsCreated() :
      op->vtkSMProxy::GetObjectsCreated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_InitializeAndCopyFromProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeAndCopyFromProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->InitializeAndCopyFromProxy(temp0);
    }
    else
    {
      op->vtkSMProxy::InitializeAndCopyFromProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->MarkDirty(temp0);
    }
    else
    {
      op->vtkSMProxy::MarkDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetClientSideObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientSideObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetClientSideObject() :
      op->vtkSMProxy::GetClientSideObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GatherInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVInformation"))
  {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0) :
      op->vtkSMProxy::GatherInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_GatherInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVInformation *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVInformation") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GatherInformation(temp0, temp1) :
      op->vtkSMProxy::GatherInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_GatherInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxy_GatherInformation_s1(self, args);
    case 2:
      return PyvtkSMProxy_GatherInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GatherInformation");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_SaveXMLState_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0) :
      op->vtkSMProxy::SaveXMLState(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_SaveXMLState_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMPropertyIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyIterator"))
  {
    vtkPVXMLElement *tempr = (ap.IsBound() ?
      op->SaveXMLState(temp0, temp1) :
      op->vtkSMProxy::SaveXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMProxy_SaveXMLState(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMProxy_SaveXMLState_s1(self, args);
    case 2:
      return PyvtkSMProxy_SaveXMLState_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveXMLState");
  return nullptr;
}



static PyObject *
PyvtkSMProxy_LoadXMLState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadXMLState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkPVXMLElement *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPVXMLElement") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    int tempr = (ap.IsBound() ?
      op->LoadXMLState(temp0, temp1) :
      op->vtkSMProxy::LoadXMLState(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_PrototypeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrototypeOn();
    }
    else
    {
      op->vtkSMProxy::PrototypeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_PrototypeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrototypeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrototypeOff();
    }
    else
    {
      op->vtkSMProxy::PrototypeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_SetPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrototype(temp0);
    }
    else
    {
      op->vtkSMProxy::SetPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_UpdateSelfAndAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSelfAndAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSelfAndAllInputs();
    }
    else
    {
      op->vtkSMProxy::UpdateSelfAndAllInputs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetIsSubProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsSubProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsSubProxy() :
      op->vtkSMProxy::GetIsSubProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetParentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetParentProxy() :
      op->vtkSMProxy::GetParentProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetTrueParentProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrueParentProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetTrueParentProxy() :
      op->vtkSMProxy::GetTrueParentProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_EnableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableLocalPushOnly();
    }
    else
    {
      op->vtkSMProxy::EnableLocalPushOnly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_DisableLocalPushOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableLocalPushOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableLocalPushOnly();
    }
    else
    {
      op->vtkSMProxy::DisableLocalPushOnly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetFullState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const vtkSMMessage *tempr = (ap.IsBound() ?
      op->GetFullState() :
      op->vtkSMProxy::GetFullState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMProxy::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetPropertyGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMPropertyGroup *tempr = (ap.IsBound() ?
      op->GetPropertyGroup(temp0) :
      op->vtkSMProxy::GetPropertyGroup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMProxy_GetNumberOfPropertyGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPropertyGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMProxy *op = static_cast<vtkSMProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfPropertyGroups() :
      op->vtkSMProxy::GetNumberOfPropertyGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMProxy\nC++: static vtkSMProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMProxy\nC++: vtkSMProxy *NewInstance()\n\n"},
  {"SetAnnotation", PyvtkSMProxy_SetAnnotation, METH_VARARGS,
   "V.SetAnnotation(string, string)\nC++: void SetAnnotation(const char *key, const char *value)\n\nSet or override a key/value pair as annotation to that proxy. If\nthe value is NULL, this method is equivalent to\nRemoveAnnotation(key)\n"},
  {"GetAnnotation", PyvtkSMProxy_GetAnnotation, METH_VARARGS,
   "V.GetAnnotation(string) -> string\nC++: const char *GetAnnotation(const char *key)\n\nRetrieve an annotation with a given key. If not found, this will\nreturn NULL.\n"},
  {"RemoveAnnotation", PyvtkSMProxy_RemoveAnnotation, METH_VARARGS,
   "V.RemoveAnnotation(string)\nC++: void RemoveAnnotation(const char *key)\n\nRemove a given annotation based on its key to the proxy.\n"},
  {"RemoveAllAnnotations", PyvtkSMProxy_RemoveAllAnnotations, METH_VARARGS,
   "V.RemoveAllAnnotations()\nC++: void RemoveAllAnnotations()\n\nRemove all proxy annotations.\n"},
  {"HasAnnotation", PyvtkSMProxy_HasAnnotation, METH_VARARGS,
   "V.HasAnnotation(string) -> bool\nC++: bool HasAnnotation(const char *key)\n\nReturn true if a given annotation exists.\n"},
  {"GetNumberOfAnnotations", PyvtkSMProxy_GetNumberOfAnnotations, METH_VARARGS,
   "V.GetNumberOfAnnotations() -> int\nC++: int GetNumberOfAnnotations()\n\nReturn the number of available annotations.\n"},
  {"GetAnnotationKeyAt", PyvtkSMProxy_GetAnnotationKeyAt, METH_VARARGS,
   "V.GetAnnotationKeyAt(int) -> string\nC++: const char *GetAnnotationKeyAt(int index)\n\nReturn the nth key of the available annotations.\n"},
  {"SetLocation", PyvtkSMProxy_SetLocation, METH_VARARGS,
   "V.SetLocation(int)\nC++: void SetLocation(vtkTypeUInt32) override;\n\nGet/Set the location where the underlying VTK-objects are\ncreated. The value can be constructed by or-ing\nvtkSMSession::ServerFlags\n"},
  {"GetProperty", PyvtkSMProxy_GetProperty, METH_VARARGS,
   "V.GetProperty(string) -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty(const char *name)\nV.GetProperty(string, int) -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty(const char *name,\n    int selfOnly)\n\nReturn the property with the given name. If no property is found\nNULL is returned.\n"},
  {"GetPropertyName", PyvtkSMProxy_GetPropertyName, METH_VARARGS,
   "V.GetPropertyName(vtkSMProperty) -> string\nC++: const char *GetPropertyName(vtkSMProperty *prop)\n\nGiven a property pointer, returns the name that was used to add\nit to the proxy. Returns NULL if the property is not in the\nproxy. If the property belongs to a sub-proxy, it returns the\nexposed name or NULL if the property is not exposed.\n"},
  {"UpdateVTKObjects", PyvtkSMProxy_UpdateVTKObjects, METH_VARARGS,
   "V.UpdateVTKObjects()\nC++: virtual void UpdateVTKObjects()\n\nUpdate the VTK object on the server by pushing the values of all\nmodified properties (un-modified properties are ignored). If the\nobject has not been created, it will be created first.\n"},
  {"RecreateVTKObjects", PyvtkSMProxy_RecreateVTKObjects, METH_VARARGS,
   "V.RecreateVTKObjects()\nC++: virtual void RecreateVTKObjects()\n\nRecreate the VTK object for this proxy. This is a convenient\nmechanism to create a new VTK object with the same state as an\nexisting one in its stead.\n"},
  {"UpdateProperty", PyvtkSMProxy_UpdateProperty, METH_VARARGS,
   "V.UpdateProperty(string) -> bool\nC++: bool UpdateProperty(const char *name)\nV.UpdateProperty(string, int) -> bool\nC++: bool UpdateProperty(const char *name, int force)\n\nUpdate the value of one property (pushed to the server) if it is\nmodified.  If the object has not been created, it will be created\nfirst. If force is true, the property is pushed even if it not\nmodified. Return true if UpdateProperty pushes the property\nvalue.\n"},
  {"InvokeCommand", PyvtkSMProxy_InvokeCommand, METH_VARARGS,
   "V.InvokeCommand(string)\nC++: void InvokeCommand(const char *name)\n\nConvenience method equivalent to UpdateProperty(name, 1).\n"},
  {"GetVTKClassName", PyvtkSMProxy_GetVTKClassName, METH_VARARGS,
   "V.GetVTKClassName() -> string\nC++: virtual char *GetVTKClassName()\n\nReturns the type of object managed by the proxy.\n"},
  {"SetVTKClassName", PyvtkSMProxy_SetVTKClassName, METH_VARARGS,
   "V.SetVTKClassName(string)\nC++: virtual void SetVTKClassName(const char *_arg)\n\nthe type of object created by the proxy. This is used only when\ncreating the server objects. Once the server object(s) have been\ncreated, changing this has no effect.\n"},
  {"NewPropertyIterator", PyvtkSMProxy_NewPropertyIterator, METH_VARARGS,
   "V.NewPropertyIterator() -> vtkSMPropertyIterator\nC++: virtual vtkSMPropertyIterator *NewPropertyIterator()\n\nReturns a new (initialized) iterator of the properties.\n"},
  {"GetNumberOfConsumers", PyvtkSMProxy_GetNumberOfConsumers, METH_VARARGS,
   "V.GetNumberOfConsumers() -> int\nC++: unsigned int GetNumberOfConsumers()\n\nReturns the number of consumers. Consumers are proxies that point\nto this proxy through a property (usually vtkSMProxyProperty)\n"},
  {"GetConsumerProxy", PyvtkSMProxy_GetConsumerProxy, METH_VARARGS,
   "V.GetConsumerProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetConsumerProxy(unsigned int idx)\n\nReturns the consumer of given index. Consumers are proxies that\npoint to this proxy through a property (usually\nvtkSMProxyProperty)\n"},
  {"GetConsumerProperty", PyvtkSMProxy_GetConsumerProperty, METH_VARARGS,
   "V.GetConsumerProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetConsumerProperty(unsigned int idx)\n\nReturns the corresponding property of the consumer of given\nindex. Consumers are proxies that point to this proxy through a\nproperty (usually vtkSMProxyProperty)\n"},
  {"GetNumberOfProducers", PyvtkSMProxy_GetNumberOfProducers, METH_VARARGS,
   "V.GetNumberOfProducers() -> int\nC++: unsigned int GetNumberOfProducers()\n\nReturns the number of proxies this proxy depends on (uses or is\nconnected to through the pipeline).\n"},
  {"GetProducerProxy", PyvtkSMProxy_GetProducerProxy, METH_VARARGS,
   "V.GetProducerProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetProducerProxy(unsigned int idx)\n\nReturns a proxy this proxy depends on, given index.\n"},
  {"GetProducerProperty", PyvtkSMProxy_GetProducerProperty, METH_VARARGS,
   "V.GetProducerProperty(int) -> vtkSMProperty\nC++: vtkSMProperty *GetProducerProperty(unsigned int idx)\n\nReturns the property holding a producer proxy given an index.\nNote that this is a property of this proxy and it points to the\nproducer proxy.\n"},
  {"GetXMLName", PyvtkSMProxy_GetXMLName, METH_VARARGS,
   "V.GetXMLName() -> string\nC++: virtual char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the proxy.\n"},
  {"GetXMLGroup", PyvtkSMProxy_GetXMLGroup, METH_VARARGS,
   "V.GetXMLGroup() -> string\nC++: virtual char *GetXMLGroup()\n\nAssigned by the XML parser. The group in the XML configuration\nthat this proxy belongs to. Can be used to figure out the origin\nof the proxy.\n"},
  {"GetXMLLabel", PyvtkSMProxy_GetXMLLabel, METH_VARARGS,
   "V.GetXMLLabel() -> string\nC++: virtual char *GetXMLLabel()\n\nAssigned by the XML parser. The label assigned in the XML\nconfiguration. This is a more user-friendly name for the proxy,\nalthough it's cannot be used to locate the proxy.\n"},
  {"UpdatePropertyInformation", PyvtkSMProxy_UpdatePropertyInformation, METH_VARARGS,
   "V.UpdatePropertyInformation()\nC++: virtual void UpdatePropertyInformation()\nV.UpdatePropertyInformation(vtkSMProperty)\nC++: virtual void UpdatePropertyInformation(vtkSMProperty *prop)\n\nUpdates all property information by calling UpdateInformation()\nand populating the values.\n"},
  {"MarkAllPropertiesAsModified", PyvtkSMProxy_MarkAllPropertiesAsModified, METH_VARARGS,
   "V.MarkAllPropertiesAsModified()\nC++: virtual void MarkAllPropertiesAsModified()\n\nMarks all properties as modified.  This will cause them all to be\nsent to be sent on the next call to UpdateVTKObjects.  This\nmethod is useful when the proxy is first created to make sure\nthat the default property values in the properties is synced with\nthe values in the actual objects.\n"},
  {"ResetPropertiesToXMLDefaults", PyvtkSMProxy_ResetPropertiesToXMLDefaults, METH_VARARGS,
   "V.ResetPropertiesToXMLDefaults()\nC++: virtual void ResetPropertiesToXMLDefaults()\n\nUse this method to set all properties on this proxy to their\ndefault values. This iterates over all properties on this proxy,\nthus if this proxy had subproxies, this method will iterate over\nonly the exposed properties and call\nvtkSMProperty::ResetToXMLDefaults().\n"},
  {"ResetPropertiesToDomainDefaults", PyvtkSMProxy_ResetPropertiesToDomainDefaults, METH_VARARGS,
   "V.ResetPropertiesToDomainDefaults()\nC++: virtual void ResetPropertiesToDomainDefaults()\n\nUse this method to set all properties on this proxy to their\ndefault domains. This iterates over all properties on this proxy,\nthus if this proxy had subproxies, this method will iterate over\nonly the exposed properties and call\nvtkSMProperty::ResetToDomainDefaults().\n"},
  {"ResetPropertiesToDefault", PyvtkSMProxy_ResetPropertiesToDefault, METH_VARARGS,
   "V.ResetPropertiesToDefault(ResetPropertiesMode)\nC++: virtual void ResetPropertiesToDefault(\n    ResetPropertiesMode mode=vtkSMProxy::DEFAULT)\n\nUse this method to set all properties on this proxy to their\ndefault domain or values. This iterates over all properties on\nthis proxy, thus if this proxy had subproxies, this method will\niterate over only the exposed properties and call correct reset\nmethods. The parameter allows to choose between resetting\nONLY_XML, ONLY_DOMAIN or DEFAULT, ie. reset to domain if\navailable, if not reset to xml. default value is DEFAULT.\n"},
  {"Copy", PyvtkSMProxy_Copy, METH_VARARGS,
   "V.Copy(vtkSMProxy)\nC++: void Copy(vtkSMProxy *src)\nV.Copy(vtkSMProxy, string)\nC++: void Copy(vtkSMProxy *src, const char *exceptionClass)\nV.Copy(vtkSMProxy, string, int)\nC++: virtual void Copy(vtkSMProxy *src,\n    const char *exceptionClass, int proxyPropertyCopyFlag)\n\nCopies values of all the properties and sub-proxies from\nsrc.NOTE: This does NOT create properties and sub-proxies. Only\ncopies values. Mismatched property and sub-proxy pairs are\nignored. Properties of type exceptionClass are not copied. This\nis usually vtkSMInputProperty. proxyPropertyCopyFlag specifies\nhow the values for vtkSMProxyProperty and its subclasses are\ncopied over: by reference or by cloning (ie. creating new\ninstances of the value proxies and synchronizing their values).\nThis is no longer relevant since we don't support\nCOPY_PROXY_PROPERTY_VALUES_BY_CLONING anymore.\n"},
  {"MarkModified", PyvtkSMProxy_MarkModified, METH_VARARGS,
   "V.MarkModified(vtkSMProxy)\nC++: virtual void MarkModified(vtkSMProxy *modifiedProxy)\n\nCalls MarkDirty() and invokes ModifiedEvent.\n"},
  {"GetDocumentation", PyvtkSMProxy_GetDocumentation, METH_VARARGS,
   "V.GetDocumentation() -> vtkSMDocumentation\nC++: virtual vtkSMDocumentation *GetDocumentation()\n\nReturns the documentation for this proxy.\n"},
  {"GetHints", PyvtkSMProxy_GetHints, METH_VARARGS,
   "V.GetHints() -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *GetHints()\n\nThe server manager configuration XML may define \\<Hints/> element\nfor a proxy. Hints are metadata associated with the proxy. The\nServer Manager does not (and should not) interpret the hints.\nHints provide a mechanism to add GUI pertinant information to the\nserver manager XML. Returns the XML element for the hints\nassociated with this proxy, if any, otherwise returns NULL.\n"},
  {"GetObjectsCreated", PyvtkSMProxy_GetObjectsCreated, METH_VARARGS,
   "V.GetObjectsCreated() -> int\nC++: virtual int GetObjectsCreated()\n\nReturns if the VTK objects for this proxy have been created.\n"},
  {"InitializeAndCopyFromProxy", PyvtkSMProxy_InitializeAndCopyFromProxy, METH_VARARGS,
   "V.InitializeAndCopyFromProxy(vtkSMProxy)\nC++: void InitializeAndCopyFromProxy(vtkSMProxy *source)\n\nGiven a source proxy, makes this proxy point to the same\nserver-side object (with a new id). This method copies connection\nid as well as server ids. This method can be called only once on\nan uninitialized proxy (CreateVTKObjects() also initialized a\nproxy) This is useful to make two (or more) proxies represent the\nsame VTK object. This method does not copy IDs for any\nsubproxies.\n"},
  {"MarkDirty", PyvtkSMProxy_MarkDirty, METH_VARARGS,
   "V.MarkDirty(vtkSMProxy)\nC++: virtual void MarkDirty(vtkSMProxy *modifiedProxy)\n\nDirty means this algorithm will execute during next update. This\nall marks all consumers as dirty.\n"},
  {"GetClientSideObject", PyvtkSMProxy_GetClientSideObject, METH_VARARGS,
   "V.GetClientSideObject() -> vtkObjectBase\nC++: vtkObjectBase *GetClientSideObject()\n\nReturns the client side object associated with the VTKObjectID\n(if any). Returns 0 otherwise.\n"},
  {"GatherInformation", PyvtkSMProxy_GatherInformation, METH_VARARGS,
   "V.GatherInformation(vtkPVInformation) -> bool\nC++: bool GatherInformation(vtkPVInformation *information)\nV.GatherInformation(vtkPVInformation, int) -> bool\nC++: bool GatherInformation(vtkPVInformation *information,\n    vtkTypeUInt32 location)\n\nGathers information about this proxy. On success, the information\nobject is filled up with details about the VTK object.\n"},
  {"SaveXMLState", PyvtkSMProxy_SaveXMLState, METH_VARARGS,
   "V.SaveXMLState(vtkPVXMLElement) -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root)\nV.SaveXMLState(vtkPVXMLElement, vtkSMPropertyIterator)\n    -> vtkPVXMLElement\nC++: virtual vtkPVXMLElement *SaveXMLState(vtkPVXMLElement *root,\n    vtkSMPropertyIterator *iter)\n\nSaves the state of the proxy. This state can be reloaded to\ncreate a new proxy that is identical the present state of this\nproxy. The resulting proxy's XML hieratchy is returned, in\naddition if the root argument is not NULL then it's also inserted\nas a nested element. This call saves all a proxy's properties,\nincluding exposed properties and sub-proxies. More control is\nprovided by the following overload.\n"},
  {"LoadXMLState", PyvtkSMProxy_LoadXMLState, METH_VARARGS,
   "V.LoadXMLState(vtkPVXMLElement, vtkSMProxyLocator) -> int\nC++: virtual int LoadXMLState(vtkPVXMLElement *element,\n    vtkSMProxyLocator *locator)\n\nLoads the proxy state from the XML element. Returns 0 on\nfailure.locator is used to locate other proxies that may be\nreferred to in the state XML (which happens in case of properties\nof type vtkSMProxyProperty or subclasses). If locator is NULL,\nthen such properties are left unchanged.\n"},
  {"PrototypeOn", PyvtkSMProxy_PrototypeOn, METH_VARARGS,
   "V.PrototypeOn()\nC++: void PrototypeOn() override;\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {"PrototypeOff", PyvtkSMProxy_PrototypeOff, METH_VARARGS,
   "V.PrototypeOff()\nC++: void PrototypeOff() override;\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {"SetPrototype", PyvtkSMProxy_SetPrototype, METH_VARARGS,
   "V.SetPrototype(bool)\nC++: void SetPrototype(bool undo) override;\n\nAllow user to set the remote object to be discard for Undo/Redo\naction. By default, any remote object is Undoable. This override\nthe RemoteObject ones to propagate the flag to the sub-proxy\n"},
  {"UpdateSelfAndAllInputs", PyvtkSMProxy_UpdateSelfAndAllInputs, METH_VARARGS,
   "V.UpdateSelfAndAllInputs()\nC++: void UpdateSelfAndAllInputs()\n\nThis method call UpdateVTKObjects on the current pipeline by\nstarting at the sources. The sources are found by getting the\nInput of all the filter along the pipeline.\n"},
  {"GetIsSubProxy", PyvtkSMProxy_GetIsSubProxy, METH_VARARGS,
   "V.GetIsSubProxy() -> bool\nC++: bool GetIsSubProxy()\n\nA proxy instance can be a sub-proxy for some other proxy. In that\ncase, this method returns true.\n"},
  {"GetParentProxy", PyvtkSMProxy_GetParentProxy, METH_VARARGS,
   "V.GetParentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetParentProxy()\n\nIf this instance is a sub-proxy, this method will return the\nproxy of which this instance is an immediate sub-proxy.\n"},
  {"GetTrueParentProxy", PyvtkSMProxy_GetTrueParentProxy, METH_VARARGS,
   "V.GetTrueParentProxy() -> vtkSMProxy\nC++: vtkSMProxy *GetTrueParentProxy()\n\nCall GetParentProxy() recursively till a proxy that is not a\nsubproxy of any other proxy is found. May return this instance,\nif this is not a subproxy of any other proxy.\n"},
  {"EnableLocalPushOnly", PyvtkSMProxy_EnableLocalPushOnly, METH_VARARGS,
   "V.EnableLocalPushOnly()\nC++: void EnableLocalPushOnly() override;\n\nAllow to switch off any push of state change to the server for\nthat particular object. This is used when we load a state based\non a server notification. In that particular case, the server is\nalready aware of that new state, so we keep those changes local.\n"},
  {"DisableLocalPushOnly", PyvtkSMProxy_DisableLocalPushOnly, METH_VARARGS,
   "V.DisableLocalPushOnly()\nC++: void DisableLocalPushOnly() override;\n\nEnable the given remote object to communicate its state normally\nto the server location.\n"},
  {"GetFullState", PyvtkSMProxy_GetFullState, METH_VARARGS,
   "V.GetFullState() -> vtkSMMessage\nC++: const vtkSMMessage *GetFullState() override;\n\nThis method return the full object state that can be used to\ncreate that object from scratch. This method will be used to fill\nthe undo stack. If not overridden this will return NULL.\n"},
  {"LoadState", PyvtkSMProxy_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialise the object to the given state\nIf the definitionOnly Flag is set to True the proxy won't load\nthe properties values and just setup the new proxy hierarchy with\nall subproxy globalID set. This allow to split the load process\nin 2 step to prevent invalid state when property refere to a\nsub-proxy that does not exist yet.\n"},
  {"GetPropertyGroup", PyvtkSMProxy_GetPropertyGroup, METH_VARARGS,
   "V.GetPropertyGroup(int) -> vtkSMPropertyGroup\nC++: vtkSMPropertyGroup *GetPropertyGroup(size_t index)\n\nReturns the property group at index for the proxy.\n"},
  {"GetNumberOfPropertyGroups", PyvtkSMProxy_GetNumberOfPropertyGroups, METH_VARARGS,
   "V.GetNumberOfPropertyGroups() -> int\nC++: size_t GetNumberOfPropertyGroups()\n\nReturns the number of property groups that the proxy contains.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMProxy", // tp_name
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
  PyvtkSMProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMProxy_StaticNew()
{
  return vtkSMProxy::New();
}

PyObject *PyvtkSMProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMProxy_Type, PyvtkSMProxy_Methods,
    "vtkSMProxy",
 &PyvtkSMProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRemoteObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSMProxy_ResetPropertiesMode_Type);
  PyvtkSMProxy_ResetPropertiesMode_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkSMProxy_ResetPropertiesMode_Type);

  o = (PyObject *)&PyvtkSMProxy_ResetPropertiesMode_Type;
  if (PyDict_SetItemString(d, "ResetPropertiesMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSMProxy::ResetPropertiesMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DEFAULT", vtkSMProxy::DEFAULT },
        { "ONLY_XML", vtkSMProxy::ONLY_XML },
        { "ONLY_DOMAIN", vtkSMProxy::ONLY_DOMAIN },
      };

    o = PyvtkSMProxy_ResetPropertiesMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "COPY_PROXY_PROPERTY_VALUES_BY_REFERENCE", vtkSMProxy::COPY_PROXY_PROPERTY_VALUES_BY_REFERENCE },
        { "COPY_PROXY_PROPERTY_VALUES_BY_CLONING", vtkSMProxy::COPY_PROXY_PROPERTY_VALUES_BY_CLONING },
      };

    o = PyInt_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

