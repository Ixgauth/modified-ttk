// python wrapper for vtkZlibImageCompressor
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
#include "vtkZlibImageCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkZlibImageCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkZlibImageCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkImageCompressor_ClassNew
extern "C" { PyObject *PyvtkImageCompressor_ClassNew(); }
#define DECLARED_PyvtkImageCompressor_ClassNew
#endif

static const char *PyvtkZlibImageCompressor_Doc =
  "vtkZlibImageCompressor - Image compressor/decompressor using Zlib.\n\n"
  "Superclass: vtkImageCompressor\n\n"
  "This class compresses Image data using Zlib. The compression level\n"
  "varies between 1 and 9, 1 being the fastest at the cost of the\n"
  "compression ratio, 9 producing the highest compression ratio at the\n"
  "cost of speed. Optionally color depth may be reduced and alpha\n"
  "stripped/restored.@par Thanks: SciberQuest Inc. contributed this\n"
  "class.\n\n";


static PyObject *
PyvtkZlibImageCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkZlibImageCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkZlibImageCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkZlibImageCompressor *tempr = vtkZlibImageCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkZlibImageCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkZlibImageCompressor::NewInstance());

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
PyvtkZlibImageCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Compress() :
      op->vtkZlibImageCompressor::Compress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Decompress() :
      op->vtkZlibImageCompressor::Decompress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkZlibImageCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkZlibImageCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

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
      op->vtkZlibImageCompressor::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkZlibImageCompressor::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkZlibImageCompressor::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkZlibImageCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorSpace(temp0);
    }
    else
    {
      op->vtkZlibImageCompressor::SetColorSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetColorSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorSpace() :
      op->vtkZlibImageCompressor::GetColorSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetStripAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStripAlpha(temp0);
    }
    else
    {
      op->vtkZlibImageCompressor::SetStripAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_GetStripAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStripAlpha() :
      op->vtkZlibImageCompressor::GetStripAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZlibImageCompressor_SetLossLessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLossLessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZlibImageCompressor *op = static_cast<vtkZlibImageCompressor *>(vp);

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
      op->vtkZlibImageCompressor::SetLossLessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkZlibImageCompressor_Methods[] = {
  {"IsTypeOf", PyvtkZlibImageCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkZlibImageCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkZlibImageCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkZlibImageCompressor\nC++: static vtkZlibImageCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkZlibImageCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkZlibImageCompressor\nC++: vtkZlibImageCompressor *NewInstance()\n\n"},
  {"Compress", PyvtkZlibImageCompressor_Compress, METH_VARARGS,
   "V.Compress() -> int\nC++: int Compress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"Decompress", PyvtkZlibImageCompressor_Decompress, METH_VARARGS,
   "V.Decompress() -> int\nC++: int Decompress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"SaveConfiguration", PyvtkZlibImageCompressor_SaveConfiguration, METH_VARARGS,
   "V.SaveConfiguration() -> string\nC++: const char *SaveConfiguration() override;\n\nSerialize compressor configuration (but not the data) into the\nstream. A pointer to the internally managed stream is returned\n(ie do not free it!).\n"},
  {"RestoreConfiguration", PyvtkZlibImageCompressor_RestoreConfiguration, METH_VARARGS,
   "V.RestoreConfiguration(string) -> string\nC++: const char *RestoreConfiguration(const char *stream)\n    override;\n\nRestore state from the stream, The stream format for all image\ncompressor is: [ClassName, LossLessMode, [Derived Class Stream]].\nUpon success the stream is returned otherwise 0 is returned\nindicating an error.\n"},
  {"SetCompressionLevel", PyvtkZlibImageCompressor_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: virtual void SetCompressionLevel(int _arg)\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {"GetCompressionLevelMinValue", PyvtkZlibImageCompressor_GetCompressionLevelMinValue, METH_VARARGS,
   "V.GetCompressionLevelMinValue() -> int\nC++: virtual int GetCompressionLevelMinValue()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {"GetCompressionLevelMaxValue", PyvtkZlibImageCompressor_GetCompressionLevelMaxValue, METH_VARARGS,
   "V.GetCompressionLevelMaxValue() -> int\nC++: virtual int GetCompressionLevelMaxValue()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {"GetCompressionLevel", PyvtkZlibImageCompressor_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: virtual int GetCompressionLevel()\n\nSet compression level. A setting of 1 is the fastest producing\nthe smallest compression ratio while a setting of 9 is the\nslowest producing the highest compression ratio. Zlib is\nloss-less regardless of level however, setting\nSetColorSpaceReduction factor to a non zero value will cause\ninternal pre-processor to reduce the color space prior to\ncompression which can improve compression ratio realized.\n"},
  {"SetColorSpace", PyvtkZlibImageCompressor_SetColorSpace, METH_VARARGS,
   "V.SetColorSpace(int)\nC++: void SetColorSpace(int csId)\n\nSet to an integer between 0 and 5. This uses the same color space\nreduction as the squirt compressor. If set to 0 no colorspace\nreduction is performed.\n"},
  {"GetColorSpace", PyvtkZlibImageCompressor_GetColorSpace, METH_VARARGS,
   "V.GetColorSpace() -> int\nC++: int GetColorSpace()\n\nSet to an integer between 0 and 5. This uses the same color space\nreduction as the squirt compressor. If set to 0 no colorspace\nreduction is performed.\n"},
  {"SetStripAlpha", PyvtkZlibImageCompressor_SetStripAlpha, METH_VARARGS,
   "V.SetStripAlpha(int)\nC++: void SetStripAlpha(int status)\n\nSet to boolean value indicating whether alpha values should be\nstripped prior to compression. Stripping alpha values will reduce\ninput to compressor by 1/4 and results in speed up in compressor\nrun time and of course reduced image size. Stripped alpha value\nare reinstated to 0xff during decompress.\n"},
  {"GetStripAlpha", PyvtkZlibImageCompressor_GetStripAlpha, METH_VARARGS,
   "V.GetStripAlpha() -> int\nC++: int GetStripAlpha()\n\nSet to boolean value indicating whether alpha values should be\nstripped prior to compression. Stripping alpha values will reduce\ninput to compressor by 1/4 and results in speed up in compressor\nrun time and of course reduced image size. Stripped alpha value\nare reinstated to 0xff during decompress.\n"},
  {"SetLossLessMode", PyvtkZlibImageCompressor_SetLossLessMode, METH_VARARGS,
   "V.SetLossLessMode(int)\nC++: void SetLossLessMode(int mode) override;\n\nWhen set the implementation must use loss-less compression,\notherwise implemnetation should user provided settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkZlibImageCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkZlibImageCompressor", // tp_name
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
  PyvtkZlibImageCompressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkZlibImageCompressor_StaticNew()
{
  return vtkZlibImageCompressor::New();
}

PyObject *PyvtkZlibImageCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkZlibImageCompressor_Type, PyvtkZlibImageCompressor_Methods,
    "vtkZlibImageCompressor",
 &PyvtkZlibImageCompressor_StaticNew);

  PyTypeObject *pytype = &PyvtkZlibImageCompressor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageCompressor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkZlibImageCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkZlibImageCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkZlibImageCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

