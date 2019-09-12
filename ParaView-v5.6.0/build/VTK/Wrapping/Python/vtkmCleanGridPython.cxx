// python wrapper for vtkmCleanGrid
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
#include "vtkmCleanGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkmCleanGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkmCleanGrid_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkmCleanGrid_Doc =
  "vtkmCleanGrid - removes redundant or unused cells and/or points\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkmCleanGrid is a filter that takes vtkDataSet data as input and\n"
  "generates vtkUnstructuredGrid as output. vtkmCleanGrid will convert\n"
  "all cells to an explicit representation, and if enabled, will remove\n"
  "unused points.\n\n";


static PyObject *
PyvtkmCleanGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkmCleanGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkmCleanGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkmCleanGrid *tempr = vtkmCleanGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkmCleanGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkmCleanGrid::NewInstance());

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
PyvtkmCleanGrid_SetCompactPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompactPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompactPoints(temp0);
    }
    else
    {
      op->vtkmCleanGrid::SetCompactPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_GetCompactPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompactPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCompactPoints() :
      op->vtkmCleanGrid::GetCompactPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_CompactPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompactPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompactPointsOn();
    }
    else
    {
      op->vtkmCleanGrid::CompactPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkmCleanGrid_CompactPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompactPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkmCleanGrid *op = static_cast<vtkmCleanGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompactPointsOff();
    }
    else
    {
      op->vtkmCleanGrid::CompactPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkmCleanGrid_Methods[] = {
  {"IsTypeOf", PyvtkmCleanGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkmCleanGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkmCleanGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkmCleanGrid\nC++: static vtkmCleanGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkmCleanGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkmCleanGrid\nC++: vtkmCleanGrid *NewInstance()\n\n"},
  {"SetCompactPoints", PyvtkmCleanGrid_SetCompactPoints, METH_VARARGS,
   "V.SetCompactPoints(bool)\nC++: virtual void SetCompactPoints(bool _arg)\n\nGet/Set if the points from the input that are unused in the\noutput should be removed. This will take extra time but the\nresult dataset may use less memory. Off by default.\n"},
  {"GetCompactPoints", PyvtkmCleanGrid_GetCompactPoints, METH_VARARGS,
   "V.GetCompactPoints() -> bool\nC++: virtual bool GetCompactPoints()\n\nGet/Set if the points from the input that are unused in the\noutput should be removed. This will take extra time but the\nresult dataset may use less memory. Off by default.\n"},
  {"CompactPointsOn", PyvtkmCleanGrid_CompactPointsOn, METH_VARARGS,
   "V.CompactPointsOn()\nC++: virtual void CompactPointsOn()\n\nGet/Set if the points from the input that are unused in the\noutput should be removed. This will take extra time but the\nresult dataset may use less memory. Off by default.\n"},
  {"CompactPointsOff", PyvtkmCleanGrid_CompactPointsOff, METH_VARARGS,
   "V.CompactPointsOff()\nC++: virtual void CompactPointsOff()\n\nGet/Set if the points from the input that are unused in the\noutput should be removed. This will take extra time but the\nresult dataset may use less memory. Off by default.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkmCleanGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkAcceleratorsVTKmPython.vtkmCleanGrid", // tp_name
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
  PyvtkmCleanGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkmCleanGrid_StaticNew()
{
  return vtkmCleanGrid::New();
}

PyObject *PyvtkmCleanGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkmCleanGrid_Type, PyvtkmCleanGrid_Methods,
    "vtkmCleanGrid",
 &PyvtkmCleanGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkmCleanGrid_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkmCleanGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkmCleanGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkmCleanGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

