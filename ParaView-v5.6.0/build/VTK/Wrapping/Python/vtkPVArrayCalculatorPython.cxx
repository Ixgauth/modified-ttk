// python wrapper for vtkPVArrayCalculator
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
#include "vtkPVArrayCalculator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVArrayCalculator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVArrayCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkArrayCalculator_ClassNew
extern "C" { PyObject *PyvtkArrayCalculator_ClassNew(); }
#define DECLARED_PyvtkArrayCalculator_ClassNew
#endif

static const char *PyvtkPVArrayCalculator_Doc =
  "vtkPVArrayCalculator - perform mathematical operations on data\n in field data arrays\n\n"
  "Superclass: vtkArrayCalculator\n\n"
  "vtkPVArrayCalculator performs operations on vectors or scalars in\n"
  "field\n"
  " data arrays.\n"
  " vtkArrayCalculator provides API for users to add scalar/vector\n"
  "fields and\n"
  " their mapping with the input fields. We extend vtkArrayCalculator to\n"
  " automatically add scalar/vector fields mapping using the array\n"
  "available in\n"
  " the input.\n"
  "@sa\n"
  " vtkArrayCalculator vtkFunctionParser\n\n";


static PyObject *
PyvtkPVArrayCalculator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVArrayCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayCalculator *op = static_cast<vtkPVArrayCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVArrayCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVArrayCalculator *tempr = vtkPVArrayCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVArrayCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVArrayCalculator *op = static_cast<vtkPVArrayCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVArrayCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVArrayCalculator::NewInstance());

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

static PyMethodDef PyvtkPVArrayCalculator_Methods[] = {
  {"IsTypeOf", PyvtkPVArrayCalculator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVArrayCalculator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVArrayCalculator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVArrayCalculator\nC++: static vtkPVArrayCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVArrayCalculator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVArrayCalculator\nC++: vtkPVArrayCalculator *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVArrayCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPVArrayCalculator", // tp_name
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
  PyvtkPVArrayCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVArrayCalculator_StaticNew()
{
  return vtkPVArrayCalculator::New();
}

PyObject *PyvtkPVArrayCalculator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVArrayCalculator_Type, PyvtkPVArrayCalculator_Methods,
    "vtkPVArrayCalculator",
 &PyvtkPVArrayCalculator_StaticNew);

  PyTypeObject *pytype = &PyvtkPVArrayCalculator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayCalculator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVArrayCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVArrayCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVArrayCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

