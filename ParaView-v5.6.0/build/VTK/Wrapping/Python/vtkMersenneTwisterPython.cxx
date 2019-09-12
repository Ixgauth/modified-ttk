// python wrapper for vtkMersenneTwister
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
#include "vtkMersenneTwister.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMersenneTwister(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMersenneTwister_ClassNew(); }

#ifndef DECLARED_PyvtkRandomSequence_ClassNew
extern "C" { PyObject *PyvtkRandomSequence_ClassNew(); }
#define DECLARED_PyvtkRandomSequence_ClassNew
#endif

static const char *PyvtkMersenneTwister_Doc =
  "vtkMersenneTwister - Generator for Mersenne Twister pseudorandom\nnumbers\n\n"
  "Superclass: vtkRandomSequence\n\n"
  "vtkMersenneTwister is an implementation of the Mersenne Twister\n"
  "pseudorandom number generator. The VTK class is simply a wrapper\n"
  "around an implementation written by M. Matsumoto, T. Nishimura and M.\n"
  "Saito, whose source code can be found at\n"
  "http://www.math.sci.hiroshima-u.ac.jp/~m-mat/MT/DC/dc.html.\n\n"
  "This implementation of the Mersenne Twister facilitates the\n"
  "generation and query from multiple independent pseudorandom\n"
  "sequences. Independent sequences are identified by a unique\n"
  "vtkMersenneTwister::SequenceId, which is either generated upon\n"
  "request or passed into the initialization method. This id is factored\n"
  "into the initialization of the Mersenne Twister's initial state, so\n"
  "two sequences with the same seed and different sequence ids will\n"
  "produce different results. Once a sequence is initialized with an\n"
  "associated sequence id, this id is used to obtain values from the\n"
  "sequence.\n\n"
  "This class, besides generating random sequences in sequential order,\n"
  "can also populate a double array of specified size with a random\n"
  "sequence. It will do so using one or more threads depending on the\n"
  "number of values requested to generate.\n\n"
  "@warning\n"
  "This class has been threaded with vtkMultiThreader. The amount of\n"
  "work each thread performs is controlled by the #define\n"
  "VTK_MERSENNE_CHUNK.\n\n";


static PyObject *
PyvtkMersenneTwister_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMersenneTwister::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMersenneTwister::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMersenneTwister *tempr = vtkMersenneTwister::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMersenneTwister *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMersenneTwister::NewInstance());

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
PyvtkMersenneTwister_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

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
      op->vtkMersenneTwister::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_InitializeNewSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNewSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  int temp1 = 521;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->InitializeNewSequence(temp0, temp1) :
      op->vtkMersenneTwister::InitializeNewSequence(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_InitializeSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  int temp2 = 521;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeSequence(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMersenneTwister::InitializeSequence(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMersenneTwister_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkMersenneTwister::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkMersenneTwister::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_GetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMersenneTwister_GetValue_s1(self, args);
    case 0:
      return PyvtkMersenneTwister_GetValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}



static PyObject *
PyvtkMersenneTwister_Next_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Next(temp0);
    }
    else
    {
      op->vtkMersenneTwister::Next(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_Next_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMersenneTwister *op = static_cast<vtkMersenneTwister *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkMersenneTwister::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMersenneTwister_Next(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMersenneTwister_Next_s1(self, args);
    case 0:
      return PyvtkMersenneTwister_Next_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Next");
  return nullptr;
}


static PyMethodDef PyvtkMersenneTwister_Methods[] = {
  {"IsTypeOf", PyvtkMersenneTwister_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkMersenneTwister_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkMersenneTwister_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMersenneTwister\nC++: static vtkMersenneTwister *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkMersenneTwister_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMersenneTwister\nC++: vtkMersenneTwister *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"Initialize", PyvtkMersenneTwister_Initialize, METH_VARARGS,
   "V.Initialize(int)\nC++: void Initialize(vtkTypeUInt32 seed) override;\n\nSatisfy general API of vtkRandomSequence superclass. Initialize\nthe sequence with a seed.\n"},
  {"InitializeNewSequence", PyvtkMersenneTwister_InitializeNewSequence, METH_VARARGS,
   "V.InitializeNewSequence(int, int) -> int\nC++: SequenceId InitializeNewSequence(vtkTypeUInt32 seed,\n    int p=521)\n\nInitialize a new Mersenne Twister sequence, given a) a and b) a\nMersenne exponent (p s.t. 2^p-1 is a Mersenne prime). If\n\nis not a usable Mersenne exponent, its value is used to pick one\nfrom a list. The return value is the id for the generated\nsequence, which is used as a key to access values of the\nsequence.\n"},
  {"InitializeSequence", PyvtkMersenneTwister_InitializeSequence, METH_VARARGS,
   "V.InitializeSequence(int, int, int)\nC++: void InitializeSequence(SequenceId id, vtkTypeUInt32 seed,\n    int p=521)\n\nInitialize a sequence as in InitializeNewSequence(), but\nadditionally pass an id to associate with the new sequence. If a\nsequence is already associated with this id, a warning is given\nand the sequence is reset using the given parameters.\n"},
  {"GetValue", PyvtkMersenneTwister_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: virtual double GetValue(SequenceId id)\nV.GetValue() -> float\nC++: double GetValue() override;\n\nCurrent value\n\\post unit_range: result>=0.0 && result<=1.0\n"},
  {"Next", PyvtkMersenneTwister_Next, METH_VARARGS,
   "V.Next(int)\nC++: virtual void Next(SequenceId id)\nV.Next()\nC++: void Next() override;\n\nMove to the next number in random sequence . If no sequence is\nassociated with this id, a warning is given and a sequence is\ngenerated with default values.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMersenneTwister_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkMersenneTwister", // tp_name
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
  PyvtkMersenneTwister_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMersenneTwister_StaticNew()
{
  return vtkMersenneTwister::New();
}

PyObject *PyvtkMersenneTwister_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMersenneTwister_Type, PyvtkMersenneTwister_Methods,
    "vtkMersenneTwister",
 &PyvtkMersenneTwister_StaticNew);

  PyTypeObject *pytype = &PyvtkMersenneTwister_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkRandomSequence_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMersenneTwister(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMersenneTwister_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMersenneTwister", o) != 0)
  {
    Py_DECREF(o);
  }

}

