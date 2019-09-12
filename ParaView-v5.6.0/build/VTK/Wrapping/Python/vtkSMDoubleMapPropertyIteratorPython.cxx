// python wrapper for vtkSMDoubleMapPropertyIterator
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
#include "vtkSMDoubleMapPropertyIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMDoubleMapPropertyIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMDoubleMapPropertyIterator_ClassNew(); }

#ifndef DECLARED_PyvtkSMObject_ClassNew
extern "C" { PyObject *PyvtkSMObject_ClassNew(); }
#define DECLARED_PyvtkSMObject_ClassNew
#endif

static const char *PyvtkSMDoubleMapPropertyIterator_Doc =
  "vtkSMDoubleMapPropertyIterator - no description provided.\n\n"
  "Superclass: vtkSMObject\n\n"
;


static PyObject *
PyvtkSMDoubleMapPropertyIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMDoubleMapPropertyIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMDoubleMapPropertyIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMDoubleMapPropertyIterator *tempr = vtkSMDoubleMapPropertyIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDoubleMapPropertyIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMDoubleMapPropertyIterator::NewInstance());

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
PyvtkSMDoubleMapPropertyIterator_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  vtkSMDoubleMapProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMDoubleMapProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkSMDoubleMapPropertyIterator::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMDoubleMapProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkSMDoubleMapPropertyIterator::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Begin();
    }
    else
    {
      op->vtkSMDoubleMapPropertyIterator::Begin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkSMDoubleMapPropertyIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkSMDoubleMapPropertyIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetKey() :
      op->vtkSMDoubleMapPropertyIterator::GetKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMDoubleMapPropertyIterator_GetElementComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMDoubleMapPropertyIterator *op = static_cast<vtkSMDoubleMapPropertyIterator *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetElementComponent(temp0) :
      op->vtkSMDoubleMapPropertyIterator::GetElementComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMDoubleMapPropertyIterator_Methods[] = {
  {"IsTypeOf", PyvtkSMDoubleMapPropertyIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMDoubleMapPropertyIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMDoubleMapPropertyIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMDoubleMapPropertyIterator\nC++: static vtkSMDoubleMapPropertyIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMDoubleMapPropertyIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMDoubleMapPropertyIterator\nC++: vtkSMDoubleMapPropertyIterator *NewInstance()\n\n"},
  {"SetProperty", PyvtkSMDoubleMapPropertyIterator_SetProperty, METH_VARARGS,
   "V.SetProperty(vtkSMDoubleMapProperty)\nC++: virtual void SetProperty(vtkSMDoubleMapProperty *property)\n\nSet/get the property to iterate over.\n"},
  {"GetProperty", PyvtkSMDoubleMapPropertyIterator_GetProperty, METH_VARARGS,
   "V.GetProperty() -> vtkSMDoubleMapProperty\nC++: virtual vtkSMDoubleMapProperty *GetProperty()\n\nSet/get the property to iterate over.\n"},
  {"Begin", PyvtkSMDoubleMapPropertyIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: virtual void Begin()\n\nGo to the first item.\n"},
  {"IsAtEnd", PyvtkSMDoubleMapPropertyIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nReturns true if iterator points past the end of the collection.\n"},
  {"Next", PyvtkSMDoubleMapPropertyIterator_Next, METH_VARARGS,
   "V.Next()\nC++: virtual void Next()\n\nMove to the next item.\n"},
  {"GetKey", PyvtkSMDoubleMapPropertyIterator_GetKey, METH_VARARGS,
   "V.GetKey() -> int\nC++: virtual vtkIdType GetKey()\n\nReturns the key (index) at the current iterator position.\n"},
  {"GetElementComponent", PyvtkSMDoubleMapPropertyIterator_GetElementComponent, METH_VARARGS,
   "V.GetElementComponent(int) -> float\nC++: virtual double GetElementComponent(unsigned int component)\n\nReturns the value of the component for the current value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMDoubleMapPropertyIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerCorePython.vtkSMDoubleMapPropertyIterator", // tp_name
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
  PyvtkSMDoubleMapPropertyIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMDoubleMapPropertyIterator_StaticNew()
{
  return vtkSMDoubleMapPropertyIterator::New();
}

PyObject *PyvtkSMDoubleMapPropertyIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMDoubleMapPropertyIterator_Type, PyvtkSMDoubleMapPropertyIterator_Methods,
    "vtkSMDoubleMapPropertyIterator",
 &PyvtkSMDoubleMapPropertyIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkSMDoubleMapPropertyIterator_Type;

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

void PyVTKAddFile_vtkSMDoubleMapPropertyIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMDoubleMapPropertyIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMDoubleMapPropertyIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

