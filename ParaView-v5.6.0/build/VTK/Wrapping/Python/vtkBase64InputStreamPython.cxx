// python wrapper for vtkBase64InputStream
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
#include "vtkBase64InputStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBase64InputStream(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBase64InputStream_ClassNew(); }

#ifndef DECLARED_PyvtkInputStream_ClassNew
extern "C" { PyObject *PyvtkInputStream_ClassNew(); }
#define DECLARED_PyvtkInputStream_ClassNew
#endif

static const char *PyvtkBase64InputStream_Doc =
  "vtkBase64InputStream - Reads base64-encoded input from a stream.\n\n"
  "Superclass: vtkInputStream\n\n"
  "vtkBase64InputStream implements base64 decoding with the\n"
  "vtkInputStream interface.\n\n";


static PyObject *
PyvtkBase64InputStream_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBase64InputStream::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64InputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBase64InputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64InputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBase64InputStream *tempr = vtkBase64InputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64InputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBase64InputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBase64InputStream::NewInstance());

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
PyvtkBase64InputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartReading();
    }
    else
    {
      op->vtkBase64InputStream::StartReading();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBase64InputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Seek(temp0) :
      op->vtkBase64InputStream::Seek(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBase64InputStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    size_t tempr = (ap.IsBound() ?
      op->Read(temp0, temp1) :
      op->vtkBase64InputStream::Read(temp0, temp1));

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
PyvtkBase64InputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndReading();
    }
    else
    {
      op->vtkBase64InputStream::EndReading();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBase64InputStream_Methods[] = {
  {"IsTypeOf", PyvtkBase64InputStream_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBase64InputStream_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBase64InputStream_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBase64InputStream\nC++: static vtkBase64InputStream *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBase64InputStream_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBase64InputStream\nC++: vtkBase64InputStream *NewInstance()\n\n"},
  {"StartReading", PyvtkBase64InputStream_StartReading, METH_VARARGS,
   "V.StartReading()\nC++: void StartReading() override;\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {"Seek", PyvtkBase64InputStream_Seek, METH_VARARGS,
   "V.Seek(int) -> int\nC++: int Seek(vtkTypeInt64 offset) override;\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {"Read", PyvtkBase64InputStream_Read, METH_VARARGS,
   "V.Read(void, int) -> int\nC++: size_t Read(void *data, size_t length) override;\n\nRead input data of the given length.  Returns amount actually\nread.\n"},
  {"EndReading", PyvtkBase64InputStream_EndReading, METH_VARARGS,
   "V.EndReading()\nC++: void EndReading() override;\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBase64InputStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkBase64InputStream", // tp_name
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
  PyvtkBase64InputStream_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBase64InputStream_StaticNew()
{
  return vtkBase64InputStream::New();
}

PyObject *PyvtkBase64InputStream_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBase64InputStream_Type, PyvtkBase64InputStream_Methods,
    "vtkBase64InputStream",
 &PyvtkBase64InputStream_StaticNew);

  PyTypeObject *pytype = &PyvtkBase64InputStream_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInputStream_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBase64InputStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBase64InputStream_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBase64InputStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

