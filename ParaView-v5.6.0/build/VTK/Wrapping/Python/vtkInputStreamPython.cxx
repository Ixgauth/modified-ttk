// python wrapper for vtkInputStream
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
#include "vtkInputStream.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInputStream(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkInputStream_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkInputStream_Doc =
  "vtkInputStream - Wraps a binary input stream with a VTK interface.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInputStream provides a VTK-style interface wrapping around a\n"
  "standard input stream.  The access methods are virtual so that\n"
  "subclasses can transparently provide decoding of an encoded stream.\n"
  "Data lengths for Seek and Read calls refer to the length of the input\n"
  "data.  The actual length in the stream may differ for subclasses that\n"
  "implement an encoding scheme.\n\n";


static PyObject *
PyvtkInputStream_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInputStream::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInputStream::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInputStream *tempr = vtkInputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInputStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInputStream::NewInstance());

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
PyvtkInputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartReading();
    }
    else
    {
      op->vtkInputStream::StartReading();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Seek(temp0) :
      op->vtkInputStream::Seek(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInputStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

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
      op->vtkInputStream::Read(temp0, temp1));

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
PyvtkInputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndReading();
    }
    else
    {
      op->vtkInputStream::EndReading();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInputStream_Methods[] = {
  {"IsTypeOf", PyvtkInputStream_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInputStream_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInputStream_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkInputStream\nC++: static vtkInputStream *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInputStream_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkInputStream\nC++: vtkInputStream *NewInstance()\n\n"},
  {"StartReading", PyvtkInputStream_StartReading, METH_VARARGS,
   "V.StartReading()\nC++: virtual void StartReading()\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {"Seek", PyvtkInputStream_Seek, METH_VARARGS,
   "V.Seek(int) -> int\nC++: virtual int Seek(vtkTypeInt64 offset)\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {"Read", PyvtkInputStream_Read, METH_VARARGS,
   "V.Read(void, int) -> int\nC++: virtual size_t Read(void *data, size_t length)\n\nRead input data of the given length.  Returns amount actually\nread.\n"},
  {"EndReading", PyvtkInputStream_EndReading, METH_VARARGS,
   "V.EndReading()\nC++: virtual void EndReading()\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkInputStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOCorePython.vtkInputStream", // tp_name
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
  PyvtkInputStream_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInputStream_StaticNew()
{
  return vtkInputStream::New();
}

PyObject *PyvtkInputStream_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkInputStream_Type, PyvtkInputStream_Methods,
    "vtkInputStream",
 &PyvtkInputStream_StaticNew);

  PyTypeObject *pytype = &PyvtkInputStream_Type;

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

void PyVTKAddFile_vtkInputStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInputStream_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInputStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

