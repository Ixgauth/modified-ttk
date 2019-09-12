// python wrapper for vtkCellCenterDepthSort
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
#include "vtkCellCenterDepthSort.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellCenterDepthSort(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCellCenterDepthSort_ClassNew(); }

#ifndef DECLARED_PyvtkVisibilitySort_ClassNew
extern "C" { PyObject *PyvtkVisibilitySort_ClassNew(); }
#define DECLARED_PyvtkVisibilitySort_ClassNew
#endif

static const char *PyvtkCellCenterDepthSort_Doc =
  "vtkCellCenterDepthSort - A simple implementation of vtkCellDepthSort.\n\n"
  "Superclass: vtkVisibilitySort\n\n"
  "vtkCellCenterDepthSort is a simple and fast implementation of depth\n"
  "sort, but it only provides approximate results.  The sorting\n"
  "algorithm finds the centroids of all the cells.  It then performs the\n"
  "dot product of the centroids against a vector pointing in the\n"
  "direction of the camera transformed into object space.  It then\n"
  "performs an ordinary sort on the result.\n\n";


static PyObject *
PyvtkCellCenterDepthSort_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellCenterDepthSort::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCenterDepthSort::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellCenterDepthSort *tempr = vtkCellCenterDepthSort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellCenterDepthSort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCenterDepthSort::NewInstance());

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
PyvtkCellCenterDepthSort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCellCenterDepthSort::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCenterDepthSort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCenterDepthSort *op = static_cast<vtkCellCenterDepthSort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetNextCells() :
      op->vtkCellCenterDepthSort::GetNextCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellCenterDepthSort_Methods[] = {
  {"IsTypeOf", PyvtkCellCenterDepthSort_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellCenterDepthSort_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellCenterDepthSort_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCellCenterDepthSort\nC++: static vtkCellCenterDepthSort *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellCenterDepthSort_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCellCenterDepthSort\nC++: vtkCellCenterDepthSort *NewInstance()\n\n"},
  {"InitTraversal", PyvtkCellCenterDepthSort_InitTraversal, METH_VARARGS,
   "V.InitTraversal()\nC++: void InitTraversal() override;\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {"GetNextCells", PyvtkCellCenterDepthSort_GetNextCells, METH_VARARGS,
   "V.GetNextCells() -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetNextCells() override;\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCellCenterDepthSort_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkCellCenterDepthSort", // tp_name
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
  PyvtkCellCenterDepthSort_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellCenterDepthSort_StaticNew()
{
  return vtkCellCenterDepthSort::New();
}

PyObject *PyvtkCellCenterDepthSort_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCellCenterDepthSort_Type, PyvtkCellCenterDepthSort_Methods,
    "vtkCellCenterDepthSort",
 &PyvtkCellCenterDepthSort_StaticNew);

  PyTypeObject *pytype = &PyvtkCellCenterDepthSort_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkVisibilitySort_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellCenterDepthSort(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellCenterDepthSort_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellCenterDepthSort", o) != 0)
  {
    Py_DECREF(o);
  }

}

