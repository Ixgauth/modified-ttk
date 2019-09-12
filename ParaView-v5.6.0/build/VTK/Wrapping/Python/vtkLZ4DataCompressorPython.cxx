// python wrapper for vtkLZ4DataCompressor
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
#include "vtkLZ4DataCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLZ4DataCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLZ4DataCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkDataCompressor_ClassNew
extern "C" { PyObject *PyvtkDataCompressor_ClassNew(); }
#define DECLARED_PyvtkDataCompressor_ClassNew
#endif

static const char *PyvtkLZ4DataCompressor_Doc =
  "vtkLZ4DataCompressor - Data compression using LZ4.\n\n"
  "Superclass: vtkDataCompressor\n\n"
  "vtkLZ4DataCompressor provides a concrete vtkDataCompressor class\n"
  "using LZ4 for compressing and uncompressing data.\n\n";


static PyObject *
PyvtkLZ4DataCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLZ4DataCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLZ4DataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLZ4DataCompressor *tempr = vtkLZ4DataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLZ4DataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLZ4DataCompressor::NewInstance());

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
PyvtkLZ4DataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMaximumCompressionSpace(temp0) :
      op->vtkLZ4DataCompressor::GetMaximumCompressionSpace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkLZ4DataCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

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
      op->vtkLZ4DataCompressor::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_SetAccelerationLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccelerationLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAccelerationLevel(temp0);
    }
    else
    {
      op->vtkLZ4DataCompressor::SetAccelerationLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_GetAccelerationLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccelerationLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccelerationLevelMinValue() :
      op->vtkLZ4DataCompressor::GetAccelerationLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_GetAccelerationLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccelerationLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccelerationLevelMaxValue() :
      op->vtkLZ4DataCompressor::GetAccelerationLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZ4DataCompressor_GetAccelerationLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccelerationLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZ4DataCompressor *op = static_cast<vtkLZ4DataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccelerationLevel() :
      op->vtkLZ4DataCompressor::GetAccelerationLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLZ4DataCompressor_Methods[] = {
  {"IsTypeOf", PyvtkLZ4DataCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLZ4DataCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLZ4DataCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLZ4DataCompressor\nC++: static vtkLZ4DataCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLZ4DataCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLZ4DataCompressor\nC++: vtkLZ4DataCompressor *NewInstance()\n\n"},
  {"GetMaximumCompressionSpace", PyvtkLZ4DataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   "V.GetMaximumCompressionSpace(int) -> int\nC++: size_t GetMaximumCompressionSpace(size_t size) override;\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {"GetCompressionLevel", PyvtkLZ4DataCompressor_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel() override;\n\nGet/Set the compression level.\n"},
  {"SetCompressionLevel", PyvtkLZ4DataCompressor_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int compressionLevel) override;\n\nCompression performance varies greatly with compression level\nRequire level setting from any vtkDataCompressor Different\ncompressors handle performance parameters differently\nvtkDataCompressors should take a value between 1 and 9 where 1 is\nfastest compression, and 9 is best compression.\n"},
  {"SetAccelerationLevel", PyvtkLZ4DataCompressor_SetAccelerationLevel, METH_VARARGS,
   "V.SetAccelerationLevel(int)\nC++: virtual void SetAccelerationLevel(int _arg)\n\n"},
  {"GetAccelerationLevelMinValue", PyvtkLZ4DataCompressor_GetAccelerationLevelMinValue, METH_VARARGS,
   "V.GetAccelerationLevelMinValue() -> int\nC++: virtual int GetAccelerationLevelMinValue()\n\n"},
  {"GetAccelerationLevelMaxValue", PyvtkLZ4DataCompressor_GetAccelerationLevelMaxValue, METH_VARARGS,
   "V.GetAccelerationLevelMaxValue() -> int\nC++: virtual int GetAccelerationLevelMaxValue()\n\n"},
  {"GetAccelerationLevel", PyvtkLZ4DataCompressor_GetAccelerationLevel, METH_VARARGS,
   "V.GetAccelerationLevel() -> int\nC++: virtual int GetAccelerationLevel()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLZ4DataCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkLZ4DataCompressor", // tp_name
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
  PyvtkLZ4DataCompressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLZ4DataCompressor_StaticNew()
{
  return vtkLZ4DataCompressor::New();
}

PyObject *PyvtkLZ4DataCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLZ4DataCompressor_Type, PyvtkLZ4DataCompressor_Methods,
    "vtkLZ4DataCompressor",
 &PyvtkLZ4DataCompressor_StaticNew);

  PyTypeObject *pytype = &PyvtkLZ4DataCompressor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataCompressor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLZ4DataCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLZ4DataCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLZ4DataCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

