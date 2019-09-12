// python wrapper for vtkPVCenterAxesActor
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
#include "vtkPVCenterAxesActor.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPVCenterAxesActor(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPVCenterAxesActor_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLActor_ClassNew
extern "C" { PyObject *PyvtkOpenGLActor_ClassNew(); }
#define DECLARED_PyvtkOpenGLActor_ClassNew
#endif

static const char *PyvtkPVCenterAxesActor_Doc =
  "vtkPVCenterAxesActor - vtkPVCenterAxesActor is an actor for the\ncenter-axes used in ParaView.\n\n"
  "Superclass: vtkOpenGLActor\n\n"
  "It merely uses vtkAxes as the poly data source.\n\n";


static PyObject *
PyvtkPVCenterAxesActor_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPVCenterAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPVCenterAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPVCenterAxesActor *tempr = vtkPVCenterAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPVCenterAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPVCenterAxesActor::NewInstance());

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
PyvtkPVCenterAxesActor_SetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSymmetric(temp0);
    }
    else
    {
      op->vtkPVCenterAxesActor::SetSymmetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPVCenterAxesActor_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPVCenterAxesActor *op = static_cast<vtkPVCenterAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkPVCenterAxesActor::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPVCenterAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkPVCenterAxesActor_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPVCenterAxesActor_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPVCenterAxesActor_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPVCenterAxesActor\nC++: static vtkPVCenterAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPVCenterAxesActor_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPVCenterAxesActor\nC++: vtkPVCenterAxesActor *NewInstance()\n\n"},
  {"SetSymmetric", PyvtkPVCenterAxesActor_SetSymmetric, METH_VARARGS,
   "V.SetSymmetric(int)\nC++: void SetSymmetric(int)\n\nIf Symmetric is on, the the axis continue to negative values.\n"},
  {"SetComputeNormals", PyvtkPVCenterAxesActor_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: void SetComputeNormals(int)\n\nOption for computing normals.  By default they are computed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPVCenterAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsRenderingPython.vtkPVCenterAxesActor", // tp_name
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
  PyvtkPVCenterAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPVCenterAxesActor_StaticNew()
{
  return vtkPVCenterAxesActor::New();
}

PyObject *PyvtkPVCenterAxesActor_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPVCenterAxesActor_Type, PyvtkPVCenterAxesActor_Methods,
    "vtkPVCenterAxesActor",
 &PyvtkPVCenterAxesActor_StaticNew);

  PyTypeObject *pytype = &PyvtkPVCenterAxesActor_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPVCenterAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPVCenterAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPVCenterAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

