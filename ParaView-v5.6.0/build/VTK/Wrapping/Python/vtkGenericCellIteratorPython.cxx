// python wrapper for vtkGenericCellIterator
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
#include "vtkGenericCellIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericCellIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericCellIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkGenericCellIterator_Doc =
  "vtkGenericCellIterator - iterator used to traverse cells\n\n"
  "Superclass: vtkObject\n\n"
  "This class (and subclasses) are used to iterate over cells. Use it\n"
  "only in conjunction with vtkGenericDataSet (i.e., the adaptor\n"
  "framework).\n\n"
  "Typical use is:\n\n"
  "vtkGenericDataSet *dataset; vtkGenericCellIterator *it =\n"
  "dataset->NewCellIterator(2); for (it->Begin(); !it->IsAtEnd();\n"
  "it->Next());\n"
  "  {\n"
  "  spec=it->GetCell();\n"
  "  } \n\n";


static PyObject *
PyvtkGenericCellIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericCellIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericCellIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericCellIterator *tempr = vtkGenericCellIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericCellIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericCellIterator::NewInstance());

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
PyvtkGenericCellIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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
PyvtkGenericCellIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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
PyvtkGenericCellIterator_NewCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkGenericAdaptorCell *tempr = op->NewCell();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCellIterator_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
  {
    op->GetCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericCellIterator_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkGenericAdaptorCell *tempr = op->GetCell();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericCellIterator_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGenericCellIterator_GetCell_s1(self, args);
    case 0:
      return PyvtkGenericCellIterator_GetCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}



static PyObject *
PyvtkGenericCellIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCellIterator *op = static_cast<vtkGenericCellIterator *>(vp);

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

static PyMethodDef PyvtkGenericCellIterator_Methods[] = {
  {"IsTypeOf", PyvtkGenericCellIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK construction and type macros.\n"},
  {"IsA", PyvtkGenericCellIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK construction and type macros.\n"},
  {"SafeDownCast", PyvtkGenericCellIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericCellIterator\nC++: static vtkGenericCellIterator *SafeDownCast(vtkObjectBase *o)\n\nStandard VTK construction and type macros.\n"},
  {"NewInstance", PyvtkGenericCellIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericCellIterator\nC++: vtkGenericCellIterator *NewInstance()\n\nStandard VTK construction and type macros.\n"},
  {"Begin", PyvtkGenericCellIterator_Begin, METH_VARARGS,
   "V.Begin()\nC++: virtual void Begin()\n\nMove iterator to first position if any (loop initialization).\n"},
  {"IsAtEnd", PyvtkGenericCellIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> int\nC++: virtual int IsAtEnd()\n\nIs the iterator at the end of traversal?\n"},
  {"NewCell", PyvtkGenericCellIterator_NewCell, METH_VARARGS,
   "V.NewCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *NewCell()\n\nCreate an empty cell. The user is responsible for deleting it.\n\\post result_exists: result!=0\n"},
  {"GetCell", PyvtkGenericCellIterator_GetCell, METH_VARARGS,
   "V.GetCell(vtkGenericAdaptorCell)\nC++: virtual void GetCell(vtkGenericAdaptorCell *c)\nV.GetCell() -> vtkGenericAdaptorCell\nC++: virtual vtkGenericAdaptorCell *GetCell()\n\nGet the cell at current position. The cell should be instantiated\nwith the NewCell() method.\n\\pre not_at_end: !IsAtEnd()\n\\pre c_exists: c!=0\nTHREAD SAFE\n"},
  {"Next", PyvtkGenericCellIterator_Next, METH_VARARGS,
   "V.Next()\nC++: virtual void Next()\n\nMove the iterator to the next position in the list.\n\\pre not_at_end: !IsAtEnd()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericCellIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkGenericCellIterator", // tp_name
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
  PyvtkGenericCellIterator_Doc, // tp_doc
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

PyObject *PyvtkGenericCellIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericCellIterator_Type, PyvtkGenericCellIterator_Methods,
    "vtkGenericCellIterator",
 nullptr);

  PyTypeObject *pytype = &PyvtkGenericCellIterator_Type;

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

void PyVTKAddFile_vtkGenericCellIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericCellIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericCellIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

