// python wrapper for vtkLoopSubdivisionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkLoopSubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLoopSubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLoopSubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkApproximatingSubdivisionFilter_ClassNew
extern "C" { PyObject *PyvtkApproximatingSubdivisionFilter_ClassNew(); }
#define DECLARED_PyvtkApproximatingSubdivisionFilter_ClassNew
#endif

static const char *PyvtkLoopSubdivisionFilter_Doc =
  "vtkLoopSubdivisionFilter - generate a subdivision surface using the\nLoop Scheme\n\n"
  "Superclass: vtkApproximatingSubdivisionFilter\n\n"
  "vtkLoopSubdivisionFilter is an approximating subdivision scheme that\n"
  "creates four new triangles for each triangle in the mesh. The user\n"
  "can specify the NumberOfSubdivisions. Loop's subdivision scheme is\n"
  "described in: Loop, C., \"Smooth Subdivision surfaces based on\n"
  "triangles,\", Masters Thesis, University of Utah, August 1987. For a\n"
  "nice summary of the technique see, Hoppe, H., et. al, \"Piecewise\n"
  "Smooth Surface Reconstruction,:, Proceedings of Siggraph 94 (Orlando,\n"
  "Florida, July 24-29, 1994). In Computer Graphics Proceedings, Annual\n"
  "Conference Series, 1994, ACM SIGGRAPH, pp. 295-302.\n\n"
  "The filter only operates on triangles. Users should use the\n"
  "vtkTriangleFilter to triangulate meshes that contain polygons or\n"
  "triangle strips.\n\n"
  "The filter approximates point data using the same scheme. New\n"
  "triangles create at a subdivision step will have the cell data of\n"
  "their parent cell.\n\n"
  "@par Thanks: This work was supported by PHS Research Grant No. 1 P41\n"
  "RR13218-01 from the National Center for Research Resources.\n\n"
  "@sa\n"
  "vtkApproximatingSubdivisionFilter\n\n";


static PyObject *
PyvtkLoopSubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLoopSubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopSubdivisionFilter *op = static_cast<vtkLoopSubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLoopSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLoopSubdivisionFilter *tempr = vtkLoopSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopSubdivisionFilter *op = static_cast<vtkLoopSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLoopSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLoopSubdivisionFilter::NewInstance());

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

static PyMethodDef PyvtkLoopSubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkLoopSubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"IsA", PyvtkLoopSubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"SafeDownCast", PyvtkLoopSubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLoopSubdivisionFilter\nC++: static vtkLoopSubdivisionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {"NewInstance", PyvtkLoopSubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLoopSubdivisionFilter\nC++: vtkLoopSubdivisionFilter *NewInstance()\n\nConstruct object with NumberOfSubdivisions set to 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLoopSubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkLoopSubdivisionFilter", // tp_name
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
  PyvtkLoopSubdivisionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLoopSubdivisionFilter_StaticNew()
{
  return vtkLoopSubdivisionFilter::New();
}

PyObject *PyvtkLoopSubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLoopSubdivisionFilter_Type, PyvtkLoopSubdivisionFilter_Methods,
    "vtkLoopSubdivisionFilter",
 &PyvtkLoopSubdivisionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkLoopSubdivisionFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkApproximatingSubdivisionFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLoopSubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLoopSubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLoopSubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

