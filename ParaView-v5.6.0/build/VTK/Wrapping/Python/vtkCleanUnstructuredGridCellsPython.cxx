// python wrapper for vtkCleanUnstructuredGridCells
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
#include "vtkCleanUnstructuredGridCells.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCleanUnstructuredGridCells(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCleanUnstructuredGridCells_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkCleanUnstructuredGridCells_Doc =
  "vtkCleanUnstructuredGridCells - remove duplicate/degenerate cells\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Merges degenerate cells. Assumes the input grid does not contain\n"
  "duplicate points. You may want to run vtkCleanUnstructuredGrid first\n"
  "to assert it. If duplicated cells are found they are removed in the\n"
  "output. The filter also handles the case, where a cell may contain\n"
  "degenerate nodes (i.e. one and the same node is referenced by a cell\n"
  "more than once).\n\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";


static PyObject *
PyvtkCleanUnstructuredGridCells_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCleanUnstructuredGridCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGridCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGridCells *op = static_cast<vtkCleanUnstructuredGridCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCleanUnstructuredGridCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGridCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCleanUnstructuredGridCells *tempr = vtkCleanUnstructuredGridCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCleanUnstructuredGridCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCleanUnstructuredGridCells *op = static_cast<vtkCleanUnstructuredGridCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCleanUnstructuredGridCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCleanUnstructuredGridCells::NewInstance());

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

static PyMethodDef PyvtkCleanUnstructuredGridCells_Methods[] = {
  {"IsTypeOf", PyvtkCleanUnstructuredGridCells_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCleanUnstructuredGridCells_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCleanUnstructuredGridCells_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCleanUnstructuredGridCells\nC++: static vtkCleanUnstructuredGridCells *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCleanUnstructuredGridCells_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCleanUnstructuredGridCells\nC++: vtkCleanUnstructuredGridCells *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCleanUnstructuredGridCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkCleanUnstructuredGridCells", // tp_name
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
  PyvtkCleanUnstructuredGridCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCleanUnstructuredGridCells_StaticNew()
{
  return vtkCleanUnstructuredGridCells::New();
}

PyObject *PyvtkCleanUnstructuredGridCells_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCleanUnstructuredGridCells_Type, PyvtkCleanUnstructuredGridCells_Methods,
    "vtkCleanUnstructuredGridCells",
 &PyvtkCleanUnstructuredGridCells_StaticNew);

  PyTypeObject *pytype = &PyvtkCleanUnstructuredGridCells_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCleanUnstructuredGridCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCleanUnstructuredGridCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCleanUnstructuredGridCells", o) != 0)
  {
    Py_DECREF(o);
  }

}
