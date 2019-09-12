// python wrapper for vtkGraphInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkGraphInternals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphInternals(PyObject *); }

static const char *PyvtkVertexAdjacencyList_Doc =
  "vtkVertexAdjacencyList - no description provided.\n\n"

  "vtkVertexAdjacencyList()\n"
  "vtkVertexAdjacencyList(const &vtkVertexAdjacencyList)\n";

static PyMethodDef PyvtkVertexAdjacencyList_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVertexAdjacencyList");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVertexAdjacencyList *op = new vtkVertexAdjacencyList();

    result = PyVTKSpecialObject_New("vtkVertexAdjacencyList", op);
  }

  return result;
}

static PyObject *
PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkVertexAdjacencyList");

  vtkVertexAdjacencyList *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVertexAdjacencyList"))
  {
    vtkVertexAdjacencyList *op = new vtkVertexAdjacencyList(*temp0);

    result = PyVTKSpecialObject_New("vtkVertexAdjacencyList", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_Methods[] = {
  {nullptr, PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_s2, METH_VARARGS,
   "@W vtkVertexAdjacencyList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkVertexAdjacencyList_vtkVertexAdjacencyList(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_s1(self, args);
    case 1:
      return PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkVertexAdjacencyList");
  return nullptr;
}


static PyObject *
PyvtkVertexAdjacencyList_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkVertexAdjacencyList_vtkVertexAdjacencyList(nullptr, args);
}

static void PyvtkVertexAdjacencyList_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkVertexAdjacencyList *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkVertexAdjacencyList_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkVertexAdjacencyList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkVertexAdjacencyList", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkVertexAdjacencyList_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkVertexAdjacencyList_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkVertexAdjacencyList_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkVertexAdjacencyList_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkVertexAdjacencyList_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkVertexAdjacencyList(*static_cast<const vtkVertexAdjacencyList*>(obj));
  }
  return 0;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVertexAdjacencyList_TypeNew(); }

PyObject *PyvtkVertexAdjacencyList_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkVertexAdjacencyList_Type,
    PyvtkVertexAdjacencyList_Methods,
    PyvtkVertexAdjacencyList_vtkVertexAdjacencyList_Methods,
    &PyvtkVertexAdjacencyList_CCopy);

  PyTypeObject *pytype = &PyvtkVertexAdjacencyList_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphInternals_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGraphInternals_Doc =
  "vtkGraphInternals - Internal representation of vtkGraph\n\n"
  "Superclass: vtkObject\n\n"
  "This is the internal representation of vtkGraph, used only in rare\n"
  "cases where one must modify that representation.\n\n";


static PyObject *
PyvtkGraphInternals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphInternals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphInternals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphInternals *op = static_cast<vtkGraphInternals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphInternals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphInternals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphInternals *tempr = vtkGraphInternals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphInternals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphInternals *op = static_cast<vtkGraphInternals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphInternals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphInternals::NewInstance());

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

static PyMethodDef PyvtkGraphInternals_Methods[] = {
  {"IsTypeOf", PyvtkGraphInternals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphInternals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphInternals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphInternals\nC++: static vtkGraphInternals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphInternals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphInternals\nC++: vtkGraphInternals *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGraphInternals", // tp_name
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
  PyvtkGraphInternals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphInternals_StaticNew()
{
  return vtkGraphInternals::New();
}

PyObject *PyvtkGraphInternals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphInternals_Type, PyvtkGraphInternals_Methods,
    "vtkGraphInternals",
 &PyvtkGraphInternals_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphInternals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVertexAdjacencyList_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkVertexAdjacencyList", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkGraphInternals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

