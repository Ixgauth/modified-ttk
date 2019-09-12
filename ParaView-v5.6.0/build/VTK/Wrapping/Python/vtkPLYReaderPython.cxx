// python wrapper for vtkPLYReader
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
#include "vtkPLYReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLYReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPLYReader_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPolyDataReader_ClassNew
extern "C" { PyObject *PyvtkAbstractPolyDataReader_ClassNew(); }
#define DECLARED_PyvtkAbstractPolyDataReader_ClassNew
#endif

static const char *PyvtkPLYReader_Doc =
  "vtkPLYReader - read Stanford University PLY polygonal file format\n\n"
  "Superclass: vtkAbstractPolyDataReader\n\n"
  "vtkPLYReader is a source object that reads polygonal data in Stanford\n"
  "University PLY file format (see\n"
  "http://graphics.stanford.edu/data/3Dscanrep). It requires that the\n"
  "elements \"vertex\" and \"face\" are defined. The \"vertex\" element must\n"
  "have the properties \"x\", \"y\", and \"z\". The \"face\" element must have\n"
  "the property \"vertex_indices\" defined. Optionally, if the \"face\"\n"
  "element has the properties \"intensity\" and/or the triplet \"red\",\n"
  "\"green\", \"blue\", and optionally \"alpha\"; these are read and added as\n"
  "scalars to the output data.\n\n"
  "@sa\n"
  "vtkPLYWriter\n\n";


static PyObject *
PyvtkPLYReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLYReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLYReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPLYReader *tempr = vtkPLYReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPLYReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLYReader::NewInstance());

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
PyvtkPLYReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLYReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYReader_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYReader *op = static_cast<vtkPLYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetComments() :
      op->vtkPLYReader::GetComments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPLYReader_Methods[] = {
  {"IsTypeOf", PyvtkPLYReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPLYReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPLYReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPLYReader\nC++: static vtkPLYReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPLYReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPLYReader\nC++: vtkPLYReader *NewInstance()\n\n"},
  {"CanReadFile", PyvtkPLYReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nA simple, non-exhaustive check to see if a file is a valid ply\nfile.\n"},
  {"GetComments", PyvtkPLYReader_GetComments, METH_VARARGS,
   "V.GetComments() -> vtkStringArray\nC++: virtual vtkStringArray *GetComments()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPLYReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOPLYPython.vtkPLYReader", // tp_name
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
  PyvtkPLYReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPLYReader_StaticNew()
{
  return vtkPLYReader::New();
}

PyObject *PyvtkPLYReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPLYReader_Type, PyvtkPLYReader_Methods,
    "vtkPLYReader",
 &PyvtkPLYReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPLYReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPolyDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLYReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLYReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPLYReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

