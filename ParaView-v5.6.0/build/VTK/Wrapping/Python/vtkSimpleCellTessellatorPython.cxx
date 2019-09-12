// python wrapper for vtkSimpleCellTessellator
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
#include "vtkSimpleCellTessellator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleCellTessellator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleCellTessellator_ClassNew(); }

#ifndef DECLARED_PyvtkGenericCellTessellator_ClassNew
extern "C" { PyObject *PyvtkGenericCellTessellator_ClassNew(); }
#define DECLARED_PyvtkGenericCellTessellator_ClassNew
#endif

static const char *PyvtkSimpleCellTessellator_Doc =
  "vtkSimpleCellTessellator - helper class to perform cell tessellation\n\n"
  "Superclass: vtkGenericCellTessellator\n\n"
  "vtkSimpleCellTessellator is a helper class to perform adaptive\n"
  "tessellation of particular cell topologies. The major purpose for\n"
  "this class is to transform higher-order cell types (e.g.,\n"
  "higher-order finite elements) into linear cells that can then be\n"
  "easily visualized by VTK. This class works in conjunction with the\n"
  "vtkGenericDataSet and vtkGenericAdaptorCell classes.\n\n"
  "This algorithm is based on edge subdivision. An error metric along\n"
  "each edge is evaluated, and if the error is greater than some\n"
  "tolerance, the edge is subdivided (as well as all connected 2D and 3D\n"
  "cells). The process repeats until the error metric is satisfied.\n"
  "Since the algorithm is based on edge subdivision it inherently avoid\n"
  "T-junctions.\n\n"
  "A significant issue addressed by this algorithm is to insure face\n"
  "compatibility across neigboring cells. That is, diagonals due to face\n"
  "triangulation must match to insure that the mesh is compatible. The\n"
  "algorithm employs a precomputed table to accelerate the tessellation\n"
  "process. The table was generated with the help of\n"
  "vtkOrderedTriangulator the basic idea is that the choice of diagonal\n"
  "is made only by considering the relative value of the point ids.\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n"
  "vtkAttributesErrorMetric vtkGeometricErrorMetric\n"
  "vtkViewDependentErrorMetric\n\n";


static PyObject *
PyvtkSimpleCellTessellator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleCellTessellator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleCellTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleCellTessellator *tempr = vtkSimpleCellTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleCellTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleCellTessellator::NewInstance());

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
PyvtkSimpleCellTessellator_GetGenericCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAdaptorCell *tempr = (ap.IsBound() ?
      op->GetGenericCell() :
      op->vtkSimpleCellTessellator::GetGenericCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_TessellateFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TessellateFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkIdType temp2;
  vtkDoubleArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDoubleArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSimpleCellTessellator::TessellateFace(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Tessellate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tessellate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Tessellate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSimpleCellTessellator::Tessellate(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  vtkGenericAttributeCollection *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetVTKObject(temp1, "vtkGenericAttributeCollection") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Triangulate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSimpleCellTessellator::Triangulate(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkSimpleCellTessellator::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  vtkGenericDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericDataSet"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkSimpleCellTessellator::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetFixedSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedSubdivisions() :
      op->vtkSimpleCellTessellator::GetFixedSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetMaxSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxSubdivisionLevel() :
      op->vtkSimpleCellTessellator::GetMaxSubdivisionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_GetMaxAdaptiveSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxAdaptiveSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxAdaptiveSubdivisions() :
      op->vtkSimpleCellTessellator::GetMaxAdaptiveSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetFixedSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedSubdivisions(temp0);
    }
    else
    {
      op->vtkSimpleCellTessellator::SetFixedSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetMaxSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxSubdivisionLevel(temp0);
    }
    else
    {
      op->vtkSimpleCellTessellator::SetMaxSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCellTessellator_SetSubdivisionLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleCellTessellator *op = static_cast<vtkSimpleCellTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSubdivisionLevels(temp0, temp1);
    }
    else
    {
      op->vtkSimpleCellTessellator::SetSubdivisionLevels(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleCellTessellator_Methods[] = {
  {"IsTypeOf", PyvtkSimpleCellTessellator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleCellTessellator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleCellTessellator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSimpleCellTessellator\nC++: static vtkSimpleCellTessellator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleCellTessellator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSimpleCellTessellator\nC++: vtkSimpleCellTessellator *NewInstance()\n\n"},
  {"GetGenericCell", PyvtkSimpleCellTessellator_GetGenericCell, METH_VARARGS,
   "V.GetGenericCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *GetGenericCell()\n\nGet the higher order cell in order to access the evaluation\nfunction.\n"},
  {"TessellateFace", PyvtkSimpleCellTessellator_TessellateFace, METH_VARARGS,
   "V.TessellateFace(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, int, vtkDoubleArray,\n    vtkCellArray, vtkPointData)\nC++: void TessellateFace(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkIdType index,\n    vtkDoubleArray *points, vtkCellArray *cellArray,\n    vtkPointData *internalPd) override;\n\nTessellate a face of a 3D `cell'. The face is specified by the\nindex value. The result is a set of smaller linear triangles in\n`cellArray' with `points' and point data `internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre valid_index_range: (index>=0) &&\n    (index<cell->GetNumberOfBoundaries(2))\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"Tessellate", PyvtkSimpleCellTessellator_Tessellate, METH_VARARGS,
   "V.Tessellate(vtkGenericAdaptorCell, vtkGenericAttributeCollection,\n     vtkDoubleArray, vtkCellArray, vtkPointData)\nC++: void Tessellate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd) override;\n\nTessellate a 3D `cell'. The result is a set of smaller linear\ntetrahedra in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==3\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"Triangulate", PyvtkSimpleCellTessellator_Triangulate, METH_VARARGS,
   "V.Triangulate(vtkGenericAdaptorCell,\n    vtkGenericAttributeCollection, vtkDoubleArray, vtkCellArray,\n    vtkPointData)\nC++: void Triangulate(vtkGenericAdaptorCell *cell,\n    vtkGenericAttributeCollection *att, vtkDoubleArray *points,\n    vtkCellArray *cellArray, vtkPointData *internalPd) override;\n\nTriangulate a 2D `cell'. The result is a set of smaller linear\ntriangles in `cellArray' with `points' and point data\n`internalPd'.\n\\pre cell_exists: cell!=0\n\\pre valid_dimension: cell->GetDimension()==2\n\\pre att_exists: att!=0\n\\pre points_exists: points!=0\n\\pre cellArray_exists: cellArray!=0\n\\pre internalPd_exists: internalPd!=0\n"},
  {"Reset", PyvtkSimpleCellTessellator_Reset, METH_VARARGS,
   "V.Reset()\nC++: void Reset()\n\nReset the output for repeated use of this class.\n"},
  {"Initialize", PyvtkSimpleCellTessellator_Initialize, METH_VARARGS,
   "V.Initialize(vtkGenericDataSet)\nC++: void Initialize(vtkGenericDataSet *ds) override;\n\nInitialize the tessellator with a data set `ds'.\n"},
  {"GetFixedSubdivisions", PyvtkSimpleCellTessellator_GetFixedSubdivisions, METH_VARARGS,
   "V.GetFixedSubdivisions() -> int\nC++: int GetFixedSubdivisions()\n\nReturn the number of fixed subdivisions. It is used to prevent\nfrom infinite loop in degenerated cases. For order 3 or higher,\nif the inflection point is exactly on the mid-point, error metric\nwill not detect that a subdivision is required. 0 means no fixed\nsubdivision: there will be only adaptive subdivisions.\n\n* The algorithm first performs `GetFixedSubdivisions' non\n  adaptive\n* subdivisions followed by at most `GetMaxAdaptiveSubdivisions'\n  adaptive\n* subdivisions. Hence, there are at most `GetMaxSubdivisionLevel'\n* subdivisions.\n* \\post positive_result: result>=0 &&\n  result<=GetMaxSubdivisionLevel()\n"},
  {"GetMaxSubdivisionLevel", PyvtkSimpleCellTessellator_GetMaxSubdivisionLevel, METH_VARARGS,
   "V.GetMaxSubdivisionLevel() -> int\nC++: int GetMaxSubdivisionLevel()\n\nReturn the maximum level of subdivision. It is used to prevent\nfrom infinite loop in degenerated cases. For order 3 or higher,\nif the inflection point is exactly on the mid-point, error metric\nwill not detect that a subdivision is required. 0 means no\nsubdivision, neither fixed nor adaptive.\n\\post positive_result: result>=GetFixedSubdivisions()\n"},
  {"GetMaxAdaptiveSubdivisions", PyvtkSimpleCellTessellator_GetMaxAdaptiveSubdivisions, METH_VARARGS,
   "V.GetMaxAdaptiveSubdivisions() -> int\nC++: int GetMaxAdaptiveSubdivisions()\n\nReturn the maximum number of adaptive subdivisions.\n\\post valid_result:\n    result==GetMaxSubdivisionLevel()-GetFixedSubdivisions()\n"},
  {"SetFixedSubdivisions", PyvtkSimpleCellTessellator_SetFixedSubdivisions, METH_VARARGS,
   "V.SetFixedSubdivisions(int)\nC++: void SetFixedSubdivisions(int level)\n\nSet the number of fixed subdivisions. See GetFixedSubdivisions()\nfor more explanations.\n\\pre positive_level: level>=0 && level<=GetMaxSubdivisionLevel()\n\\post is_set: GetFixedSubdivisions()==level\n"},
  {"SetMaxSubdivisionLevel", PyvtkSimpleCellTessellator_SetMaxSubdivisionLevel, METH_VARARGS,
   "V.SetMaxSubdivisionLevel(int)\nC++: void SetMaxSubdivisionLevel(int level)\n\nSet the maximum level of subdivision. See\nGetMaxSubdivisionLevel() for more explanations.\n\\pre positive_level: level>=GetFixedSubdivisions()\n\\post is_set: level==GetMaxSubdivisionLevel()\n"},
  {"SetSubdivisionLevels", PyvtkSimpleCellTessellator_SetSubdivisionLevels, METH_VARARGS,
   "V.SetSubdivisionLevels(int, int)\nC++: void SetSubdivisionLevels(int fixed, int maxLevel)\n\nSet both the number of fixed subdivisions and the maximum level\nof subdivisions. See GetFixedSubdivisions(),\nGetMaxSubdivisionLevel() and GetMaxAdaptiveSubdivisions() for\nmore explanations.\n\\pre positive_fixed: fixed>=0\n\\pre valid_range: fixed<=maxLevel\n\\post fixed_is_set: fixed==GetFixedSubdivisions()\n\\post maxLevel_is_set: maxLevel==GetMaxSubdivisionLevel()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSimpleCellTessellator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkSimpleCellTessellator", // tp_name
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
  PyvtkSimpleCellTessellator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimpleCellTessellator_StaticNew()
{
  return vtkSimpleCellTessellator::New();
}

PyObject *PyvtkSimpleCellTessellator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSimpleCellTessellator_Type, PyvtkSimpleCellTessellator_Methods,
    "vtkSimpleCellTessellator",
 &PyvtkSimpleCellTessellator_StaticNew);

  PyTypeObject *pytype = &PyvtkSimpleCellTessellator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericCellTessellator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleCellTessellator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleCellTessellator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleCellTessellator", o) != 0)
  {
    Py_DECREF(o);
  }

}

