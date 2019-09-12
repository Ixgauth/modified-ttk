// python wrapper for vtkmPolyDataNormals
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
#include "vtkmPolyDataNormals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmPolyDataNormals(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmPolyDataNormals_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataNormals_ClassNew
extern "C" { PyObject *PyvtkPolyDataNormals_ClassNew(); }
#define DECLARED_PyvtkPolyDataNormals_ClassNew
#endif

static const char *PyvtkmPolyDataNormals_Doc =
  "vtkmPolyDataNormals - compute normals for polygonal mesh\n\n"
  "Superclass: vtkPolyDataNormals\n\n"
  "vtkmPolyDataNormals is a filter that computes point and/or cell\n"
  "normals for a polygonal mesh. The user specifies if they would like\n"
  "the point and/or cell normals to be computed by setting the\n"
  "ComputeCellNormals and ComputePointNormals flags.\n\n"
  "The computed normals (a vtkFloatArray) are set to be the active\n"
  "normals (using SetNormals()) of the PointData and/or the CellData\n"
  "(respectively) of the output PolyData. The name of these arrays is\n"
  "\"Normals\".\n\n"
  "The algorithm works by determining normals for each polygon and then\n"
  "averaging them at shared points.\n\n"
  "@warning\n"
  "Normals are computed only for polygons and triangles. Normals are not\n"
  "computed for lines, vertices, or triangle strips.\n\n"
  "@sa\n"
  "For high-performance rendering, you could use\n"
  "vtkmTriangleMeshPointNormals if you know that you have a triangle\n"
  "mesh which does not require splitting nor consistency check on the\n"
  "cell orientations.\n\n";


static PyObject *
PyvtkmPolyDataNormals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmPolyDataNormals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmPolyDataNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmPolyDataNormals *op = static_cast<vtkmPolyDataNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmPolyDataNormals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmPolyDataNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmPolyDataNormals *tempr = vtkmPolyDataNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmPolyDataNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmPolyDataNormals *op = static_cast<vtkmPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmPolyDataNormals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmPolyDataNormals::NewInstance());

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

static PyMethodDef PyvtkmPolyDataNormals_Methods[] = {
  {"IsTypeOf", PyvtkmPolyDataNormals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmPolyDataNormals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmPolyDataNormals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmPolyDataNormals\nC++: static vtkmPolyDataNormals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmPolyDataNormals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmPolyDataNormals\nC++: vtkmPolyDataNormals *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmPolyDataNormals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmPolyDataNormals", // tp_name
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
  PyvtkmPolyDataNormals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmPolyDataNormals_StaticNew()
{
  return vtkmPolyDataNormals::New();
}

PyObject *PyvtkmPolyDataNormals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmPolyDataNormals_Type, PyvtkmPolyDataNormals_Methods,
    "vtkmPolyDataNormals",
 &PyvtkmPolyDataNormals_StaticNew);

  PyTypeObject *pytype = &PyvtkmPolyDataNormals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataNormals_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmPolyDataNormals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmPolyDataNormals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmPolyDataNormals", o) != 0)
  {
    Py_DECREF(o);
  }

}

