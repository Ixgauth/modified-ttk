// python wrapper for vtkExtractGeometry
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
#include "vtkExtractGeometry.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractGeometry(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractGeometry_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkExtractGeometry_Doc =
  "vtkExtractGeometry - extract cells that lie either entirely inside or\noutside of a specified implicit function\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkExtractGeometry extracts from its input dataset all cells that are\n"
  "either completely inside or outside of a specified implicit function.\n"
  "Any type of dataset can be input to this filter. On output the filter\n"
  "generates an unstructured grid.\n\n"
  "To use this filter you must specify an implicit function. You must\n"
  "also specify whether to extract cells laying inside or outside of the\n"
  "implicit function. (The inside of an implicit function is the\n"
  "negative values region.) An option exists to extract cells that are\n"
  "neither inside or outside (i.e., boundary).\n\n"
  "A more efficient version of this filter is available for vtkPolyData\n"
  "input. See vtkExtractPolyDataGeometry.\n\n"
  "@sa\n"
  "vtkExtractPolyDataGeometry vtkGeometryFilter vtkExtractVOI\n\n";


static PyObject *
PyvtkExtractGeometry_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractGeometry::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractGeometry::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractGeometry *tempr = vtkExtractGeometry::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractGeometry *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractGeometry::NewInstance());

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
PyvtkExtractGeometry_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractGeometry::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkExtractGeometry::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkExtractGeometry::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractInside(temp0);
    }
    else
    {
      op->vtkExtractGeometry::SetExtractInside(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractInside() :
      op->vtkExtractGeometry::GetExtractInside());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOn();
    }
    else
    {
      op->vtkExtractGeometry::ExtractInsideOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOff();
    }
    else
    {
      op->vtkExtractGeometry::ExtractInsideOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractBoundaryCells(temp0);
    }
    else
    {
      op->vtkExtractGeometry::SetExtractBoundaryCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractBoundaryCells() :
      op->vtkExtractGeometry::GetExtractBoundaryCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractBoundaryCellsOn();
    }
    else
    {
      op->vtkExtractGeometry::ExtractBoundaryCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractBoundaryCellsOff();
    }
    else
    {
      op->vtkExtractGeometry::ExtractBoundaryCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_SetExtractOnlyBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractOnlyBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractOnlyBoundaryCells(temp0);
    }
    else
    {
      op->vtkExtractGeometry::SetExtractOnlyBoundaryCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_GetExtractOnlyBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractOnlyBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractOnlyBoundaryCells() :
      op->vtkExtractGeometry::GetExtractOnlyBoundaryCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractOnlyBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractOnlyBoundaryCellsOn();
    }
    else
    {
      op->vtkExtractGeometry::ExtractOnlyBoundaryCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractOnlyBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractGeometry *op = static_cast<vtkExtractGeometry *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractOnlyBoundaryCellsOff();
    }
    else
    {
      op->vtkExtractGeometry::ExtractOnlyBoundaryCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractGeometry_Methods[] = {
  {"IsTypeOf", PyvtkExtractGeometry_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractGeometry_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractGeometry_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractGeometry\nC++: static vtkExtractGeometry *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractGeometry_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractGeometry\nC++: vtkExtractGeometry *NewInstance()\n\n"},
  {"GetMTime", PyvtkExtractGeometry_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {"SetImplicitFunction", PyvtkExtractGeometry_SetImplicitFunction, METH_VARARGS,
   "V.SetImplicitFunction(vtkImplicitFunction)\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {"GetImplicitFunction", PyvtkExtractGeometry_GetImplicitFunction, METH_VARARGS,
   "V.GetImplicitFunction() -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\nSpecify the implicit function for inside/outside checks.\n"},
  {"SetExtractInside", PyvtkExtractGeometry_SetExtractInside, METH_VARARGS,
   "V.SetExtractInside(int)\nC++: virtual void SetExtractInside(vtkTypeBool _arg)\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {"GetExtractInside", PyvtkExtractGeometry_GetExtractInside, METH_VARARGS,
   "V.GetExtractInside() -> int\nC++: virtual vtkTypeBool GetExtractInside()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {"ExtractInsideOn", PyvtkExtractGeometry_ExtractInsideOn, METH_VARARGS,
   "V.ExtractInsideOn()\nC++: virtual void ExtractInsideOn()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {"ExtractInsideOff", PyvtkExtractGeometry_ExtractInsideOff, METH_VARARGS,
   "V.ExtractInsideOff()\nC++: virtual void ExtractInsideOff()\n\nBoolean controls whether to extract cells that are inside of\nimplicit function (ExtractInside == 1) or outside of implicit\nfunction (ExtractInside == 0).\n"},
  {"SetExtractBoundaryCells", PyvtkExtractGeometry_SetExtractBoundaryCells, METH_VARARGS,
   "V.SetExtractBoundaryCells(int)\nC++: virtual void SetExtractBoundaryCells(vtkTypeBool _arg)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"GetExtractBoundaryCells", PyvtkExtractGeometry_GetExtractBoundaryCells, METH_VARARGS,
   "V.GetExtractBoundaryCells() -> int\nC++: virtual vtkTypeBool GetExtractBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"ExtractBoundaryCellsOn", PyvtkExtractGeometry_ExtractBoundaryCellsOn, METH_VARARGS,
   "V.ExtractBoundaryCellsOn()\nC++: virtual void ExtractBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"ExtractBoundaryCellsOff", PyvtkExtractGeometry_ExtractBoundaryCellsOff, METH_VARARGS,
   "V.ExtractBoundaryCellsOff()\nC++: virtual void ExtractBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"SetExtractOnlyBoundaryCells", PyvtkExtractGeometry_SetExtractOnlyBoundaryCells, METH_VARARGS,
   "V.SetExtractOnlyBoundaryCells(int)\nC++: virtual void SetExtractOnlyBoundaryCells(vtkTypeBool _arg)\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"GetExtractOnlyBoundaryCells", PyvtkExtractGeometry_GetExtractOnlyBoundaryCells, METH_VARARGS,
   "V.GetExtractOnlyBoundaryCells() -> int\nC++: virtual vtkTypeBool GetExtractOnlyBoundaryCells()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"ExtractOnlyBoundaryCellsOn", PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOn, METH_VARARGS,
   "V.ExtractOnlyBoundaryCellsOn()\nC++: virtual void ExtractOnlyBoundaryCellsOn()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {"ExtractOnlyBoundaryCellsOff", PyvtkExtractGeometry_ExtractOnlyBoundaryCellsOff, METH_VARARGS,
   "V.ExtractOnlyBoundaryCellsOff()\nC++: virtual void ExtractOnlyBoundaryCellsOff()\n\nBoolean controls whether to extract cells that are partially\ninside. By default, ExtractBoundaryCells is off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractGeometry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersExtractionPython.vtkExtractGeometry", // tp_name
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
  PyvtkExtractGeometry_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractGeometry_StaticNew()
{
  return vtkExtractGeometry::New();
}

PyObject *PyvtkExtractGeometry_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractGeometry_Type, PyvtkExtractGeometry_Methods,
    "vtkExtractGeometry",
 &PyvtkExtractGeometry_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractGeometry_Type;

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

void PyVTKAddFile_vtkExtractGeometry(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractGeometry_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractGeometry", o) != 0)
  {
    Py_DECREF(o);
  }

}

