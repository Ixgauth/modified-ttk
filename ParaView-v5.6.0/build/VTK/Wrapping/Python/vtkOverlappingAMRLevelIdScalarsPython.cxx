// python wrapper for vtkOverlappingAMRLevelIdScalars
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
#include "vtkOverlappingAMRLevelIdScalars.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOverlappingAMRLevelIdScalars(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOverlappingAMRLevelIdScalars_ClassNew(); }

#ifndef DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
extern "C" { PyObject *PyvtkOverlappingAMRAlgorithm_ClassNew(); }
#define DECLARED_PyvtkOverlappingAMRAlgorithm_ClassNew
#endif

static const char *PyvtkOverlappingAMRLevelIdScalars_Doc =
  "vtkOverlappingAMRLevelIdScalars - generate scalars from levels.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "vtkOverlappingAMRLevelIdScalars is a filter that generates scalars\n"
  "using the level number for each level. Note that all datasets within\n"
  "a level get the same scalar. The new scalars array is named\n"
  "LevelIdScalars.\n\n";


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOverlappingAMRLevelIdScalars::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRLevelIdScalars *op = static_cast<vtkOverlappingAMRLevelIdScalars *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOverlappingAMRLevelIdScalars::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOverlappingAMRLevelIdScalars *tempr = vtkOverlappingAMRLevelIdScalars::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOverlappingAMRLevelIdScalars_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOverlappingAMRLevelIdScalars *op = static_cast<vtkOverlappingAMRLevelIdScalars *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOverlappingAMRLevelIdScalars *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOverlappingAMRLevelIdScalars::NewInstance());

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

static PyMethodDef PyvtkOverlappingAMRLevelIdScalars_Methods[] = {
  {"IsTypeOf", PyvtkOverlappingAMRLevelIdScalars_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOverlappingAMRLevelIdScalars_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOverlappingAMRLevelIdScalars_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOverlappingAMRLevelIdScalars\nC++: static vtkOverlappingAMRLevelIdScalars *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOverlappingAMRLevelIdScalars_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOverlappingAMRLevelIdScalars\nC++: vtkOverlappingAMRLevelIdScalars *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOverlappingAMRLevelIdScalars_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkOverlappingAMRLevelIdScalars", // tp_name
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
  PyvtkOverlappingAMRLevelIdScalars_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOverlappingAMRLevelIdScalars_StaticNew()
{
  return vtkOverlappingAMRLevelIdScalars::New();
}

PyObject *PyvtkOverlappingAMRLevelIdScalars_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOverlappingAMRLevelIdScalars_Type, PyvtkOverlappingAMRLevelIdScalars_Methods,
    "vtkOverlappingAMRLevelIdScalars",
 &PyvtkOverlappingAMRLevelIdScalars_StaticNew);

  PyTypeObject *pytype = &PyvtkOverlappingAMRLevelIdScalars_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOverlappingAMRAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOverlappingAMRLevelIdScalars(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOverlappingAMRLevelIdScalars_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOverlappingAMRLevelIdScalars", o) != 0)
  {
    Py_DECREF(o);
  }

}

