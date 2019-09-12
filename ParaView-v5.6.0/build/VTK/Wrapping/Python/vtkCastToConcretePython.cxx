// python wrapper for vtkCastToConcrete
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
#include "vtkCastToConcrete.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCastToConcrete(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCastToConcrete_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkCastToConcrete_Doc =
  "vtkCastToConcrete - works around type-checking limitations\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCastToConcrete is a filter that works around type-checking\n"
  "limitations in the filter classes. Some filters generate abstract\n"
  "types on output, and cannot be connected to the input of filters\n"
  "requiring a concrete input type. For example, vtkElevationFilter\n"
  "generates vtkDataSet for output, and cannot be connected to\n"
  "vtkDecimate, because vtkDecimate requires vtkPolyData as input. This\n"
  "is true even though (in this example) the input to vtkElevationFilter\n"
  "is of type vtkPolyData, and you know the output of vtkElevationFilter\n"
  "is the same type as its input.\n\n"
  "vtkCastToConcrete performs run-time checking to insure that output\n"
  "type is of the right type. An error message will result if you try to\n"
  "cast an input type improperly. Otherwise, the filter performs the\n"
  "appropriate cast and returns the data.\n\n"
  "@warning\n"
  "You must specify the input before you can get the output. Otherwise\n"
  "an error results.\n\n"
  "@sa\n"
  "vtkDataSetAlgorithm vtkPointSetToPointSetFilter\n\n";


static PyObject *
PyvtkCastToConcrete_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCastToConcrete::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCastToConcrete_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCastToConcrete::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCastToConcrete_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCastToConcrete *tempr = vtkCastToConcrete::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCastToConcrete_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCastToConcrete *op = static_cast<vtkCastToConcrete *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCastToConcrete *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCastToConcrete::NewInstance());

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

static PyMethodDef PyvtkCastToConcrete_Methods[] = {
  {"IsTypeOf", PyvtkCastToConcrete_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCastToConcrete_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCastToConcrete_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCastToConcrete\nC++: static vtkCastToConcrete *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCastToConcrete_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCastToConcrete\nC++: vtkCastToConcrete *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCastToConcrete_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonExecutionModelPython.vtkCastToConcrete", // tp_name
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
  PyvtkCastToConcrete_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCastToConcrete_StaticNew()
{
  return vtkCastToConcrete::New();
}

PyObject *PyvtkCastToConcrete_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCastToConcrete_Type, PyvtkCastToConcrete_Methods,
    "vtkCastToConcrete",
 &PyvtkCastToConcrete_StaticNew);

  PyTypeObject *pytype = &PyvtkCastToConcrete_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCastToConcrete(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCastToConcrete_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCastToConcrete", o) != 0)
  {
    Py_DECREF(o);
  }

}

