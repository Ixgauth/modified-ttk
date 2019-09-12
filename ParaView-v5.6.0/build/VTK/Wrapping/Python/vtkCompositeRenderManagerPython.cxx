// python wrapper for vtkCompositeRenderManager
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
#include "vtkCompositeRenderManager.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeRenderManager(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCompositeRenderManager_ClassNew(); }

#ifndef DECLARED_PyvtkParallelRenderManager_ClassNew
extern "C" { PyObject *PyvtkParallelRenderManager_ClassNew(); }
#define DECLARED_PyvtkParallelRenderManager_ClassNew
#endif

static const char *PyvtkCompositeRenderManager_Doc =
  "vtkCompositeRenderManager - An object to control sort-last parallel\nrendering.\n\n"
  "Superclass: vtkParallelRenderManager\n\n"
  "vtkCompositeRenderManager is a subclass of vtkParallelRenderManager\n"
  "that uses compositing to do parallel rendering.  This class has\n"
  "replaced vtkCompositeManager.\n\n";


static PyObject *
PyvtkCompositeRenderManager_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeRenderManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeRenderManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeRenderManager *tempr = vtkCompositeRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeRenderManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeRenderManager::NewInstance());

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
PyvtkCompositeRenderManager_SetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

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
      op->vtkCompositeRenderManager::SetCompositer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_GetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositer *tempr = (ap.IsBound() ?
      op->GetCompositer() :
      op->vtkCompositeRenderManager::GetCompositer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeRenderManager_Methods[] = {
  {"IsTypeOf", PyvtkCompositeRenderManager_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeRenderManager_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeRenderManager_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCompositeRenderManager\nC++: static vtkCompositeRenderManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeRenderManager_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCompositeRenderManager\nC++: vtkCompositeRenderManager *NewInstance()\n\n"},
  {"SetCompositer", PyvtkCompositeRenderManager_SetCompositer, METH_VARARGS,
   "V.SetCompositer(vtkCompositer)\nC++: void SetCompositer(vtkCompositer *c)\n\nSet/Get the composite algorithm.\n"},
  {"GetCompositer", PyvtkCompositeRenderManager_GetCompositer, METH_VARARGS,
   "V.GetCompositer() -> vtkCompositer\nC++: virtual vtkCompositer *GetCompositer()\n\nSet/Get the composite algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCompositeRenderManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingParallelPython.vtkCompositeRenderManager", // tp_name
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
  PyvtkCompositeRenderManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeRenderManager_StaticNew()
{
  return vtkCompositeRenderManager::New();
}

PyObject *PyvtkCompositeRenderManager_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCompositeRenderManager_Type, PyvtkCompositeRenderManager_Methods,
    "vtkCompositeRenderManager",
 &PyvtkCompositeRenderManager_StaticNew);

  PyTypeObject *pytype = &PyvtkCompositeRenderManager_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkParallelRenderManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeRenderManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeRenderManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeRenderManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

