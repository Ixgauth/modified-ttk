// python wrapper for vtkPPolyDataNormals
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
#include "vtkPPolyDataNormals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPPolyDataNormals(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPPolyDataNormals_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataNormals_ClassNew
extern "C" { PyObject *PyvtkPolyDataNormals_ClassNew(); }
#define DECLARED_PyvtkPolyDataNormals_ClassNew
#endif

static const char *PyvtkPPolyDataNormals_Doc =
  "vtkPPolyDataNormals - compute normals for polygonal mesh\n\n"
  "Superclass: vtkPolyDataNormals\n\n"
;


static PyObject *
PyvtkPPolyDataNormals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPPolyDataNormals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPPolyDataNormals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPPolyDataNormals *tempr = vtkPPolyDataNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPPolyDataNormals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPPolyDataNormals::NewInstance());

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
PyvtkPPolyDataNormals_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkPPolyDataNormals::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkPPolyDataNormals::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkPPolyDataNormals::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPPolyDataNormals_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPolyDataNormals *op = static_cast<vtkPPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkPPolyDataNormals::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPPolyDataNormals_Methods[] = {
  {"IsTypeOf", PyvtkPPolyDataNormals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPPolyDataNormals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPPolyDataNormals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPPolyDataNormals\nC++: static vtkPPolyDataNormals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPPolyDataNormals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPPolyDataNormals\nC++: vtkPPolyDataNormals *NewInstance()\n\n"},
  {"SetPieceInvariant", PyvtkPPolyDataNormals_SetPieceInvariant, METH_VARARGS,
   "V.SetPieceInvariant(int)\nC++: virtual void SetPieceInvariant(vtkTypeBool _arg)\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"GetPieceInvariant", PyvtkPPolyDataNormals_GetPieceInvariant, METH_VARARGS,
   "V.GetPieceInvariant() -> int\nC++: virtual vtkTypeBool GetPieceInvariant()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"PieceInvariantOn", PyvtkPPolyDataNormals_PieceInvariantOn, METH_VARARGS,
   "V.PieceInvariantOn()\nC++: virtual void PieceInvariantOn()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {"PieceInvariantOff", PyvtkPPolyDataNormals_PieceInvariantOff, METH_VARARGS,
   "V.PieceInvariantOff()\nC++: virtual void PieceInvariantOff()\n\nTo get piece invariance, this filter has to request an extra\nghost level.  By default piece invariance is on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPPolyDataNormals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkPPolyDataNormals", // tp_name
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
  PyvtkPPolyDataNormals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPPolyDataNormals_StaticNew()
{
  return vtkPPolyDataNormals::New();
}

PyObject *PyvtkPPolyDataNormals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPPolyDataNormals_Type, PyvtkPPolyDataNormals_Methods,
    "vtkPPolyDataNormals",
 &PyvtkPPolyDataNormals_StaticNew);

  PyTypeObject *pytype = &PyvtkPPolyDataNormals_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataNormals_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPPolyDataNormals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPPolyDataNormals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPPolyDataNormals", o) != 0)
  {
    Py_DECREF(o);
  }

}

