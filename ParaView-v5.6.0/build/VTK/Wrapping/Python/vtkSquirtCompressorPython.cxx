// python wrapper for vtkSquirtCompressor
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
#include "vtkSquirtCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSquirtCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSquirtCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkImageCompressor_ClassNew
extern "C" { PyObject *PyvtkImageCompressor_ClassNew(); }
#define DECLARED_PyvtkImageCompressor_ClassNew
#endif

static const char *PyvtkSquirtCompressor_Doc =
  "vtkSquirtCompressor - Image compressor/decompressor using SQUIRT.\n\n"
  "Superclass: vtkImageCompressor\n\n"
  "This class compresses Image data using SQUIRT a Run-Length-Encoded\n"
  "compression scheme. The Squirt Level controls the compression. 0 is\n"
  "lossless compression, 1 through 5 are lossy compression levels with 5\n"
  "being maximum compression.\n\n"
  "Squirt produces smaller compression ratio than some other popular\n"
  "compression algorithm. However, Squirt has a relatively high\n"
  "throughput compared to some other compression algorithm. Squirt's\n"
  "performance is optimized for RGBa images, however the class can also\n"
  "work with RGB images. There is no performance hit when applying the\n"
  "lossy comrpession levels.\n\n"
  "Levels 1 through 5 apply a color reducing mask to the run\n"
  "computation, not to the pixel directly. This is clever in that no new\n"
  "colors are introduced to the image, and as a result one doesn't see\n"
  "drastic changes between the reduced color image and the original.\n"
  "However, when using the higher levels one may get runs that produce\n"
  "visual artifiacts. For example when a run starts in one actor whose\n"
  "reduced color matches the background the background is colored with\n"
  "the actor color.\n\n"
  "The compressor uses a modified SQUIRT implementation where encode\n"
  "4-bit opacity information as well. This is needed to improve\n"
  "background color blending for translucent renderings in ParaView.@par\n"
  "Thanks: Thanks to Sandia National Laboratories for this compression\n"
  "technique\n\n";


static PyObject *
PyvtkSquirtCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSquirtCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSquirtCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSquirtCompressor *tempr = vtkSquirtCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSquirtCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSquirtCompressor::NewInstance());

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
PyvtkSquirtCompressor_SetSquirtLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquirtLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSquirtLevel(temp0);
    }
    else
    {
      op->vtkSquirtCompressor::SetSquirtLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevelMinValue() :
      op->vtkSquirtCompressor::GetSquirtLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevelMaxValue() :
      op->vtkSquirtCompressor::GetSquirtLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_GetSquirtLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquirtLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquirtLevel() :
      op->vtkSquirtCompressor::GetSquirtLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Compress() :
      op->vtkSquirtCompressor::Compress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Decompress() :
      op->vtkSquirtCompressor::Decompress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkSquirtCompressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSquirtCompressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSquirtCompressor *op = static_cast<vtkSquirtCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkSquirtCompressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSquirtCompressor_Methods[] = {
  {"IsTypeOf", PyvtkSquirtCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSquirtCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSquirtCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSquirtCompressor\nC++: static vtkSquirtCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSquirtCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSquirtCompressor\nC++: vtkSquirtCompressor *NewInstance()\n\n"},
  {"SetSquirtLevel", PyvtkSquirtCompressor_SetSquirtLevel, METH_VARARGS,
   "V.SetSquirtLevel(int)\nC++: virtual void SetSquirtLevel(int _arg)\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {"GetSquirtLevelMinValue", PyvtkSquirtCompressor_GetSquirtLevelMinValue, METH_VARARGS,
   "V.GetSquirtLevelMinValue() -> int\nC++: virtual int GetSquirtLevelMinValue()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {"GetSquirtLevelMaxValue", PyvtkSquirtCompressor_GetSquirtLevelMaxValue, METH_VARARGS,
   "V.GetSquirtLevelMaxValue() -> int\nC++: virtual int GetSquirtLevelMaxValue()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {"GetSquirtLevel", PyvtkSquirtCompressor_GetSquirtLevel, METH_VARARGS,
   "V.GetSquirtLevel() -> int\nC++: virtual int GetSquirtLevel()\n\nSet Squirt compression level. Level 0 is lossless compression, 1\nthrough 5 are lossy compression levels with 5 being maximum\ncompression.\n"},
  {"Compress", PyvtkSquirtCompressor_Compress, METH_VARARGS,
   "V.Compress() -> int\nC++: int Compress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"Decompress", PyvtkSquirtCompressor_Decompress, METH_VARARGS,
   "V.Decompress() -> int\nC++: int Decompress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"SaveConfiguration", PyvtkSquirtCompressor_SaveConfiguration, METH_VARARGS,
   "V.SaveConfiguration() -> string\nC++: const char *SaveConfiguration() override;\n\nSerialize compressor configuration (but not the data) into the\nstream. A pointer to the internally managed stream is returned\n(ie do not free it!).\n"},
  {"RestoreConfiguration", PyvtkSquirtCompressor_RestoreConfiguration, METH_VARARGS,
   "V.RestoreConfiguration(string) -> string\nC++: const char *RestoreConfiguration(const char *stream)\n    override;\n\nRestore state from the stream, The stream format for all image\ncompressor is: [ClassName, LossLessMode, [Derived Class Stream]].\nUpon success the stream is returned otherwise 0 is returned\nindicating an error.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSquirtCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkSquirtCompressor", // tp_name
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
  PyvtkSquirtCompressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSquirtCompressor_StaticNew()
{
  return vtkSquirtCompressor::New();
}

PyObject *PyvtkSquirtCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSquirtCompressor_Type, PyvtkSquirtCompressor_Methods,
    "vtkSquirtCompressor",
 &PyvtkSquirtCompressor_StaticNew);

  PyTypeObject *pytype = &PyvtkSquirtCompressor_Type;

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

void PyVTKAddFile_vtkSquirtCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSquirtCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSquirtCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

