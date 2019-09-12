// python wrapper for vtkTreeCompositer
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
#include "vtkTreeCompositer.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeCompositer(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTreeCompositer_ClassNew(); }

#ifndef DECLARED_PyvtkCompositer_ClassNew
extern "C" { PyObject *PyvtkCompositer_ClassNew(); }
#define DECLARED_PyvtkCompositer_ClassNew
#endif

static const char *PyvtkTreeCompositer_Doc =
  "vtkTreeCompositer - Implements tree based compositing.\n\n"
  "Superclass: vtkCompositer\n\n"
  "vtkTreeCompositer operates in multiple processes.  Each compositer\n"
  "has a render window.  They use a vtkMultiProcessController to\n"
  "communicate the color and depth buffer to process 0's render window.\n"
  "It will not handle transparency well.\n\n"
  "@sa\n"
  "vtkCompositeManager\n\n";


static PyObject *
PyvtkTreeCompositer_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeCompositer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeCompositer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeCompositer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeCompositer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeCompositer *tempr = vtkTreeCompositer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeCompositer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeCompositer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeCompositer::NewInstance());

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
PyvtkTreeCompositer_CompositeBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompositeBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeCompositer *op = static_cast<vtkTreeCompositer *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkFloatArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkFloatArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkFloatArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->CompositeBuffer(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkTreeCompositer::CompositeBuffer(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeCompositer_Methods[] = {
  {"IsTypeOf", PyvtkTreeCompositer_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeCompositer_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeCompositer_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTreeCompositer\nC++: static vtkTreeCompositer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeCompositer_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTreeCompositer\nC++: vtkTreeCompositer *NewInstance()\n\n"},
  {"CompositeBuffer", PyvtkTreeCompositer_CompositeBuffer, METH_VARARGS,
   "V.CompositeBuffer(vtkDataArray, vtkFloatArray, vtkDataArray,\n    vtkFloatArray)\nC++: void CompositeBuffer(vtkDataArray *pBuf, vtkFloatArray *zBuf,\n     vtkDataArray *pTmp, vtkFloatArray *zTmp) override;\n\nThis method gets called on every process.  The final image gets\nput into pBuf and zBuf.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTreeCompositer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkTreeCompositer", // tp_name
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
  PyvtkTreeCompositer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeCompositer_StaticNew()
{
  return vtkTreeCompositer::New();
}

PyObject *PyvtkTreeCompositer_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTreeCompositer_Type, PyvtkTreeCompositer_Methods,
    "vtkTreeCompositer",
 &PyvtkTreeCompositer_StaticNew);

  PyTypeObject *pytype = &PyvtkTreeCompositer_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCompositer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeCompositer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeCompositer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeCompositer", o) != 0)
  {
    Py_DECREF(o);
  }

}

