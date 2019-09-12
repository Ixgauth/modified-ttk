// python wrapper for vtkmTriangleMeshPointNormals
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
#include "vtkmTriangleMeshPointNormals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmTriangleMeshPointNormals(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmTriangleMeshPointNormals_ClassNew(); }

#ifndef DECLARED_PyvtkTriangleMeshPointNormals_ClassNew
extern "C" { PyObject *PyvtkTriangleMeshPointNormals_ClassNew(); }
#define DECLARED_PyvtkTriangleMeshPointNormals_ClassNew
#endif

static const char *PyvtkmTriangleMeshPointNormals_Doc =
  "vtkmTriangleMeshPointNormals - compute point normals for triangle mesh\n\n"
  "Superclass: vtkTriangleMeshPointNormals\n\n"
  "vtkmTriangleMeshPointNormals is a filter that computes point normals\n"
  "for a triangle mesh to enable high-performance rendering. It is a\n"
  "fast-path version of the vtkmPolyDataNormals filter in order to be\n"
  "able to compute normals for triangle meshes deforming rapidly.\n\n"
  "The computed normals (a vtkFloatArray) are set to be the active\n"
  "normals (using SetNormals()) of the PointData. The array name is\n"
  "\"Normals\".\n\n"
  "The algorithm works by determining normals for each triangle and\n"
  "adding these vectors to the triangle points. The resulting vectors at\n"
  "each point are then normalized.\n\n"
  "@warning\n"
  "Normals are computed only for triangular polygons: the filter can not\n"
  "handle meshes with other types of cells (Verts, Lines, Strips) or\n"
  "Polys with the wrong number of components (not equal to 3).\n\n"
  "@warning\n"
  "Unlike the vtkPolyDataNormals filter, this filter does not apply any\n"
  "splitting nor checks for cell orientation consistency in order to\n"
  "speed up the computation. Moreover, normals are not calculated the\n"
  "exact same way as the vtkPolyDataNormals filter since the triangle\n"
  "normals are not normalized before being added to the point normals:\n"
  "those cell normals are therefore weighted by the triangle area. This\n"
  "is not more nor less correct than normalizing them before adding\n"
  "them, but it is much faster.\n\n";


static PyObject *
PyvtkmTriangleMeshPointNormals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmTriangleMeshPointNormals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmTriangleMeshPointNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmTriangleMeshPointNormals *op = static_cast<vtkmTriangleMeshPointNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmTriangleMeshPointNormals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmTriangleMeshPointNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmTriangleMeshPointNormals *tempr = vtkmTriangleMeshPointNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmTriangleMeshPointNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmTriangleMeshPointNormals *op = static_cast<vtkmTriangleMeshPointNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmTriangleMeshPointNormals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmTriangleMeshPointNormals::NewInstance());

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

static PyMethodDef PyvtkmTriangleMeshPointNormals_Methods[] = {
  {"IsTypeOf", PyvtkmTriangleMeshPointNormals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmTriangleMeshPointNormals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmTriangleMeshPointNormals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmTriangleMeshPointNormals\nC++: static vtkmTriangleMeshPointNormals *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmTriangleMeshPointNormals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmTriangleMeshPointNormals\nC++: vtkmTriangleMeshPointNormals *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmTriangleMeshPointNormals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmTriangleMeshPointNormals", // tp_name
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
  PyvtkmTriangleMeshPointNormals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmTriangleMeshPointNormals_StaticNew()
{
  return vtkmTriangleMeshPointNormals::New();
}

PyObject *PyvtkmTriangleMeshPointNormals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmTriangleMeshPointNormals_Type, PyvtkmTriangleMeshPointNormals_Methods,
    "vtkmTriangleMeshPointNormals",
 &PyvtkmTriangleMeshPointNormals_StaticNew);

  PyTypeObject *pytype = &PyvtkmTriangleMeshPointNormals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTriangleMeshPointNormals_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmTriangleMeshPointNormals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmTriangleMeshPointNormals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmTriangleMeshPointNormals", o) != 0)
  {
    Py_DECREF(o);
  }

}

