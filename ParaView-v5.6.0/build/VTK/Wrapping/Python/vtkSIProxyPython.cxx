// python wrapper for vtkSIProxy
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
#include "vtkSIProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSIProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSIProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSIObject_ClassNew
extern "C" { PyObject *PyvtkSIObject_ClassNew(); }
#define DECLARED_PyvtkSIObject_ClassNew
#endif

static const char *PyvtkSIProxy_Doc =
  "vtkSIProxy - vtkSIProxy is the server-implementation for a vtkSMProxy\nthat helps the vtkSMProxy with managing/updating VTK objects.\n\n"
  "Superclass: vtkSIObject\n\n"
;


static PyObject *
PyvtkSIProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSIProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSIProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSIProxy *tempr = vtkSIProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSIProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSIProxy::NewInstance());

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
PyvtkSIProxy_AboutToDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AboutToDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AboutToDelete();
    }
    else
    {
      op->vtkSIProxy::AboutToDelete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_Push(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Push(temp0);
    }
    else
    {
      op->vtkSIProxy::Push(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_Pull(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkSMMessage *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMMessage"))
  {
    if (ap.IsBound())
    {
      op->Pull(temp0);
    }
    else
    {
      op->vtkSIProxy::Pull(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_GetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->GetVTKObject() :
      op->vtkSIProxy::GetVTKObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_SetVTKObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVTKObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->SetVTKObject(temp0);
    }
    else
    {
      op->vtkSIProxy::SetVTKObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_GetSIProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSIProperty *tempr = (ap.IsBound() ?
      op->GetSIProperty(temp0) :
      op->vtkSIProxy::GetSIProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_GetVTKClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVTKClassName() :
      op->vtkSIProxy::GetVTKClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_GetXMLName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLName() :
      op->vtkSIProxy::GetXMLName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_GetXMLGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMLGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMLGroup() :
      op->vtkSIProxy::GetXMLGroup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_IsNullProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNullProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsNullProxy() :
      op->vtkSIProxy::IsNullProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSIProxy::AddInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_CleanInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CleanInputs(temp0);
    }
    else
    {
      op->vtkSIProxy::CleanInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_UpdatePipelineInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipelineInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipelineInformation();
    }
    else
    {
      op->vtkSIProxy::UpdatePipelineInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_RecreateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecreateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecreateVTKObjects();
    }
    else
    {
      op->vtkSIProxy::RecreateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSIProxy_ExtendDefinition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendDefinition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSIProxy *op = static_cast<vtkSIProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtendDefinition(temp0) :
      op->vtkSIProxy::ExtendDefinition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSIProxy_Methods[] = {
  {"IsTypeOf", PyvtkSIProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSIProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSIProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSIProxy\nC++: static vtkSIProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSIProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSIProxy\nC++: vtkSIProxy *NewInstance()\n\n"},
  {"AboutToDelete", PyvtkSIProxy_AboutToDelete, METH_VARARGS,
   "V.AboutToDelete()\nC++: void AboutToDelete() override;\n\nThis method is called before the deletion of the SIObject.\nBasically this is used to remove all dependency with other\nSIObject so after a first pass on all SIObject with a\nAboutToDelete() we can simply delete the remaining SIObjects.\n"},
  {"Push", PyvtkSIProxy_Push, METH_VARARGS,
   "V.Push(vtkSMMessage)\nC++: void Push(vtkSMMessage *msg) override;\n\nPush a new state to the underneath implementation\n"},
  {"Pull", PyvtkSIProxy_Pull, METH_VARARGS,
   "V.Pull(vtkSMMessage)\nC++: void Pull(vtkSMMessage *msg) override;\n\nPull the current state of the underneath implementation\n"},
  {"GetVTKObject", PyvtkSIProxy_GetVTKObject, METH_VARARGS,
   "V.GetVTKObject() -> vtkObjectBase\nC++: vtkObjectBase *GetVTKObject()\n\nReturns access to the VTKObject pointer, if any. Note this is a\nraw pointer to the local instance of the VTK object. Any changes\nyou make directly using this object pointer will not be reflected\non other processes.\n"},
  {"SetVTKObject", PyvtkSIProxy_SetVTKObject, METH_VARARGS,
   "V.SetVTKObject(vtkObjectBase)\nC++: void SetVTKObject(vtkObjectBase *)\n\nReturns access to the VTKObject pointer, if any. Note this is a\nraw pointer to the local instance of the VTK object. Any changes\nyou make directly using this object pointer will not be reflected\non other processes.\n"},
  {"GetSIProperty", PyvtkSIProxy_GetSIProperty, METH_VARARGS,
   "V.GetSIProperty(string) -> vtkSIProperty\nC++: vtkSIProperty *GetSIProperty(const char *name)\n\nProvides access to the property helper.\n"},
  {"GetVTKClassName", PyvtkSIProxy_GetVTKClassName, METH_VARARGS,
   "V.GetVTKClassName() -> string\nC++: virtual char *GetVTKClassName()\n\nReturns the VTKClassName.\n"},
  {"GetXMLName", PyvtkSIProxy_GetXMLName, METH_VARARGS,
   "V.GetXMLName() -> string\nC++: virtual char *GetXMLName()\n\nAssigned by the XML parser. The name assigned in the XML\nconfiguration. Can be used to figure out the origin of the proxy.\n"},
  {"GetXMLGroup", PyvtkSIProxy_GetXMLGroup, METH_VARARGS,
   "V.GetXMLGroup() -> string\nC++: virtual char *GetXMLGroup()\n\nAssigned by the XML parser. The group in the XML configuration\nthat this proxy belongs to. Can be used to figure out the origin\nof the proxy.\n"},
  {"IsNullProxy", PyvtkSIProxy_IsNullProxy, METH_VARARGS,
   "V.IsNullProxy() -> bool\nC++: bool IsNullProxy()\n\nReturn true if that Proxy is supposed to have NO vtk class, which\nmeans its a NullProxy.\n"},
  {"AddInput", PyvtkSIProxy_AddInput, METH_VARARGS,
   "V.AddInput(int, vtkAlgorithmOutput, string)\nC++: virtual void AddInput(int input_port,\n    vtkAlgorithmOutput *connection, const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\n"},
  {"CleanInputs", PyvtkSIProxy_CleanInputs, METH_VARARGS,
   "V.CleanInputs(string)\nC++: virtual void CleanInputs(const char *method)\n\nThese methods are called to add/remove input connections by\nvtkSIInputProperty. This indirection makes it possible for\nsubclasses to insert VTK-algorithms in the input pipeline.\n"},
  {"UpdatePipelineInformation", PyvtkSIProxy_UpdatePipelineInformation, METH_VARARGS,
   "V.UpdatePipelineInformation()\nC++: virtual void UpdatePipelineInformation()\n\nTriggers UpdateInformation() on vtkObject if possible. Default\nimplementation does pretty much nothing.\n"},
  {"RecreateVTKObjects", PyvtkSIProxy_RecreateVTKObjects, METH_VARARGS,
   "V.RecreateVTKObjects()\nC++: virtual void RecreateVTKObjects()\n\nCalled by vtkSMProxy::RecreateVTKObjects() to re-create the VTK\nobjects.\n"},
  {"ExtendDefinition", PyvtkSIProxy_ExtendDefinition, METH_VARARGS,
   "V.ExtendDefinition(string) -> bool\nC++: virtual bool ExtendDefinition(const char *xml)\n\nCounter part to\nvtkSMSelfGeneratingSourceProxy::ExtendDefinition(). Called by\nthat method to let the vtkSIProxy know about the extended\ndefinition.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSIProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerImplementationCorePython.vtkSIProxy", // tp_name
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
  PyvtkSIProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSIProxy_StaticNew()
{
  return vtkSIProxy::New();
}

PyObject *PyvtkSIProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSIProxy_Type, PyvtkSIProxy_Methods,
    "vtkSIProxy",
 &PyvtkSIProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSIProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSIObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSIProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSIProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSIProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

