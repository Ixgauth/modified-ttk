// python wrapper for vtkJPEGWriter
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
#include "vtkJPEGWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJPEGWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkJPEGWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static const char *PyvtkJPEGWriter_Doc =
  "vtkJPEGWriter - Writes JPEG files.\n\n"
  "Superclass: vtkImageWriter\n\n"
  "vtkJPEGWriter writes JPEG files. It supports 1 and 3 component data\n"
  "of unsigned char. It relies on the IJG's libjpeg.  Thanks to IJG for\n"
  "supplying a public jpeg IO library.\n\n"
  "@sa\n"
  "vtkJPEGReader\n\n";


static PyObject *
PyvtkJPEGWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJPEGWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJPEGWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJPEGWriter *tempr = vtkJPEGWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJPEGWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJPEGWriter::NewInstance());

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
PyvtkJPEGWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkJPEGWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQuality(temp0);
    }
    else
    {
      op->vtkJPEGWriter::SetQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkJPEGWriter::GetQualityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkJPEGWriter::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkJPEGWriter::GetQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgressive(temp0);
    }
    else
    {
      op->vtkJPEGWriter::SetProgressive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetProgressive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetProgressive() :
      op->vtkJPEGWriter::GetProgressive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProgressiveOn();
    }
    else
    {
      op->vtkJPEGWriter::ProgressiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_ProgressiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProgressiveOff();
    }
    else
    {
      op->vtkJPEGWriter::ProgressiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      op->vtkJPEGWriter::SetWriteToMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWriteToMemory() :
      op->vtkJPEGWriter::GetWriteToMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOn();
    }
    else
    {
      op->vtkJPEGWriter::WriteToMemoryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOff();
    }
    else
    {
      op->vtkJPEGWriter::WriteToMemoryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

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
      op->vtkJPEGWriter::SetResult(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJPEGWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGWriter *op = static_cast<vtkJPEGWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetResult() :
      op->vtkJPEGWriter::GetResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkJPEGWriter_Methods[] = {
  {"IsTypeOf", PyvtkJPEGWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJPEGWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJPEGWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkJPEGWriter\nC++: static vtkJPEGWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJPEGWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkJPEGWriter\nC++: vtkJPEGWriter *NewInstance()\n\n"},
  {"Write", PyvtkJPEGWriter_Write, METH_VARARGS,
   "V.Write()\nC++: void Write() override;\n\nThe main interface which triggers the writer to start.\n"},
  {"SetQuality", PyvtkJPEGWriter_SetQuality, METH_VARARGS,
   "V.SetQuality(int)\nC++: virtual void SetQuality(int _arg)\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {"GetQualityMinValue", PyvtkJPEGWriter_GetQualityMinValue, METH_VARARGS,
   "V.GetQualityMinValue() -> int\nC++: virtual int GetQualityMinValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {"GetQualityMaxValue", PyvtkJPEGWriter_GetQualityMaxValue, METH_VARARGS,
   "V.GetQualityMaxValue() -> int\nC++: virtual int GetQualityMaxValue()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {"GetQuality", PyvtkJPEGWriter_GetQuality, METH_VARARGS,
   "V.GetQuality() -> int\nC++: virtual int GetQuality()\n\nCompression quality. 0 = Low quality, 100 = High quality\n"},
  {"SetProgressive", PyvtkJPEGWriter_SetProgressive, METH_VARARGS,
   "V.SetProgressive(int)\nC++: virtual void SetProgressive(vtkTypeUBool _arg)\n\nProgressive JPEG generation.\n"},
  {"GetProgressive", PyvtkJPEGWriter_GetProgressive, METH_VARARGS,
   "V.GetProgressive() -> int\nC++: virtual vtkTypeUBool GetProgressive()\n\nProgressive JPEG generation.\n"},
  {"ProgressiveOn", PyvtkJPEGWriter_ProgressiveOn, METH_VARARGS,
   "V.ProgressiveOn()\nC++: virtual void ProgressiveOn()\n\nProgressive JPEG generation.\n"},
  {"ProgressiveOff", PyvtkJPEGWriter_ProgressiveOff, METH_VARARGS,
   "V.ProgressiveOff()\nC++: virtual void ProgressiveOff()\n\nProgressive JPEG generation.\n"},
  {"SetWriteToMemory", PyvtkJPEGWriter_SetWriteToMemory, METH_VARARGS,
   "V.SetWriteToMemory(int)\nC++: virtual void SetWriteToMemory(vtkTypeUBool _arg)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"GetWriteToMemory", PyvtkJPEGWriter_GetWriteToMemory, METH_VARARGS,
   "V.GetWriteToMemory() -> int\nC++: virtual vtkTypeUBool GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOn", PyvtkJPEGWriter_WriteToMemoryOn, METH_VARARGS,
   "V.WriteToMemoryOn()\nC++: virtual void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOff", PyvtkJPEGWriter_WriteToMemoryOff, METH_VARARGS,
   "V.WriteToMemoryOff()\nC++: virtual void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"SetResult", PyvtkJPEGWriter_SetResult, METH_VARARGS,
   "V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be nullptr\nuntil the data is written the first time\n"},
  {"GetResult", PyvtkJPEGWriter_GetResult, METH_VARARGS,
   "V.GetResult() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be nullptr\nuntil the data is written the first time\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkJPEGWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkJPEGWriter", // tp_name
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
  PyvtkJPEGWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJPEGWriter_StaticNew()
{
  return vtkJPEGWriter::New();
}

PyObject *PyvtkJPEGWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkJPEGWriter_Type, PyvtkJPEGWriter_Methods,
    "vtkJPEGWriter",
 &PyvtkJPEGWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkJPEGWriter_Type;

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

void PyVTKAddFile_vtkJPEGWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJPEGWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJPEGWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

