// python wrapper for vtkmWarpScalar
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
#include "vtkmWarpScalar.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmWarpScalar(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmWarpScalar_ClassNew(); }

#ifndef DECLARED_PyvtkWarpScalar_ClassNew
extern "C" { PyObject *PyvtkWarpScalar_ClassNew(); }
#define DECLARED_PyvtkWarpScalar_ClassNew
#endif

static const char *PyvtkmWarpScalar_Doc =
  "vtkmWarpScalar - deform geometry with scalar data\n\n"
  "Superclass: vtkWarpScalar\n\n"
  "vtkmWarpScalar is a filter that modifies point coordinates by moving\n"
  "points along point normals by the scalar amount times the scalar\n"
  "factor with vtkm as its backend. Useful for creating carpet or x-y-z\n"
  "plots.\n\n"
  "If normals are not present in data, the Normal instance variable will\n"
  "be used as the direction along which to warp the geometry. If normals\n"
  "are present but you would like to use the Normal instance variable,\n"
  "set the UseNormal boolean to true.\n\n"
  "If XYPlane boolean is set true, then the z-value is considered to be\n"
  "a scalar value (still scaled by scale factor), and the displacement\n"
  "is along the z-axis. If scalars are also present, these are copied\n"
  "through and can be used to color the surface.\n\n"
  "Note that the filter passes both its point data and cell data to its\n"
  "output, except for normals, since these are distorted by the warping.\n\n";


static PyObject *
PyvtkmWarpScalar_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmWarpScalar::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmWarpScalar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmWarpScalar *op = static_cast<vtkmWarpScalar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmWarpScalar::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmWarpScalar_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmWarpScalar *tempr = vtkmWarpScalar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmWarpScalar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmWarpScalar *op = static_cast<vtkmWarpScalar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmWarpScalar *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmWarpScalar::NewInstance());

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

static PyMethodDef PyvtkmWarpScalar_Methods[] = {
  {"IsTypeOf", PyvtkmWarpScalar_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmWarpScalar_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmWarpScalar_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmWarpScalar\nC++: static vtkmWarpScalar *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmWarpScalar_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmWarpScalar\nC++: vtkmWarpScalar *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmWarpScalar_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmWarpScalar", // tp_name
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
  PyvtkmWarpScalar_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmWarpScalar_StaticNew()
{
  return vtkmWarpScalar::New();
}

PyObject *PyvtkmWarpScalar_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmWarpScalar_Type, PyvtkmWarpScalar_Methods,
    "vtkmWarpScalar",
 &PyvtkmWarpScalar_StaticNew);

  PyTypeObject *pytype = &PyvtkmWarpScalar_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWarpScalar_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmWarpScalar(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmWarpScalar_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmWarpScalar", o) != 0)
  {
    Py_DECREF(o);
  }

}

