// python wrapper for vtkButterflySubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkButterflySubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkButterflySubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolatingSubdivisionFilter_ClassNew
extern "C" { PyObject *PyvtkInterpolatingSubdivisionFilter_ClassNew(); }
#define DECLARED_PyvtkInterpolatingSubdivisionFilter_ClassNew
#endif

static const char *PyvtkButterflySubdivisionFilter_Doc =
  "vtkButterflySubdivisionFilter - generate a subdivision surface using\nthe Butterfly Scheme\n\n"
  "Superclass: vtkInterpolatingSubdivisionFilter\n\n"
  "vtkButterflySubdivisionFilter is an interpolating subdivision scheme\n"
  "that creates four new triangles for each triangle in the mesh. The\n"
  "user can specify the NumberOfSubdivisions. This filter implements the\n"
  "8-point butterfly scheme described in: Zorin, D., Schroder, P., and\n"
  "Sweldens, W., \"Interpolating Subdivisions for Meshes with Arbitrary\n"
  "Topology,\" Computer Graphics Proceedings, Annual Conference Series,\n"
  "1996, ACM SIGGRAPH, pp.189-192. This scheme improves previous\n"
  "butterfly subdivisions with special treatment of vertices with\n"
  "valence other than 6.\n\n"
  "Currently, the filter only operates on triangles. Users should use\n"
  "the vtkTriangleFilter to triangulate meshes that contain polygons or\n"
  "triangle strips.\n\n"
  "The filter interpolates point data using the same scheme. New\n"
  "triangles created at a subdivision step will have the cell data of\n"
  "their parent cell.\n\n"
  "@par Thanks: This work was supported by PHS Research Grant No. 1 P41\n"
  "RR13218-01 from the National Center for Research Resources.\n\n"
  "@sa\n"
  "vtkInterpolatingSubdivisionFilter vtkLinearSubdivisionFilter\n\n";


static PyObject *
PyvtkButterflySubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkButterflySubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButterflySubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkButterflySubdivisionFilter *tempr = vtkButterflySubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButterflySubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButterflySubdivisionFilter *op = static_cast<vtkButterflySubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButterflySubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButterflySubdivisionFilter::NewInstance());

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

static PyMethodDef PyvtkButterflySubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkButterflySubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"IsA", PyvtkButterflySubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"SafeDownCast", PyvtkButterflySubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkButterflySubdivisionFilter\nC++: static vtkButterflySubdivisionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"NewInstance", PyvtkButterflySubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkButterflySubdivisionFilter\nC++: vtkButterflySubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkButterflySubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkButterflySubdivisionFilter", // tp_name
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
  PyvtkButterflySubdivisionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkButterflySubdivisionFilter_StaticNew()
{
  return vtkButterflySubdivisionFilter::New();
}

PyObject *PyvtkButterflySubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkButterflySubdivisionFilter_Type, PyvtkButterflySubdivisionFilter_Methods,
    "vtkButterflySubdivisionFilter",
 &PyvtkButterflySubdivisionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkButterflySubdivisionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolatingSubdivisionFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkButterflySubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkButterflySubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkButterflySubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

