// python wrapper for vtkGenericPointIterator
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
#include "vtkGenericPointIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericPointIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericPointIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericPointIterator_Doc =
  "vtkGenericPointIterator - iterator used to traverse points\n\n"
  "Superclass: vtkObject\n\n"
  "This class (and subclasses) are used to iterate over points. Use it\n"
  "only in conjunction with vtkGenericDataSet (i.e., the adaptor\n"
  "framework).\n\n"
  "Typical use is:\n\n"
  "vtkGenericDataSet *dataset; vtkGenericPointIterator *it =\n"
  "dataset->NewPointIterator(); for (it->Begin(); !it->IsAtEnd();\n"
  "it->Next());\n"
  "  {\n"
  "  x=it->GetPosition();\n"
  "  } \n\n";


static PyObject *
PyvtkGenericPointIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericPointIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericPointIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericPointIterator *tempr = vtkGenericPointIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericPointIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericPointIterator::NewInstance());

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
PyvtkGenericPointIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Begin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->IsAtEnd();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Next();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericPointIterator_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericPointIterator_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetPosition(temp0);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericPointIterator_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGenericPointIterator_GetPosition_s1(self, args);
    case 1:
      return PyvtkGenericPointIterator_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}



static PyObject *
PyvtkGenericPointIterator_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericPointIterator *op = static_cast<vtkGenericPointIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericPointIterator_Methods[] = {
  {"IsTypeOf", PyvtkGenericPointIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK construction and type macros.\n"},
  {"IsA", PyvtkGenericPointIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK construction and type macros.\n"},
  {"SafeDownCast", PyvtkGenericPointIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericPointIterator\nC++: static vtkGenericPointIterator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK construction and type macros.\n"},
  {"NewInstance", PyvtkGenericPointIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericPointIterator\nC++: vtkGenericPointIterator *NewInstance()\n\nStandard VTK construction and type macros.\n"},
  {"Begin", PyvtkGenericPointIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: virtual void Begin()\n\nMove iterator to first position if any (loop initialization).\n"},
  {"IsAtEnd", PyvtkGenericPointIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nIs the iterator at the end of traversal?\n"},
  {"Next", PyvtkGenericPointIterator_Next, METH_VARARGS,
   "V.Next()\nC++: virtual void Next()\n\nMove the iterator to the next position in the list.\n\\pre not_off: !IsAtEnd()\n"},
  {"GetPosition", PyvtkGenericPointIterator_GetPosition, METH_VARARGS,
   "V.GetPosition() -> (float, ...)\nC++: virtual double *GetPosition()\nV.GetPosition([float, float, float])\nC++: virtual void GetPosition(double x[3])\n\nGet the coordinates of the point at the current iterator\nposition.\n\\pre not_off: !IsAtEnd()\n\\post result_exists: result!=0\n"},
  {"GetId", PyvtkGenericPointIterator_GetId, METH_VARARGS,
   "V.GetId() -> int\nC++: virtual vtkIdType GetId()\n\nReturn the unique identifier for the point, could be\nnon-contiguous.\n\\pre not_off: !IsAtEnd()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericPointIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericPointIterator", // tp_name
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
  PyvtkGenericPointIterator_Doc, // tp_doc
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

PyObject *PyvtkGenericPointIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericPointIterator_Type, PyvtkGenericPointIterator_Methods,
    "vtkGenericPointIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkGenericPointIterator_Type;

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

void PyVTKAddFile_vtkGenericPointIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericPointIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericPointIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

