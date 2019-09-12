// python wrapper for vtkGenericDataSetTessellator
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
#include "vtkGenericDataSetTessellator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericDataSetTessellator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGenericDataSetTessellator_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkGenericDataSetTessellator_Doc =
  "vtkGenericDataSetTessellator - tessellates generic, higher-order\ndatasets into linear cells\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkGenericDataSetTessellator is a filter that subdivides a\n"
  "vtkGenericDataSet into linear elements (i.e., linear VTK cells).\n"
  "Tetrahedras are produced from 3D cells; triangles from 2D cells; and\n"
  "lines from 1D cells. The subdivision process depends on the cell\n"
  "tessellator associated with the input generic dataset, and its\n"
  "associated error metric. (These can be specified by the user if\n"
  "necessary.)\n\n"
  "This filter is typically used to convert a higher-order, complex\n"
  "dataset represented by a vtkGenericDataSet into a conventional\n"
  "vtkDataSet that can be operated on by linear VTK graphics filters\n"
  "(end of pipeline for rendering).\n\n"
  "@sa\n"
  "vtkGenericCellTessellator vtkGenericSubdivisionErrorMetric\n\n";


static PyObject *
PyvtkGenericDataSetTessellator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericDataSetTessellator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericDataSetTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericDataSetTessellator *tempr = vtkGenericDataSetTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericDataSetTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericDataSetTessellator::NewInstance());

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
PyvtkGenericDataSetTessellator_SetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepCellIds(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetKeepCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetKeepCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKeepCellIds() :
      op->vtkGenericDataSetTessellator::GetKeepCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepCellIdsOn();
    }
    else
    {
      op->vtkGenericDataSetTessellator::KeepCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_KeepCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepCellIdsOff();
    }
    else
    {
      op->vtkGenericDataSetTessellator::KeepCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGenericDataSetTessellator::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkGenericDataSetTessellator::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkGenericDataSetTessellator::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkGenericDataSetTessellator::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGenericDataSetTessellator::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkGenericDataSetTessellator::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericDataSetTessellator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataSetTessellator *op = static_cast<vtkGenericDataSetTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGenericDataSetTessellator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericDataSetTessellator_Methods[] = {
  {"IsTypeOf", PyvtkGenericDataSetTessellator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard VTK methods.\n"},
  {"IsA", PyvtkGenericDataSetTessellator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard VTK methods.\n"},
  {"SafeDownCast", PyvtkGenericDataSetTessellator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGenericDataSetTessellator\nC++: static vtkGenericDataSetTessellator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard VTK methods.\n"},
  {"NewInstance", PyvtkGenericDataSetTessellator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGenericDataSetTessellator\nC++: vtkGenericDataSetTessellator *NewInstance()\n\nStandard VTK methods.\n"},
  {"SetKeepCellIds", PyvtkGenericDataSetTessellator_SetKeepCellIds, METH_VARARGS,
   "V.SetKeepCellIds(int)\nC++: virtual void SetKeepCellIds(vtkTypeBool _arg)\n\nTurn on/off generation of a cell centered attribute with ids of\nthe original cells (as an input cell is tessellated into several\nlinear cells). The name of the data array is \"OriginalIds\". It is\ntrue by default.\n"},
  {"GetKeepCellIds", PyvtkGenericDataSetTessellator_GetKeepCellIds, METH_VARARGS,
   "V.GetKeepCellIds() -> int\nC++: virtual vtkTypeBool GetKeepCellIds()\n\nTurn on/off generation of a cell centered attribute with ids of\nthe original cells (as an input cell is tessellated into several\nlinear cells). The name of the data array is \"OriginalIds\". It is\ntrue by default.\n"},
  {"KeepCellIdsOn", PyvtkGenericDataSetTessellator_KeepCellIdsOn, METH_VARARGS,
   "V.KeepCellIdsOn()\nC++: virtual void KeepCellIdsOn()\n\nTurn on/off generation of a cell centered attribute with ids of\nthe original cells (as an input cell is tessellated into several\nlinear cells). The name of the data array is \"OriginalIds\". It is\ntrue by default.\n"},
  {"KeepCellIdsOff", PyvtkGenericDataSetTessellator_KeepCellIdsOff, METH_VARARGS,
   "V.KeepCellIdsOff()\nC++: virtual void KeepCellIdsOff()\n\nTurn on/off generation of a cell centered attribute with ids of\nthe original cells (as an input cell is tessellated into several\nlinear cells). The name of the data array is \"OriginalIds\". It is\ntrue by default.\n"},
  {"SetMerging", PyvtkGenericDataSetTessellator_SetMerging, METH_VARARGS,
   "V.SetMerging(int)\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkGenericDataSetTessellator_GetMerging, METH_VARARGS,
   "V.GetMerging() -> int\nC++: virtual vtkTypeBool GetMerging()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOn", PyvtkGenericDataSetTessellator_MergingOn, METH_VARARGS,
   "V.MergingOn()\nC++: virtual void MergingOn()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"MergingOff", PyvtkGenericDataSetTessellator_MergingOff, METH_VARARGS,
   "V.MergingOff()\nC++: virtual void MergingOff()\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"SetLocator", PyvtkGenericDataSetTessellator_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkGenericDataSetTessellator_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkGenericDataSetTessellator_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkGenericDataSetTessellator_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGenericDataSetTessellator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGenericPython.vtkGenericDataSetTessellator", // tp_name
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
  PyvtkGenericDataSetTessellator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericDataSetTessellator_StaticNew()
{
  return vtkGenericDataSetTessellator::New();
}

PyObject *PyvtkGenericDataSetTessellator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGenericDataSetTessellator_Type, PyvtkGenericDataSetTessellator_Methods,
    "vtkGenericDataSetTessellator",
 &PyvtkGenericDataSetTessellator_StaticNew);

  PyTypeObject *pytype = &PyvtkGenericDataSetTessellator_Type;

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

void PyVTKAddFile_vtkGenericDataSetTessellator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericDataSetTessellator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericDataSetTessellator", o) != 0)
  {
    Py_DECREF(o);
  }

}

