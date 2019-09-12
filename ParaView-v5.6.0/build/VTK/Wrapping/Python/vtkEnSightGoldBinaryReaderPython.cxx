// python wrapper for vtkEnSightGoldBinaryReader
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
#include "vtkEnSightGoldBinaryReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightGoldBinaryReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnSightGoldBinaryReader_ClassNew(); }

#ifndef DECLARED_PyvtkEnSightReader_ClassNew
extern "C" { PyObject *PyvtkEnSightReader_ClassNew(); }
#define DECLARED_PyvtkEnSightReader_ClassNew
#endif

static const char *PyvtkEnSightGoldBinaryReader_Doc =
  "vtkEnSightGoldBinaryReader - class to read binary EnSight Gold files\n\n"
  "Superclass: vtkEnSightReader\n\n"
  "vtkEnSightGoldBinaryReader is a class to read EnSight Gold files into\n"
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
  "EnSight datasets (both static geometry and variables).@par Thanks:\n"
  "Thanks to Yvan Fournier for providing the code to support nfaced\n"
  "elements.\n\n";


static PyObject *
PyvtkEnSightGoldBinaryReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightGoldBinaryReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldBinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldBinaryReader *op = static_cast<vtkEnSightGoldBinaryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightGoldBinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldBinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightGoldBinaryReader *tempr = vtkEnSightGoldBinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightGoldBinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightGoldBinaryReader *op = static_cast<vtkEnSightGoldBinaryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightGoldBinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightGoldBinaryReader::NewInstance());

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

static PyMethodDef PyvtkEnSightGoldBinaryReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightGoldBinaryReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightGoldBinaryReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightGoldBinaryReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnSightGoldBinaryReader\nC++: static vtkEnSightGoldBinaryReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightGoldBinaryReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnSightGoldBinaryReader\nC++: vtkEnSightGoldBinaryReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnSightGoldBinaryReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightGoldBinaryReader", // tp_name
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
  PyvtkEnSightGoldBinaryReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightGoldBinaryReader_StaticNew()
{
  return vtkEnSightGoldBinaryReader::New();
}

PyObject *PyvtkEnSightGoldBinaryReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnSightGoldBinaryReader_Type, PyvtkEnSightGoldBinaryReader_Methods,
    "vtkEnSightGoldBinaryReader",
 &PyvtkEnSightGoldBinaryReader_StaticNew);

  PyTypeObject *pytype = &PyvtkEnSightGoldBinaryReader_Type;

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

void PyVTKAddFile_vtkEnSightGoldBinaryReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightGoldBinaryReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightGoldBinaryReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

