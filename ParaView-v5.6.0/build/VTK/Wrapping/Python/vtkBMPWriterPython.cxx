// python wrapper for vtkBMPWriter
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
#include "vtkBMPWriter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBMPWriter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBMPWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static const char *PyvtkBMPWriter_Doc =
  "vtkBMPWriter - Writes Windows BMP files.\n\n"
  "Superclass: vtkImageWriter\n\n"
  "vtkBMPWriter writes BMP files. The data type of the file is unsigned\n"
  "char regardless of the input type.\n\n"
  "@sa\n"
  "vtkBMPReader\n\n";


static PyObject *
PyvtkBMPWriter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBMPWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBMPWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBMPWriter *tempr = vtkBMPWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBMPWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBMPWriter::NewInstance());

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
PyvtkBMPWriter_SetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

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
      op->vtkBMPWriter::SetWriteToMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_GetWriteToMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWriteToMemory() :
      op->vtkBMPWriter::GetWriteToMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_WriteToMemoryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOn();
    }
    else
    {
      op->vtkBMPWriter::WriteToMemoryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_WriteToMemoryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMemoryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToMemoryOff();
    }
    else
    {
      op->vtkBMPWriter::WriteToMemoryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_SetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

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
      op->vtkBMPWriter::SetResult(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBMPWriter_GetResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetResult() :
      op->vtkBMPWriter::GetResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBMPWriter_Methods[] = {
  {"IsTypeOf", PyvtkBMPWriter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBMPWriter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBMPWriter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBMPWriter\nC++: static vtkBMPWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBMPWriter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBMPWriter\nC++: vtkBMPWriter *NewInstance()\n\n"},
  {"SetWriteToMemory", PyvtkBMPWriter_SetWriteToMemory, METH_VARARGS,
   "V.SetWriteToMemory(int)\nC++: virtual void SetWriteToMemory(vtkTypeUBool _arg)\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"GetWriteToMemory", PyvtkBMPWriter_GetWriteToMemory, METH_VARARGS,
   "V.GetWriteToMemory() -> int\nC++: virtual vtkTypeUBool GetWriteToMemory()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOn", PyvtkBMPWriter_WriteToMemoryOn, METH_VARARGS,
   "V.WriteToMemoryOn()\nC++: virtual void WriteToMemoryOn()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"WriteToMemoryOff", PyvtkBMPWriter_WriteToMemoryOff, METH_VARARGS,
   "V.WriteToMemoryOff()\nC++: virtual void WriteToMemoryOff()\n\nWrite the image to memory (a vtkUnsignedCharArray)\n"},
  {"SetResult", PyvtkBMPWriter_SetResult, METH_VARARGS,
   "V.SetResult(vtkUnsignedCharArray)\nC++: virtual void SetResult(vtkUnsignedCharArray *)\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {"GetResult", PyvtkBMPWriter_GetResult, METH_VARARGS,
   "V.GetResult() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetResult()\n\nWhen writing to memory this is the result, it will be NULL until\nthe data is written the first time\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBMPWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOImagePython.vtkBMPWriter", // tp_name
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
  PyvtkBMPWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBMPWriter_StaticNew()
{
  return vtkBMPWriter::New();
}

PyObject *PyvtkBMPWriter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBMPWriter_Type, PyvtkBMPWriter_Methods,
    "vtkBMPWriter",
 &PyvtkBMPWriter_StaticNew);

  PyTypeObject *pytype = &PyvtkBMPWriter_Type;

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

void PyVTKAddFile_vtkBMPWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBMPWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBMPWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

