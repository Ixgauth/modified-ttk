// python wrapper for vtkXMLDataObjectWriter
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
#include "vtkXMLDataObjectWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLDataObjectWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLDataObjectWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLWriter_ClassNew
extern "C" { PyObject *PyvtkXMLWriter_ClassNew(); }
#define DECLARED_PyvtkXMLWriter_ClassNew
#endif

static const char *PyvtkXMLDataObjectWriter_Doc =
  "vtkXMLDataObjectWriter - Write any type of VTK XML file.\n\n"
  "Superclass: vtkXMLWriter\n\n"
  "vtkXMLDataObjectWriter is a wrapper around the VTK XML file format\n"
  "writers.  Given an input vtkDataSet, the correct writer is\n"
  "automatically selected based on the type of input.\n\n"
  "@sa\n"
  "vtkXMLImageDataWriter vtkXMLStructuredGridWriter\n"
  "vtkXMLRectilinearGridWriter vtkXMLPolyDataWriter\n"
  "vtkXMLUnstructuredGridWriter\n\n";


static PyObject *
PyvtkXMLDataObjectWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLDataObjectWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataObjectWriter *op = static_cast<vtkXMLDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLDataObjectWriter *tempr = vtkXMLDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataObjectWriter *op = static_cast<vtkXMLDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLDataObjectWriter::NewInstance());

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
PyvtkXMLDataObjectWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataObjectWriter *op = static_cast<vtkXMLDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLDataObjectWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLDataObjectWriter_NewWriter(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "NewWriter");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkXMLWriter *tempr = vtkXMLDataObjectWriter::NewWriter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLDataObjectWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLDataObjectWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLDataObjectWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLDataObjectWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLDataObjectWriter\nC++: static vtkXMLDataObjectWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLDataObjectWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLDataObjectWriter\nC++: vtkXMLDataObjectWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkXMLDataObjectWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet/Set the writer's input.\n"},
  {"NewWriter", PyvtkXMLDataObjectWriter_NewWriter, METH_VARARGS,
   "V.NewWriter(int) -> vtkXMLWriter\nC++: static vtkXMLWriter *NewWriter(int dataset_type)\n\nCreates a writer for the given dataset type. May return nullptr\nfor unsupported/unrecognized dataset types. Returns a new\ninstance. The caller is responsible of calling\nvtkObject::Delete() or vtkObject::UnRegister() on it when done.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLDataObjectWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLDataObjectWriter", // tp_name
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
  PyvtkXMLDataObjectWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLDataObjectWriter_StaticNew()
{
  return vtkXMLDataObjectWriter::New();
}

PyObject *PyvtkXMLDataObjectWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLDataObjectWriter_Type, PyvtkXMLDataObjectWriter_Methods,
    "vtkXMLDataObjectWriter",
 &PyvtkXMLDataObjectWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLDataObjectWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLDataObjectWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLDataObjectWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLDataObjectWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

