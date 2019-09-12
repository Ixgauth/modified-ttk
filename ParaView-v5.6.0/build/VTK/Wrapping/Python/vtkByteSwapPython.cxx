// python wrapper for vtkByteSwap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkByteSwap.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkByteSwap(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkByteSwap_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkByteSwap_Doc =
  "vtkByteSwap - perform machine dependent byte swapping\n\n"
  "Superclass: vtkObject\n\n"
  "vtkByteSwap is used by other classes to perform machine dependent\n"
  "byte swapping. Byte swapping is often used when reading or writing\n"
  "binary files.\n\n";


static PyObject *
PyvtkByteSwap_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkByteSwap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkByteSwap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkByteSwap *tempr = vtkByteSwap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkByteSwap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkByteSwap *op = static_cast<vtkByteSwap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkByteSwap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkByteSwap::NewInstance());

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
PyvtkByteSwap_Swap2LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap2LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap4LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap4LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap8LE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap8LE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap2LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap2LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap4LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap4LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap8LERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8LERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap8LERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap2BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap2BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap4BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap4BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap8BE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BE");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    vtkByteSwap::Swap8BE(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap2BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap2BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap2BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap4BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap4BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap4BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_Swap8BERange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Swap8BERange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    vtkByteSwap::Swap8BERange(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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
PyvtkByteSwap_SwapVoidRange(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SwapVoidRange");

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  size_t temp1;
  size_t temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkByteSwap::SwapVoidRange(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
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

static PyMethodDef PyvtkByteSwap_Methods[] = {
  {"IsTypeOf", PyvtkByteSwap_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkByteSwap_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkByteSwap_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkByteSwap\nC++: static vtkByteSwap *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkByteSwap_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkByteSwap\nC++: vtkByteSwap *NewInstance()\n\n"},
  {"Swap2LE", PyvtkByteSwap_Swap2LE, METH_VARARGS,
   "V.Swap2LE(void)\nC++: static void Swap2LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {"Swap4LE", PyvtkByteSwap_Swap4LE, METH_VARARGS,
   "V.Swap4LE(void)\nC++: static void Swap4LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {"Swap8LE", PyvtkByteSwap_Swap8LE, METH_VARARGS,
   "V.Swap8LE(void)\nC++: static void Swap8LE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Little Endian.\n"},
  {"Swap2LERange", PyvtkByteSwap_Swap2LERange, METH_VARARGS,
   "V.Swap2LERange(void, int)\nC++: static void Swap2LERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {"Swap4LERange", PyvtkByteSwap_Swap4LERange, METH_VARARGS,
   "V.Swap4LERange(void, int)\nC++: static void Swap4LERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {"Swap8LERange", PyvtkByteSwap_Swap8LERange, METH_VARARGS,
   "V.Swap8LERange(void, int)\nC++: static void Swap8LERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Little\nEndian.\n"},
  {"Swap2BE", PyvtkByteSwap_Swap2BE, METH_VARARGS,
   "V.Swap2BE(void)\nC++: static void Swap2BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {"Swap4BE", PyvtkByteSwap_Swap4BE, METH_VARARGS,
   "V.Swap4BE(void)\nC++: static void Swap4BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {"Swap8BE", PyvtkByteSwap_Swap8BE, METH_VARARGS,
   "V.Swap8BE(void)\nC++: static void Swap8BE(void *p)\n\nSwap 2, 4, or 8 bytes for storage as Big Endian.\n"},
  {"Swap2BERange", PyvtkByteSwap_Swap2BERange, METH_VARARGS,
   "V.Swap2BERange(void, int)\nC++: static void Swap2BERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {"Swap4BERange", PyvtkByteSwap_Swap4BERange, METH_VARARGS,
   "V.Swap4BERange(void, int)\nC++: static void Swap4BERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {"Swap8BERange", PyvtkByteSwap_Swap8BERange, METH_VARARGS,
   "V.Swap8BERange(void, int)\nC++: static void Swap8BERange(void *p, size_t num)\n\nSwap a block of 2-, 4-, or 8-byte segments for storage as Big\nEndian.\n"},
  {"SwapVoidRange", PyvtkByteSwap_SwapVoidRange, METH_VARARGS,
   "V.SwapVoidRange(void, int, int)\nC++: static void SwapVoidRange(void *buffer, size_t numWords,\n    size_t wordSize)\n\nSwaps the bytes of a buffer.  Uses an arbitrary word size, but\nassumes the word size is divisible by two.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkByteSwap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkByteSwap", // tp_name
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
  PyvtkByteSwap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkByteSwap_StaticNew()
{
  return vtkByteSwap::New();
}

PyObject *PyvtkByteSwap_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkByteSwap_Type, PyvtkByteSwap_Methods,
    "vtkByteSwap",
 &PyvtkByteSwap_StaticNew);

  PyTypeObject *pytype = &PyvtkByteSwap_Type;

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

void PyVTKAddFile_vtkByteSwap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkByteSwap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkByteSwap", o) != 0)
  {
    Py_DECREF(o);
  }

}

