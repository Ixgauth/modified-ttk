// python wrapper for vtkIncrementalPointLocator
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
#include "vtkIncrementalPointLocator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalPointLocator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkIncrementalPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPointLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractPointLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractPointLocator_ClassNew
#endif

static const char *PyvtkIncrementalPointLocator_Doc =
  "vtkIncrementalPointLocator - Abstract class in support of both\n point location and point insertion.\n\n"
  "Superclass: vtkAbstractPointLocator\n\n"
  "Compared to a static point locator for pure location functionalities\n"
  " through some search structure established from a fixed set of\n"
  "points,\n"
  " an incremental point locator allows for, in addition, point\n"
  "insertion\n"
  " capabilities, with the search structure maintaining a dynamically\n"
  " increasing number of points. There are two incremental point\n"
  "locators,\n"
  " i.e., vtkPointLocator and vtkIncrementalOctreePointLocator. As\n"
  "opposed\n"
  " to the uniform bin-based search structure (adopted in\n"
  "vtkPointLocator)\n"
  " with a fixed spatial resolution, an octree mechanism (employed in\n"
  " vtkIncrementalOctreePointlocator) resorts to a hierarchy of\n"
  "tree-like\n"
  " sub-division of the 3D data domain. Thus it enables data-aware\n"
  "multi-\n"
  " resolution and accordingly accelerated point location as well as\n"
  "point\n"
  " insertion, particularly when handling a radically imbalanced layout\n"
  "of\n"
  " points as not uncommon in datasets defined on adaptive meshes. In\n"
  "other\n"
  " words, vtkIncrementalOctreePointLocator is an octree-based\n"
  "accelerated\n"
  " implementation of all functionalities of vtkPointLocator.\n\n"
  "@sa\n"
  " vtkLocator, vtkIncrementalOctreePointLocator, vtkPointLocator,\n"
  " vtkMergePoints vtkStaticPointLocator\n\n";


static PyObject *
PyvtkIncrementalPointLocator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalPointLocator *tempr = vtkIncrementalPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalPointLocator::NewInstance());

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
PyvtkIncrementalPointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = op->FindClosestInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    int tempr = op->InitPointInsertion(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    int tempr = op->InitPointInsertion(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return nullptr;
}



static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = op->IsInsertedPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = op->IsInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s1(self, args);
    case 1:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}



static PyObject *
PyvtkIncrementalPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->InsertUniquePoint(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->InsertPoint(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkIdType tempr = op->InsertNextPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIncrementalPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalPointLocator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard type and print methods.\n"},
  {"IsA", PyvtkIncrementalPointLocator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard type and print methods.\n"},
  {"SafeDownCast", PyvtkIncrementalPointLocator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkIncrementalPointLocator\nC++: static vtkIncrementalPointLocator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard type and print methods.\n"},
  {"NewInstance", PyvtkIncrementalPointLocator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *NewInstance()\n\nStandard type and print methods.\n"},
  {"FindClosestInsertedPoint", PyvtkIncrementalPointLocator_FindClosestInsertedPoint, METH_VARARGS,
   "V.FindClosestInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType FindClosestInsertedPoint(const double x[3])\n\nGiven a point x assumed to be covered by the search structure,\nreturn the index of the closest point (already inserted to the\nsearch structure) regardless of the associated minimum squared\ndistance relative to the squared insertion-tolerance distance.\nThis method is used when performing incremental point insertion.\nNote -1 indicates that no point is found. InitPointInsertion()\nshould have been called in advance.\n"},
  {"InitPointInsertion", PyvtkIncrementalPointLocator_InitPointInsertion, METH_VARARGS,
   "V.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float)) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6])\nV.InitPointInsertion(vtkPoints, (float, float, float, float,\n    float, float), int) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6], vtkIdType estSize)\n\nInitialize the point insertion process. newPts is an object,\nstoring 3D point coordinates, to which incremental point\ninsertion puts coordinates. It is created and provided by an\nexternal VTK class. Argument bounds represents the spatial\nbounding box, into which the points fall.\n"},
  {"IsInsertedPoint", PyvtkIncrementalPointLocator_IsInsertedPoint, METH_VARARGS,
   "V.IsInsertedPoint(float, float, float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double x, double y,\n    double z)\nV.IsInsertedPoint((float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double x[3])\n\nDetermine whether or not a given point has been inserted. Return\nthe id of the already inserted point if true, else return -1.\nInitPointInsertion() should have been called in advance.\n"},
  {"InsertUniquePoint", PyvtkIncrementalPointLocator_InsertUniquePoint, METH_VARARGS,
   "V.InsertUniquePoint((float, float, float), int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nInsert a point unless there has been a duplciate in the search\nstructure. This method is not thread safe.\n"},
  {"InsertPoint", PyvtkIncrementalPointLocator_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, (float, float, float))\nC++: virtual void InsertPoint(vtkIdType ptId, const double x[3])\n\nInsert a given point with a specified point index ptId.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {"InsertNextPoint", PyvtkIncrementalPointLocator_InsertNextPoint, METH_VARARGS,
   "V.InsertNextPoint((float, float, float)) -> int\nC++: virtual vtkIdType InsertNextPoint(const double x[3])\n\nInsert a given point and return the point index.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkIncrementalPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkIncrementalPointLocator", // tp_name
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
  PyvtkIncrementalPointLocator_Doc, // tp_doc
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

PyObject *PyvtkIncrementalPointLocator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkIncrementalPointLocator_Type, PyvtkIncrementalPointLocator_Methods,
    "vtkIncrementalPointLocator",
 nullptr);

  PyTypeObject *pytype = &PyvtkIncrementalPointLocator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIncrementalPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

