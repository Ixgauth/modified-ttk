// python wrapper for vtkBoxMuellerRandomSequence
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
#include "vtkBoxMuellerRandomSequence.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxMuellerRandomSequence(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkBoxMuellerRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkGaussianRandomSequence_ClassNew
extern "C" { PyObject *PyvtkGaussianRandomSequence_ClassNew(); }
#define DECLARED_PyvtkGaussianRandomSequence_ClassNew
#endif

static const char *PyvtkBoxMuellerRandomSequence_Doc =
  "vtkBoxMuellerRandomSequence - Gaussian sequence of pseudo random\nnumbers implemented with the Box-Mueller transform\n\n"
  "Superclass: vtkGaussianRandomSequence\n\n"
  "vtkGaussianRandomSequence is a sequence of pseudo random numbers\n"
  "distributed according to the Gaussian/normal distribution (mean=0 and\n"
  "standard deviation=1).\n\n"
  "It based is calculation from a uniformly distributed pseudo random\n"
  "sequence. The initial sequence is a vtkMinimalStandardRandomSequence.\n\n";


static PyObject *
PyvtkBoxMuellerRandomSequence_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxMuellerRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxMuellerRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxMuellerRandomSequence *tempr = vtkBoxMuellerRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxMuellerRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxMuellerRandomSequence::NewInstance());

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
PyvtkBoxMuellerRandomSequence_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkBoxMuellerRandomSequence::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_GetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetUniformSequence() :
      op->vtkBoxMuellerRandomSequence::GetUniformSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxMuellerRandomSequence_SetUniformSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxMuellerRandomSequence *op = static_cast<vtkBoxMuellerRandomSequence *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetUniformSequence(temp0);
    }
    else
    {
      op->vtkBoxMuellerRandomSequence::SetUniformSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxMuellerRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkBoxMuellerRandomSequence_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkBoxMuellerRandomSequence_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkBoxMuellerRandomSequence_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkBoxMuellerRandomSequence\nC++: static vtkBoxMuellerRandomSequence *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkBoxMuellerRandomSequence_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkBoxMuellerRandomSequence\nC++: vtkBoxMuellerRandomSequence *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"Initialize", PyvtkBoxMuellerRandomSequence_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(vtkTypeUInt32 seed) override;\n\nSatisfy general API of vtkRandomSequence superclass. Initialize\nthe sequence with a seed.\n"},
  {"GetValue", PyvtkBoxMuellerRandomSequence_GetValue, METH_VARARGS,
   "V.GetValue() -> float\nC++: double GetValue() override;\n\nCurrent value.\n"},
  {"Next", PyvtkBoxMuellerRandomSequence_Next, METH_VARARGS,
   "V.Next()\nC++: void Next() override;\n\nMove to the next number in the random sequence.\n"},
  {"GetUniformSequence", PyvtkBoxMuellerRandomSequence_GetUniformSequence, METH_VARARGS,
   "V.GetUniformSequence() -> vtkRandomSequence\nC++: vtkRandomSequence *GetUniformSequence()\n\nReturn the uniformly distributed sequence of random numbers.\n"},
  {"SetUniformSequence", PyvtkBoxMuellerRandomSequence_SetUniformSequence, METH_VARARGS,
   "V.SetUniformSequence(vtkRandomSequence)\nC++: void SetUniformSequence(vtkRandomSequence *uniformSequence)\n\nSet the uniformly distributed sequence of random numbers. Default\nis a .\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkBoxMuellerRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkBoxMuellerRandomSequence", // tp_name
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
  PyvtkBoxMuellerRandomSequence_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxMuellerRandomSequence_StaticNew()
{
  return vtkBoxMuellerRandomSequence::New();
}

PyObject *PyvtkBoxMuellerRandomSequence_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkBoxMuellerRandomSequence_Type, PyvtkBoxMuellerRandomSequence_Methods,
    "vtkBoxMuellerRandomSequence",
 &PyvtkBoxMuellerRandomSequence_StaticNew);

  PyTypeObject *pytype = &PyvtkBoxMuellerRandomSequence_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGaussianRandomSequence_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoxMuellerRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxMuellerRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxMuellerRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

