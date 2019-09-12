// python wrapper for vtkPEnSightGoldReader
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
#include "vtkPEnSightGoldReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPEnSightGoldReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPEnSightGoldReader_ClassNew(); }

#ifndef DECLARED_PyvtkPEnSightReader_ClassNew
extern "C" { PyObject *PyvtkPEnSightReader_ClassNew(); }
#define DECLARED_PyvtkPEnSightReader_ClassNew
#endif

static const char *PyvtkPEnSightGoldReader_Doc =
  "vtkPEnSightGoldReader - Parallel version of vtkEnSightGoldReader.\n\n"
  "Superclass: vtkPEnSightReader\n\n"
  "\n\n"
  " Thanks:\n"
  " This file has been developed as part of the CARRIOCAS (Distributed\n"
  " computation over ultra high optical internet network ) project (\n"
  " http://www.carriocas.org/index.php?lng=ang ) of the SYSTEM@TIC French ICT\n"
  " Cluster (http://www.systematic-paris-region.org/en/index.html) under the\n"
  " supervision of CEA (http://www.cea.fr) and EDF (http://www.edf.fr) by\n"
  " Oxalya (http://www.oxalya.com)\n\n"
  " Thanks:\n"
  "  Copyright (c) CEA\n"
  " \n\n";


static PyObject *
PyvtkPEnSightGoldReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPEnSightGoldReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldReader *op = static_cast<vtkPEnSightGoldReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPEnSightGoldReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPEnSightGoldReader *tempr = vtkPEnSightGoldReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPEnSightGoldReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPEnSightGoldReader *op = static_cast<vtkPEnSightGoldReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPEnSightGoldReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPEnSightGoldReader::NewInstance());

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

static PyMethodDef PyvtkPEnSightGoldReader_Methods[] = {
  {"IsTypeOf", PyvtkPEnSightGoldReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPEnSightGoldReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPEnSightGoldReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPEnSightGoldReader\nC++: static vtkPEnSightGoldReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPEnSightGoldReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPEnSightGoldReader\nC++: vtkPEnSightGoldReader *NewInstance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPEnSightGoldReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkPEnSightGoldReader", // tp_name
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
  PyvtkPEnSightGoldReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPEnSightGoldReader_StaticNew()
{
  return vtkPEnSightGoldReader::New();
}

PyObject *PyvtkPEnSightGoldReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPEnSightGoldReader_Type, PyvtkPEnSightGoldReader_Methods,
    "vtkPEnSightGoldReader",
 &PyvtkPEnSightGoldReader_StaticNew);

  PyTypeObject *pytype = &PyvtkPEnSightGoldReader_Type;

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

void PyVTKAddFile_vtkPEnSightGoldReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPEnSightGoldReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPEnSightGoldReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

