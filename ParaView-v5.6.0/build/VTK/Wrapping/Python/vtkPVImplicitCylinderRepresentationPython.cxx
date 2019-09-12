// python wrapper for vtkPVImplicitCylinderRepresentation
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
#include "vtkPVImplicitCylinderRepresentation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVImplicitCylinderRepresentation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVImplicitCylinderRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitCylinderRepresentation_ClassNew
extern "C" { PyObject *PyvtkImplicitCylinderRepresentation_ClassNew(); }
#define DECLARED_PyvtkImplicitCylinderRepresentation_ClassNew
#endif

static const char *PyvtkPVImplicitCylinderRepresentation_Doc =
  "vtkPVImplicitCylinderRepresentation - extends\nvtkImplicitCylinderRepresentation\n\n"
  "Superclass: vtkImplicitCylinderRepresentation\n\n"
  "vtkPVImplicitCylinderRepresentation extends\n"
  "vtkImplicitCylinderRepresentation to add ParaView proper\n"
  "initialisation values\n\n";


static PyObject *
PyvtkPVImplicitCylinderRepresentation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVImplicitCylinderRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitCylinderRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitCylinderRepresentation *op = static_cast<vtkPVImplicitCylinderRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVImplicitCylinderRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitCylinderRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVImplicitCylinderRepresentation *tempr = vtkPVImplicitCylinderRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVImplicitCylinderRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVImplicitCylinderRepresentation *op = static_cast<vtkPVImplicitCylinderRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVImplicitCylinderRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVImplicitCylinderRepresentation::NewInstance());

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

static PyMethodDef PyvtkPVImplicitCylinderRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkPVImplicitCylinderRepresentation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for the class.\n"},
  {"IsA", PyvtkPVImplicitCylinderRepresentation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for the class.\n"},
  {"SafeDownCast", PyvtkPVImplicitCylinderRepresentation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPVImplicitCylinderRepresentation\nC++: static vtkPVImplicitCylinderRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for the class.\n"},
  {"NewInstance", PyvtkPVImplicitCylinderRepresentation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVImplicitCylinderRepresentation\nC++: vtkPVImplicitCylinderRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVImplicitCylinderRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVClientServerCoreRenderingPython.vtkPVImplicitCylinderRepresentation", // tp_name
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
  PyvtkPVImplicitCylinderRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVImplicitCylinderRepresentation_StaticNew()
{
  return vtkPVImplicitCylinderRepresentation::New();
}

PyObject *PyvtkPVImplicitCylinderRepresentation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVImplicitCylinderRepresentation_Type, PyvtkPVImplicitCylinderRepresentation_Methods,
    "vtkPVImplicitCylinderRepresentation",
 &PyvtkPVImplicitCylinderRepresentation_StaticNew);

  PyTypeObject *pytype = &PyvtkPVImplicitCylinderRepresentation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitCylinderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVImplicitCylinderRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVImplicitCylinderRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVImplicitCylinderRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

