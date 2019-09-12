// python wrapper for vtkFillHolesFilter
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
#include "vtkFillHolesFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFillHolesFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFillHolesFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkFillHolesFilter_Doc =
  "vtkFillHolesFilter - identify and fill holes in meshes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFillHolesFilter is a filter that identifies and fills holes in\n"
  "input vtkPolyData meshes. Holes are identified by locating boundary\n"
  "edges, linking them together into loops, and then triangulating the\n"
  "resulting loops. Note that you can specify an approximate limit to\n"
  "the size of the hole that can be filled.\n\n"
  "@warning\n"
  "Note that any mesh with boundary edges by definition has a\n"
  "topological hole. This even includes a reactangular grid (e.g., the\n"
  "output of vtkPlaneSource). In such situations, if the outer hole is\n"
  "filled, retriangulation of the hole will cause geometric overlap of\n"
  "the mesh. This can be prevented by using the hole size instance\n"
  "variable to prevent the larger holes from being triangulated.\n\n"
  "@warning\n"
  "Note this filter only operates on polygons and triangle strips.\n"
  "Vertices and polylines are passed through untouched.\n\n";


static PyObject *
PyvtkFillHolesFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFillHolesFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFillHolesFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFillHolesFilter *tempr = vtkFillHolesFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFillHolesFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFillHolesFilter::NewInstance());

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
PyvtkFillHolesFilter_SetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleSize(temp0);
    }
    else
    {
      op->vtkFillHolesFilter::SetHoleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMinValue() :
      op->vtkFillHolesFilter::GetHoleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMaxValue() :
      op->vtkFillHolesFilter::GetHoleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSize() :
      op->vtkFillHolesFilter::GetHoleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFillHolesFilter_Methods[] = {
  {"IsTypeOf", PyvtkFillHolesFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"IsA", PyvtkFillHolesFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"SafeDownCast", PyvtkFillHolesFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFillHolesFilter\nC++: static vtkFillHolesFilter *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"NewInstance", PyvtkFillHolesFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *NewInstance()\n\nStandard methods for instantiation, type information and\nprinting.\n"},
  {"SetHoleSize", PyvtkFillHolesFilter_SetHoleSize, METH_VARARGS,
   "V.SetHoleSize(float)\nC++: virtual void SetHoleSize(double _arg)\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {"GetHoleSizeMinValue", PyvtkFillHolesFilter_GetHoleSizeMinValue, METH_VARARGS,
   "V.GetHoleSizeMinValue() -> float\nC++: virtual double GetHoleSizeMinValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {"GetHoleSizeMaxValue", PyvtkFillHolesFilter_GetHoleSizeMaxValue, METH_VARARGS,
   "V.GetHoleSizeMaxValue() -> float\nC++: virtual double GetHoleSizeMaxValue()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {"GetHoleSize", PyvtkFillHolesFilter_GetHoleSize, METH_VARARGS,
   "V.GetHoleSize() -> float\nC++: virtual double GetHoleSize()\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFillHolesFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkFillHolesFilter", // tp_name
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
  PyvtkFillHolesFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFillHolesFilter_StaticNew()
{
  return vtkFillHolesFilter::New();
}

PyObject *PyvtkFillHolesFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFillHolesFilter_Type, PyvtkFillHolesFilter_Methods,
    "vtkFillHolesFilter",
 &PyvtkFillHolesFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkFillHolesFilter_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFillHolesFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFillHolesFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFillHolesFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

