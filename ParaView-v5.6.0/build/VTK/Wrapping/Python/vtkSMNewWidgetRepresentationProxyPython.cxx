// python wrapper for vtkSMNewWidgetRepresentationProxy
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
#include "vtkSMNewWidgetRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMNewWidgetRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMNewWidgetRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMNewWidgetRepresentationProxy_Doc =
  "vtkSMNewWidgetRepresentationProxy - proxy for 3D widgets and their\nrepresentations in ParaView.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMNewWidgetRepresentationProxy is a proxy for 3D widgets and their\n"
  "representations. It has several responsibilities.\n"
  "\\li Sets up the link between the Widget and its representation on VTK\n"
  "side.\n"
  "\\li Sets up event handlers to ensure that the representation proxy's\n"
  "    info\n"
  "properties are updated any time the widget fires interaction events.\n"
  "\\li Provides API to perform tasks typical with 3DWidgets in ParaView\n"
  "    e.g.\n"
  "picking, placing widget on data bounds.\n\n";


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMNewWidgetRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNewWidgetRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMNewWidgetRepresentationProxy *tempr = vtkSMNewWidgetRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMNewWidgetRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNewWidgetRepresentationProxy::NewInstance());

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
PyvtkSMNewWidgetRepresentationProxy_GetWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetWidget() :
      op->vtkSMNewWidgetRepresentationProxy::GetWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_GetRepresentationProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetRepresentationProxy() :
      op->vtkSMNewWidgetRepresentationProxy::GetRepresentationProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_LinkProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  vtkSMPropertyGroup *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetVTKObject(temp1, "vtkSMPropertyGroup"))
  {
    bool tempr = (ap.IsBound() ?
      op->LinkProperties(temp0, temp1) :
      op->vtkSMNewWidgetRepresentationProxy::LinkProperties(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNewWidgetRepresentationProxy_UnlinkProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnlinkProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNewWidgetRepresentationProxy *op = static_cast<vtkSMNewWidgetRepresentationProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->UnlinkProperties(temp0) :
      op->vtkSMNewWidgetRepresentationProxy::UnlinkProperties(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMNewWidgetRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMNewWidgetRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMNewWidgetRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMNewWidgetRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMNewWidgetRepresentationProxy\nC++: static vtkSMNewWidgetRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMNewWidgetRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMNewWidgetRepresentationProxy\nC++: vtkSMNewWidgetRepresentationProxy *NewInstance()\n\n"},
  {"GetWidget", PyvtkSMNewWidgetRepresentationProxy_GetWidget, METH_VARARGS,
   "V.GetWidget() -> vtkAbstractWidget\nC++: virtual vtkAbstractWidget *GetWidget()\n\nGet the widget for the representation.\n"},
  {"GetRepresentationProxy", PyvtkSMNewWidgetRepresentationProxy_GetRepresentationProxy, METH_VARARGS,
   "V.GetRepresentationProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetRepresentationProxy()\n\nGet Representation Proxy.\n"},
  {"LinkProperties", PyvtkSMNewWidgetRepresentationProxy_LinkProperties, METH_VARARGS,
   "V.LinkProperties(vtkSMProxy, vtkSMPropertyGroup) -> bool\nC++: bool LinkProperties(vtkSMProxy *controlledProxy,\n    vtkSMPropertyGroup *controlledPropertyGroup)\n\nCalled to link properties from a Widget to controlledProxy i.e. a\nproxy whose properties are being manipulated using this Widget.\nCurrently, we only support linking with one controlled proxy at a\ntime. One must call UnlinkProperties() before one can call this\nmethod on another controlledProxy. The controlledPropertyGroup is\nused to determine the mapping between this widget properties and\ncontrolledProxy properties.\n"},
  {"UnlinkProperties", PyvtkSMNewWidgetRepresentationProxy_UnlinkProperties, METH_VARARGS,
   "V.UnlinkProperties(vtkSMProxy) -> bool\nC++: bool UnlinkProperties(vtkSMProxy *controlledProxy)\n\nCalled to link properties from a Widget to controlledProxy i.e. a\nproxy whose properties are being manipulated using this Widget.\nCurrently, we only support linking with one controlled proxy at a\ntime. One must call UnlinkProperties() before one can call this\nmethod on another controlledProxy. The controlledPropertyGroup is\nused to determine the mapping between this widget properties and\ncontrolledProxy properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMNewWidgetRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMNewWidgetRepresentationProxy", // tp_name
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
  PyvtkSMNewWidgetRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMNewWidgetRepresentationProxy_StaticNew()
{
  return vtkSMNewWidgetRepresentationProxy::New();
}

PyObject *PyvtkSMNewWidgetRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMNewWidgetRepresentationProxy_Type, PyvtkSMNewWidgetRepresentationProxy_Methods,
    "vtkSMNewWidgetRepresentationProxy",
 &PyvtkSMNewWidgetRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMNewWidgetRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMNewWidgetRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMNewWidgetRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMNewWidgetRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

