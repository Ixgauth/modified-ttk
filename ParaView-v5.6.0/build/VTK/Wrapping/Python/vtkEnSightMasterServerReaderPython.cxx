// python wrapper for vtkEnSightMasterServerReader
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
#include "vtkEnSightMasterServerReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightMasterServerReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkEnSightMasterServerReader_ClassNew(); }

#ifndef DECLARED_PyvtkGenericEnSightReader_ClassNew
extern "C" { PyObject *PyvtkGenericEnSightReader_ClassNew(); }
#define DECLARED_PyvtkGenericEnSightReader_ClassNew
#endif

static const char *PyvtkEnSightMasterServerReader_Doc =
  "vtkEnSightMasterServerReader - reader for compound EnSight files\n\n"
  "Superclass: vtkGenericEnSightReader\n\n"
;


static PyObject *
PyvtkEnSightMasterServerReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightMasterServerReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightMasterServerReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightMasterServerReader *tempr = vtkEnSightMasterServerReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightMasterServerReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightMasterServerReader::NewInstance());

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
PyvtkEnSightMasterServerReader_DetermineFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DetermineFileName(temp0) :
      op->vtkEnSightMasterServerReader::DetermineFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetPieceCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPieceCaseFileName() :
      op->vtkEnSightMasterServerReader::GetPieceCaseFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_SetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentPiece(temp0);
    }
    else
    {
      op->vtkEnSightMasterServerReader::SetCurrentPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPiece() :
      op->vtkEnSightMasterServerReader::GetCurrentPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkEnSightMasterServerReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightMasterServerReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightMasterServerReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightMasterServerReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightMasterServerReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkEnSightMasterServerReader\nC++: static vtkEnSightMasterServerReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightMasterServerReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkEnSightMasterServerReader\nC++: vtkEnSightMasterServerReader *NewInstance()\n\n"},
  {"DetermineFileName", PyvtkEnSightMasterServerReader_DetermineFileName, METH_VARARGS,
   "V.DetermineFileName(int) -> int\nC++: int DetermineFileName(int piece)\n\nDetermine which file should be read for piece\n"},
  {"GetPieceCaseFileName", PyvtkEnSightMasterServerReader_GetPieceCaseFileName, METH_VARARGS,
   "V.GetPieceCaseFileName() -> string\nC++: virtual char *GetPieceCaseFileName()\n\nGet the file name that will be read.\n"},
  {"SetCurrentPiece", PyvtkEnSightMasterServerReader_SetCurrentPiece, METH_VARARGS,
   "V.SetCurrentPiece(int)\nC++: virtual void SetCurrentPiece(int _arg)\n\nSet or get the current piece.\n"},
  {"GetCurrentPiece", PyvtkEnSightMasterServerReader_GetCurrentPiece, METH_VARARGS,
   "V.GetCurrentPiece() -> int\nC++: virtual int GetCurrentPiece()\n\nSet or get the current piece.\n"},
  {"CanReadFile", PyvtkEnSightMasterServerReader_CanReadFile, METH_VARARGS,
   "V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname) override;\n\nReturns IsEnSightFile() by default, but can be overridden\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkEnSightMasterServerReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOEnSightPython.vtkEnSightMasterServerReader", // tp_name
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
  PyvtkEnSightMasterServerReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightMasterServerReader_StaticNew()
{
  return vtkEnSightMasterServerReader::New();
}

PyObject *PyvtkEnSightMasterServerReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkEnSightMasterServerReader_Type, PyvtkEnSightMasterServerReader_Methods,
    "vtkEnSightMasterServerReader",
 &PyvtkEnSightMasterServerReader_StaticNew);

  PyTypeObject *pytype = &PyvtkEnSightMasterServerReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGenericEnSightReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightMasterServerReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightMasterServerReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightMasterServerReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

