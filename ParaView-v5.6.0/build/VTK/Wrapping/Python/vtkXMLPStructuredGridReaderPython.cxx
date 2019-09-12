// python wrapper for vtkXMLPStructuredGridReader
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
#include "vtkXMLPStructuredGridReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPStructuredGridReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPStructuredGridReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPStructuredDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLPStructuredDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLPStructuredDataReader_ClassNew
#endif

static const char *PyvtkXMLPStructuredGridReader_Doc =
  "vtkXMLPStructuredGridReader - Read PVTK XML StructuredGrid files.\n\n"
  "Superclass: vtkXMLPStructuredDataReader\n\n"
  "vtkXMLPStructuredGridReader reads the PVTK XML StructuredGrid file\n"
  "format.  This reads the parallel format's summary file and then uses\n"
  "vtkXMLStructuredGridReader to read data from the individual\n"
  "StructuredGrid piece files.  Streaming is supported.  The standard\n"
  "extension for this reader's file format is \"pvts\".\n\n"
  "@sa\n"
  "vtkXMLStructuredGridReader\n\n";


static PyObject *
PyvtkXMLPStructuredGridReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPStructuredGridReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPStructuredGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPStructuredGridReader *tempr = vtkXMLPStructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPStructuredGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPStructuredGridReader::NewInstance());

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
PyvtkXMLPStructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLPStructuredGridReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridReader *op = static_cast<vtkXMLPStructuredGridReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLPStructuredGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPStructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLPStructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPStructuredGridReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyMethodDef PyvtkXMLPStructuredGridReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLPStructuredGridReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPStructuredGridReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPStructuredGridReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPStructuredGridReader\nC++: static vtkXMLPStructuredGridReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPStructuredGridReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPStructuredGridReader\nC++: vtkXMLPStructuredGridReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkXMLPStructuredGridReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPStructuredGridReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLPStructuredGridReader", // tp_name
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
  PyvtkXMLPStructuredGridReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPStructuredGridReader_StaticNew()
{
  return vtkXMLPStructuredGridReader::New();
}

PyObject *PyvtkXMLPStructuredGridReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPStructuredGridReader_Type, PyvtkXMLPStructuredGridReader_Methods,
    "vtkXMLPStructuredGridReader",
 &PyvtkXMLPStructuredGridReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPStructuredGridReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPStructuredDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPStructuredGridReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPStructuredGridReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPStructuredGridReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

