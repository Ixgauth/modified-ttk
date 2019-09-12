// python wrapper for vtkSMExporterProxy
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
#include "vtkSMExporterProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMExporterProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMExporterProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMExporterProxy_Doc =
  "vtkSMExporterProxy - proxy for view exporters.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "vtkSMExporterProxy is a proxy for vtkExporter subclasses. It makes it\n"
  "possible to export render views using these exporters.\n\n";


static PyObject *
PyvtkSMExporterProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMExporterProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMExporterProxy *tempr = vtkSMExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMExporterProxy::NewInstance());

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
PyvtkSMExporterProxy_SetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  vtkSMViewProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMViewProxy"))
  {
    if (ap.IsBound())
    {
      op->SetView(temp0);
    }
    else
    {
      op->vtkSMExporterProxy::SetView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_GetView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMViewProxy *tempr = (ap.IsBound() ?
      op->GetView() :
      op->vtkSMExporterProxy::GetView());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Write();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = op->CanExport(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkSMExporterProxy_GetFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMExporterProxy *op = static_cast<vtkSMExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtension() :
      op->vtkSMExporterProxy::GetFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}
#endif

static PyMethodDef PyvtkSMExporterProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMExporterProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMExporterProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMExporterProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMExporterProxy\nC++: static vtkSMExporterProxy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMExporterProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMExporterProxy\nC++: vtkSMExporterProxy *NewInstance()\n\n"},
  {"SetView", PyvtkSMExporterProxy_SetView, METH_VARARGS,
   "V.SetView(vtkSMViewProxy)\nC++: void SetView(vtkSMViewProxy *view)\n\nSet the view proxy to export.\n"},
  {"GetView", PyvtkSMExporterProxy_GetView, METH_VARARGS,
   "V.GetView() -> vtkSMViewProxy\nC++: virtual vtkSMViewProxy *GetView()\n\nSet the view proxy to export.\n"},
  {"Write", PyvtkSMExporterProxy_Write, METH_VARARGS,
   "V.Write()\nC++: virtual void Write()\n\nExports the view.\n"},
  {"CanExport", PyvtkSMExporterProxy_CanExport, METH_VARARGS,
   "V.CanExport(vtkSMProxy) -> bool\nC++: virtual bool CanExport(vtkSMProxy *)\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {"GetFileExtension", PyvtkSMExporterProxy_GetFileExtension, METH_VARARGS,
   "V.GetFileExtension() -> string\nC++: const char *GetFileExtension()\n\nReturns the suggested file extension for this\nexporter.@deprecated in ParaView 5.5. Use `GetFileExtensions`\ninstead.\n"},
#endif
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMExporterProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMExporterProxy", // tp_name
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
  PyvtkSMExporterProxy_Doc, // tp_doc
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

PyObject *PyvtkSMExporterProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMExporterProxy_Type, PyvtkSMExporterProxy_Methods,
    "vtkSMExporterProxy",
 nullptr);

  PyTypeObject *pytype = &PyvtkSMExporterProxy_Type;

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

void PyVTKAddFile_vtkSMExporterProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMExporterProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMExporterProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

