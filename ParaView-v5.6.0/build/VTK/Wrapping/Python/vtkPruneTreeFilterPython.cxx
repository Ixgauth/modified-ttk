// python wrapper for vtkPruneTreeFilter
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
#include "vtkPruneTreeFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPruneTreeFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPruneTreeFilter_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTreeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTreeAlgorithm_ClassNew
#endif

static const char *PyvtkPruneTreeFilter_Doc =
  "vtkPruneTreeFilter - prune a subtree out of a vtkTree\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "Removes a subtree rooted at a particular vertex in a vtkTree.\n\n";


static PyObject *
PyvtkPruneTreeFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPruneTreeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPruneTreeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPruneTreeFilter *tempr = vtkPruneTreeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPruneTreeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPruneTreeFilter::NewInstance());

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
PyvtkPruneTreeFilter_GetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParentVertex() :
      op->vtkPruneTreeFilter::GetParentVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SetParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentVertex(temp0);
    }
    else
    {
      op->vtkPruneTreeFilter::SetParentVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_GetShouldPruneParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShouldPruneParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShouldPruneParentVertex() :
      op->vtkPruneTreeFilter::GetShouldPruneParentVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPruneTreeFilter_SetShouldPruneParentVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShouldPruneParentVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPruneTreeFilter *op = static_cast<vtkPruneTreeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShouldPruneParentVertex(temp0);
    }
    else
    {
      op->vtkPruneTreeFilter::SetShouldPruneParentVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPruneTreeFilter_Methods[] = {
  {"IsTypeOf", PyvtkPruneTreeFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPruneTreeFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPruneTreeFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPruneTreeFilter\nC++: static vtkPruneTreeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPruneTreeFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPruneTreeFilter\nC++: vtkPruneTreeFilter *NewInstance()\n\n"},
  {"GetParentVertex", PyvtkPruneTreeFilter_GetParentVertex, METH_VARARGS,
   "V.GetParentVertex() -> int\nC++: virtual vtkIdType GetParentVertex()\n\nSet the parent vertex of the subtree to remove.\n"},
  {"SetParentVertex", PyvtkPruneTreeFilter_SetParentVertex, METH_VARARGS,
   "V.SetParentVertex(int)\nC++: virtual void SetParentVertex(vtkIdType _arg)\n\nSet the parent vertex of the subtree to remove.\n"},
  {"GetShouldPruneParentVertex", PyvtkPruneTreeFilter_GetShouldPruneParentVertex, METH_VARARGS,
   "V.GetShouldPruneParentVertex() -> bool\nC++: virtual bool GetShouldPruneParentVertex()\n\nShould we remove the parent vertex, or just its descendants?\nDefault behavior is to remove the parent vertex.\n"},
  {"SetShouldPruneParentVertex", PyvtkPruneTreeFilter_SetShouldPruneParentVertex, METH_VARARGS,
   "V.SetShouldPruneParentVertex(bool)\nC++: virtual void SetShouldPruneParentVertex(bool _arg)\n\nShould we remove the parent vertex, or just its descendants?\nDefault behavior is to remove the parent vertex.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPruneTreeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkPruneTreeFilter", // tp_name
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
  PyvtkPruneTreeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPruneTreeFilter_StaticNew()
{
  return vtkPruneTreeFilter::New();
}

PyObject *PyvtkPruneTreeFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPruneTreeFilter_Type, PyvtkPruneTreeFilter_Methods,
    "vtkPruneTreeFilter",
 &PyvtkPruneTreeFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkPruneTreeFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPruneTreeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPruneTreeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPruneTreeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

