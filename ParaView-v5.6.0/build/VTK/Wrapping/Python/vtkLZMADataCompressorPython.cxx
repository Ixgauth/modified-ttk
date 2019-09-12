// python wrapper for vtkLZMADataCompressor
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
#include "vtkLZMADataCompressor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLZMADataCompressor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLZMADataCompressor_ClassNew(); }

#ifndef DECLARED_PyvtkDataCompressor_ClassNew
extern "C" { PyObject *PyvtkDataCompressor_ClassNew(); }
#define DECLARED_PyvtkDataCompressor_ClassNew
#endif

static const char *PyvtkLZMADataCompressor_Doc =
  "vtkLZMADataCompressor - Data compression using LZMA Utils.\n\n"
  "Superclass: vtkDataCompressor\n\n"
  "vtkLZMADataCompressor provides a concrete vtkDataCompressor class\n"
  "using LZMA for compressing and uncompressing data.\n\n"
  "@par Thanks: This vtkDataCompressor contributed by Quincy Wofford\n"
  "(qwofford@lanl.gov) and John Patchett (patchett@lanl.gov), Los Alamos\n"
  "National Laboratory (2017)\n\n";


static PyObject *
PyvtkLZMADataCompressor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLZMADataCompressor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZMADataCompressor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZMADataCompressor *op = static_cast<vtkLZMADataCompressor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLZMADataCompressor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZMADataCompressor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLZMADataCompressor *tempr = vtkLZMADataCompressor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZMADataCompressor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZMADataCompressor *op = static_cast<vtkLZMADataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLZMADataCompressor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLZMADataCompressor::NewInstance());

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
PyvtkLZMADataCompressor_GetMaximumCompressionSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCompressionSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZMADataCompressor *op = static_cast<vtkLZMADataCompressor *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetMaximumCompressionSpace(temp0) :
      op->vtkLZMADataCompressor::GetMaximumCompressionSpace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLZMADataCompressor_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZMADataCompressor *op = static_cast<vtkLZMADataCompressor *>(vp);

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
      op->vtkLZMADataCompressor::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLZMADataCompressor_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLZMADataCompressor *op = static_cast<vtkLZMADataCompressor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkLZMADataCompressor::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLZMADataCompressor_Methods[] = {
  {"IsTypeOf", PyvtkLZMADataCompressor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLZMADataCompressor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLZMADataCompressor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkLZMADataCompressor\nC++: static vtkLZMADataCompressor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLZMADataCompressor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLZMADataCompressor\nC++: vtkLZMADataCompressor *NewInstance()\n\n"},
  {"GetMaximumCompressionSpace", PyvtkLZMADataCompressor_GetMaximumCompressionSpace, METH_VARARGS,
   "V.GetMaximumCompressionSpace(int) -> int\nC++: size_t GetMaximumCompressionSpace(size_t size) override;\n\nGet the maximum space that may be needed to store data of the\ngiven uncompressed size after compression.  This is the minimum\nsize of the output buffer that can be passed to the four-argument\nCompress method.\n"},
  {"SetCompressionLevel", PyvtkLZMADataCompressor_SetCompressionLevel, METH_VARARGS,
   "V.SetCompressionLevel(int)\nC++: void SetCompressionLevel(int compressionLevel) override;\n\nGet/Set the compression level.\n"},
  {"GetCompressionLevel", PyvtkLZMADataCompressor_GetCompressionLevel, METH_VARARGS,
   "V.GetCompressionLevel() -> int\nC++: int GetCompressionLevel() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLZMADataCompressor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkLZMADataCompressor", // tp_name
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
  PyvtkLZMADataCompressor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLZMADataCompressor_StaticNew()
{
  return vtkLZMADataCompressor::New();
}

PyObject *PyvtkLZMADataCompressor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLZMADataCompressor_Type, PyvtkLZMADataCompressor_Methods,
    "vtkLZMADataCompressor",
 &PyvtkLZMADataCompressor_StaticNew);

  PyTypeObject *pytype = &PyvtkLZMADataCompressor_Type;

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

void PyVTKAddFile_vtkLZMADataCompressor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLZMADataCompressor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLZMADataCompressor", o) != 0)
  {
    Py_DECREF(o);
  }

}

