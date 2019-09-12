// python wrapper for vtkCellIterator
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
#include "vtkCellIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCellIterator_Doc =
  "vtkCellIterator - Efficient cell iterator for vtkDataSet topologies.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCellIterator provides a method for traversing cells in a data set.\n"
  "Call the vtkDataSet::NewCellIterator() method to use this class.\n\n"
  "The cell is represented as a set of three pieces of information: The\n"
  "cell type, the ids of the points constituting the cell, and the\n"
  "points themselves. This iterator fetches these as needed. If only the\n"
  "cell type is used, the type is not looked up until GetCellType is\n"
  "called, and the point information is left uninitialized. This allows\n"
  "efficient screening of cells, since expensive point lookups may be\n"
  "skipped depending on the cell type/etc.\n\n"
  "An example usage of this class: ~~~ void myWorkerFunction(vtkDataSet\n"
  "*ds) {\n"
  "  vtkCellIterator *it = ds->NewCellIterator();\n"
  "  for (it->InitTraversal(); !it->IsDoneWithTraversal();\n"
  "it->GoToNextCell())\n"
  "    {\n"
  "    if (it->GetCellType() != VTK_TETRA)\n"
  "      {\n"
  "      continue; // Skip non-tetrahedral cells\n"
  "      }\n\n\n"
  "    vtkIdList *pointIds = it->GetPointIds();\n"
  "    // Do screening on the point ids, maybe figure out scalar range\n"
  "and skip\n"
  "       cells that do not lie in a certain range?\n\n\n"
  "    vtkPoints *points = it->GetPoints();\n"
  "    // Do work using the cell points, or ...\n\n\n"
  "    vtkGenericCell *cell = ...;\n"
  "    it->GetCell(cell);\n"
  "    // ... do work with a vtkCell.\n"
  "    }\n"
  "  it->Delete(); } ~~~\n\n"
  "The example above pulls in bits of information as needed to filter\n"
  "out cells that aren't relevant. The least expensive lookups are\n"
  "performed first (cell type, then point ids, then points/full cell) to\n"
  "prevent wasted cycles fetching unnecessary data. Also note that at\n"
  "the end of the loop, the iterator must be deleted as these iterators\n"
  "are vtkObject subclasses.\n\n";


static PyObject *
PyvtkCellIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellIterator *tempr = vtkCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellIterator::NewInstance());

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
PyvtkCellIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCellIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GoToNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextCell();
    }
    else
    {
      op->vtkCellIterator::GoToNextCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsDoneWithTraversal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkCellIterator::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkCellIterator::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetCellId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkCellIterator::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkCellIterator::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkCellIterator::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  vtkGenericCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0);
    }
    else
    {
      op->vtkCellIterator::GetCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkCellIterator::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellIterator_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellIterator *op = static_cast<vtkCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkCellIterator::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellIterator_Methods[] = {
  {"IsTypeOf", PyvtkCellIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellIterator\nC++: static vtkCellIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellIterator\nC++: vtkCellIterator *NewInstance()\n\n"},
  {"InitTraversal", PyvtkCellIterator_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: void InitTraversal()\n\nReset to the first cell.\n"},
  {"GoToNextCell", PyvtkCellIterator_GoToNextCell, METH_VARARGS,
   "V.GoToNextCell()\nC++: void GoToNextCell()\n\nIncrement to next cell. Always safe to call.\n"},
  {"IsDoneWithTraversal", PyvtkCellIterator_IsDoneWithTraversal, METH_VARARGS,
   "V.IsDoneWithTraversal() -> bool\nC++: virtual bool IsDoneWithTraversal()\n\nReturns false while the iterator is valid. Always safe to call.\n"},
  {"GetCellType", PyvtkCellIterator_GetCellType, METH_VARARGS,
   "V.GetCellType() -> int\nC++: int GetCellType()\n\nGet the current cell type (e.g. VTK_LINE, VTK_VERTEX, VTK_TETRA,\netc). This should only be called when IsDoneWithTraversal()\nreturns false.\n"},
  {"GetCellDimension", PyvtkCellIterator_GetCellDimension, METH_VARARGS,
   "V.GetCellDimension() -> int\nC++: int GetCellDimension()\n\nGet the current cell dimension (0, 1, 2, or 3). This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {"GetCellId", PyvtkCellIterator_GetCellId, METH_VARARGS,
   "V.GetCellId() -> int\nC++: virtual vtkIdType GetCellId()\n\nGet the id of the current cell.\n"},
  {"GetPointIds", PyvtkCellIterator_GetPointIds, METH_VARARGS,
   "V.GetPointIds() -> vtkIdList\nC++: vtkIdList *GetPointIds()\n\nGet the ids of the points in the current cell. This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {"GetPoints", PyvtkCellIterator_GetPoints, METH_VARARGS,
   "V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nGet the points in the current cell. This is usually a very\nexpensive call, and should be avoided when possible. This should\nonly be called when IsDoneWithTraversal() returns false.\n"},
  {"GetFaces", PyvtkCellIterator_GetFaces, METH_VARARGS,
   "V.GetFaces() -> vtkIdList\nC++: vtkIdList *GetFaces()\n\nGet the faces for a polyhedral cell. This is only valid when\nCellType is VTK_POLYHEDRON.\n"},
  {"GetCell", PyvtkCellIterator_GetCell, METH_VARARGS,
   "V.GetCell(vtkGenericCell)\nC++: void GetCell(vtkGenericCell *cell)\n\nWrite the current full cell information into the argument. This\nis usually a very expensive call, and should be avoided when\npossible. This should only be called when IsDoneWithTraversal()\nreturns false.\n"},
  {"GetNumberOfPoints", PyvtkCellIterator_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn the number of points in the current cell. This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {"GetNumberOfFaces", PyvtkCellIterator_GetNumberOfFaces, METH_VARARGS,
   "V.GetNumberOfFaces() -> int\nC++: vtkIdType GetNumberOfFaces()\n\nReturn the number of faces in the current cell. This should only\nbe called when IsDoneWithTraversal() returns false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkCellIterator", // tp_name
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
  PyvtkCellIterator_Doc, // tp_doc
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

PyObject *PyvtkCellIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellIterator_Type, PyvtkCellIterator_Methods,
    "vtkCellIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkCellIterator_Type;

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

void PyVTKAddFile_vtkCellIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

