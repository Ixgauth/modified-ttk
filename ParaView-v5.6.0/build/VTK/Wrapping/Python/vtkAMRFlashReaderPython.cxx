// python wrapper for vtkAMRFlashReader
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
#include "vtkAMRFlashReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRFlashReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRFlashReader_ClassNew(); }

#ifndef DECLARED_PyvtkAMRBaseReader_ClassNew
extern "C" { PyObject *PyvtkAMRBaseReader_ClassNew(); }
#define DECLARED_PyvtkAMRBaseReader_ClassNew
#endif

static const char *PyvtkAMRFlashReader_Doc =
  "vtkAMRFlashReader - no description provided.\n\n"
  "Superclass: vtkAMRBaseReader\n\n"
;


static PyObject *
PyvtkAMRFlashReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRFlashReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRFlashReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRFlashReader *tempr = vtkAMRFlashReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRFlashReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRFlashReader::NewInstance());

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
PyvtkAMRFlashReader_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkAMRFlashReader::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkAMRFlashReader::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRFlashReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRFlashReader *op = static_cast<vtkAMRFlashReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkAMRFlashReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRFlashReader_Methods[] = {
  {"IsTypeOf", PyvtkAMRFlashReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRFlashReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRFlashReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRFlashReader\nC++: static vtkAMRFlashReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRFlashReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRFlashReader\nC++: vtkAMRFlashReader *NewInstance()\n\n"},
  {"GetNumberOfBlocks", PyvtkAMRFlashReader_GetNumberOfBlocks, METH_VARARGS,
   "V.GetNumberOfBlocks() -> int\nC++: int GetNumberOfBlocks() override;\n\nSee vtkAMRBaseReader::GetNumberOfBlocks\n"},
  {"GetNumberOfLevels", PyvtkAMRFlashReader_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: int GetNumberOfLevels() override;\n\nSee vtkAMRBaseReader::GetNumberOfLevels\n"},
  {"SetFileName", PyvtkAMRFlashReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *fileName) override;\n\nSee vtkAMRBaseReader::SetFileName\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRFlashReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOAMRPython.vtkAMRFlashReader", // tp_name
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
  PyvtkAMRFlashReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRFlashReader_StaticNew()
{
  return vtkAMRFlashReader::New();
}

PyObject *PyvtkAMRFlashReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRFlashReader_Type, PyvtkAMRFlashReader_Methods,
    "vtkAMRFlashReader",
 &PyvtkAMRFlashReader_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRFlashReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAMRBaseReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRFlashReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRFlashReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRFlashReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

