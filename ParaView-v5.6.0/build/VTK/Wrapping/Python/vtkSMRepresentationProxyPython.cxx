// python wrapper for vtkSMRepresentationProxy
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
#include "vtkStdString.h"
#include "vtkSMRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMSourceProxy_ClassNew
extern "C" { PyObject *PyvtkSMSourceProxy_ClassNew(); }
#define DECLARED_PyvtkSMSourceProxy_ClassNew
#endif

static const char *PyvtkSMRepresentationProxy_Doc =
  "vtkSMRepresentationProxy - Proxy for a representations\n\n"
  "Superclass: vtkSMSourceProxy\n\n"
  "vtkSMRepresentationProxy is a vtkSMSourceProxy subclass that is\n"
  "designed to be used either directly or as a superclass for \"data\"\n"
  "representations i.e. representation that have an input (as against\n"
  "proxies for annotations such as 3D widgets).\n\n"
  "@section RepresentationMarkDirty Special handling of `MarkDirty`\n\n"
  "`vtkSMProxy::MarkDirty` is a mechanism that ParaView uses to know on\n"
  "the client side (i.e. in the server-manager layer) when a pipeline on\n"
  "the server side is \"dirty\" or has potential to execute on an update\n"
  "causing things like data information to be invalidated. Simply\n"
  "speaking, when a property on a vtkSMProxy is modified and pushed\n"
  "(using `vtkSMProxy::UpdateVTKObjects` or\n"
  "`vtkSMProxy::UpdateProperty`), it calls `this->MarkDirty(this)`.\n"
  "`vtkSMProxy::MarkDirty` invokes `vtkSMProxy::MarkConsumersAsDirty`\n"
  "which results in any consumers of this dirtied proxy also getting the\n"
  "notification. Consumers (and conversely producers) are setup via\n"
  "ProxyProperty and InputProperty connections. For standard data\n"
  "processing pipelines, this mechanism works quite well. Consider a\n"
  "filter proxy, say `Clip`, which has an input set via a InputProperty\n"
  "and a implicit function set via a ProxyProperty. If either the input\n"
  "or the implicit function is modified, it is reasonable to expect the\n"
  "Clip filter to re-execute on an `UpdatePipeline` call. Whether the\n"
  "call will truly cause the VTK pipeline (server side) to execute is\n"
  "not that important. The pipeline may not re-execute and that's not a\n"
  "big deal.\n\n"
  "Things get a little complicated for representations, however. Data\n"
  "representations don't necessary have valid input connections on all\n"
  "processes where their VTK objects are present (note, representations\n"
  "create VTK objects on all process while data input is only available\n"
  "on the data server nodes). As a result representations have to be\n"
  "explicitly told to re-execute following upstream changes since they\n"
  "cannot rely on their VTK-level upstream. Re-executing a\n"
  "representation means regenerating the geometry or data artifacts for\n"
  "rendering, redelivering them to the rendering nodes, etc. It can also\n"
  "mean cleaning up any caches the representation built for flip-book\n"
  "animation support. In other words, re-executing a representation is\n"
  "non-trivial task. Thus, we want do it only when absolutely needed.\n\n"
  "The explicit pipeline update is often referred to as \"update\n"
  "suppression\" and handled by `vtkPVDataRepresentation` and\n"
  "`vtkPVDataRepresentationPipeline`. In short, calling `Update` on\n"
  "vtkPVDataRepresentation has no effect unless\n"
  "`vtkPVDataRepresentation::MarkModified` was explicitly called at some\n"
  "point since the last `Update`.\n\n"
  "To explicitly call `vtkPVDataRepresentation::MarkModified` for only\n"
  "those cases where the representation must be re-executed, we follow\n"
  "the following strategy.\n\n"
  "\\li vtkPVDataRepresentation subclasses explicitly call\n"
  "    `this->MarkModified`\n"
  "    when a public API that invalidates the data pipeline is invoked.\n"
  "\\li vtkSMRepresentationProxy overrides\n"
  "    `vtkSMProxy::MarkDirtyFromProducer`\n"
  "    to call `MarkModified` on the VTK object if the producer was\n"
  "connected to\n"
  "    the representation via a InputProperty and not a ProxyProperty.\n"
  "The\n"
  "    assumption is that InputProperty connections typically imply\n"
  "pipeline\n"
  "    connections while ProxyProperty connections are other supporting\n"
  "VTK\n"
  "    objects e.g. LUT.\n\n";


static PyObject *
PyvtkSMRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRepresentationProxy *tempr = vtkSMRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRepresentationProxy::NewInstance());

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
PyvtkSMRepresentationProxy_GetRepresentedDataInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentedDataInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVDataInformation *tempr = (ap.IsBound() ?
      op->GetRepresentedDataInformation() :
      op->vtkSMRepresentationProxy::GetRepresentedDataInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetProminentValuesInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProminentValuesInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  vtkStdString temp0;
  int temp1;
  int temp2;
  double temp3 = 1e-6;
  double temp4 = 1e-3;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPVProminentValuesInformation *tempr = (ap.IsBound() ?
      op->GetProminentValuesInformation(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkSMRepresentationProxy::GetProminentValuesInformation(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline();
    }
    else
    {
      op->vtkSMRepresentationProxy::UpdatePipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline(temp0);
    }
    else
    {
      op->vtkSMRepresentationProxy::UpdatePipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_UpdatePipeline(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMRepresentationProxy_UpdatePipeline_s1(self, args);
    case 1:
      return PyvtkSMRepresentationProxy_UpdatePipeline_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePipeline");
  return nullptr;
}



static PyObject *
PyvtkSMRepresentationProxy_PostUpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostUpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PostUpdateData();
    }
    else
    {
      op->vtkSMRepresentationProxy::PostUpdateData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_ViewUpdated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewUpdated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->ViewUpdated(temp0);
    }
    else
    {
      op->vtkSMRepresentationProxy::ViewUpdated(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetGlobalID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetGlobalID() :
      op->vtkSMRepresentationProxy::GetGlobalID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetRepresentationType(temp0) :
      op->vtkSMRepresentationProxy::SetRepresentationType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetRepresentationType");

  vtkSMProxy *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSMRepresentationProxy::SetRepresentationType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSMRepresentationProxy_SetRepresentationType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkSMRepresentationProxy_SetRepresentationType_s1(self, args);
    case 2:
      return PyvtkSMRepresentationProxy_SetRepresentationType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRepresentationType");
  return nullptr;
}



static PyObject *
PyvtkSMRepresentationProxy_SetDebugName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDebugName(temp0);
    }
    else
    {
      op->vtkSMRepresentationProxy::SetDebugName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_GetDebugName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDebugName() :
      op->vtkSMRepresentationProxy::GetDebugName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRepresentationProxy_MarkDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRepresentationProxy *op = static_cast<vtkSMRepresentationProxy *>(vp);

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
      op->vtkSMRepresentationProxy::MarkDirty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRepresentationProxy\nC++: static vtkSMRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *NewInstance()\n\n"},
  {"GetRepresentedDataInformation", PyvtkSMRepresentationProxy_GetRepresentedDataInformation, METH_VARARGS,
   "V.GetRepresentedDataInformation() -> vtkPVDataInformation\nC++: virtual vtkPVDataInformation *GetRepresentedDataInformation()\n\nReturns information about the data that is finally rendered by\nthis representation.\n"},
  {"GetProminentValuesInformation", PyvtkSMRepresentationProxy_GetProminentValuesInformation, METH_VARARGS,
   "V.GetProminentValuesInformation(string, int, int, float, float,\n    bool) -> vtkPVProminentValuesInformation\nC++: virtual vtkPVProminentValuesInformation *GetProminentValuesInformation(\n    vtkStdString name, int fieldAssoc, int numComponents,\n    double uncertaintyAllowed=1e-6, double fraction=1e-3,\n    bool force=false)\n\nReturns information about a specific array component's prominent\nvalues (or NULL).\n\n* The name, fieldAssoc, and numComponents arguments specify\n* which arrays on the input dataset to examine. Because\n  multiblock\n* datasets may have multiple arrays of the same name on different\nblocks,\n* and these arrays may not have the same storage type or number\n  of\n* components, this method requires you to specify the number of\n* components per tuple the array(s) of interest must have.\n* You may call GetRepresentedDataInformation() to obtain the\n  number of\n* components for any array.\n\n* See vtkAbstractArray::GetProminentComponentValues for more\n  information\n* about the uncertaintyAllowed and fraction arguments.\n"},
  {"UpdatePipeline", PyvtkSMRepresentationProxy_UpdatePipeline, METH_VARARGS,
   "V.UpdatePipeline()\nC++: void UpdatePipeline() override;\nV.UpdatePipeline(float)\nC++: void UpdatePipeline(double time) override;\n\nCalls Update() on all sources. It also creates output ports if\nthey are not already created.\n"},
  {"PostUpdateData", PyvtkSMRepresentationProxy_PostUpdateData, METH_VARARGS,
   "V.PostUpdateData()\nC++: void PostUpdateData() override;\n\nOverridden to reset this->MarkedModified flag.\n"},
  {"ViewUpdated", PyvtkSMRepresentationProxy_ViewUpdated, METH_VARARGS,
   "V.ViewUpdated(vtkSMProxy)\nC++: virtual void ViewUpdated(vtkSMProxy *view)\n\nCalled after the view updates.\n"},
  {"GetGlobalID", PyvtkSMRepresentationProxy_GetGlobalID, METH_VARARGS,
   "V.GetGlobalID() -> int\nC++: vtkTypeUInt32 GetGlobalID() override;\n\nOverridden to reserve additional IDs for use by internal\ncomposite representation\n"},
  {"SetRepresentationType", PyvtkSMRepresentationProxy_SetRepresentationType, METH_VARARGS,
   "V.SetRepresentationType(string) -> bool\nC++: virtual bool SetRepresentationType(const char *type)\nV.SetRepresentationType(vtkSMProxy, string) -> bool\nC++: static bool SetRepresentationType(vtkSMProxy *repr,\n    const char *type)\n\nSet the representation type. Default implementation simply\nupdates the \"Representation\" property, if present with the value\nprovided. Subclasses can override this method to add custom logic\nto manage the representation state to support the change e.g.\npick a scalar color array when switching to Volume or Slice\nrepresentation, for example. Returns true, if the change was\nsuccessful, otherwise returns false.\n"},
  {"SetDebugName", PyvtkSMRepresentationProxy_SetDebugName, METH_VARARGS,
   "V.SetDebugName(string)\nC++: void SetDebugName(const char *name)\n\nGet/Set a name for debugging purposes only.\n\nDebugging issues with representation updates etc can be very\ntricky since there are several representations (and nested\nrepresentations) in a typical scene. This string provides a\nmechanism to name a representation (and all its nested\nrepresentations) to ease debugging. Use of this name for any\nother purpose is strictly discouraged.\n\nThe name, if any, should be set before calling\n`CreateVTKObjects`.\n"},
  {"GetDebugName", PyvtkSMRepresentationProxy_GetDebugName, METH_VARARGS,
   "V.GetDebugName() -> string\nC++: const char *GetDebugName()\n\nGet/Set a name for debugging purposes only.\n\nDebugging issues with representation updates etc can be very\ntricky since there are several representations (and nested\nrepresentations) in a typical scene. This string provides a\nmechanism to name a representation (and all its nested\nrepresentations) to ease debugging. Use of this name for any\nother purpose is strictly discouraged.\n\nThe name, if any, should be set before calling\n`CreateVTKObjects`.\n"},
  {"MarkDirty", PyvtkSMRepresentationProxy_MarkDirty, METH_VARARGS,
   "V.MarkDirty(vtkSMProxy)\nC++: void MarkDirty(vtkSMProxy *modifiedProxy) override;\n\nMarks the selection proxies dirty as well as chain to superclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMRepresentationProxy", // tp_name
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
  PyvtkSMRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRepresentationProxy_StaticNew()
{
  return vtkSMRepresentationProxy::New();
}

PyObject *PyvtkSMRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRepresentationProxy_Type, PyvtkSMRepresentationProxy_Methods,
    "vtkSMRepresentationProxy",
 &PyvtkSMRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMSourceProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

