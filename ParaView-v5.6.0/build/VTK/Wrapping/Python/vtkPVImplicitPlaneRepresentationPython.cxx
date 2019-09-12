// python wrapper for vtkPVImplicitPlaneRepresentation
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
#include "vtkPVImplicitPlaneRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVImplicitPlaneRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVImplicitPlaneRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitPlaneRepresentation_ClassNew
extern "C" { PyObject *PyvtkImplicitPlaneRepresentation_ClassNew(); }
#define DECLARED_PyvtkImplicitPlaneRepresentation_ClassNew
#endif

static const char *PyvtkPVImplicitPlaneRepresentation_Doc =
  "vtkPVImplicitPlaneRepresentation - extends\nvtkImplicitPlaneRepresentation\n\n"
  "Superclass: vtkImplicitPlaneRepresentation\n\n"
  "vtkPVImplicitPlaneRepresentation extends\n"
  "vtkImplicitPlaneRepresentation to add ParaView proper initialisation\n"
  "values\n\n";


static PyObject *
PyvtkPVImplicitPlaneRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVImplicitPlaneRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImplicitPlaneRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVImplicitPlaneRepresentation *tempr = vtkPVImplicitPlaneRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitPlaneRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitPlaneRepresentation *op = static_cast<vtkPVImplicitPlaneRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImplicitPlaneRepresentation::NewInstance());

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

static PyMethodDef PyvtkPVImplicitPlaneRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVImplicitPlaneRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkPVImplicitPlaneRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkPVImplicitPlaneRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVImplicitPlaneRepresentation\nC++: static vtkPVImplicitPlaneRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkPVImplicitPlaneRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVImplicitPlaneRepresentation\nC++: vtkPVImplicitPlaneRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVImplicitPlaneRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVImplicitPlaneRepresentation", // tp_name
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
  PyvtkPVImplicitPlaneRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVImplicitPlaneRepresentation_StaticNew()
{
  return vtkPVImplicitPlaneRepresentation::New();
}

PyObject *PyvtkPVImplicitPlaneRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVImplicitPlaneRepresentation_Type, PyvtkPVImplicitPlaneRepresentation_Methods,
    "vtkPVImplicitPlaneRepresentation",
 &PyvtkPVImplicitPlaneRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVImplicitPlaneRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitPlaneRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVImplicitPlaneRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVImplicitPlaneRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVImplicitPlaneRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

