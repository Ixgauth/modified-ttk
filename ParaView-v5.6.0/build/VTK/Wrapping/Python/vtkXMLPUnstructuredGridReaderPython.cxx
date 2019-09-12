// python wrapper for vtkXMLPUnstructuredGridReader
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
#include "vtkXMLPUnstructuredGridReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXMLPUnstructuredGridReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkXMLPUnstructuredGridReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPUnstructuredDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLPUnstructuredDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLPUnstructuredDataReader_ClassNew
#endif

static const char *PyvtkXMLPUnstructuredGridReader_Doc =
  "vtkXMLPUnstructuredGridReader - Read PVTK XML UnstructuredGrid files.\n\n"
  "Superclass: vtkXMLPUnstructuredDataReader\n\n"
  "vtkXMLPUnstructuredGridReader reads the PVTK XML UnstructuredGrid\n"
  "file format.  This reads the parallel format's summary file and then\n"
  "uses vtkXMLUnstructuredGridReader to read data from the individual\n"
  "UnstructuredGrid piece files.  Streaming is supported. The standard\n"
  "extension for this reader's file format is \"pvtu\".\n\n"
  "@sa\n"
  "vtkXMLUnstructuredGridReader\n\n";


static PyObject *
PyvtkXMLPUnstructuredGridReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXMLPUnstructuredGridReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXMLPUnstructuredGridReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXMLPUnstructuredGridReader *tempr = vtkXMLPUnstructuredGridReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXMLPUnstructuredGridReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXMLPUnstructuredGridReader::NewInstance());

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
PyvtkXMLPUnstructuredGridReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkXMLPUnstructuredGridReader::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPUnstructuredGridReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridReader *op = static_cast<vtkXMLPUnstructuredGridReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkXMLPUnstructuredGridReader::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXMLPUnstructuredGridReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkXMLPUnstructuredGridReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPUnstructuredGridReader_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyMethodDef PyvtkXMLPUnstructuredGridReader_Methods[] = {
  {"IsTypeOf", PyvtkXMLPUnstructuredGridReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXMLPUnstructuredGridReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXMLPUnstructuredGridReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkXMLPUnstructuredGridReader\nC++: static vtkXMLPUnstructuredGridReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXMLPUnstructuredGridReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkXMLPUnstructuredGridReader\nC++: vtkXMLPUnstructuredGridReader *NewInstance()\n\n"},
  {"GetOutput", PyvtkXMLPUnstructuredGridReader_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkXMLPUnstructuredGridReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXMLPython.vtkXMLPUnstructuredGridReader", // tp_name
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
  PyvtkXMLPUnstructuredGridReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXMLPUnstructuredGridReader_StaticNew()
{
  return vtkXMLPUnstructuredGridReader::New();
}

PyObject *PyvtkXMLPUnstructuredGridReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkXMLPUnstructuredGridReader_Type, PyvtkXMLPUnstructuredGridReader_Methods,
    "vtkXMLPUnstructuredGridReader",
 &PyvtkXMLPUnstructuredGridReader_StaticNew);

  PyTypeObject *pytype = &PyvtkXMLPUnstructuredGridReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPUnstructuredDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXMLPUnstructuredGridReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXMLPUnstructuredGridReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXMLPUnstructuredGridReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

