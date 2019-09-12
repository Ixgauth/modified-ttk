// python wrapper for vtkCompositedSynchronizedRenderers
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
#include "vtkCompositedSynchronizedRenderers.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositedSynchronizedRenderers(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositedSynchronizedRenderers_ClassNew(); }

#ifndef DECLARED_PyvtkSynchronizedRenderers_ClassNew
extern "C" { PyObject *PyvtkSynchronizedRenderers_ClassNew(); }
#define DECLARED_PyvtkSynchronizedRenderers_ClassNew
#endif

static const char *PyvtkCompositedSynchronizedRenderers_Doc =
  "vtkCompositedSynchronizedRenderers -\nvtkCompositedSynchronizedRenderers is vtkSynchronizedRenderers that\nuses vtkCompositer to composite the images on the root node.\n\n"
  "Superclass: vtkSynchronizedRenderers\n\n"
;


static PyObject *
PyvtkCompositedSynchronizedRenderers_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositedSynchronizedRenderers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositedSynchronizedRenderers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositedSynchronizedRenderers *tempr = vtkCompositedSynchronizedRenderers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositedSynchronizedRenderers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositedSynchronizedRenderers::NewInstance());

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
PyvtkCompositedSynchronizedRenderers_SetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  vtkCompositer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositer"))
  {
    if (ap.IsBound())
    {
      op->SetCompositer(temp0);
    }
    else
    {
      op->vtkCompositedSynchronizedRenderers::SetCompositer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositedSynchronizedRenderers_GetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositedSynchronizedRenderers *op = static_cast<vtkCompositedSynchronizedRenderers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositer *tempr = (ap.IsBound() ?
      op->GetCompositer() :
      op->vtkCompositedSynchronizedRenderers::GetCompositer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositedSynchronizedRenderers_Methods[] = {
  {"IsTypeOf", PyvtkCompositedSynchronizedRenderers_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositedSynchronizedRenderers_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositedSynchronizedRenderers_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkCompositedSynchronizedRenderers\nC++: static vtkCompositedSynchronizedRenderers *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositedSynchronizedRenderers_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositedSynchronizedRenderers\nC++: vtkCompositedSynchronizedRenderers *NewInstance()\n\n"},
  {"SetCompositer", PyvtkCompositedSynchronizedRenderers_SetCompositer, METH_VARARGS,
   "V.SetCompositer(vtkCompositer)\nC++: void SetCompositer(vtkCompositer *)\n\nGet/Set the composite. vtkTreeCompositer is used by default.\n"},
  {"GetCompositer", PyvtkCompositedSynchronizedRenderers_GetCompositer, METH_VARARGS,
   "V.GetCompositer() -> vtkCompositer\nC++: virtual vtkCompositer *GetCompositer()\n\nGet/Set the composite. vtkTreeCompositer is used by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositedSynchronizedRenderers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkCompositedSynchronizedRenderers", // tp_name
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
  PyvtkCompositedSynchronizedRenderers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositedSynchronizedRenderers_StaticNew()
{
  return vtkCompositedSynchronizedRenderers::New();
}

PyObject *PyvtkCompositedSynchronizedRenderers_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositedSynchronizedRenderers_Type, PyvtkCompositedSynchronizedRenderers_Methods,
    "vtkCompositedSynchronizedRenderers",
 &PyvtkCompositedSynchronizedRenderers_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositedSynchronizedRenderers_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSynchronizedRenderers_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositedSynchronizedRenderers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositedSynchronizedRenderers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositedSynchronizedRenderers", o) != 0)
  {
    Py_DECREF(o);
  }

}

