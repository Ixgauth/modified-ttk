// python wrapper for vtkSMGL2PSExporterProxy
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
#include "vtkSMGL2PSExporterProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMGL2PSExporterProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMGL2PSExporterProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRenderViewExporterProxy_ClassNew
extern "C" { PyObject *PyvtkSMRenderViewExporterProxy_ClassNew(); }
#define DECLARED_PyvtkSMRenderViewExporterProxy_ClassNew
#endif

static const char *PyvtkSMGL2PSExporterProxy_Doc =
  "vtkSMGL2PSExporterProxy - Proxy for vtkPVGL2PSExporter\n\n"
  "Superclass: vtkSMRenderViewExporterProxy\n\n"
  "Proxy for vtkPVGL2PSExporter\n\n";


static PyObject *
PyvtkSMGL2PSExporterProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMGL2PSExporterProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMGL2PSExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMGL2PSExporterProxy *tempr = vtkSMGL2PSExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMGL2PSExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMGL2PSExporterProxy::NewInstance());

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
PyvtkSMGL2PSExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanExport(temp0) :
      op->vtkSMGL2PSExporterProxy::CanExport(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkSMGL2PSExporterProxy::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMGL2PSExporterProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMGL2PSExporterProxy *op = static_cast<vtkSMGL2PSExporterProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMGL2PSExporterProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMGL2PSExporterProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMGL2PSExporterProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMGL2PSExporterProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMGL2PSExporterProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMGL2PSExporterProxy\nC++: static vtkSMGL2PSExporterProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMGL2PSExporterProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMGL2PSExporterProxy\nC++: vtkSMGL2PSExporterProxy *NewInstance()\n\n"},
  {"CanExport", PyvtkSMGL2PSExporterProxy_CanExport, METH_VARARGS,
   "V.CanExport(vtkSMProxy) -> bool\nC++: bool CanExport(vtkSMProxy *) override;\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view or a context view.\n"},
  {"Write", PyvtkSMGL2PSExporterProxy_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nExport the current view.\n"},
  {"ReadXMLAttributes", PyvtkSMGL2PSExporterProxy_ReadXMLAttributes, METH_VARARGS,
   "V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element) override;\n\nSee superclass documentation for description.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMGL2PSExporterProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMGL2PSExporterProxy", // tp_name
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
  PyvtkSMGL2PSExporterProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMGL2PSExporterProxy_StaticNew()
{
  return vtkSMGL2PSExporterProxy::New();
}

PyObject *PyvtkSMGL2PSExporterProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMGL2PSExporterProxy_Type, PyvtkSMGL2PSExporterProxy_Methods,
    "vtkSMGL2PSExporterProxy",
 &PyvtkSMGL2PSExporterProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMGL2PSExporterProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRenderViewExporterProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMGL2PSExporterProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMGL2PSExporterProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMGL2PSExporterProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

