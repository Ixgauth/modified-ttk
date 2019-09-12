// python wrapper for vtkSMNamedPropertyIterator
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
#include "vtkSMNamedPropertyIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMNamedPropertyIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMNamedPropertyIterator_ClassNew(); }

#ifndef DECLARED_PyvtkSMPropertyIterator_ClassNew
extern "C" { PyObject *PyvtkSMPropertyIterator_ClassNew(); }
#define DECLARED_PyvtkSMPropertyIterator_ClassNew
#endif

static const char *PyvtkSMNamedPropertyIterator_Doc =
  "vtkSMNamedPropertyIterator - iterates over a subset of a proxy's\nproperties\n\n"
  "Superclass: vtkSMPropertyIterator\n\n"
  "vtkSMNamedPropertyIterator can be used to iterate over a subset of a\n"
  "proxy's properties. The subset is defined through a list of strings\n"
  "naming properties. The properties of the root proxies as well as\n"
  "sub-proxies are  included in the iteration. For sub-proxies, only\n"
  "exposed properties are iterated over.\n\n"
  "@sa\n"
  "vtkSMPropertyIterator\n\n"
  "@par Thanks: This class was contributed by SciberQuest Inc.\n\n";


static PyObject *
PyvtkSMNamedPropertyIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMNamedPropertyIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMNamedPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMNamedPropertyIterator *tempr = vtkSMNamedPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMNamedPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMNamedPropertyIterator::NewInstance());

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
PyvtkSMNamedPropertyIterator_SetPropertyNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  vtkStringList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringList"))
  {
    if (ap.IsBound())
    {
      op->SetPropertyNames(temp0);
    }
    else
    {
      op->vtkSMNamedPropertyIterator::SetPropertyNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Begin();
    }
    else
    {
      op->vtkSMNamedPropertyIterator::Begin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMNamedPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkSMNamedPropertyIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMNamedPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetPropertyLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPropertyLabel() :
      op->vtkSMNamedPropertyIterator::GetPropertyLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMNamedPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMNamedPropertyIterator *op = static_cast<vtkSMNamedPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMNamedPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMNamedPropertyIterator_Methods[] = {
  {"IsTypeOf", PyvtkSMNamedPropertyIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMNamedPropertyIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMNamedPropertyIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMNamedPropertyIterator\nC++: static vtkSMNamedPropertyIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMNamedPropertyIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMNamedPropertyIterator\nC++: vtkSMNamedPropertyIterator *NewInstance()\n\n"},
  {"SetPropertyNames", PyvtkSMNamedPropertyIterator_SetPropertyNames, METH_VARARGS,
   "V.SetPropertyNames(vtkStringList)\nC++: void SetPropertyNames(vtkStringList *names)\n\nSet the names of properties to iterate over.\n"},
  {"Begin", PyvtkSMNamedPropertyIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: void Begin() override;\n\nGo to the first property.\n"},
  {"IsAtEnd", PyvtkSMNamedPropertyIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: int IsAtEnd() override;\n\nReturns true if iterator points past the end of the collection.\n"},
  {"Next", PyvtkSMNamedPropertyIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next() override;\n\nMove to the next property.\n"},
  {"GetKey", PyvtkSMNamedPropertyIterator_GetKey, METH_VARARGS,
   "V.GetKey() -> string\nC++: const char *GetKey() override;\n\nReturns the key (name) at the current iterator position.\n"},
  {"GetPropertyLabel", PyvtkSMNamedPropertyIterator_GetPropertyLabel, METH_VARARGS,
   "V.GetPropertyLabel() -> string\nC++: const char *GetPropertyLabel() override;\n\nReturns the XMLLabel for self properties and the exposed name for\nsub-proxy properties.\n"},
  {"GetProperty", PyvtkSMNamedPropertyIterator_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMProperty\nC++: vtkSMProperty *GetProperty() override;\n\nReturns the property at the current iterator position.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMNamedPropertyIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMNamedPropertyIterator", // tp_name
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
  PyvtkSMNamedPropertyIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMNamedPropertyIterator_StaticNew()
{
  return vtkSMNamedPropertyIterator::New();
}

PyObject *PyvtkSMNamedPropertyIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMNamedPropertyIterator_Type, PyvtkSMNamedPropertyIterator_Methods,
    "vtkSMNamedPropertyIterator",
 &PyvtkSMNamedPropertyIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMNamedPropertyIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMPropertyIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMNamedPropertyIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMNamedPropertyIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMNamedPropertyIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

