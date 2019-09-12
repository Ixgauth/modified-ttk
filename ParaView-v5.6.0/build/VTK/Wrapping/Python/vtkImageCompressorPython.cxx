// python wrapper for vtkImageCompressor
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
#include "vtkImageCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkImageCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkImageCompressor_Doc =
  "vtkImageCompressor - Superclass for image compressor/decompressor\nused by Composite Managers.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageCompressor is an abstract superclass for the helper object\n"
  "used to compress images by the vtkParallelManager subclasses.\n"
  "Compressors must implement Compress,Decomperss methods, which respect\n"
  "the LossLessMode ivar, which is used by the composite manager to\n"
  "force loss less compression during a still render. Additionally\n"
  "compressors must be able to seriealize and restore their setting from\n"
  "a stream.\n\n";


static PyObject *
PyvtkImageCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCompressor *tempr = vtkImageCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCompressor::NewInstance());

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
PyvtkImageCompressor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkImageCompressor::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageCompressor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkImageCompressor::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkImageCompressor::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLossLessMode(temp0);
    }
    else
    {
      op->vtkImageCompressor::SetLossLessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_GetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLossLessMode() :
      op->vtkImageCompressor::GetLossLessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->Compress();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->Decompress();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_SetImageResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageResolution(temp0, temp1);
    }
    else
    {
      op->vtkImageCompressor::SetImageResolution(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkImageCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCompressor *op = static_cast<vtkImageCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkImageCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCompressor_Methods[] = {
  {"IsTypeOf", PyvtkImageCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkImageCompressor\nC++: static vtkImageCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkImageCompressor\nC++: vtkImageCompressor *NewInstance()\n\n"},
  {"SetInput", PyvtkImageCompressor_SetInput, METH_VARARGS,
   "V.SetInput(vtkUnsignedCharArray)\nC++: void SetInput(vtkUnsignedCharArray *input)\n\nGet/Set the input to this compressor.\n"},
  {"GetInput", PyvtkImageCompressor_GetInput, METH_VARARGS,
   "V.GetInput() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetInput()\n\nGet/Set the input to this compressor.\n"},
  {"GetOutput", PyvtkImageCompressor_GetOutput, METH_VARARGS,
   "V.GetOutput() -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetOutput()\n\nGet/Set the output of the compressor.\n"},
  {"SetOutput", PyvtkImageCompressor_SetOutput, METH_VARARGS,
   "V.SetOutput(vtkUnsignedCharArray)\nC++: void SetOutput(vtkUnsignedCharArray *)\n\nGet/Set the output of the compressor.\n"},
  {"SetLossLessMode", PyvtkImageCompressor_SetLossLessMode, METH_VARARGS,
   "V.SetLossLessMode(int)\nC++: virtual void SetLossLessMode(int _arg)\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {"GetLossLessMode", PyvtkImageCompressor_GetLossLessMode, METH_VARARGS,
   "V.GetLossLessMode() -> int\nC++: virtual int GetLossLessMode()\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {"Compress", PyvtkImageCompressor_Compress, METH_VARARGS,
   "V.Compress() -> int\nC++: virtual int Compress()\n\nCall this method to compress the input and generate the\ncompressed data.\n"},
  {"Decompress", PyvtkImageCompressor_Decompress, METH_VARARGS,
   "V.Decompress() -> int\nC++: virtual int Decompress()\n\nDecompresses and geenartes the decompressed data as output. Input\nmust be compressed data.\n"},
  {"SetImageResolution", PyvtkImageCompressor_SetImageResolution, METH_VARARGS,
   "V.SetImageResolution(int, int)\nC++: virtual void SetImageResolution(int width, int height)\n\nCommunicates the next expected image resolution.\n"},
  {"SaveConfiguration", PyvtkImageCompressor_SaveConfiguration, METH_VARARGS,
   "V.SaveConfiguration() -> string\nC++: virtual const char *SaveConfiguration()\n\nSerialize compressor configuration (but not the data) into the\nstream. A pointer to the internally managed stream is returned\n(ie do not free it!).\n"},
  {"RestoreConfiguration", PyvtkImageCompressor_RestoreConfiguration, METH_VARARGS,
   "V.RestoreConfiguration(string) -> string\nC++: virtual const char *RestoreConfiguration(const char *stream)\n\nRestore state from the stream, The stream format for all image\ncompressor is: [ClassName, LossLessMode, [Derived Class Stream]].\nUpon success the stream is returned otherwise 0 is returned\nindicating an error.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkImageCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkImageCompressor", // tp_name
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
  PyvtkImageCompressor_Doc, // tp_doc
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

PyObject *PyvtkImageCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkImageCompressor_Type, PyvtkImageCompressor_Methods,
    "vtkImageCompressor",
 nullptr);

  PyTypeObject *pytype = &PyvtkImageCompressor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

