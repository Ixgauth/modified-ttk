// python wrapper for vtkXMLPUnstructuredGridWriter
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
#include "vtkXMLPUnstructuredGridWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPUnstructuredGridWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPUnstructuredGridWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPUnstructuredDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLPUnstructuredDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLPUnstructuredDataWriter_ClassNew
#endif

static const char *PyvtkXMLPUnstructuredGridWriter_Doc =
  "vtkXMLPUnstructuredGridWriter - Write PVTK XML UnstructuredGrid files.\n\n"
  "Superclass: vtkXMLPUnstructuredDataWriter\n\n"
  "vtkXMLPUnstructuredGridWriter writes the PVTK XML UnstructuredGrid\n"
  "file format.  One unstructured grid input can be written into a\n"
  "parallel file format with any number of pieces spread across files.\n"
  "The standard extension for this writer's file format is \"pvtu\". This\n"
  "writer uses vtkXMLUnstructuredGridWriter to write the individual\n"
  "piece files.\n\n"
  "@sa\n"
  "vtkXMLUnstructuredGridWriter\n\n";


static PyObject *
PyvtkXMLPUnstructuredGridWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPUnstructuredGridWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPUnstructuredGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPUnstructuredGridWriter *tempr = vtkXMLPUnstructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPUnstructuredGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPUnstructuredGridWriter::NewInstance());

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
PyvtkXMLPUnstructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridBase *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLPUnstructuredGridWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLPUnstructuredGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLPUnstructuredGridWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLPUnstructuredGridWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPUnstructuredGridWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPUnstructuredGridWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPUnstructuredGridWriter\nC++: static vtkXMLPUnstructuredGridWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPUnstructuredGridWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPUnstructuredGridWriter\nC++: vtkXMLPUnstructuredGridWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkXMLPUnstructuredGridWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkUnstructuredGridBase\nC++: vtkUnstructuredGridBase *GetInput()\n\nGet/Set the writer's input.\n"},
  {"GetDefaultFileExtension", PyvtkXMLPUnstructuredGridWriter_GetDefaultFileExtension, METH_VARARGS,
   "V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPUnstructuredGridWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOParallelXMLPython.vtkXMLPUnstructuredGridWriter", // tp_name
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
  PyvtkXMLPUnstructuredGridWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPUnstructuredGridWriter_StaticNew()
{
  return vtkXMLPUnstructuredGridWriter::New();
}

PyObject *PyvtkXMLPUnstructuredGridWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPUnstructuredGridWriter_Type, PyvtkXMLPUnstructuredGridWriter_Methods,
    "vtkXMLPUnstructuredGridWriter",
 &PyvtkXMLPUnstructuredGridWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPUnstructuredGridWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPUnstructuredDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPUnstructuredGridWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPUnstructuredGridWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPUnstructuredGridWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

