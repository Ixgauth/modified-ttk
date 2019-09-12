// python wrapper for vtkXMLPartitionedDataSetReader
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
#include "vtkXMLPartitionedDataSetReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPartitionedDataSetReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPartitionedDataSetReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLCompositeDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLCompositeDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLCompositeDataReader_ClassNew
#endif

static const char *PyvtkXMLPartitionedDataSetReader_Doc =
  "vtkXMLPartitionedDataSetReader - Reader for partitioned datasets\n\n"
  "Superclass: vtkXMLCompositeDataReader\n\n"
  "vtkXMLPartitionedDataSetReader reads the VTK XML partitioned dataset\n"
  "file format. XML partitioned dataset files are meta-files that point\n"
  "to a list of serial VTK XML files. When reading in parallel, it will\n"
  "distribute sub-blocks among processors. If the number of sub-blocks\n"
  "is less than the number of processors, some processors will not have\n"
  "any sub-blocks for that block. If the number of sub-blocks is larger\n"
  "than the number of processors, each processor will possibly have more\n"
  "than 1 sub-block.\n\n";


static PyObject *
PyvtkXMLPartitionedDataSetReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPartitionedDataSetReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPartitionedDataSetReader *op = static_cast<vtkXMLPartitionedDataSetReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPartitionedDataSetReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPartitionedDataSetReader *tempr = vtkXMLPartitionedDataSetReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPartitionedDataSetReader *op = static_cast<vtkXMLPartitionedDataSetReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPartitionedDataSetReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPartitionedDataSetReader::NewInstance());

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

static PyMethodDef PyvtkXMLPartitionedDataSetReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLPartitionedDataSetReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPartitionedDataSetReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPartitionedDataSetReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPartitionedDataSetReader\nC++: static vtkXMLPartitionedDataSetReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPartitionedDataSetReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPartitionedDataSetReader\nC++: vtkXMLPartitionedDataSetReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPartitionedDataSetReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLPartitionedDataSetReader", // tp_name
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
  PyvtkXMLPartitionedDataSetReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPartitionedDataSetReader_StaticNew()
{
  return vtkXMLPartitionedDataSetReader::New();
}

PyObject *PyvtkXMLPartitionedDataSetReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPartitionedDataSetReader_Type, PyvtkXMLPartitionedDataSetReader_Methods,
    "vtkXMLPartitionedDataSetReader",
 &PyvtkXMLPartitionedDataSetReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPartitionedDataSetReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLCompositeDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPartitionedDataSetReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPartitionedDataSetReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPartitionedDataSetReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

