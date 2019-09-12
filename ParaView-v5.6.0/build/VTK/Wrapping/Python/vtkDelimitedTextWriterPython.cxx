// python wrapper for vtkDelimitedTextWriter
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
#include "vtkDelimitedTextWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDelimitedTextWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDelimitedTextWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkDelimitedTextWriter_Doc =
  "vtkDelimitedTextWriter - Delimited text writer for vtkTable\n\n"
  "Superclass: vtkWriter\n\n"
  "Writes a vtkTable as a delimited text file (such as CSV).\n\n";


static PyObject *
PyvtkDelimitedTextWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDelimitedTextWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelimitedTextWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDelimitedTextWriter *tempr = vtkDelimitedTextWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDelimitedTextWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelimitedTextWriter::NewInstance());

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
PyvtkDelimitedTextWriter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextWriter::SetFieldDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkDelimitedTextWriter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextWriter::SetStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkDelimitedTextWriter::GetStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

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
      op->vtkDelimitedTextWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDelimitedTextWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseStringDelimiter(temp0);
    }
    else
    {
      op->vtkDelimitedTextWriter::SetUseStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkDelimitedTextWriter::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkDelimitedTextWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDelimitedTextWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkDelimitedTextWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkDelimitedTextWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkDelimitedTextWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelimitedTextWriter_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelimitedTextWriter *op = static_cast<vtkDelimitedTextWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkDelimitedTextWriter::GetString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDelimitedTextWriter_Methods[] = {
  {"IsTypeOf", PyvtkDelimitedTextWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDelimitedTextWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDelimitedTextWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDelimitedTextWriter\nC++: static vtkDelimitedTextWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDelimitedTextWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDelimitedTextWriter\nC++: vtkDelimitedTextWriter *NewInstance()\n\n"},
  {"SetFieldDelimiter", PyvtkDelimitedTextWriter_SetFieldDelimiter, METH_VARARGS,
   "V.SetFieldDelimiter(string)\nC++: virtual void SetFieldDelimiter(const char *_arg)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"GetFieldDelimiter", PyvtkDelimitedTextWriter_GetFieldDelimiter, METH_VARARGS,
   "V.GetFieldDelimiter() -> string\nC++: virtual char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"SetStringDelimiter", PyvtkDelimitedTextWriter_SetStringDelimiter, METH_VARARGS,
   "V.SetStringDelimiter(string)\nC++: virtual void SetStringDelimiter(const char *_arg)\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {"GetStringDelimiter", PyvtkDelimitedTextWriter_GetStringDelimiter, METH_VARARGS,
   "V.GetStringDelimiter() -> string\nC++: virtual char *GetStringDelimiter()\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {"SetFileName", PyvtkDelimitedTextWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the filename for the file.\n"},
  {"GetFileName", PyvtkDelimitedTextWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {"SetUseStringDelimiter", PyvtkDelimitedTextWriter_SetUseStringDelimiter, METH_VARARGS,
   "V.SetUseStringDelimiter(bool)\nC++: virtual void SetUseStringDelimiter(bool _arg)\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {"GetUseStringDelimiter", PyvtkDelimitedTextWriter_GetUseStringDelimiter, METH_VARARGS,
   "V.GetUseStringDelimiter() -> bool\nC++: virtual bool GetUseStringDelimiter()\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {"SetWriteToOutputString", PyvtkDelimitedTextWriter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(bool)\nC++: virtual void SetWriteToOutputString(bool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkDelimitedTextWriter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> bool\nC++: virtual bool GetWriteToOutputString()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOn", PyvtkDelimitedTextWriter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: virtual void WriteToOutputStringOn()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"WriteToOutputStringOff", PyvtkDelimitedTextWriter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: virtual void WriteToOutputStringOff()\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"RegisterAndGetOutputString", PyvtkDelimitedTextWriter_RegisterAndGetOutputString, METH_VARARGS,
   "V.RegisterAndGetOutputString() -> string\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nnullptr, so that the user is responsible for deleting the string.\n"},
  {"GetString", PyvtkDelimitedTextWriter_GetString, METH_VARARGS,
   "V.GetString(string) -> string\nC++: vtkStdString GetString(vtkStdString string)\n\nInternal method: Returns the \"string\" with the \"StringDelimiter\"\nif UseStringDelimiter is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDelimitedTextWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkDelimitedTextWriter", // tp_name
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
  PyvtkDelimitedTextWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDelimitedTextWriter_StaticNew()
{
  return vtkDelimitedTextWriter::New();
}

PyObject *PyvtkDelimitedTextWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDelimitedTextWriter_Type, PyvtkDelimitedTextWriter_Methods,
    "vtkDelimitedTextWriter",
 &PyvtkDelimitedTextWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkDelimitedTextWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDelimitedTextWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDelimitedTextWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDelimitedTextWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

