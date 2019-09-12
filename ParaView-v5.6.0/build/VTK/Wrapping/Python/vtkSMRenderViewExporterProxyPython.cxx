// python wrapper for vtkSMRenderViewExporterProxy
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
#include "vtkSMRenderViewExporterProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMRenderViewExporterProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMRenderViewExporterProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMExporterProxy_ClassNew
extern "C" { PyObject *PyvtkSMExporterProxy_ClassNew(); }
#define DECLARED_PyvtkSMExporterProxy_ClassNew
#endif

static const char *PyvtkSMRenderViewExporterProxy_Doc =
  "vtkSMRenderViewExporterProxy - proxy for vtkExporter subclasses which\nwork with render windows.\n\n"
  "Superclass: vtkSMExporterProxy\n\n"
  "vtkSMRenderViewExporterProxy is a proxy for vtkExporter subclasses.\n"
  "It makes it possible to export render views using these exporters.\n\n";


static PyObject *
PyvtkSMRenderViewExporterProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMRenderViewExporterProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMRenderViewExporterProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMRenderViewExporterProxy *tempr = vtkSMRenderViewExporterProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMRenderViewExporterProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMRenderViewExporterProxy::NewInstance());

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
PyvtkSMRenderViewExporterProxy_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkSMRenderViewExporterProxy::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMRenderViewExporterProxy_CanExport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanExport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMRenderViewExporterProxy *op = static_cast<vtkSMRenderViewExporterProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanExport(temp0) :
      op->vtkSMRenderViewExporterProxy::CanExport(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMRenderViewExporterProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMRenderViewExporterProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMRenderViewExporterProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMRenderViewExporterProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMRenderViewExporterProxy\nC++: static vtkSMRenderViewExporterProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMRenderViewExporterProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMRenderViewExporterProxy\nC++: vtkSMRenderViewExporterProxy *NewInstance()\n\n"},
  {"Write", PyvtkSMRenderViewExporterProxy_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nExports the view.\n"},
  {"CanExport", PyvtkSMRenderViewExporterProxy_CanExport, METH_VARARGS,
   "V.CanExport(vtkSMProxy) -> bool\nC++: bool CanExport(vtkSMProxy *) override;\n\nReturns if the view can be exported. Default implementation\nreturn true if the view is a render view.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMRenderViewExporterProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerDefaultPython.vtkSMRenderViewExporterProxy", // tp_name
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
  PyvtkSMRenderViewExporterProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMRenderViewExporterProxy_StaticNew()
{
  return vtkSMRenderViewExporterProxy::New();
}

PyObject *PyvtkSMRenderViewExporterProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMRenderViewExporterProxy_Type, PyvtkSMRenderViewExporterProxy_Methods,
    "vtkSMRenderViewExporterProxy",
 &PyvtkSMRenderViewExporterProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMRenderViewExporterProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMExporterProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMRenderViewExporterProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMRenderViewExporterProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMRenderViewExporterProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

