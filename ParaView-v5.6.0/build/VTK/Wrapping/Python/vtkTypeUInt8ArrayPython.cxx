// python wrapper for vtkTypeUInt8Array
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
#include "vtkTypeUInt8Array.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTypeUInt8Array(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTypeUInt8Array_ClassNew(); }

#ifndef DECLARED_PyvtkUnsignedCharArray_ClassNew
extern "C" { PyObject *PyvtkUnsignedCharArray_ClassNew(); }
#define DECLARED_PyvtkUnsignedCharArray_ClassNew
#endif

static const char *PyvtkTypeUInt8Array_Doc =
  "vtkTypeUInt8Array - dynamic, self-adjusting array of vtkTypeUInt8\n\n"
  "Superclass: vtkUnsignedCharArray\n\n"
  "vtkTypeUInt8Array is an array of values of type vtkTypeUInt8.  It\n"
  "provides methods for insertion and retrieval of values and will\n"
  "automatically resize itself to hold new data.\n\n"
  "This array should be preferred for data of type UInt8 as this array\n"
  "will use the correct underlying datatype based on the desired number\n"
  "of bits and the current platform.  The superclass of this type will\n"
  "change depending on the machine and compiler in use so that the data\n"
  "contained always uses the proper type.\n\n";


static PyObject *
PyvtkTypeUInt8Array_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTypeUInt8Array::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTypeUInt8Array::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTypeUInt8Array *tempr = vtkTypeUInt8Array::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTypeUInt8Array_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTypeUInt8Array *op = static_cast<vtkTypeUInt8Array *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeUInt8Array *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTypeUInt8Array::NewInstance());

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
PyvtkTypeUInt8Array_FastDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FastDownCast");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkTypeUInt8Array *tempr = vtkTypeUInt8Array::FastDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTypeUInt8Array_Methods[] = {
  {"IsTypeOf", PyvtkTypeUInt8Array_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTypeUInt8Array_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTypeUInt8Array_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTypeUInt8Array\nC++: static vtkTypeUInt8Array *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTypeUInt8Array_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTypeUInt8Array\nC++: vtkTypeUInt8Array *NewInstance()\n\n"},
  {"FastDownCast", PyvtkTypeUInt8Array_FastDownCast, METH_VARARGS,
   "V.FastDownCast(vtkAbstractArray) -> vtkTypeUInt8Array\nC++: static vtkTypeUInt8Array *FastDownCast(\n    vtkAbstractArray *source)\n\nA faster alternative to SafeDownCast for downcasting\nvtkAbstractArrays.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTypeUInt8Array_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkTypeUInt8Array", // tp_name
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
  PyvtkTypeUInt8Array_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTypeUInt8Array_StaticNew()
{
  return vtkTypeUInt8Array::New();
}

PyObject *PyvtkTypeUInt8Array_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTypeUInt8Array_Type, PyvtkTypeUInt8Array_Methods,
    "vtkTypeUInt8Array",
 &PyvtkTypeUInt8Array_StaticNew);

  PyTypeObject *pytype = &PyvtkTypeUInt8Array_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnsignedCharArray_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTypeUInt8Array(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTypeUInt8Array_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTypeUInt8Array", o) != 0)
  {
    Py_DECREF(o);
  }

}

