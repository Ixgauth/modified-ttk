// python wrapper for vtkZLibDataCompressor
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
#include "vtkZLibDataCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkZLibDataCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkZLibDataCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkDataCompressor_ClassNew
extern "C" { PyObject *PyvtkDataCompressor_ClassNew(); }
#define DECLARED_PyvtkDataCompressor_ClassNew
#endif

static const char *PyvtkZLibDataCompressor_Doc =
  "vtkZLibDataCompressor - Data compression using zlib.\n\n"
  "Superclass: vtkDataCompressor\n\n"
  "vtkZLibDataCompressor provides a concrete vtkDataCompressor class\n"
  "using zlib for compressing and uncompressing data.\n\n";


static PyObject *
PyvtkZLibDataCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkZLibDataCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkZLibDataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkZLibDataCompressor *tempr = vtkZLibDataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkZLibDataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkZLibDataCompressor::NewInstance());

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
PyvtkZLibDataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMaximumCompressionSpace(temp0) :
      op->vtkZLibDataCompressor::GetMaximumCompressionSpace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkZLibDataCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkZLibDataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkZLibDataCompressor *op = static_cast<vtkZLibDataCompressor *>(vp);

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
      op->vtkZLibDataCompressor::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkZLibDataCompressor_Methods[] = {
  {"IsTypeOf", PyvtkZLibDataCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkZLibDataCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkZLibDataCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkZLibDataCompressor\nC++: static vtkZLibDataCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkZLibDataCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkZLibDataCompressor\nC++: vtkZLibDataCompressor *NewInstance()\n\n"},
  {"GetMaximumCompressionSpace", PyvtkZLibDataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   "V.GetMaximumCompressionSpace(int) -> int\nC++: size_t GetMaximumCompressionSpace(size_t size) override;\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {"GetCompressionLevel", PyvtkZLibDataCompressor_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel() override;\n\nGet/Set the compression level.\n"},
  {"SetCompressionLevel", PyvtkZLibDataCompressor_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int compressionLevel) override;\n\nCompression performance varies greatly with compression level\nRequire level setting from any vtkDataCompressor Different\ncompressors handle performance parameters differently\nvtkDataCompressors should take a value between 1 and 9 where 1 is\nfastest compression, and 9 is best compression.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkZLibDataCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkZLibDataCompressor", // tp_name
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
  PyvtkZLibDataCompressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkZLibDataCompressor_StaticNew()
{
  return vtkZLibDataCompressor::New();
}

PyObject *PyvtkZLibDataCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkZLibDataCompressor_Type, PyvtkZLibDataCompressor_Methods,
    "vtkZLibDataCompressor",
 &PyvtkZLibDataCompressor_StaticNew);

  PyTypeObject *pytype = &PyvtkZLibDataCompressor_Type;

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

void PyVTKAddFile_vtkZLibDataCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkZLibDataCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkZLibDataCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

