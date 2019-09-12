// python wrapper for vtkSMBoxRepresentationProxy
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
#include "vtkSMBoxRepresentationProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMBoxRepresentationProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMBoxRepresentationProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMWidgetRepresentationProxy_ClassNew
extern "C" { PyObject *PyvtkSMWidgetRepresentationProxy_ClassNew(); }
#define DECLARED_PyvtkSMWidgetRepresentationProxy_ClassNew
#endif

static const char *PyvtkSMBoxRepresentationProxy_Doc =
  "vtkSMBoxRepresentationProxy - proxy for vtkBoxRepresentation\n\n"
  "Superclass: vtkSMWidgetRepresentationProxy\n\n"
  "vtkSMBoxRepresentationProxy is a proxy for vtkBoxRepresentation. A\n"
  "specialization is needed to set the transform on the\n"
  "vtkBoxRepresentation.\n\n";


static PyObject *
PyvtkSMBoxRepresentationProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMBoxRepresentationProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMBoxRepresentationProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMBoxRepresentationProxy *tempr = vtkSMBoxRepresentationProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMBoxRepresentationProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMBoxRepresentationProxy::NewInstance());

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
PyvtkSMBoxRepresentationProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateVTKObjects();
    }
    else
    {
      op->vtkSMBoxRepresentationProxy::UpdateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePropertyInformation();
    }
    else
    {
      op->vtkSMBoxRepresentationProxy::UpdatePropertyInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePropertyInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMBoxRepresentationProxy *op = static_cast<vtkSMBoxRepresentationProxy *>(vp);

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
      op->vtkSMBoxRepresentationProxy::UpdatePropertyInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s1(self, args);
    case 1:
      return PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdatePropertyInformation");
  return nullptr;
}


static PyMethodDef PyvtkSMBoxRepresentationProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMBoxRepresentationProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMBoxRepresentationProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMBoxRepresentationProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMBoxRepresentationProxy\nC++: static vtkSMBoxRepresentationProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMBoxRepresentationProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMBoxRepresentationProxy\nC++: vtkSMBoxRepresentationProxy *NewInstance()\n\n"},
  {"UpdateVTKObjects", PyvtkSMBoxRepresentationProxy_UpdateVTKObjects, METH_VARARGS,
   "V.UpdateVTKObjects()\nC++: void UpdateVTKObjects() override;\n\nUpdate the VTK object on the server by pushing the values of all\nmodified properties (un-modified properties are ignored). If the\nobject has not been created, it will be created first.\n"},
  {"UpdatePropertyInformation", PyvtkSMBoxRepresentationProxy_UpdatePropertyInformation, METH_VARARGS,
   "V.UpdatePropertyInformation()\nC++: void UpdatePropertyInformation() override;\nV.UpdatePropertyInformation(vtkSMProperty)\nC++: void UpdatePropertyInformation(vtkSMProperty *prop) override;\n\nUpdates all property information by calling UpdateInformation()\nand populating the values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMBoxRepresentationProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMBoxRepresentationProxy", // tp_name
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
  PyvtkSMBoxRepresentationProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMBoxRepresentationProxy_StaticNew()
{
  return vtkSMBoxRepresentationProxy::New();
}

PyObject *PyvtkSMBoxRepresentationProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMBoxRepresentationProxy_Type, PyvtkSMBoxRepresentationProxy_Methods,
    "vtkSMBoxRepresentationProxy",
 &PyvtkSMBoxRepresentationProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMBoxRepresentationProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMWidgetRepresentationProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMBoxRepresentationProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMBoxRepresentationProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMBoxRepresentationProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

