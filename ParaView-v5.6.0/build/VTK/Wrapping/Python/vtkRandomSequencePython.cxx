// python wrapper for vtkRandomSequence
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
#include "vtkRandomSequence.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomSequence(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkRandomSequence_Doc =
  "vtkRandomSequence - Generate a sequence of random numbers.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRandomSequence defines the interface of any sequence of random\n"
  "numbers.\n\n"
  "At this level of abstraction, there is no assumption about the\n"
  "distribution of the numbers or about the quality of the sequence of\n"
  "numbers to be statistically independent. There is no assumption about\n"
  "the range of values.\n\n"
  "To the question about why a random \"sequence\" class instead of a\n"
  "random \"generator\" class or to a random \"number\" class?, see the OOSC\n"
  "book: \"Object-Oriented Software Construction\", 2nd Edition, by\n"
  "Bertrand Meyer. chapter 23, \"Principles of class design\",\n"
  "\"Pseudo-random number generators: a design exercise\", page 754--755.\n\n";


static PyObject *
PyvtkRandomSequence_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomSequence *tempr = vtkRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomSequence::NewInstance());

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
PyvtkRandomSequence_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetValue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomSequence *op = static_cast<vtkRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Next();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkRandomSequence_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type information and printing.\n"},
  {"IsA", PyvtkRandomSequence_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type information and printing.\n"},
  {"SafeDownCast", PyvtkRandomSequence_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRandomSequence\nC++: static vtkRandomSequence *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type information and printing.\n"},
  {"NewInstance", PyvtkRandomSequence_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRandomSequence\nC++: vtkRandomSequence *NewInstance()\n\nStandard methods for type information and printing.\n"},
  {"Initialize", PyvtkRandomSequence_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: virtual void Initialize(vtkTypeUInt32 seed)\n\nInitialize the sequence with a seed.\n"},
  {"GetValue", PyvtkRandomSequence_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: virtual double GetValue()\n\nReturn the current value.\n"},
  {"Next", PyvtkRandomSequence_Next, METH_VARARGS,
   "V.Next()\nC++: virtual void Next()\n\nMove to the next number in the random sequence.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkRandomSequence", // tp_name
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
  PyvtkRandomSequence_Doc, // tp_doc
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

PyObject *PyvtkRandomSequence_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRandomSequence_Type, PyvtkRandomSequence_Methods,
    "vtkRandomSequence",
 nullptr);

  PyTypeObject *pytype = &PyvtkRandomSequence_Type;

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

void PyVTKAddFile_vtkRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

