// python wrapper for vtkDataArrayCollectionIterator
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
#include "vtkDataArrayCollectionIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataArrayCollectionIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataArrayCollectionIterator_ClassNew(); }

#ifndef DECLARED_PyvtkCollectionIterator_ClassNew
extern "C" { PyObject *PyvtkCollectionIterator_ClassNew(); }
#define DECLARED_PyvtkCollectionIterator_ClassNew
#endif

static const char *PyvtkDataArrayCollectionIterator_Doc =
  "vtkDataArrayCollectionIterator - iterator through a\nvtkDataArrayCollection.\n\n"
  "Superclass: vtkCollectionIterator\n\n"
  "vtkDataArrayCollectionIterator provides an implementation of\n"
  "vtkCollectionIterator which allows the items to be retrieved with the\n"
  "proper subclass pointer type for vtkDataArrayCollection.\n\n";


static PyObject *
PyvtkDataArrayCollectionIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataArrayCollectionIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArrayCollectionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataArrayCollectionIterator *tempr = vtkDataArrayCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArrayCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArrayCollectionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArrayCollectionIterator::NewInstance());

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
PyvtkDataArrayCollectionIterator_SetCollection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetCollection(temp0);
    }
    else
    {
      op->vtkDataArrayCollectionIterator::SetCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArrayCollectionIterator_SetCollection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  vtkDataArrayCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArrayCollection"))
  {
    if (ap.IsBound())
    {
      op->SetCollection(temp0);
    }
    else
    {
      op->vtkDataArrayCollectionIterator::SetCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArrayCollectionIterator_SetCollection_Methods[] = {
  {nullptr, PyvtkDataArrayCollectionIterator_SetCollection_s1, METH_VARARGS,
   "@V *vtkCollection"},
  {nullptr, PyvtkDataArrayCollectionIterator_SetCollection_s2, METH_VARARGS,
   "@V *vtkDataArrayCollection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArrayCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArrayCollectionIterator_SetCollection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCollection");
  return nullptr;
}



static PyObject *
PyvtkDataArrayCollectionIterator_GetDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArrayCollectionIterator *op = static_cast<vtkDataArrayCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetDataArray() :
      op->vtkDataArrayCollectionIterator::GetDataArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArrayCollectionIterator_Methods[] = {
  {"IsTypeOf", PyvtkDataArrayCollectionIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataArrayCollectionIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataArrayCollectionIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataArrayCollectionIterator\nC++: static vtkDataArrayCollectionIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataArrayCollectionIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataArrayCollectionIterator\nC++: vtkDataArrayCollectionIterator *NewInstance()\n\n"},
  {"SetCollection", PyvtkDataArrayCollectionIterator_SetCollection, METH_VARARGS,
   "V.SetCollection(vtkCollection)\nC++: void SetCollection(vtkCollection *) override;\nV.SetCollection(vtkDataArrayCollection)\nC++: void SetCollection(vtkDataArrayCollection *)\n\nSet the collection over which to iterate.\n"},
  {"GetDataArray", PyvtkDataArrayCollectionIterator_GetDataArray, METH_VARARGS,
   "V.GetDataArray() -> vtkDataArray\nC++: vtkDataArray *GetDataArray()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataArrayCollectionIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkDataArrayCollectionIterator", // tp_name
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
  PyvtkDataArrayCollectionIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataArrayCollectionIterator_StaticNew()
{
  return vtkDataArrayCollectionIterator::New();
}

PyObject *PyvtkDataArrayCollectionIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataArrayCollectionIterator_Type, PyvtkDataArrayCollectionIterator_Methods,
    "vtkDataArrayCollectionIterator",
 &PyvtkDataArrayCollectionIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkDataArrayCollectionIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCollectionIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataArrayCollectionIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataArrayCollectionIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataArrayCollectionIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

