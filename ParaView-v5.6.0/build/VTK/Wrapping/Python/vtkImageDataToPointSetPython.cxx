// python wrapper for vtkImageDataToPointSet
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
#include "vtkImageDataToPointSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataToPointSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageDataToPointSet_ClassNew(); }

#ifndef DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkImageDataToPointSet_Doc =
  "vtkImageDataToPointSet - Converts a vtkImageData to a vtkPointSet\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkImageDataToPointSet takes a vtkImageData as an image and outputs\n"
  "an equivalent vtkStructuredGrid (which is a subclass of vtkPointSet).\n\n"
  "@par Thanks: This class was developed by Kenneth Moreland\n"
  "(kmorel@sandia.gov) from Sandia National Laboratories.\n\n";


static PyObject *
PyvtkImageDataToPointSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataToPointSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToPointSet *op = static_cast<vtkImageDataToPointSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataToPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataToPointSet *tempr = vtkImageDataToPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataToPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataToPointSet *op = static_cast<vtkImageDataToPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataToPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataToPointSet::NewInstance());

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

static PyMethodDef PyvtkImageDataToPointSet_Methods[] = {
  {"IsTypeOf", PyvtkImageDataToPointSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataToPointSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataToPointSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageDataToPointSet\nC++: static vtkImageDataToPointSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataToPointSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageDataToPointSet\nC++: vtkImageDataToPointSet *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageDataToPointSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkImageDataToPointSet", // tp_name
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
  PyvtkImageDataToPointSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataToPointSet_StaticNew()
{
  return vtkImageDataToPointSet::New();
}

PyObject *PyvtkImageDataToPointSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageDataToPointSet_Type, PyvtkImageDataToPointSet_Methods,
    "vtkImageDataToPointSet",
 &PyvtkImageDataToPointSet_StaticNew);

  PyTypeObject *pytype = &PyvtkImageDataToPointSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDataToPointSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataToPointSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataToPointSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

