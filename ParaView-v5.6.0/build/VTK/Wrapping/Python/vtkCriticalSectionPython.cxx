// python wrapper for vtkCriticalSection
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
#include "vtkCriticalSection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCriticalSection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCriticalSection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkCriticalSection_Doc =
  "vtkCriticalSection - Critical section locking class\n\n"
  "Superclass: vtkObject\n\n"
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
  "should replace the implementations in this class\n\n";


static PyObject *
PyvtkCriticalSection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCriticalSection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCriticalSection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCriticalSection *tempr = vtkCriticalSection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCriticalSection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCriticalSection::NewInstance());

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
PyvtkCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Lock();
    }
    else
    {
      op->vtkCriticalSection::Lock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Unlock();
    }
    else
    {
      op->vtkCriticalSection::Unlock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCriticalSection_Methods[] = {
  {"IsTypeOf", PyvtkCriticalSection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCriticalSection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCriticalSection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCriticalSection\nC++: static vtkCriticalSection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCriticalSection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCriticalSection\nC++: vtkCriticalSection *NewInstance()\n\n"},
  {"Lock", PyvtkCriticalSection_Lock, METH_VARARGS,
   "V.Lock()\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {"Unlock", PyvtkCriticalSection_Unlock, METH_VARARGS,
   "V.Unlock()\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCriticalSection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonCorePython.vtkCriticalSection", // tp_name
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
  PyvtkCriticalSection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCriticalSection_StaticNew()
{
  return vtkCriticalSection::New();
}

PyObject *PyvtkCriticalSection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCriticalSection_Type, PyvtkCriticalSection_Methods,
    "vtkCriticalSection",
 &PyvtkCriticalSection_StaticNew);

  PyTypeObject *pytype = &PyvtkCriticalSection_Type;

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

void PyVTKAddFile_vtkCriticalSection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCriticalSection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCriticalSection", o) != 0)
  {
    Py_DECREF(o);
  }

}

