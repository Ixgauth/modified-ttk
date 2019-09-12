// python wrapper for vtkArrayDataWriter
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
#include "vtkArrayDataWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayDataWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkArrayDataWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkArrayDataWriter_Doc =
  "vtkArrayDataWriter - Serialize vtkArrayData to a file or stream.\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkArrayDataWriter serializes vtkArrayData using a text-based format\n"
  "that is human-readable and easily parsed (default option).  The\n"
  "WriteBinary array option can be used to serialize the vtkArrayData\n"
  "using a binary format that is optimized for rapid throughput.\n\n"
  "vtkArrayDataWriter can be used in two distinct ways: first, it can be\n"
  "used as a normal pipeline filter, which writes its inputs to a file. \n"
  "Alternatively, static methods are provided for writing vtkArrayData\n"
  "instances to files or arbitrary c++ streams.\n\n"
  "Inputs:\n"
  "  Input port 0: (required) vtkArrayData object.\n\n"
  "Output Format:\n"
  "  See\n"
  "http://www.kitware.com/InfovisWiki/index.php/N-Way_Array_File_Formats\n"
  "for\n"
  "  details on how vtkArrayDataWriter encodes data.\n\n"
  "@sa\n"
  "vtkArrayDataReader\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";


static PyObject *
PyvtkArrayDataWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayDataWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayDataWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayDataWriter *tempr = vtkArrayDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayDataWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayDataWriter::NewInstance());

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
PyvtkArrayDataWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

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
      op->vtkArrayDataWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkArrayDataWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinary(temp0);
    }
    else
    {
      op->vtkArrayDataWriter::SetBinary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkArrayDataWriter::GetBinary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_BinaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryOn();
    }
    else
    {
      op->vtkArrayDataWriter::BinaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_BinaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryOff();
    }
    else
    {
      op->vtkArrayDataWriter::BinaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkArrayDataWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

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
      op->vtkArrayDataWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkArrayDataWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkArrayDataWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkArrayDataWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayDataWriter_Write_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkArrayDataWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->Write(temp0, temp1) :
      op->vtkArrayDataWriter::Write(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArrayData *temp0 = nullptr;
  vtkStdString temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkArrayData") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkArrayDataWriter::Write(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayDataWriter *op = static_cast<vtkArrayDataWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->Write(temp0) :
      op->vtkArrayDataWriter::Write(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkArrayDataWriter_Write_s5(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  vtkArrayData *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkArrayData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkStdString tempr = vtkArrayDataWriter::Write(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayDataWriter_Write_Methods[] = {
  {nullptr, PyvtkArrayDataWriter_Write_s2, METH_VARARGS,
   "@s|q"},
  {nullptr, PyvtkArrayDataWriter_Write_s3, METH_VARARGS | METH_STATIC,
   "Vs|q *vtkArrayData"},
  {nullptr, PyvtkArrayDataWriter_Write_s4, METH_VARARGS,
   "@q"},
  {nullptr, PyvtkArrayDataWriter_Write_s5, METH_VARARGS | METH_STATIC,
   "V|q *vtkArrayData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayDataWriter_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayDataWriter_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayDataWriter_Write_s1(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return nullptr;
}


static PyMethodDef PyvtkArrayDataWriter_Methods[] = {
  {"IsTypeOf", PyvtkArrayDataWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayDataWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayDataWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkArrayDataWriter\nC++: static vtkArrayDataWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayDataWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkArrayDataWriter\nC++: vtkArrayDataWriter *NewInstance()\n\n"},
  {"SetFileName", PyvtkArrayDataWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {"GetFileName", PyvtkArrayDataWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet / set the filename where data will be stored (when used as a\nfilter).\n"},
  {"SetBinary", PyvtkArrayDataWriter_SetBinary, METH_VARARGS,
   "V.SetBinary(int)\nC++: virtual void SetBinary(vtkTypeBool _arg)\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {"GetBinary", PyvtkArrayDataWriter_GetBinary, METH_VARARGS,
   "V.GetBinary() -> int\nC++: virtual vtkTypeBool GetBinary()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {"BinaryOn", PyvtkArrayDataWriter_BinaryOn, METH_VARARGS,
   "V.BinaryOn()\nC++: virtual void BinaryOn()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {"BinaryOff", PyvtkArrayDataWriter_BinaryOff, METH_VARARGS,
   "V.BinaryOff()\nC++: virtual void BinaryOff()\n\nGet / set whether data will be written in binary format (when\nused as a filter).\n"},
  {"GetOutputString", PyvtkArrayDataWriter_GetOutputString, METH_VARARGS,
   "V.GetOutputString() -> string\nC++: virtual vtkStdString GetOutputString()\n\nThe output string. This is only set when WriteToOutputString is\nset.\n"},
  {"SetWriteToOutputString", PyvtkArrayDataWriter_SetWriteToOutputString, METH_VARARGS,
   "V.SetWriteToOutputString(bool)\nC++: virtual void SetWriteToOutputString(bool _arg)\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {"GetWriteToOutputString", PyvtkArrayDataWriter_GetWriteToOutputString, METH_VARARGS,
   "V.GetWriteToOutputString() -> bool\nC++: virtual bool GetWriteToOutputString()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {"WriteToOutputStringOn", PyvtkArrayDataWriter_WriteToOutputStringOn, METH_VARARGS,
   "V.WriteToOutputStringOn()\nC++: virtual void WriteToOutputStringOn()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {"WriteToOutputStringOff", PyvtkArrayDataWriter_WriteToOutputStringOff, METH_VARARGS,
   "V.WriteToOutputStringOff()\nC++: virtual void WriteToOutputStringOff()\n\nWhether to output to a string instead of to a file, which is the\ndefault.\n"},
  {"Write", PyvtkArrayDataWriter_Write, METH_VARARGS,
   "V.Write() -> int\nC++: int Write() override;\nV.Write(string, bool) -> bool\nC++: bool Write(const vtkStdString &FileName,\n    bool WriteBinary=false)\nV.Write(vtkArrayData, string, bool) -> bool\nC++: static bool Write(vtkArrayData *array,\n    const vtkStdString &file_name, bool WriteBinary=false)\nV.Write(bool) -> string\nC++: vtkStdString Write(bool WriteBinary)\nV.Write(vtkArrayData, bool) -> string\nC++: static vtkStdString Write(vtkArrayData *array,\n    bool WriteBinary=false)\n\nWrite data to output. Method executes subclasses WriteData()\nmethod, as well as StartMethod() and EndMethod() methods. Returns\n1 on success and 0 on failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkArrayDataWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkArrayDataWriter", // tp_name
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
  PyvtkArrayDataWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayDataWriter_StaticNew()
{
  return vtkArrayDataWriter::New();
}

PyObject *PyvtkArrayDataWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkArrayDataWriter_Type, PyvtkArrayDataWriter_Methods,
    "vtkArrayDataWriter",
 &PyvtkArrayDataWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkArrayDataWriter_Type;

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

void PyVTKAddFile_vtkArrayDataWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayDataWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayDataWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

