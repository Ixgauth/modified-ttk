// python wrapper for vtkSMChartRepresentationProxy
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
#include "vtkSMChartRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMChartRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMChartRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRepresentationProxy_ClassNew
extern "C" { PyObject *PyvtkSMRepresentationProxy_ClassNew(); }
#define DECLARED_PyvtkSMRepresentationProxy_ClassNew
#endif

static const char *PyvtkSMChartRepresentationProxy_Doc =
  "vtkSMChartRepresentationProxy - \n\n"
  "Superclass: vtkSMRepresentationProxy\n\n"
;


static PyObject *
PyvtkSMChartRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMChartRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMChartRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMChartRepresentationProxy *tempr = vtkSMChartRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMChartRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMChartRepresentationProxy::NewInstance());

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
PyvtkSMChartRepresentationProxy_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkSMChartRepresentationProxy::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMChartRepresentationProxy_ReadXMLAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadXMLAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMChartRepresentationProxy *op = static_cast<vtkSMChartRepresentationProxy *>(vp);

  vtkSMSessionProxyManager *temp0 = nullptr;
  vtkPVXMLElement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSessionProxyManager") &&
      ap.GetVTKObject(temp1, "vtkPVXMLElement"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadXMLAttributes(temp0, temp1) :
      op->vtkSMChartRepresentationProxy::ReadXMLAttributes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMChartRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMChartRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMChartRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMChartRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMChartRepresentationProxy\nC++: static vtkSMChartRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMChartRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMChartRepresentationProxy\nC++: vtkSMChartRepresentationProxy *NewInstance()\n\n"},
  {"GetRepresentation", PyvtkSMChartRepresentationProxy_GetRepresentation, METH_VARARGS,
   "V.GetRepresentation() -> vtkChartRepresentation\nC++: vtkChartRepresentation *GetRepresentation()\n\nReturns client side representation object.\n"},
  {"ReadXMLAttributes", PyvtkSMChartRepresentationProxy_ReadXMLAttributes, METH_VARARGS,
   "V.ReadXMLAttributes(vtkSMSessionProxyManager, vtkPVXMLElement)\n    -> int\nC++: int ReadXMLAttributes(vtkSMSessionProxyManager *pm,\n    vtkPVXMLElement *element) override;\n\nOverridden to handle links with subproxy properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMChartRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMChartRepresentationProxy", // tp_name
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
  PyvtkSMChartRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMChartRepresentationProxy_StaticNew()
{
  return vtkSMChartRepresentationProxy::New();
}

PyObject *PyvtkSMChartRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMChartRepresentationProxy_Type, PyvtkSMChartRepresentationProxy_Methods,
    "vtkSMChartRepresentationProxy",
 &PyvtkSMChartRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMChartRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRepresentationProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMChartRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMChartRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMChartRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

