// python wrapper for vtkSMOrderedPropertyIterator
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
#include "vtkSMOrderedPropertyIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMOrderedPropertyIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMOrderedPropertyIterator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMOrderedPropertyIterator_Doc =
  "vtkSMOrderedPropertyIterator - iterates over the properties of a proxy\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMOrderedPropertyIterator is used to iterate over the properties\n"
  "of a proxy. The properties of the root proxies as well as sub-proxies\n"
  "are included in the iteration. For sub-proxies, only exposed\n"
  "properties are iterated over. vtkSMOrderedPropertyIterator iterates\n"
  "over properties in the order they appear in the xml or in the order\n"
  "they were added. This is possible because vtkSMProxy keeps track of\n"
  "the order in which properties were added or exposed in a\n"
  "PropertyNamesInOrder vector.\n\n";


static PyObject *
PyvtkSMOrderedPropertyIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMOrderedPropertyIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMOrderedPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMOrderedPropertyIterator *tempr = vtkSMOrderedPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMOrderedPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMOrderedPropertyIterator::NewInstance());

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
PyvtkSMOrderedPropertyIterator_SetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->SetProxy(temp0);
    }
    else
    {
      op->vtkSMOrderedPropertyIterator::SetProxy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetProxy() :
      op->vtkSMOrderedPropertyIterator::GetProxy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Begin();
    }
    else
    {
      op->vtkSMOrderedPropertyIterator::Begin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMOrderedPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkSMOrderedPropertyIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMOrderedPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMOrderedPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMOrderedPropertyIterator_GetPropertyLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMOrderedPropertyIterator *op = static_cast<vtkSMOrderedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyLabel() :
      op->vtkSMOrderedPropertyIterator::GetPropertyLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMOrderedPropertyIterator_Methods[] = {
  {"IsTypeOf", PyvtkSMOrderedPropertyIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMOrderedPropertyIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMOrderedPropertyIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMOrderedPropertyIterator\nC++: static vtkSMOrderedPropertyIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMOrderedPropertyIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMOrderedPropertyIterator\nC++: vtkSMOrderedPropertyIterator *NewInstance()\n\n"},
  {"SetProxy", PyvtkSMOrderedPropertyIterator_SetProxy, METH_VARARGS,
   "V.SetProxy(vtkSMProxy)\nC++: void SetProxy(vtkSMProxy *proxy)\n\nSet the proxy to be used.\n"},
  {"GetProxy", PyvtkSMOrderedPropertyIterator_GetProxy, METH_VARARGS,
   "V.GetProxy() -> vtkSMProxy\nC++: virtual vtkSMProxy *GetProxy()\n\nReturn the proxy.\n"},
  {"Begin", PyvtkSMOrderedPropertyIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: void Begin()\n\nGo to the first property.\n"},
  {"IsAtEnd", PyvtkSMOrderedPropertyIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {"Next", PyvtkSMOrderedPropertyIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next()\n\nMove to the next property.\n"},
  {"GetKey", PyvtkSMOrderedPropertyIterator_GetKey, METH_VARARGS,
   "V.GetKey() -> string\nC++: const char *GetKey()\n\nReturns the key (name) at the current iterator position.\n"},
  {"GetProperty", PyvtkSMOrderedPropertyIterator_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty()\n\nReturns the property at the current iterator position.\n"},
  {"GetPropertyLabel", PyvtkSMOrderedPropertyIterator_GetPropertyLabel, METH_VARARGS,
   "V.GetPropertyLabel() -> string\nC++: const char *GetPropertyLabel()\n\nReturns the XMLLabel for self properties and the exposed name for\nsub-proxy properties.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMOrderedPropertyIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMOrderedPropertyIterator", // tp_name
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
  PyvtkSMOrderedPropertyIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMOrderedPropertyIterator_StaticNew()
{
  return vtkSMOrderedPropertyIterator::New();
}

PyObject *PyvtkSMOrderedPropertyIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMOrderedPropertyIterator_Type, PyvtkSMOrderedPropertyIterator_Methods,
    "vtkSMOrderedPropertyIterator",
 &PyvtkSMOrderedPropertyIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMOrderedPropertyIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMOrderedPropertyIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMOrderedPropertyIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMOrderedPropertyIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

