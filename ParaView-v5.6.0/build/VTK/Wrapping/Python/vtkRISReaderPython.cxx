// python wrapper for vtkRISReader
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
#include "vtkRISReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRISReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRISReader_ClassNew(); }

#ifndef DECLARED_PyvtkTableAlgorithm_ClassNew
extern "C" { PyObject *PyvtkTableAlgorithm_ClassNew(); }
#define DECLARED_PyvtkTableAlgorithm_ClassNew
#endif

static const char *PyvtkRISReader_Doc =
  "vtkRISReader - reader for RIS files\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "RIS is a tagged format for expressing bibliographic citations.  Data\n"
  "is structured as a collection of records with each record composed of\n"
  "one-to-many fields.  See\n\n"
  "http://en.wikipedia.org/wiki/RIS_(file_format)\n"
  "http://www.refman.com/support/risformat_intro.asp\n"
  "http://www.adeptscience.co.uk/kb/article/A626\n\n"
  "for details.  vtkRISReader will convert an RIS file into a vtkTable,\n"
  "with the set of table columns determined dynamically from the\n"
  "contents of the file.\n\n";


static PyObject *
PyvtkRISReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRISReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRISReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRISReader *tempr = vtkRISReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRISReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRISReader::NewInstance());

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
PyvtkRISReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkRISReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

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
      op->vtkRISReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_GetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDelimiter() :
      op->vtkRISReader::GetDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_SetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDelimiter(temp0);
    }
    else
    {
      op->vtkRISReader::SetDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxRecords() :
      op->vtkRISReader::GetMaxRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRISReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxRecords(temp0);
    }
    else
    {
      op->vtkRISReader::SetMaxRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRISReader_Methods[] = {
  {"IsTypeOf", PyvtkRISReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRISReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRISReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRISReader\nC++: static vtkRISReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRISReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRISReader\nC++: vtkRISReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkRISReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet/get the file to load\n"},
  {"SetFileName", PyvtkRISReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet/get the file to load\n"},
  {"GetDelimiter", PyvtkRISReader_GetDelimiter, METH_VARARGS,
   "V.GetDelimiter() -> string\nC++: virtual char *GetDelimiter()\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {"SetDelimiter", PyvtkRISReader_SetDelimiter, METH_VARARGS,
   "V.SetDelimiter(string)\nC++: virtual void SetDelimiter(const char *_arg)\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {"GetMaxRecords", PyvtkRISReader_GetMaxRecords, METH_VARARGS,
   "V.GetMaxRecords() -> int\nC++: virtual int GetMaxRecords()\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {"SetMaxRecords", PyvtkRISReader_SetMaxRecords, METH_VARARGS,
   "V.SetMaxRecords(int)\nC++: virtual void SetMaxRecords(int _arg)\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRISReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOInfovisPython.vtkRISReader", // tp_name
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
  PyvtkRISReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRISReader_StaticNew()
{
  return vtkRISReader::New();
}

PyObject *PyvtkRISReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRISReader_Type, PyvtkRISReader_Methods,
    "vtkRISReader",
 &PyvtkRISReader_StaticNew);

  PyTypeObject *pytype = &PyvtkRISReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkTableAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRISReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRISReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRISReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

