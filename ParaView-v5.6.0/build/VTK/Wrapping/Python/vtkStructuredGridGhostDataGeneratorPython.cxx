// python wrapper for vtkStructuredGridGhostDataGenerator
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
#include "vtkStructuredGridGhostDataGenerator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGridGhostDataGenerator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStructuredGridGhostDataGenerator_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetGhostGenerator_ClassNew
extern "C" { PyObject *PyvtkDataSetGhostGenerator_ClassNew(); }
#define DECLARED_PyvtkDataSetGhostGenerator_ClassNew
#endif

static const char *PyvtkStructuredGridGhostDataGenerator_Doc =
  "vtkStructuredGridGhostDataGenerator -  A concrete implementation of\nvtkDataSetGhostGenerator for generating ghost\n data on partitioned structured grids on a singled process.\n\n"
  "Superclass: vtkDataSetGhostGenerator\n\n"
  "For a distributed\n"
  " data-set see vtkPStructuredGridGhostDataGenerator.\n\n"
  "@warning\n\n"
  "  \n"
  "   The input multi-block dataset must:\n"
  "   \n"
  "     Have the whole-extent set \n"
  "     Each block must be an instance of vtkStructuredGrid \n"
  "     Each block must have its corresponding global extent set in the\n"
  "          meta-data using the PIECE_EXTENT() key \n"
  "     All blocks must have the same fields loaded \n"
  "   \n"
  "  \n"
  "  \n"
  "   The code currently does not handle the following cases:\n"
  "   \n"
  "     Ghost cells along Periodic boundaries\n"
  "     Growing ghost layers beyond the extents of the neighboring grid\n"
  "   \n"
  "   \n\n"
  "@sa\n"
  "vtkDataSetGhostGenerator, vtkPStructuredGridGhostDataGenerator\n\n";


static PyObject *
PyvtkStructuredGridGhostDataGenerator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGridGhostDataGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGhostDataGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGhostDataGenerator *op = static_cast<vtkStructuredGridGhostDataGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGridGhostDataGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGhostDataGenerator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGridGhostDataGenerator *tempr = vtkStructuredGridGhostDataGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGridGhostDataGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGridGhostDataGenerator *op = static_cast<vtkStructuredGridGhostDataGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGridGhostDataGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGridGhostDataGenerator::NewInstance());

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

static PyMethodDef PyvtkStructuredGridGhostDataGenerator_Methods[] = {
  {"IsTypeOf", PyvtkStructuredGridGhostDataGenerator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGridGhostDataGenerator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGridGhostDataGenerator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkStructuredGridGhostDataGenerator\nC++: static vtkStructuredGridGhostDataGenerator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGridGhostDataGenerator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStructuredGridGhostDataGenerator\nC++: vtkStructuredGridGhostDataGenerator *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStructuredGridGhostDataGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeometryPython.vtkStructuredGridGhostDataGenerator", // tp_name
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
  PyvtkStructuredGridGhostDataGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGridGhostDataGenerator_StaticNew()
{
  return vtkStructuredGridGhostDataGenerator::New();
}

PyObject *PyvtkStructuredGridGhostDataGenerator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStructuredGridGhostDataGenerator_Type, PyvtkStructuredGridGhostDataGenerator_Methods,
    "vtkStructuredGridGhostDataGenerator",
 &PyvtkStructuredGridGhostDataGenerator_StaticNew);

  PyTypeObject *pytype = &PyvtkStructuredGridGhostDataGenerator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetGhostGenerator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredGridGhostDataGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGridGhostDataGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGridGhostDataGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

