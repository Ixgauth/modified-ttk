// python wrapper for vtkLZ4Compressor
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
#include "vtkLZ4Compressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLZ4Compressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLZ4Compressor_ClassNew(); }

#ifndef DECLARED_PyvtkImageCompressor_ClassNew
extern "C" { PyObject *PyvtkImageCompressor_ClassNew(); }
#define DECLARED_PyvtkImageCompressor_ClassNew
#endif

static const char *PyvtkLZ4Compressor_Doc =
  "vtkLZ4Compressor - Image compressor/decompressor that uses LZ4 for\nfast lossless compression.\n\n"
  "Superclass: vtkImageCompressor\n\n"
  "vtkLZ4Compressor uses LZ4 for fast lossless compression and\n"
  "decompression on data.\n\n";


static PyObject *
PyvtkLZ4Compressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLZ4Compressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLZ4Compressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLZ4Compressor *tempr = vtkLZ4Compressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLZ4Compressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLZ4Compressor::NewInstance());

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
PyvtkLZ4Compressor_SetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

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
      op->vtkLZ4Compressor::SetQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_GetQualityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMinValue() :
      op->vtkLZ4Compressor::GetQualityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_GetQualityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQualityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQualityMaxValue() :
      op->vtkLZ4Compressor::GetQualityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_GetQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetQuality() :
      op->vtkLZ4Compressor::GetQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_Compress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Compress() :
      op->vtkLZ4Compressor::Compress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_Decompress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Decompress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Decompress() :
      op->vtkLZ4Compressor::Decompress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_SaveConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->SaveConfiguration() :
      op->vtkLZ4Compressor::SaveConfiguration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4Compressor_RestoreConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4Compressor *op = static_cast<vtkLZ4Compressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->RestoreConfiguration(temp0) :
      op->vtkLZ4Compressor::RestoreConfiguration(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLZ4Compressor_Methods[] = {
  {"IsTypeOf", PyvtkLZ4Compressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLZ4Compressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLZ4Compressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLZ4Compressor\nC++: static vtkLZ4Compressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLZ4Compressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLZ4Compressor\nC++: vtkLZ4Compressor *NewInstance()\n\n"},
  {"SetQuality", PyvtkLZ4Compressor_SetQuality, METH_VARARGS,
   "V.SetQuality(int)\nC++: virtual void SetQuality(int _arg)\n\nSet the quality measure. The value can be between 0 and 5. 0\nmeans preserve input image quality while 5 means improve\ncompression at the cost of image quality. For quality values  >\n1, we use a color mask on the input colors similar to\nvtkSquirtCompressor.\n"},
  {"GetQualityMinValue", PyvtkLZ4Compressor_GetQualityMinValue, METH_VARARGS,
   "V.GetQualityMinValue() -> int\nC++: virtual int GetQualityMinValue()\n\nSet the quality measure. The value can be between 0 and 5. 0\nmeans preserve input image quality while 5 means improve\ncompression at the cost of image quality. For quality values  >\n1, we use a color mask on the input colors similar to\nvtkSquirtCompressor.\n"},
  {"GetQualityMaxValue", PyvtkLZ4Compressor_GetQualityMaxValue, METH_VARARGS,
   "V.GetQualityMaxValue() -> int\nC++: virtual int GetQualityMaxValue()\n\nSet the quality measure. The value can be between 0 and 5. 0\nmeans preserve input image quality while 5 means improve\ncompression at the cost of image quality. For quality values  >\n1, we use a color mask on the input colors similar to\nvtkSquirtCompressor.\n"},
  {"GetQuality", PyvtkLZ4Compressor_GetQuality, METH_VARARGS,
   "V.GetQuality() -> int\nC++: virtual int GetQuality()\n\nSet the quality measure. The value can be between 0 and 5. 0\nmeans preserve input image quality while 5 means improve\ncompression at the cost of image quality. For quality values  >\n1, we use a color mask on the input colors similar to\nvtkSquirtCompressor.\n"},
  {"Compress", PyvtkLZ4Compressor_Compress, METH_VARARGS,
   "V.Compress() -> int\nC++: int Compress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"Decompress", PyvtkLZ4Compressor_Decompress, METH_VARARGS,
   "V.Decompress() -> int\nC++: int Decompress() override;\n\nCompress/Decompress data array on the objects input with results\nin the objects output. See also Set/GetInput/Output.\n"},
  {"SaveConfiguration", PyvtkLZ4Compressor_SaveConfiguration, METH_VARARGS,
   "V.SaveConfiguration() -> string\nC++: const char *SaveConfiguration() override;\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {"RestoreConfiguration", PyvtkLZ4Compressor_RestoreConfiguration, METH_VARARGS,
   "V.RestoreConfiguration(string) -> string\nC++: const char *RestoreConfiguration(const char *stream)\n    override;\n\nSerialize/Restore compressor configuration (but not the data)\ninto the stream.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLZ4Compressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkLZ4Compressor", // tp_name
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
  PyvtkLZ4Compressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLZ4Compressor_StaticNew()
{
  return vtkLZ4Compressor::New();
}

PyObject *PyvtkLZ4Compressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLZ4Compressor_Type, PyvtkLZ4Compressor_Methods,
    "vtkLZ4Compressor",
 &PyvtkLZ4Compressor_StaticNew);

  PyTypeObject *pytype = &PyvtkLZ4Compressor_Type;

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

void PyVTKAddFile_vtkLZ4Compressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLZ4Compressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLZ4Compressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

