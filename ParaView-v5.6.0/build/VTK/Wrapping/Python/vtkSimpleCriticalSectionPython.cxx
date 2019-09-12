// python wrapper for vtkSimpleCriticalSection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include "vtkConfigure.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSimpleCriticalSection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleCriticalSection(PyObject *); }

static const char *PyvtkSimpleCriticalSection_Doc =
  "vtkSimpleCriticalSection - Critical section locking class\n\n"
  "vtkCriticalSection allows the locking of variables which are accessed\n"
  "through different threads.  This header file also defines\n"
  "vtkSimpleCriticalSection which is not a subclass of vtkObject. The\n"
  "API is identical to that of vtkMutexLock, and the behavior is\n"
  "identical as well, except on Windows 9x/NT platforms. The only\n"
  "difference on these platforms is that vtkMutexLock is more flexible,\n"
  "in that it works across processes as well as across threads, but also\n"
  "costs more, in that it evokes a 600-cycle x86 ring transition. The\n"
  "vtkCriticalSection provides a higher-performance equivalent (on\n"
  "Windows) but won't work across processes. Since it is unclear how, in\n"
  "vtk, an object at the vtk level can be shared across processes in the\n"
  "first place, one should use vtkCriticalSection unless one has a very\n"
  "good reason to use vtkMutexLock. If higher-performance equivalents\n"
  "for non-Windows platforms (Irix, SunOS, etc) are discovered, they\n"
  "should replace the implementations in this class\n\n"
  "vtkSimpleCriticalSection()\n"
  "vtkSimpleCriticalSection(int isLocked)\n";


static PyObject *
PyvtkSimpleCriticalSection_Init(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Init");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Init();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Lock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkSimpleCriticalSection *op = static_cast<vtkSimpleCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Unlock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleCriticalSection_Methods[] = {
  {"Init", PyvtkSimpleCriticalSection_Init, METH_VARARGS,
   "V.Init()\nC++: void Init()\n\n"},
  {"Lock", PyvtkSimpleCriticalSection_Lock, METH_VARARGS,
   "V.Lock()\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {"Unlock", PyvtkSimpleCriticalSection_Unlock, METH_VARARGS,
   "V.Unlock()\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleCriticalSection");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSimpleCriticalSection *op = new vtkSimpleCriticalSection();

    result = PyVTKSpecialObject_New("vtkSimpleCriticalSection", op);
  }

  return result;
}

static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSimpleCriticalSection");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSimpleCriticalSection *op = new vtkSimpleCriticalSection(temp0);

    result = PyVTKSpecialObject_New("vtkSimpleCriticalSection", op);
  }

  return result;
}

static PyMethodDef PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_Methods[] = {
  {nullptr, PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSimpleCriticalSection_vtkSimpleCriticalSection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s1(self, args);
    case 1:
      return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSimpleCriticalSection");
  return nullptr;
}


static PyObject *
PyvtkSimpleCriticalSection_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSimpleCriticalSection_vtkSimpleCriticalSection(nullptr, args);
}

static void PyvtkSimpleCriticalSection_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSimpleCriticalSection *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSimpleCriticalSection_Hash(PyObject *self)
{
#if PY_VERSION_HEX >= 0x020600B2
  return PyObject_HashNotImplemented(self);
#else
  char text[256];
  sprintf(text, "unhashable type: '%s'", Py_TYPE(self)->tp_name);
  PyErr_SetString(PyExc_TypeError, text);
  return -1;
#endif
}

static PyTypeObject PyvtkSimpleCriticalSection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkSimpleCriticalSection", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSimpleCriticalSection_Delete, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkSimpleCriticalSection_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSimpleCriticalSection_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkSimpleCriticalSection_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSimpleCriticalSection_TypeNew(); }

PyObject *PyvtkSimpleCriticalSection_TypeNew()
{
  PyVTKSpecialType_Add(
    &PyvtkSimpleCriticalSection_Type,
    PyvtkSimpleCriticalSection_Methods,
    PyvtkSimpleCriticalSection_vtkSimpleCriticalSection_Methods,
    nullptr);

  PyTypeObject *pytype = &PyvtkSimpleCriticalSection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleCriticalSection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleCriticalSection_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleCriticalSection", o) != 0)
  {
    Py_DECREF(o);
  }

}

