// python wrapper for vtkExtractUserDefinedPiece
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
#include "vtkExtractUserDefinedPiece.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractUserDefinedPiece(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractUserDefinedPiece_ClassNew(); }

#ifndef DECLARED_PyvtkExtractUnstructuredGridPiece_ClassNew
extern "C" { PyObject *PyvtkExtractUnstructuredGridPiece_ClassNew(); }
#define DECLARED_PyvtkExtractUnstructuredGridPiece_ClassNew
#endif

static const char *PyvtkExtractUserDefinedPiece_Doc =
  "vtkExtractUserDefinedPiece - Return user specified piece with ghost\ncells\n\n"
  "Superclass: vtkExtractUnstructuredGridPiece\n\n"
  "Provided a function that determines which cells are zero-level cells\n"
  "(\"the piece\"), this class outputs the piece with the requested number\n"
  "of ghost levels.  The only difference between this class and the\n"
  "class it is derived from is that the zero-level cells are specified\n"
  "by a function you provide, instead of determined by dividing up the\n"
  "cells based on cell Id.\n\n"
  "@sa\n"
  "vtkExtractUnstructuredGridPiece\n\n";


static PyObject *
PyvtkExtractUserDefinedPiece_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractUserDefinedPiece::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractUserDefinedPiece::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractUserDefinedPiece *tempr = vtkExtractUserDefinedPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractUserDefinedPiece *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractUserDefinedPiece::NewInstance());

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
PyvtkExtractUserDefinedPiece_SetConstantData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetConstantData(temp0, temp1);
    }
    else
    {
      op->vtkExtractUserDefinedPiece::SetConstantData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}

static PyMethodDef PyvtkExtractUserDefinedPiece_Methods[] = {
  {"IsTypeOf", PyvtkExtractUserDefinedPiece_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractUserDefinedPiece_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractUserDefinedPiece_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractUserDefinedPiece\nC++: static vtkExtractUserDefinedPiece *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractUserDefinedPiece_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractUserDefinedPiece\nC++: vtkExtractUserDefinedPiece *NewInstance()\n\n"},
  {"SetConstantData", PyvtkExtractUserDefinedPiece_SetConstantData, METH_VARARGS,
   "V.SetConstantData(void, int)\nC++: void SetConstantData(void *data, int len)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractUserDefinedPiece_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersParallelPython.vtkExtractUserDefinedPiece", // tp_name
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
  PyvtkExtractUserDefinedPiece_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractUserDefinedPiece_StaticNew()
{
  return vtkExtractUserDefinedPiece::New();
}

PyObject *PyvtkExtractUserDefinedPiece_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractUserDefinedPiece_Type, PyvtkExtractUserDefinedPiece_Methods,
    "vtkExtractUserDefinedPiece",
 &PyvtkExtractUserDefinedPiece_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractUserDefinedPiece_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkExtractUnstructuredGridPiece_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractUserDefinedPiece(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractUserDefinedPiece_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractUserDefinedPiece", o) != 0)
  {
    Py_DECREF(o);
  }

}

