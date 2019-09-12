// python wrapper for vtkXMLPartitionedDataSetCollectionWriter
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
#include "vtkXMLPartitionedDataSetCollectionWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPartitionedDataSetCollectionWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPartitionedDataSetCollectionWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLCompositeDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLCompositeDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLCompositeDataWriter_ClassNew
#endif

static const char *PyvtkXMLPartitionedDataSetCollectionWriter_Doc =
  "vtkXMLPartitionedDataSetCollectionWriter - writer for\nvtkPartitionedDataSetCollection.\n\n"
  "Superclass: vtkXMLCompositeDataWriter\n\n"
  "vtkXMLPartitionedDataSetCollectionWriter is a\n"
  "vtkXMLCompositeDataWriter subclass to handle\n"
  "vtkPartitionedDataSetCollection.\n\n";


static PyObject *
PyvtkXMLPartitionedDataSetCollectionWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPartitionedDataSetCollectionWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetCollectionWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPartitionedDataSetCollectionWriter *op = static_cast<vtkXMLPartitionedDataSetCollectionWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPartitionedDataSetCollectionWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetCollectionWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPartitionedDataSetCollectionWriter *tempr = vtkXMLPartitionedDataSetCollectionWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPartitionedDataSetCollectionWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPartitionedDataSetCollectionWriter *op = static_cast<vtkXMLPartitionedDataSetCollectionWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPartitionedDataSetCollectionWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPartitionedDataSetCollectionWriter::NewInstance());

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


static PyObject *
PyvtkXMLPartitionedDataSetCollectionWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPartitionedDataSetCollectionWriter *op = static_cast<vtkXMLPartitionedDataSetCollectionWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLPartitionedDataSetCollectionWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPartitionedDataSetCollectionWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPartitionedDataSetCollectionWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPartitionedDataSetCollectionWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPartitionedDataSetCollectionWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkXMLPartitionedDataSetCollectionWriter\nC++: static vtkXMLPartitionedDataSetCollectionWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPartitionedDataSetCollectionWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPartitionedDataSetCollectionWriter\nC++: vtkXMLPartitionedDataSetCollectionWriter *NewInstance()\n\n"},
  {"GetDefaultFileExtension", PyvtkXMLPartitionedDataSetCollectionWriter_GetDefaultFileExtension, METH_VARARGS,
   "V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPartitionedDataSetCollectionWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLPartitionedDataSetCollectionWriter", // tp_name
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
  PyvtkXMLPartitionedDataSetCollectionWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPartitionedDataSetCollectionWriter_StaticNew()
{
  return vtkXMLPartitionedDataSetCollectionWriter::New();
}

PyObject *PyvtkXMLPartitionedDataSetCollectionWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPartitionedDataSetCollectionWriter_Type, PyvtkXMLPartitionedDataSetCollectionWriter_Methods,
    "vtkXMLPartitionedDataSetCollectionWriter",
 &PyvtkXMLPartitionedDataSetCollectionWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPartitionedDataSetCollectionWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLCompositeDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPartitionedDataSetCollectionWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPartitionedDataSetCollectionWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPartitionedDataSetCollectionWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

