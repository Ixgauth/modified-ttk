// python wrapper for vtkSMOrthographicSliceViewProxy
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
#include "vtkSMOrthographicSliceViewProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMOrthographicSliceViewProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMOrthographicSliceViewProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMRenderViewProxy_ClassNew
extern "C" { PyObject *PyvtkSMRenderViewProxy_ClassNew(); }
#define DECLARED_PyvtkSMRenderViewProxy_ClassNew
#endif

static const char *PyvtkSMOrthographicSliceViewProxy_Doc =
  "vtkSMOrthographicSliceViewProxy - \n\n"
  "Superclass: vtkSMRenderViewProxy\n\n"
;


static PyObject *
PyvtkSMOrthographicSliceViewProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMOrthographicSliceViewProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOrthographicSliceViewProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMOrthographicSliceViewProxy *tempr = vtkSMOrthographicSliceViewProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMOrthographicSliceViewProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOrthographicSliceViewProxy::NewInstance());

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
PyvtkSMOrthographicSliceViewProxy_GetRepresentationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  vtkSMSourceProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMSourceProxy") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationType(temp0, temp1) :
      op->vtkSMOrthographicSliceViewProxy::GetRepresentationType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrthographicSliceViewProxy_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrthographicSliceViewProxy *op = static_cast<vtkSMOrthographicSliceViewProxy *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    vtkSMRepresentationProxy *tempr = (ap.IsBound() ?
      op->CreateDefaultRepresentation(temp0, temp1) :
      op->vtkSMOrthographicSliceViewProxy::CreateDefaultRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMOrthographicSliceViewProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMOrthographicSliceViewProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMOrthographicSliceViewProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMOrthographicSliceViewProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMOrthographicSliceViewProxy\nC++: static vtkSMOrthographicSliceViewProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMOrthographicSliceViewProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMOrthographicSliceViewProxy\nC++: vtkSMOrthographicSliceViewProxy *NewInstance()\n\n"},
  {"GetRepresentationType", PyvtkSMOrthographicSliceViewProxy_GetRepresentationType, METH_VARARGS,
   "V.GetRepresentationType(vtkSMSourceProxy, int) -> string\nC++: const char *GetRepresentationType(vtkSMSourceProxy *producer,\n     int outputPort) override;\n\nOverridden to forward the call to the internal root view proxy.\n"},
  {"CreateDefaultRepresentation", PyvtkSMOrthographicSliceViewProxy_CreateDefaultRepresentation, METH_VARARGS,
   "V.CreateDefaultRepresentation(vtkSMProxy, int)\n    -> vtkSMRepresentationProxy\nC++: vtkSMRepresentationProxy *CreateDefaultRepresentation(\n    vtkSMProxy *proxy, int outputPort) override;\n\nOverridden to set initial default slices when a representation is\ncreated. Not sure that's the best way to do this, but leaving the\nlogic unchanged in this pass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMOrthographicSliceViewProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMOrthographicSliceViewProxy", // tp_name
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
  PyvtkSMOrthographicSliceViewProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMOrthographicSliceViewProxy_StaticNew()
{
  return vtkSMOrthographicSliceViewProxy::New();
}

PyObject *PyvtkSMOrthographicSliceViewProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMOrthographicSliceViewProxy_Type, PyvtkSMOrthographicSliceViewProxy_Methods,
    "vtkSMOrthographicSliceViewProxy",
 &PyvtkSMOrthographicSliceViewProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMOrthographicSliceViewProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMRenderViewProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMOrthographicSliceViewProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMOrthographicSliceViewProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMOrthographicSliceViewProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

