// python wrapper for vtkHyperTreeGridCellCenters
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
#include "vtkHyperTreeGridCellCenters.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridCellCenters(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTreeGridCellCenters_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGridAlgorithm_ClassNew
#endif

static const char *PyvtkHyperTreeGridCellCenters_Doc =
  "vtkHyperTreeGridCellCenters - generate points at center of hyper tree\ngrid leaf cell centers.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridCellCenters is a filter that takes as input a hyper\n"
  "tree grid and generates on output points at the center of the leaf\n"
  "cells in the hyper tree grid. These points can be used for placing\n"
  "glyphs (vtkGlyph3D) or labeling (vtkLabeledDataMapper). The cell\n"
  "attributes will be associated with the points on output.\n\n"
  "@warning\n"
  "You can choose to generate just points or points and vertex cells.\n"
  "Vertex cells are drawn during rendering; points are not. Use the ivar\n"
  "VertexCells to generate cells.\n\n"
  "@sa\n"
  "vtkCellCenters vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien 2014 This class was rewritten by Philippe\n"
  "Pebay, NexGen Analytics 2017 This work was supported by Commissariat\n"
  "a l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTreeGridCellCenters_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridCellCenters::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridCellCenters::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridCellCenters *tempr = vtkHyperTreeGridCellCenters::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridCellCenters *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridCellCenters::NewInstance());

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
PyvtkHyperTreeGridCellCenters_SetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexCells(temp0);
    }
    else
    {
      op->vtkHyperTreeGridCellCenters::SetVertexCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_GetVertexCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexCells() :
      op->vtkHyperTreeGridCellCenters::GetVertexCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_VertexCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexCellsOn();
    }
    else
    {
      op->vtkHyperTreeGridCellCenters::VertexCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridCellCenters_VertexCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridCellCenters *op = static_cast<vtkHyperTreeGridCellCenters *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexCellsOff();
    }
    else
    {
      op->vtkHyperTreeGridCellCenters::VertexCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridCellCenters_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridCellCenters_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridCellCenters_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridCellCenters_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTreeGridCellCenters\nC++: static vtkHyperTreeGridCellCenters *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridCellCenters_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTreeGridCellCenters\nC++: vtkHyperTreeGridCellCenters *NewInstance()\n\n"},
  {"SetVertexCells", PyvtkHyperTreeGridCellCenters_SetVertexCells, METH_VARARGS,
   "V.SetVertexCells(int)\nC++: virtual void SetVertexCells(int _arg)\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {"GetVertexCells", PyvtkHyperTreeGridCellCenters_GetVertexCells, METH_VARARGS,
   "V.GetVertexCells() -> int\nC++: virtual int GetVertexCells()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {"VertexCellsOn", PyvtkHyperTreeGridCellCenters_VertexCellsOn, METH_VARARGS,
   "V.VertexCellsOn()\nC++: virtual void VertexCellsOn()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {"VertexCellsOff", PyvtkHyperTreeGridCellCenters_VertexCellsOff, METH_VARARGS,
   "V.VertexCellsOff()\nC++: virtual void VertexCellsOff()\n\nEnable/disable the generation of vertex cells. The default is\nOff.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTreeGridCellCenters_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersHyperTreePython.vtkHyperTreeGridCellCenters", // tp_name
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
  PyvtkHyperTreeGridCellCenters_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridCellCenters_StaticNew()
{
  return vtkHyperTreeGridCellCenters::New();
}

PyObject *PyvtkHyperTreeGridCellCenters_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTreeGridCellCenters_Type, PyvtkHyperTreeGridCellCenters_Methods,
    "vtkHyperTreeGridCellCenters",
 &PyvtkHyperTreeGridCellCenters_StaticNew);

  PyTypeObject *pytype = &PyvtkHyperTreeGridCellCenters_Type;

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

void PyVTKAddFile_vtkHyperTreeGridCellCenters(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridCellCenters_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridCellCenters", o) != 0)
  {
    Py_DECREF(o);
  }

}

