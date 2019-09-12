// python wrapper for vtkPEnSightGoldBinaryReader
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
#include "vtkPEnSightGoldBinaryReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPEnSightGoldBinaryReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPEnSightGoldBinaryReader_ClassNew(); }

#ifndef DECLARED_PyvtkPEnSightReader_ClassNew
extern "C" { PyObject *PyvtkPEnSightReader_ClassNew(); }
#define DECLARED_PyvtkPEnSightReader_ClassNew
#endif

static const char *PyvtkPEnSightGoldBinaryReader_Doc =
  "vtkPEnSightGoldBinaryReader - Parallel vtkEnSightGoldBinaryReader.\n\n"
  "Superclass: vtkPEnSightReader\n\n"
  "\n"
  " This file has been developed as part of the CARRIOCAS (Distributed\n"
  " computation over ultra high optical internet network ) project (\n"
  " http://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French ICT\n"
  " Cluster (http://www.systematic-paris-region.org/en/index.html) under the\n"
  " supervision of CEA (http://www.cea.fr) and EDF (http://www.edf.fr) by\n"
  " Oxalya (http://www.oxalya.com)\n\n"
  "  Copyright (c) CEA\n"
  " \n\n";


static PyObject *
PyvtkPEnSightGoldBinaryReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPEnSightGoldBinaryReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldBinaryReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldBinaryReader *op = static_cast<vtkPEnSightGoldBinaryReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightGoldBinaryReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldBinaryReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPEnSightGoldBinaryReader *tempr = vtkPEnSightGoldBinaryReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldBinaryReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldBinaryReader *op = static_cast<vtkPEnSightGoldBinaryReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPEnSightGoldBinaryReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightGoldBinaryReader::NewInstance());

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

static PyMethodDef PyvtkPEnSightGoldBinaryReader_Methods[] = {
  {"IsTypeOf", PyvtkPEnSightGoldBinaryReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPEnSightGoldBinaryReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPEnSightGoldBinaryReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPEnSightGoldBinaryReader\nC++: static vtkPEnSightGoldBinaryReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPEnSightGoldBinaryReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPEnSightGoldBinaryReader\nC++: vtkPEnSightGoldBinaryReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPEnSightGoldBinaryReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightGoldBinaryReader", // tp_name
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
  PyvtkPEnSightGoldBinaryReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPEnSightGoldBinaryReader_StaticNew()
{
  return vtkPEnSightGoldBinaryReader::New();
}

PyObject *PyvtkPEnSightGoldBinaryReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPEnSightGoldBinaryReader_Type, PyvtkPEnSightGoldBinaryReader_Methods,
    "vtkPEnSightGoldBinaryReader",
 &PyvtkPEnSightGoldBinaryReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPEnSightGoldBinaryReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPEnSightReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPEnSightGoldBinaryReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPEnSightGoldBinaryReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPEnSightGoldBinaryReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

