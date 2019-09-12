// python wrapper for vtkEnSight6BinaryReader
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
#include "vtkEnSight6BinaryReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSight6BinaryReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnSight6BinaryReader_ClassNew(); }

#ifndef DECLARED_PyvtkEnSightReader_ClassNew
extern "C" { PyObject *PyvtkEnSightReader_ClassNew(); }
#define DECLARED_PyvtkEnSightReader_ClassNew
#endif

static const char *PyvtkEnSight6BinaryReader_Doc =
  "vtkEnSight6BinaryReader - class to read binary EnSight6 files\n\n"
  "Superclass: vtkEnSightReader\n\n"
  "vtkEnSight6BinaryReader is a class to read binary EnSight6 files into\n"
  "vtk. Because the different parts of the EnSight data can be of\n"
  "various data types, this reader produces multiple outputs, one per\n"
  "part in the input file. All variable information is being stored in\n"
  "field data.  The descriptions listed in the case file are used as the\n"
  "array names in the field data. For complex vector variables, the\n"
  "description is appended with _r (for the array of real values) and _i\n"
  "(for the array if imaginary values).  Complex scalar variables are\n"
  "stored as a single array with 2 components, real and imaginary,\n"
  "listed in that order.\n"
  "@warning\n"
  "You must manually call Update on this reader and then connect the\n"
  "rest of the pipeline because (due to the nature of the file format)\n"
  "it is not possible to know ahead of time how many outputs you will\n"
  "have or what types they will be. This reader can only handle static\n"
  "EnSight datasets (both static geometry and variables).\n\n";


static PyObject *
PyvtkEnSight6BinaryReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSight6BinaryReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSight6BinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6BinaryReader *op = static_cast<vtkEnSight6BinaryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSight6BinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSight6BinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSight6BinaryReader *tempr = vtkEnSight6BinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSight6BinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSight6BinaryReader *op = static_cast<vtkEnSight6BinaryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSight6BinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSight6BinaryReader::NewInstance());

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

static PyMethodDef PyvtkEnSight6BinaryReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSight6BinaryReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSight6BinaryReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSight6BinaryReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnSight6BinaryReader\nC++: static vtkEnSight6BinaryReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSight6BinaryReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnSight6BinaryReader\nC++: vtkEnSight6BinaryReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnSight6BinaryReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSight6BinaryReader", // tp_name
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
  PyvtkEnSight6BinaryReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSight6BinaryReader_StaticNew()
{
  return vtkEnSight6BinaryReader::New();
}

PyObject *PyvtkEnSight6BinaryReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnSight6BinaryReader_Type, PyvtkEnSight6BinaryReader_Methods,
    "vtkEnSight6BinaryReader",
 &PyvtkEnSight6BinaryReader_StaticNew);

  PyTypeObject *pytype = &PyvtkEnSight6BinaryReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkEnSightReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSight6BinaryReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSight6BinaryReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSight6BinaryReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

