// python wrapper for vtkDataSetCellIterator
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
#include "vtkDataSetCellIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetCellIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetCellIterator_ClassNew(); }

#ifndef DECLARED_PyvtkCellIterator_ClassNew
extern "C" { PyObject *PyvtkCellIterator_ClassNew(); }
#define DECLARED_PyvtkCellIterator_ClassNew
#endif

static const char *PyvtkDataSetCellIterator_Doc =
  "vtkDataSetCellIterator - Implementation of vtkCellIterator using\nvtkDataSet API.\n\n"
  "Superclass: vtkCellIterator\n\n"
;


static PyObject *
PyvtkDataSetCellIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetCellIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetCellIterator *tempr = vtkDataSetCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetCellIterator::NewInstance());

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
PyvtkDataSetCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkDataSetCellIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetCellIterator *op = static_cast<vtkDataSetCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCellId() :
      op->vtkDataSetCellIterator::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetCellIterator_Methods[] = {
  {"IsTypeOf", PyvtkDataSetCellIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetCellIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetCellIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetCellIterator\nC++: static vtkDataSetCellIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetCellIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetCellIterator\nC++: vtkDataSetCellIterator *NewInstance()\n\n"},
  {"IsDoneWithTraversal", PyvtkDataSetCellIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> bool\nC++: bool IsDoneWithTraversal() override;\n\nReturns false while the iterator is valid. Always safe to call.\n"},
  {"GetCellId", PyvtkDataSetCellIterator_GetCellId, METH_VARARGS,
   "V.GetCellId() -> int\nC++: vtkIdType GetCellId() override;\n\nGet the id of the current cell.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetCellIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDataSetCellIterator", // tp_name
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
  PyvtkDataSetCellIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetCellIterator_StaticNew()
{
  return vtkDataSetCellIterator::New();
}

PyObject *PyvtkDataSetCellIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetCellIterator_Type, PyvtkDataSetCellIterator_Methods,
    "vtkDataSetCellIterator",
 &PyvtkDataSetCellIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetCellIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCellIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetCellIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetCellIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetCellIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}
