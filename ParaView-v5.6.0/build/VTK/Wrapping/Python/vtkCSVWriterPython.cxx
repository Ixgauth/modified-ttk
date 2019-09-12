// python wrapper for vtkCSVWriter
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
#include "vtkCSVWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCSVWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCSVWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static const char *PyvtkCSVWriter_Doc =
  "vtkCSVWriter - CSV writer for vtkTable\n\n"
  "Superclass: vtkWriter\n\n"
  "Writes a vtkTable as a delimited text file (such as CSV).\n\n";


static PyObject *
PyvtkCSVWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCSVWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCSVWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCSVWriter *tempr = vtkCSVWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCSVWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCSVWriter::NewInstance());

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
PyvtkCSVWriter_SetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetFieldDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetFieldDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDelimiter() :
      op->vtkCSVWriter::GetFieldDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStringDelimiter() :
      op->vtkCSVWriter::GetStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCSVWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

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
      op->vtkCSVWriter::SetUseStringDelimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetUseStringDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseStringDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseStringDelimiter() :
      op->vtkCSVWriter::GetUseStringDelimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrecision(temp0);
    }
    else
    {
      op->vtkCSVWriter::SetPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMinValue() :
      op->vtkCSVWriter::GetPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecisionMaxValue() :
      op->vtkCSVWriter::GetPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrecision() :
      op->vtkCSVWriter::GetPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_SetUseScientificNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScientificNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScientificNotation(temp0);
    }
    else
    {
      op->vtkCSVWriter::SetUseScientificNotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetUseScientificNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScientificNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseScientificNotation() :
      op->vtkCSVWriter::GetUseScientificNotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_UseScientificNotationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScientificNotationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScientificNotationOn();
    }
    else
    {
      op->vtkCSVWriter::UseScientificNotationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_UseScientificNotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScientificNotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScientificNotationOff();
    }
    else
    {
      op->vtkCSVWriter::UseScientificNotationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCSVWriter_GetString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCSVWriter *op = static_cast<vtkCSVWriter *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetString(temp0) :
      op->vtkCSVWriter::GetString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCSVWriter_Methods[] = {
  {"IsTypeOf", PyvtkCSVWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCSVWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCSVWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCSVWriter\nC++: static vtkCSVWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCSVWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCSVWriter\nC++: vtkCSVWriter *NewInstance()\n\n"},
  {"SetFieldDelimiter", PyvtkCSVWriter_SetFieldDelimiter, METH_VARARGS,
   "V.SetFieldDelimiter(string)\nC++: virtual void SetFieldDelimiter(const char *_arg)\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"GetFieldDelimiter", PyvtkCSVWriter_GetFieldDelimiter, METH_VARARGS,
   "V.GetFieldDelimiter() -> string\nC++: virtual char *GetFieldDelimiter()\n\nGet/Set the delimiter use to separate fields (\",\" by default.)\n"},
  {"SetStringDelimiter", PyvtkCSVWriter_SetStringDelimiter, METH_VARARGS,
   "V.SetStringDelimiter(string)\nC++: virtual void SetStringDelimiter(const char *_arg)\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {"GetStringDelimiter", PyvtkCSVWriter_GetStringDelimiter, METH_VARARGS,
   "V.GetStringDelimiter() -> string\nC++: virtual char *GetStringDelimiter()\n\nGet/Set the delimiter used for string data, if any eg. double\nquotes(\").\n"},
  {"SetFileName", PyvtkCSVWriter_SetFileName, METH_VARARGS,
   "V.SetFileName(string)\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the filename for the file.\n"},
  {"GetFileName", PyvtkCSVWriter_GetFileName, METH_VARARGS,
   "V.GetFileName() -> string\nC++: virtual char *GetFileName()\n\nGet/Set the filename for the file.\n"},
  {"SetUseStringDelimiter", PyvtkCSVWriter_SetUseStringDelimiter, METH_VARARGS,
   "V.SetUseStringDelimiter(bool)\nC++: virtual void SetUseStringDelimiter(bool _arg)\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {"GetUseStringDelimiter", PyvtkCSVWriter_GetUseStringDelimiter, METH_VARARGS,
   "V.GetUseStringDelimiter() -> bool\nC++: virtual bool GetUseStringDelimiter()\n\nGet/Set if StringDelimiter must be used for string data. True by\ndefault.\n"},
  {"SetPrecision", PyvtkCSVWriter_SetPrecision, METH_VARARGS,
   "V.SetPrecision(int)\nC++: virtual void SetPrecision(int _arg)\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {"GetPrecisionMinValue", PyvtkCSVWriter_GetPrecisionMinValue, METH_VARARGS,
   "V.GetPrecisionMinValue() -> int\nC++: virtual int GetPrecisionMinValue()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {"GetPrecisionMaxValue", PyvtkCSVWriter_GetPrecisionMaxValue, METH_VARARGS,
   "V.GetPrecisionMaxValue() -> int\nC++: virtual int GetPrecisionMaxValue()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {"GetPrecision", PyvtkCSVWriter_GetPrecision, METH_VARARGS,
   "V.GetPrecision() -> int\nC++: virtual int GetPrecision()\n\nGet/Set the precision to use for printing numeric values. Default\nis 5.\n"},
  {"SetUseScientificNotation", PyvtkCSVWriter_SetUseScientificNotation, METH_VARARGS,
   "V.SetUseScientificNotation(bool)\nC++: virtual void SetUseScientificNotation(bool _arg)\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {"GetUseScientificNotation", PyvtkCSVWriter_GetUseScientificNotation, METH_VARARGS,
   "V.GetUseScientificNotation() -> bool\nC++: virtual bool GetUseScientificNotation()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {"UseScientificNotationOn", PyvtkCSVWriter_UseScientificNotationOn, METH_VARARGS,
   "V.UseScientificNotationOn()\nC++: virtual void UseScientificNotationOn()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {"UseScientificNotationOff", PyvtkCSVWriter_UseScientificNotationOff, METH_VARARGS,
   "V.UseScientificNotationOff()\nC++: virtual void UseScientificNotationOff()\n\nGet/Set whether scientific notation is used for numeric values.\n"},
  {"GetString", PyvtkCSVWriter_GetString, METH_VARARGS,
   "V.GetString(string) -> string\nC++: vtkStdString GetString(vtkStdString string)\n\nInternal method: decortes the \"string\" with the \"StringDelimiter\"\nif UseStringDelimiter is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCSVWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkCSVWriter", // tp_name
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
  PyvtkCSVWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCSVWriter_StaticNew()
{
  return vtkCSVWriter::New();
}

PyObject *PyvtkCSVWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCSVWriter_Type, PyvtkCSVWriter_Methods,
    "vtkCSVWriter",
 &PyvtkCSVWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkCSVWriter_Type;

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

void PyVTKAddFile_vtkCSVWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCSVWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCSVWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

