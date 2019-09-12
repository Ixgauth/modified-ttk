// python wrapper for vtkHyperTreeGridDepthLimiter
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
#include "vtkHyperTreeGridDepthLimiter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridDepthLimiter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridDepthLimiter_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridDepthLimiter_Doc =
  "vtkHyperTreeGridDepthLimiter - Hyper tree grid level extraction\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "Extract all levels down to a specified depth from a hyper tree grid.\n"
  "If the required depth is greater or equal to the maximum level of the\n"
  "input grid, then the output is identical. Note that when a material\n"
  "mask is present, the geometry extent of the output grid is guaranteed\n"
  "to contain that of the input tree, but the former might be strictly\n"
  "larger than the latter. This is not a bug but an expected behavior of\n"
  "which the user should be aware.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien 2014 This class was modified by Philippe\n"
  "Pebay, 2016 This work was supported by Commissariat a l'Energie\n"
  "Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridDepthLimiter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridDepthLimiter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridDepthLimiter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridDepthLimiter *tempr = vtkHyperTreeGridDepthLimiter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridDepthLimiter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridDepthLimiter::NewInstance());

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
PyvtkHyperTreeGridDepthLimiter_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepth(temp0);
    }
    else
    {
      op->vtkHyperTreeGridDepthLimiter::SetDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridDepthLimiter_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridDepthLimiter *op = static_cast<vtkHyperTreeGridDepthLimiter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkHyperTreeGridDepthLimiter::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridDepthLimiter_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridDepthLimiter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridDepthLimiter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridDepthLimiter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridDepthLimiter\nC++: static vtkHyperTreeGridDepthLimiter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridDepthLimiter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridDepthLimiter\nC++: vtkHyperTreeGridDepthLimiter *NewInstance()\n\n"},
  {"SetDepth", PyvtkHyperTreeGridDepthLimiter_SetDepth, METH_VARARGS,
   "V.SetDepth(int)\nC++: virtual void SetDepth(unsigned int _arg)\n\nSet/Get maximum depth to which output grid should be limited\n"},
  {"GetDepth", PyvtkHyperTreeGridDepthLimiter_GetDepth, METH_VARARGS,
   "V.GetDepth() -> int\nC++: virtual unsigned int GetDepth()\n\nSet/Get maximum depth to which output grid should be limited\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridDepthLimiter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridDepthLimiter", // tp_name
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
  PyvtkHyperTreeGridDepthLimiter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridDepthLimiter_StaticNew()
{
  return vtkHyperTreeGridDepthLimiter::New();
}

PyObject *PyvtkHyperTreeGridDepthLimiter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridDepthLimiter_Type, PyvtkHyperTreeGridDepthLimiter_Methods,
    "vtkHyperTreeGridDepthLimiter",
 &PyvtkHyperTreeGridDepthLimiter_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridDepthLimiter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridDepthLimiter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridDepthLimiter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridDepthLimiter", o) != 0)
  {
    Py_DECREF(o);
  }

}

