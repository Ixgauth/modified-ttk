// python wrapper for vtkXMLRectilinearGridWriter
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
#include "vtkXMLRectilinearGridWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLRectilinearGridWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLRectilinearGridWriter_ClassNew(); }

#ifndef DECLARED_PyvtkXMLStructuredDataWriter_ClassNew
extern "C" { PyObject *PyvtkXMLStructuredDataWriter_ClassNew(); }
#define DECLARED_PyvtkXMLStructuredDataWriter_ClassNew
#endif

static const char *PyvtkXMLRectilinearGridWriter_Doc =
  "vtkXMLRectilinearGridWriter - Write VTK XML RectilinearGrid files.\n\n"
  "Superclass: vtkXMLStructuredDataWriter\n\n"
  "vtkXMLRectilinearGridWriter writes the VTK XML RectilinearGrid file\n"
  "format.  One rectilinear grid input can be written into one file in\n"
  "any number of streamed pieces.  The standard extension for this\n"
  "writer's file format is \"vtr\".  This writer is also used to write a\n"
  "single piece of the parallel file format.\n\n"
  "@sa\n"
  "vtkXMLPRectilinearGridWriter\n\n";


static PyObject *
PyvtkXMLRectilinearGridWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLRectilinearGridWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLRectilinearGridWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLRectilinearGridWriter *tempr = vtkXMLRectilinearGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLRectilinearGridWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLRectilinearGridWriter::NewInstance());

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
PyvtkXMLRectilinearGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkXMLRectilinearGridWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultFileExtension() :
      op->vtkXMLRectilinearGridWriter::GetDefaultFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXMLRectilinearGridWriter_Methods[] = {
  {"IsTypeOf", PyvtkXMLRectilinearGridWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLRectilinearGridWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLRectilinearGridWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLRectilinearGridWriter\nC++: static vtkXMLRectilinearGridWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLRectilinearGridWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLRectilinearGridWriter\nC++: vtkXMLRectilinearGridWriter *NewInstance()\n\n"},
  {"GetInput", PyvtkXMLRectilinearGridWriter_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {"GetDefaultFileExtension", PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension, METH_VARARGS,
   "V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension() override;\n\nGet the default file extension for files written by this writer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLRectilinearGridWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLRectilinearGridWriter", // tp_name
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
  PyvtkXMLRectilinearGridWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLRectilinearGridWriter_StaticNew()
{
  return vtkXMLRectilinearGridWriter::New();
}

PyObject *PyvtkXMLRectilinearGridWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLRectilinearGridWriter_Type, PyvtkXMLRectilinearGridWriter_Methods,
    "vtkXMLRectilinearGridWriter",
 &PyvtkXMLRectilinearGridWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLRectilinearGridWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLStructuredDataWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLRectilinearGridWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLRectilinearGridWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLRectilinearGridWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

