// python wrapper for vtkBase64OutputStream
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
#include "vtkBase64OutputStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBase64OutputStream(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBase64OutputStream_ClassNew(); }

#ifndef DECLARED_PyvtkOutputStream_ClassNew
extern "C" { PyObject *PyvtkOutputStream_ClassNew(); }
#define DECLARED_PyvtkOutputStream_ClassNew
#endif

static const char *PyvtkBase64OutputStream_Doc =
  "vtkBase64OutputStream - Writes base64-encoded output to a stream.\n\n"
  "Superclass: vtkOutputStream\n\n"
  "vtkBase64OutputStream implements base64 encoding with the\n"
  "vtkOutputStream interface.\n\n";


static PyObject *
PyvtkBase64OutputStream_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBase64OutputStream::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBase64OutputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBase64OutputStream *tempr = vtkBase64OutputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBase64OutputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBase64OutputStream::NewInstance());

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
PyvtkBase64OutputStream_StartWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->StartWriting() :
      op->vtkBase64OutputStream::StartWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Write(temp0, temp1) :
      op->vtkBase64OutputStream::Write(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkBase64OutputStream_EndWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->EndWriting() :
      op->vtkBase64OutputStream::EndWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBase64OutputStream_Methods[] = {
  {"IsTypeOf", PyvtkBase64OutputStream_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBase64OutputStream_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBase64OutputStream_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBase64OutputStream\nC++: static vtkBase64OutputStream *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBase64OutputStream_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBase64OutputStream\nC++: vtkBase64OutputStream *NewInstance()\n\n"},
  {"StartWriting", PyvtkBase64OutputStream_StartWriting, METH_VARARGS,
   "V.StartWriting() -> int\nC++: int StartWriting() override;\n\nCalled after the stream position has been set by the caller, but\nbefore any Write calls.  The stream position should not be\nadjusted by the caller until after an EndWriting call.\n"},
  {"Write", PyvtkBase64OutputStream_Write, METH_VARARGS,
   "V.Write(void, int) -> int\nC++: int Write(void const *data, size_t length) override;\n\nWrite output data of the given length.\n"},
  {"EndWriting", PyvtkBase64OutputStream_EndWriting, METH_VARARGS,
   "V.EndWriting() -> int\nC++: int EndWriting() override;\n\nCalled after all desired calls to Write have been made.  After\nthis call, the caller is free to change the position of the\nstream.  Additional writes should not be done until after another\ncall to StartWriting.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBase64OutputStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkBase64OutputStream", // tp_name
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
  PyvtkBase64OutputStream_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBase64OutputStream_StaticNew()
{
  return vtkBase64OutputStream::New();
}

PyObject *PyvtkBase64OutputStream_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBase64OutputStream_Type, PyvtkBase64OutputStream_Methods,
    "vtkBase64OutputStream",
 &PyvtkBase64OutputStream_StaticNew);

  PyTypeObject *pytype = &PyvtkBase64OutputStream_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOutputStream_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBase64OutputStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBase64OutputStream_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBase64OutputStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

