// python wrapper for vtkGenericCellTessellator
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
#include "vtkGenericCellTessellator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericCellTessellator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericCellTessellator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericCellTessellator_Doc =
  "vtkGenericCellTessellator - helper class to perform cell tessellation\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericCellTessellator is a helper class to perform adaptive\n"
  "tessellation of particular cell topologies. The major purpose for\n"
  "this class is to transform higher-order cell types (e.g.,\n"
  "higher-order finite elements) into linear cells that can then be\n"
  "easily visualized by VTK. This class works in conjunction with the\n"
  "vtkGenericDataSet and vtkGenericAdaptorCell classes.\n\n"
  "This algorithm is based on edge subdivision. An error metric along\n"
  "each edge is evaluated, and if the error is greater than some\n"
  "tolerance, the edge is subdivided (as well as all connected 2D and 3D\n"
  "cells). The process repeats until the error metric is satisfied.\n\n"
  "A significant issue addressed by this algorithm is to insure face\n"
  "compatibility across neigboring cells. That is, diagonals due to face\n"
  "triangulation must match to insure that the mesh is compatible. The\n"
  "algorithm employs a precomputed table to accelerate the tessellation\n"
  "process. The table was generated with the help of\n"
  "vtkOrderedTriangulator; the basic idea is that the choice of diagonal\n"
  "is made by considering the relative value of the point ids.\n\n";


static PyObject *
PyvtkGenericCellTessellator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericCellTessellator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericCellTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericCellTessellator *tempr = vtkGenericCellTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericCellTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericCellTessellator::NewInstance());

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
PyvtkGenericCellTessellator_TessellateFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TessellateFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkIdType temp2;
  vtkDoubleArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDoubleArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
  {
    op->TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Tessellate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tessellate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
  {
    op->Tessellate(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
  {
    op->Triangulate(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_SetErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetErrorMetrics(temp0);
    }
    else
    {
      op->vtkGenericCellTessellator::SetErrorMetrics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_GetErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetErrorMetrics() :
      op->vtkGenericCellTessellator::GetErrorMetrics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_InitErrorMetrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitErrorMetrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->InitErrorMetrics(temp0);
    }
    else
    {
      op->vtkGenericCellTessellator::InitErrorMetrics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_GetMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeasurement() :
      op->vtkGenericCellTessellator::GetMeasurement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_SetMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeasurement(temp0);
    }
    else
    {
      op->vtkGenericCellTessellator::SetMeasurement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellTessellator_GetMaxErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellTessellator *op = static_cast<vtkGenericCellTessellator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetMaxErrors(temp0);
    }
    else
    {
      op->vtkGenericCellTessellator::GetMaxErrors(temp0);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericCellTessellator_Methods[] = {
  {"IsTypeOf", PyvtkGenericCellTessellator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericCellTessellator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericCellTessellator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericCellTessellator\nC++: static vtkGenericCellTessellator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericCellTessellator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericCellTessellator\nC++: vtkGenericCellTessellator *NewInstance()\n\n"},
  {"TessellateFace", PyvtkGenericCellTessellator_TessellateFace, METH_VARARGS,
   "V.TessellateFace(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, int, vtkDoubleArray,\n    vtkCellArray, vtkPointData)\nC++: virtual void TessellateFace(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkIdType index,\n    vtkDoubleArray *points, vtkCellArray *cellArray,\n    vtkPointData *internalPd)\n\nTessellate a face of a 3D `cell'. The face is specified by the\nindex value. The result is a set of smaller linear triangles in\n`cellArray' with `points' and point data `internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre valid_index_range: (index>=0) &&\n    (index<cell->GetNumberOfBoundaries(2))\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"Tessellate", PyvtkGenericCellTessellator_Tessellate, METH_VARARGS,
   "V.Tessellate(vtkGenericAdaptorCell, vtkGenericAttributeCollection,\n     vtkDoubleArray, vtkCellArray, vtkPointData)\nC++: virtual void Tessellate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTessellate a 3D `cell'. The result is a set of smaller linear\ntetrahedra in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"Triangulate", PyvtkGenericCellTessellator_Triangulate, METH_VARARGS,
   "V.Triangulate(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, vtkDoubleArray, vtkCellArray,\n    vtkPointData)\nC++: virtual void Triangulate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd)\n\nTriangulate a 2D `cell'. The result is a set of smaller linear\ntriangles in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==2\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"SetErrorMetrics", PyvtkGenericCellTessellator_SetErrorMetrics, METH_VARARGS,
   "V.SetErrorMetrics(vtkCollection)\nC++: virtual void SetErrorMetrics(vtkCollection *someErrorMetrics)\n\nSpecify the list of error metrics used to decide if an edge has\nto be split or not. It is a collection of\nvtkGenericSubdivisionErrorMetric-s.\n"},
  {"GetErrorMetrics", PyvtkGenericCellTessellator_GetErrorMetrics, METH_VARARGS,
   "V.GetErrorMetrics() -> vtkCollection\nC++: virtual vtkCollection *GetErrorMetrics()\n\nSpecify the list of error metrics used to decide if an edge has\nto be split or not. It is a collection of\nvtkGenericSubdivisionErrorMetric-s.\n"},
  {"Initialize", PyvtkGenericCellTessellator_Initialize, METH_VARARGS,
   "V.Initialize(vtkGenericDataSet)\nC++: virtual void Initialize(vtkGenericDataSet *ds)\n\nInitialize the tessellator with a data set `ds'.\n"},
  {"InitErrorMetrics", PyvtkGenericCellTessellator_InitErrorMetrics, METH_VARARGS,
   "V.InitErrorMetrics(vtkGenericDataSet)\nC++: void InitErrorMetrics(vtkGenericDataSet *ds)\n\nInit the error metric with the dataset. Should be called in each\nfilter before any tessellation of any cell.\n"},
  {"GetMeasurement", PyvtkGenericCellTessellator_GetMeasurement, METH_VARARGS,
   "V.GetMeasurement() -> int\nC++: virtual int GetMeasurement()\n\nIf true, measure the quality of the fixed subdivision.\n"},
  {"SetMeasurement", PyvtkGenericCellTessellator_SetMeasurement, METH_VARARGS,
   "V.SetMeasurement(int)\nC++: virtual void SetMeasurement(int _arg)\n\nIf true, measure the quality of the fixed subdivision.\n"},
  {"GetMaxErrors", PyvtkGenericCellTessellator_GetMaxErrors, METH_VARARGS,
   "V.GetMaxErrors([float, ...])\nC++: void GetMaxErrors(double *errors)\n\nGet the maximum error measured after the fixed subdivision.\n\\pre errors_exists: errors!=0\n\\pre valid_size:\n    sizeof(errors)==GetErrorMetrics()->GetNumberOfItems()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericCellTessellator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericCellTessellator", // tp_name
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
  PyvtkGenericCellTessellator_Doc, // tp_doc
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

PyObject *PyvtkGenericCellTessellator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericCellTessellator_Type, PyvtkGenericCellTessellator_Methods,
    "vtkGenericCellTessellator",
 nullptr);

  PyTypeObject *pytype = &PyvtkGenericCellTessellator_Type;

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

void PyVTKAddFile_vtkGenericCellTessellator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericCellTessellator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericCellTessellator", o) != 0)
  {
    Py_DECREF(o);
  }

}

