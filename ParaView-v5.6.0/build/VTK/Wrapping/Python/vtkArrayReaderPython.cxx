// python wrapper for vtkArrayReader
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
#include "vtkStdString.h"
#include "vtkArrayReader.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayReader(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayReader_ClassNew(); }

#ifndef DECLARED_PyvtkArrayDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkArrayDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkArrayDataAlgorithm_ClassNew
#endif

static const char *PyvtkArrayReader_Doc =
  "vtkArrayReader - Reads sparse and dense vtkArray data written by\nvtkArrayWriter.\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "Reads sparse and dense vtkArray data written with vtkArrayWriter.\n\n"
  "Outputs:\n"
  "  Output port 0: vtkArrayData containing a dense or sparse array.\n\n"
  "@sa\n"
  "vtkArrayWriter\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkArrayReader_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayReader *tempr = vtkArrayReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayReader::NewInstance());

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
PyvtkArrayReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

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
      op->vtkArrayReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_SetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputString(temp0);
    }
    else
    {
      op->vtkArrayReader::SetInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_GetInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetInputString() :
      op->vtkArrayReader::GetInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_SetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFromInputString(temp0);
    }
    else
    {
      op->vtkArrayReader::SetReadFromInputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_GetReadFromInputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFromInputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadFromInputString() :
      op->vtkArrayReader::GetReadFromInputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_ReadFromInputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOn();
    }
    else
    {
      op->vtkArrayReader::ReadFromInputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_ReadFromInputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromInputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayReader *op = static_cast<vtkArrayReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFromInputStringOff();
    }
    else
    {
      op->vtkArrayReader::ReadFromInputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayReader_Read(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Read");

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArray *tempr = vtkArrayReader::Read(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayReader_Methods[] = {
  {"IsTypeOf", PyvtkArrayReader_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayReader_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayReader_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayReader\nC++: static vtkArrayReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayReader_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayReader\nC++: vtkArrayReader *NewInstance()\n\n"},
  {"GetFileName", PyvtkArrayReader_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nSet the filesystem location from which data will be read.\n"},
  {"SetFileName", PyvtkArrayReader_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nSet the filesystem location from which data will be read.\n"},
  {"SetInputString", PyvtkArrayReader_SetInputString, METH_VARARGS,
   "V.SetInputString(string)\nC++: virtual void SetInputString(const vtkStdString &string)\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {"GetInputString", PyvtkArrayReader_GetInputString, METH_VARARGS,
   "V.GetInputString() -> string\nC++: virtual vtkStdString GetInputString()\n\nThe input string to parse. If you set the input string, you must\nalso set the ReadFromInputString flag to parse the string instead\nof a file.\n"},
  {"SetReadFromInputString", PyvtkArrayReader_SetReadFromInputString, METH_VARARGS,
   "V.SetReadFromInputString(bool)\nC++: virtual void SetReadFromInputString(bool _arg)\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {"GetReadFromInputString", PyvtkArrayReader_GetReadFromInputString, METH_VARARGS,
   "V.GetReadFromInputString() -> bool\nC++: virtual bool GetReadFromInputString()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {"ReadFromInputStringOn", PyvtkArrayReader_ReadFromInputStringOn, METH_VARARGS,
   "V.ReadFromInputStringOn()\nC++: virtual void ReadFromInputStringOn()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {"ReadFromInputStringOff", PyvtkArrayReader_ReadFromInputStringOff, METH_VARARGS,
   "V.ReadFromInputStringOff()\nC++: virtual void ReadFromInputStringOff()\n\nWhether to read from an input string as opposed to a file, which\nis the default.\n"},
  {"Read", PyvtkArrayReader_Read, METH_VARARGS,
   "V.Read(string) -> vtkArray\nC++: static vtkArray *Read(const vtkStdString &str)\n\nRead an arbitrary array from a string.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkArrayReader", // tp_name
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
  PyvtkArrayReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayReader_StaticNew()
{
  return vtkArrayReader::New();
}

PyObject *PyvtkArrayReader_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayReader_Type, PyvtkArrayReader_Methods,
    "vtkArrayReader",
 &PyvtkArrayReader_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayReader_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkArrayDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

