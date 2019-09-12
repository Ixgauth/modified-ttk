// python wrapper for vtkMeanValueCoordinatesInterpolator
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
#include "vtkMeanValueCoordinatesInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMeanValueCoordinatesInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkMeanValueCoordinatesInterpolator_Doc =
  "vtkMeanValueCoordinatesInterpolator - compute interpolation computes\nfor closed triangular mesh\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMeanValueCoordinatesInterpolator computes interpolation weights\n"
  "for a closed, manifold polyhedron mesh.  Once computed, the\n"
  "interpolation weights can be used to interpolate data anywhere\n"
  "interior or exterior to the mesh. This work implements two MVC\n"
  "algorithms. The first one is for triangular meshes which is\n"
  "documented in the Siggraph 2005 paper by Tao Ju, Scot Schaefer and\n"
  "Joe Warren from Rice University \"Mean Value Coordinates for Closed\n"
  "Triangular Meshes\". The second one is for general polyhedron mesh\n"
  "which is documented in the Eurographics Symposium on Geometry\n"
  "Processing 2006 paper by Torsten Langer, Alexander Belyaev and\n"
  "Hans-Peter Seidel from MPI Informatik \"Spherical Barycentric\n"
  "Coordinates\". The filter will automatically choose which algorithm to\n"
  "use based on whether the input mesh is triangulated or not.\n\n"
  "In VTK this class was initially created to interpolate data across\n"
  "polyhedral cells. In addition, the class can be used to interpolate\n"
  "data values from a polyhedron mesh, and to smoothly deform a mesh\n"
  "from an associated control mesh.\n\n"
  "@sa\n"
  "vtkPolyhedralCell\n\n";


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMeanValueCoordinatesInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMeanValueCoordinatesInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMeanValueCoordinatesInterpolator *tempr = vtkMeanValueCoordinatesInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeanValueCoordinatesInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeanValueCoordinatesInterpolator *op = static_cast<vtkMeanValueCoordinatesInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMeanValueCoordinatesInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMeanValueCoordinatesInterpolator::NewInstance());

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
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInterpolationWeights");

  const size_t size0 = 3;
  double temp0[3];
  vtkPoints *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkMeanValueCoordinatesInterpolator::ComputeInterpolationWeights(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInterpolationWeights");

  const size_t size0 = 3;
  double temp0[3];
  vtkPoints *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp3, save3, size3);

    vtkMeanValueCoordinatesInterpolator::ComputeInterpolationWeights(temp0, temp1, temp2, temp3);

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_Methods[] = {
  {nullptr, PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s1, METH_VARARGS | METH_STATIC,
   "PVVP *d *vtkPoints *vtkIdList *d"},
  {nullptr, PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_s2, METH_VARARGS | METH_STATIC,
   "PVVP *d *vtkPoints *vtkCellArray *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeInterpolationWeights");
  return nullptr;
}


static PyMethodDef PyvtkMeanValueCoordinatesInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkMeanValueCoordinatesInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard instantiable class methods.\n"},
  {"IsA", PyvtkMeanValueCoordinatesInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard instantiable class methods.\n"},
  {"SafeDownCast", PyvtkMeanValueCoordinatesInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkMeanValueCoordinatesInterpolator\nC++: static vtkMeanValueCoordinatesInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard instantiable class methods.\n"},
  {"NewInstance", PyvtkMeanValueCoordinatesInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMeanValueCoordinatesInterpolator\nC++: vtkMeanValueCoordinatesInterpolator *NewInstance()\n\nStandard instantiable class methods.\n"},
  {"ComputeInterpolationWeights", PyvtkMeanValueCoordinatesInterpolator_ComputeInterpolationWeights, METH_VARARGS,
   "V.ComputeInterpolationWeights((float, float, float), vtkPoints,\n    vtkIdList, [float, ...])\nC++: static void ComputeInterpolationWeights(const double x[3],\n    vtkPoints *pts, vtkIdList *tris, double *weights)\nV.ComputeInterpolationWeights((float, float, float), vtkPoints,\n    vtkCellArray, [float, ...])\nC++: static void ComputeInterpolationWeights(const double x[3],\n    vtkPoints *pts, vtkCellArray *tris, double *weights)\n\nMethod to generate interpolation weights for a point x[3] from a\nlist of triangles.  In this version of the method, the triangles\nare defined by a vtkPoints array plus a vtkIdList, where the\nvtkIdList is organized such that three ids in order define a\ntriangle.  Note that number of weights must equal the number of\npoints.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMeanValueCoordinatesInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkMeanValueCoordinatesInterpolator", // tp_name
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
  PyvtkMeanValueCoordinatesInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMeanValueCoordinatesInterpolator_StaticNew()
{
  return vtkMeanValueCoordinatesInterpolator::New();
}

PyObject *PyvtkMeanValueCoordinatesInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMeanValueCoordinatesInterpolator_Type, PyvtkMeanValueCoordinatesInterpolator_Methods,
    "vtkMeanValueCoordinatesInterpolator",
 &PyvtkMeanValueCoordinatesInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkMeanValueCoordinatesInterpolator_Type;

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

void PyVTKAddFile_vtkMeanValueCoordinatesInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMeanValueCoordinatesInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMeanValueCoordinatesInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

