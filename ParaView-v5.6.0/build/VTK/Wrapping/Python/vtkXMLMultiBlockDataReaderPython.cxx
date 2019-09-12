// python wrapper for vtkXMLMultiBlockDataReader
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
#include "vtkXMLMultiBlockDataReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLMultiBlockDataReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLMultiBlockDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLCompositeDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLCompositeDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLCompositeDataReader_ClassNew
#endif

static const char *PyvtkXMLMultiBlockDataReader_Doc =
  "vtkXMLMultiBlockDataReader - Reader for multi-block datasets\n\n"
  "Superclass: vtkXMLCompositeDataReader\n\n"
  "vtkXMLMultiBlockDataReader reads the VTK XML multi-block data file\n"
  "format. XML multi-block data files are meta-files that point to a\n"
  "list of serial VTK XML files. When reading in parallel, it will\n"
  "distribute sub-blocks among processor. If the number of sub-blocks is\n"
  "less than the number of processors, some processors will not have any\n"
  "sub-blocks for that block. If the number of sub-blocks is larger than\n"
  "the number of processors, each processor will possibly have more than\n"
  "1 sub-block.\n\n";


static PyObject *
PyvtkXMLMultiBlockDataReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLMultiBlockDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataReader *op = static_cast<vtkXMLMultiBlockDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLMultiBlockDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLMultiBlockDataReader *tempr = vtkXMLMultiBlockDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataReader *op = static_cast<vtkXMLMultiBlockDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLMultiBlockDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLMultiBlockDataReader::NewInstance());

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

static PyMethodDef PyvtkXMLMultiBlockDataReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLMultiBlockDataReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLMultiBlockDataReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLMultiBlockDataReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLMultiBlockDataReader\nC++: static vtkXMLMultiBlockDataReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLMultiBlockDataReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLMultiBlockDataReader\nC++: vtkXMLMultiBlockDataReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLMultiBlockDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLMultiBlockDataReader", // tp_name
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
  PyvtkXMLMultiBlockDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLMultiBlockDataReader_StaticNew()
{
  return vtkXMLMultiBlockDataReader::New();
}

PyObject *PyvtkXMLMultiBlockDataReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLMultiBlockDataReader_Type, PyvtkXMLMultiBlockDataReader_Methods,
    "vtkXMLMultiBlockDataReader",
 &PyvtkXMLMultiBlockDataReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLMultiBlockDataReader_Type;

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

void PyVTKAddFile_vtkXMLMultiBlockDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLMultiBlockDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLMultiBlockDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

