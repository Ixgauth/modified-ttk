// python wrapper for vtkExtractCells
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
#include "vtkExtractCells.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractCells(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractCells_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkExtractCells_Doc =
  "vtkExtractCells - subset a vtkDataSet to create a vtkUnstructuredGrid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Given a vtkDataSet and a list of cell Ids, create a\n"
  "vtkUnstructuredGrid\n"
  "   composed of these cells.  If the cell list is empty when\n"
  "vtkExtractCells\n"
  "   executes, it will set up the ugrid, point and cell arrays, with no\n"
  "points,\n"
  "   cells or data.\n\n";


static PyObject *
PyvtkExtractCells_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractCells *tempr = vtkExtractCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCells::NewInstance());

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
PyvtkExtractCells_SetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->SetCellList(temp0);
    }
    else
    {
      op->vtkExtractCells::SetCellList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->AddCellList(temp0);
    }
    else
    {
      op->vtkExtractCells::AddCellList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCellRange(temp0, temp1);
    }
    else
    {
      op->vtkExtractCells::AddCellRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractCells::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractCells_Methods[] = {
  {"IsTypeOf", PyvtkExtractCells_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractCells_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractCells_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractCells\nC++: static vtkExtractCells *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractCells_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractCells\nC++: vtkExtractCells *NewInstance()\n\n"},
  {"SetCellList", PyvtkExtractCells_SetCellList, METH_VARARGS,
   "V.SetCellList(vtkIdList)\nC++: void SetCellList(vtkIdList *l)\n\nSet the list of cell IDs that the output vtkUnstructuredGrid will\nbe composed of.  Replaces any other cell ID list supplied so far.\n (Set to nullptr to free memory used by cell list.)\n"},
  {"AddCellList", PyvtkExtractCells_AddCellList, METH_VARARGS,
   "V.AddCellList(vtkIdList)\nC++: void AddCellList(vtkIdList *l)\n\nAdd the supplied list of cell IDs to those that will be included\nin the output vtkUnstructuredGrid.\n"},
  {"AddCellRange", PyvtkExtractCells_AddCellRange, METH_VARARGS,
   "V.AddCellRange(int, int)\nC++: void AddCellRange(vtkIdType from, vtkIdType to)\n\nAdd this range of cell IDs to those that will be included in the\noutput vtkUnstructuredGrid.\n"},
  {"GetMTime", PyvtkExtractCells_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractCells", // tp_name
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
  PyvtkExtractCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractCells_StaticNew()
{
  return vtkExtractCells::New();
}

PyObject *PyvtkExtractCells_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractCells_Type, PyvtkExtractCells_Methods,
    "vtkExtractCells",
 &PyvtkExtractCells_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractCells_Type;

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

void PyVTKAddFile_vtkExtractCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractCells", o) != 0)
  {
    Py_DECREF(o);
  }

}

