// python wrapper for vtkSMDomainIterator
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
#include "vtkSMDomainIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDomainIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDomainIterator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMDomainIterator_Doc =
  "vtkSMDomainIterator - iterates over domains of a property\n\n"
  "Superclass: vtkSMObject\n\n"
  "vtkSMDomainIterator iterates over the domains of a property.\n\n";


static PyObject *
PyvtkSMDomainIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDomainIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDomainIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDomainIterator *tempr = vtkSMDomainIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDomainIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDomainIterator::NewInstance());

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
PyvtkSMDomainIterator_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  vtkSMProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkSMDomainIterator::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDomainIterator::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Begin();
    }
    else
    {
      op->vtkSMDomainIterator::Begin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMDomainIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkSMDomainIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMDomainIterator::GetKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDomainIterator_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDomainIterator *op = static_cast<vtkSMDomainIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDomain *tempr = (ap.IsBound() ?
      op->GetDomain() :
      op->vtkSMDomainIterator::GetDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDomainIterator_Methods[] = {
  {"IsTypeOf", PyvtkSMDomainIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDomainIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDomainIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDomainIterator\nC++: static vtkSMDomainIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDomainIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDomainIterator\nC++: vtkSMDomainIterator *NewInstance()\n\n"},
  {"SetProperty", PyvtkSMDomainIterator_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkSMProperty)\nC++: void SetProperty(vtkSMProperty *property)\n\nA property must be assigned before iteration is performed.\n"},
  {"GetProperty", PyvtkSMDomainIterator_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMProperty\nC++: virtual vtkSMProperty *GetProperty()\n\nReturns the property being iterated over.\n"},
  {"Begin", PyvtkSMDomainIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: void Begin()\n\nGo to the first domain.\n"},
  {"IsAtEnd", PyvtkSMDomainIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: int IsAtEnd()\n\nIs the iterator at the end of the list.\n"},
  {"Next", PyvtkSMDomainIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next()\n\nMove to the next iterator.\n"},
  {"GetKey", PyvtkSMDomainIterator_GetKey, METH_VARARGS,
   "V.GetKey() -> string\nC++: const char *GetKey()\n\nReturns the key (the name) of the current domain.\n"},
  {"GetDomain", PyvtkSMDomainIterator_GetDomain, METH_VARARGS,
   "V.GetDomain() -> vtkSMDomain\nC++: vtkSMDomain *GetDomain()\n\nReturns the current domain.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDomainIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDomainIterator", // tp_name
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
  PyvtkSMDomainIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDomainIterator_StaticNew()
{
  return vtkSMDomainIterator::New();
}

PyObject *PyvtkSMDomainIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDomainIterator_Type, PyvtkSMDomainIterator_Methods,
    "vtkSMDomainIterator",
 &PyvtkSMDomainIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDomainIterator_Type;

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

void PyVTKAddFile_vtkSMDomainIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDomainIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDomainIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

