// python wrapper for vtkPNGWriter
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
#include "vtkPNGWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPNGWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPNGWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static const char *PyvtkPNGWriter_Doc =
  "vtkPNGWriter - Writes PNG files.\n\n"
  "Superclass: vtkImageWriter\n\n"
  "vtkPNGWriter writes PNG files. It supports 1 to 4 component data of\n"
  "unsigned char or unsigned short\n\n"
  "@sa\n"
  "vtkPNGReader\n\n";


static PyObject *
PyvtkPNGWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPNGWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPNGWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPNGWriter *tempr = vtkPNGWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPNGWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPNGWriter::NewInstance());

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
PyvtkPNGWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkPNGWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionLevel(temp0);
    }
    else
    {
      op->vtkPNGWriter::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkPNGWriter::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkPNGWriter::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkPNGWriter::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToMemory(temp0);
    }
    else
    {
      op->vtkPNGWriter::SetWriteToMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWriteToMemory() :
      op->vtkPNGWriter::GetWriteToMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOn();
    }
    else
    {
      op->vtkPNGWriter::WriteToMemoryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOff();
    }
    else
    {
      op->vtkPNGWriter::WriteToMemoryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetResult(temp0);
    }
    else
    {
      op->vtkPNGWriter::SetResult(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetResult() :
      op->vtkPNGWriter::GetResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGWriter_AddText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGWriter *op = static_cast<vtkPNGWriter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddText(temp0, temp1);
    }
    else
    {
      op->vtkPNGWriter::AddText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPNGWriter_Methods[] = {
  {"IsTypeOf", PyvtkPNGWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPNGWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPNGWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPNGWriter\nC++: static vtkPNGWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPNGWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPNGWriter\nC++: vtkPNGWriter *NewInstance()\n\n"},
  {"Write", PyvtkPNGWriter_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nThe main interface which triggers the writer to start.\n"},
  {"SetCompressionLevel", PyvtkPNGWriter_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: virtual void SetCompressionLevel(int _arg)\n\nSet/Get the zlib compression level. The range is 0-9, with 0\nmeaning no compression corresponding to the largest file size,\nand 9 meaning best compression, corresponding to the smallest\nfile size. The default is 5.\n"},
  {"GetCompressionLevelMinValue", PyvtkPNGWriter_GetCompressionLevelMinValue, METH_VARARGS,
   "V.GetCompressionLevelMinValue() -> int\nC++: virtual int GetCompressionLevelMinValue()\n\nSet/Get the zlib compression level. The range is 0-9, with 0\nmeaning no compression corresponding to the largest file size,\nand 9 meaning best compression, corresponding to the smallest\nfile size. The default is 5.\n"},
  {"GetCompressionLevelMaxValue", PyvtkPNGWriter_GetCompressionLevelMaxValue, METH_VARARGS,
   "V.GetCompressionLevelMaxValue() -> int\nC++: virtual int GetCompressionLevelMaxValue()\n\nSet/Get the zlib compression level. The range is 0-9, with 0\nmeaning no compression corresponding to the largest file size,\nand 9 meaning best compression, corresponding to the smallest\nfile size. The default is 5.\n"},
  {"GetCompressionLevel", PyvtkPNGWriter_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: virtual int GetCompressionLevel()\n\nSet/Get the zlib compression level. The range is 0-9, with 0\nmeaning no compression corresponding to the largest file size,\nand 9 meaning best compression, corresponding to the smallest\nfile size. The default is 5.\n"},
  {"SetWriteToMemory", PyvtkPNGWriter_SetWriteToMemory, METH_VARARGS,
   "V.SetWriteToMemory(int)\nC++: virtual void SetWriteToMemory(vtkTypeUBool _arg)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"GetWriteToMemory", PyvtkPNGWriter_GetWriteToMemory, METH_VARARGS,
   "V.GetWriteToMemory() -> int\nC++: virtual vtkTypeUBool GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOn", PyvtkPNGWriter_WriteToMemoryOn, METH_VARARGS,
   "V.WriteToMemoryOn()\nC++: virtual void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOff", PyvtkPNGWriter_WriteToMemoryOff, METH_VARARGS,
   "V.WriteToMemoryOff()\nC++: virtual void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"SetResult", PyvtkPNGWriter_SetResult, METH_VARARGS,
   "V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be nullptr\nuntil the data is written the first time\n"},
  {"GetResult", PyvtkPNGWriter_GetResult, METH_VARARGS,
   "V.GetResult() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be nullptr\nuntil the data is written the first time\n"},
  {"AddText", PyvtkPNGWriter_AddText, METH_VARARGS,
   "V.AddText(string, string)\nC++: void AddText(const char *key, const char *value)\n\nAdds a text chunk to the PNG. More than one text chunk with the\nsame key is permissible. There are a number of predefined\nkeywords that should be used when appropriate. See\nhttp://www.libpng.org/pub/png/spec/1.2/PNG-Chunks.html for more\ninformation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPNGWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkPNGWriter", // tp_name
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
  PyvtkPNGWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPNGWriter_StaticNew()
{
  return vtkPNGWriter::New();
}

PyObject *PyvtkPNGWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPNGWriter_Type, PyvtkPNGWriter_Methods,
    "vtkPNGWriter",
 &PyvtkPNGWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkPNGWriter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPNGWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPNGWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPNGWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

