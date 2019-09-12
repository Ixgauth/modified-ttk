// python wrapper for vtkDataObjectWriter
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
#include "vtkDataObjectWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataObjectWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkDataObjectWriter_Doc =
  "vtkDataObjectWriter - write vtk field data\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkDataObjectWriter is a source object that writes ASCII or binary\n"
  "field data files in vtk format. Field data is a general form of data\n"
  "in matrix form.\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n\n"
  "@sa\n"
  "vtkFieldData vtkFieldDataReader\n\n";


static PyObject *
PyvtkDataObjectWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectWriter *tempr = vtkDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectWriter::NewInstance());

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
PyvtkDataObjectWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

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
      op->vtkDataObjectWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataObjectWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeader(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataObjectWriter::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataObjectWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkDataObjectWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkDataObjectWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
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
      op->vtkDataObjectWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkDataObjectWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkDataObjectWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataObjectWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataObjectWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataObjectWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataObjectWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataObjectWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataObjectWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectWriter_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataObjectWriter\nC++: static vtkDataObjectWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkDataObjectWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: void SetFileName(const char *filename)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetFileName", PyvtkDataObjectWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: char *GetFileName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetHeader", PyvtkDataObjectWriter_SetHeader, METH_VARARGS,
   "V.SetHeader(string)\nC++: void SetHeader(const char *header)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetHeader", PyvtkDataObjectWriter_GetHeader, METH_VARARGS,
   "V.GetHeader() -> string\nC++: char *GetHeader()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetFileType", PyvtkDataObjectWriter_SetFileType, METH_VARARGS,
   "V.SetFileType(int)\nC++: void SetFileType(int type)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetFileType", PyvtkDataObjectWriter_GetFileType, METH_VARARGS,
   "V.GetFileType() -> int\nC++: int GetFileType()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetFileTypeToASCII", PyvtkDataObjectWriter_SetFileTypeToASCII, METH_VARARGS,
   "V.SetFileTypeToASCII()\nC++: void SetFileTypeToASCII()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetFileTypeToBinary", PyvtkDataObjectWriter_SetFileTypeToBinary, METH_VARARGS,
   "V.SetFileTypeToBinary()\nC++: void SetFileTypeToBinary()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetWriteToOutputString", PyvtkDataObjectWriter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(int)\nC++: void SetWriteToOutputString(int b)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"WriteToOutputStringOn", PyvtkDataObjectWriter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: void WriteToOutputStringOn()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"WriteToOutputStringOff", PyvtkDataObjectWriter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: void WriteToOutputStringOff()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetWriteToOutputString", PyvtkDataObjectWriter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> int\nC++: int GetWriteToOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetOutputString", PyvtkDataObjectWriter_GetOutputString, METH_VARARGS,
   "V.GetOutputString() -> string\nC++: char *GetOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetOutputStdString", PyvtkDataObjectWriter_GetOutputStdString, METH_VARARGS,
   "V.GetOutputStdString() -> string\nC++: vtkStdString GetOutputStdString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetOutputStringLength", PyvtkDataObjectWriter_GetOutputStringLength, METH_VARARGS,
   "V.GetOutputStringLength() -> int\nC++: int GetOutputStringLength()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetBinaryOutputString", PyvtkDataObjectWriter_GetBinaryOutputString, METH_VARARGS,
   "V.GetBinaryOutputString() -> (int, ...)\nC++: unsigned char *GetBinaryOutputString()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"SetFieldDataName", PyvtkDataObjectWriter_SetFieldDataName, METH_VARARGS,
   "V.SetFieldDataName(string)\nC++: void SetFieldDataName(const char *fieldname)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetFieldDataName", PyvtkDataObjectWriter_GetFieldDataName, METH_VARARGS,
   "V.GetFieldDataName() -> string\nC++: char *GetFieldDataName()\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataObjectWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOLegacyPython.vtkDataObjectWriter", // tp_name
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
  PyvtkDataObjectWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectWriter_StaticNew()
{
  return vtkDataObjectWriter::New();
}

PyObject *PyvtkDataObjectWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataObjectWriter_Type, PyvtkDataObjectWriter_Methods,
    "vtkDataObjectWriter",
 &PyvtkDataObjectWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataObjectWriter_Type;

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

void PyVTKAddFile_vtkDataObjectWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

