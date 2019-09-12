// python wrapper for vtkGroupLeafVertices
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
#include "vtkGroupLeafVertices.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGroupLeafVertices(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGroupLeafVertices_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTreeAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTreeAlgorithm_ClassNew
#endif

static const char *PyvtkGroupLeafVertices_Doc =
  "vtkGroupLeafVertices - Filter that expands a tree, categorizing leaf\nvertices\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "Use SetInputArrayToProcess(0, ...) to set the array to group on.\n"
  "Currently this array must be a vtkStringArray.\n\n";


static PyObject *
PyvtkGroupLeafVertices_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGroupLeafVertices::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGroupLeafVertices::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGroupLeafVertices *tempr = vtkGroupLeafVertices::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGroupLeafVertices *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGroupLeafVertices::NewInstance());

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
PyvtkGroupLeafVertices_SetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGroupDomain(temp0);
    }
    else
    {
      op->vtkGroupLeafVertices::SetGroupDomain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupLeafVertices_GetGroupDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupLeafVertices *op = static_cast<vtkGroupLeafVertices *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGroupDomain() :
      op->vtkGroupLeafVertices::GetGroupDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGroupLeafVertices_Methods[] = {
  {"IsTypeOf", PyvtkGroupLeafVertices_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGroupLeafVertices_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGroupLeafVertices_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGroupLeafVertices\nC++: static vtkGroupLeafVertices *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGroupLeafVertices_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGroupLeafVertices\nC++: vtkGroupLeafVertices *NewInstance()\n\n"},
  {"SetGroupDomain", PyvtkGroupLeafVertices_SetGroupDomain, METH_VARARGS,
   "V.SetGroupDomain(string)\nC++: virtual void SetGroupDomain(const char *_arg)\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {"GetGroupDomain", PyvtkGroupLeafVertices_GetGroupDomain, METH_VARARGS,
   "V.GetGroupDomain() -> string\nC++: virtual char *GetGroupDomain()\n\nThe name of the domain that non-leaf vertices will be assigned\nto. If the input graph already contains vertices in this domain:\n- If the ids for this domain are numeric, starts assignment with\n  max id\n- If the ids for this domain are strings, starts assignment with \"group\n  X\" where \"X\" is the max id. Default is \"group_vertex\".\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGroupLeafVertices_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkGroupLeafVertices", // tp_name
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
  PyvtkGroupLeafVertices_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGroupLeafVertices_StaticNew()
{
  return vtkGroupLeafVertices::New();
}

PyObject *PyvtkGroupLeafVertices_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGroupLeafVertices_Type, PyvtkGroupLeafVertices_Methods,
    "vtkGroupLeafVertices",
 &PyvtkGroupLeafVertices_StaticNew);

  PyTypeObject *pytype = &PyvtkGroupLeafVertices_Type;

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

void PyVTKAddFile_vtkGroupLeafVertices(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGroupLeafVertices_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGroupLeafVertices", o) != 0)
  {
    Py_DECREF(o);
  }

}

