// python wrapper for vtkDataSetTriangleFilter
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
#include "vtkDataSetTriangleFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetTriangleFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDataSetTriangleFilter_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkDataSetTriangleFilter_Doc =
  "vtkDataSetTriangleFilter - triangulate any type of dataset\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkDataSetTriangleFilter generates n-dimensional simplices from any\n"
  "input dataset. That is, 3D cells are converted to tetrahedral meshes,\n"
  "2D cells to triangles, and so on. The triangulation is guaranteed to\n"
  "be compatible.\n\n"
  "This filter uses simple 1D and 2D triangulation techniques for cells\n"
  "that are of topological dimension 2 or less. For 3D cells--due to the\n"
  "issue of face compatibility across quadrilateral faces (which way to\n"
  "orient the diagonal?)--a fancier ordered Delaunay triangulation is\n"
  "used. This approach produces templates on the fly for triangulating\n"
  "the cells. The templates are then used to do the actual\n"
  "triangulation.\n\n"
  "@sa\n"
  "vtkOrderedTriangulator vtkTriangleFilter\n\n";


static PyObject *
PyvtkDataSetTriangleFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetTriangleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetTriangleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetTriangleFilter *tempr = vtkDataSetTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetTriangleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetTriangleFilter::NewInstance());

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
PyvtkDataSetTriangleFilter_SetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetrahedraOnly(temp0);
    }
    else
    {
      op->vtkDataSetTriangleFilter::SetTetrahedraOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_GetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTetrahedraOnly() :
      op->vtkDataSetTriangleFilter::GetTetrahedraOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TetrahedraOnlyOn();
    }
    else
    {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TetrahedraOnlyOff();
    }
    else
    {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetTriangleFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetTriangleFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetTriangleFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetTriangleFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDataSetTriangleFilter\nC++: static vtkDataSetTriangleFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetTriangleFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDataSetTriangleFilter\nC++: vtkDataSetTriangleFilter *NewInstance()\n\n"},
  {"SetTetrahedraOnly", PyvtkDataSetTriangleFilter_SetTetrahedraOnly, METH_VARARGS,
   "V.SetTetrahedraOnly(int)\nC++: virtual void SetTetrahedraOnly(vtkTypeBool _arg)\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {"GetTetrahedraOnly", PyvtkDataSetTriangleFilter_GetTetrahedraOnly, METH_VARARGS,
   "V.GetTetrahedraOnly() -> int\nC++: virtual vtkTypeBool GetTetrahedraOnly()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {"TetrahedraOnlyOn", PyvtkDataSetTriangleFilter_TetrahedraOnlyOn, METH_VARARGS,
   "V.TetrahedraOnlyOn()\nC++: virtual void TetrahedraOnlyOn()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {"TetrahedraOnlyOff", PyvtkDataSetTriangleFilter_TetrahedraOnlyOff, METH_VARARGS,
   "V.TetrahedraOnlyOff()\nC++: virtual void TetrahedraOnlyOff()\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDataSetTriangleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDataSetTriangleFilter", // tp_name
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
  PyvtkDataSetTriangleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetTriangleFilter_StaticNew()
{
  return vtkDataSetTriangleFilter::New();
}

PyObject *PyvtkDataSetTriangleFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDataSetTriangleFilter_Type, PyvtkDataSetTriangleFilter_Methods,
    "vtkDataSetTriangleFilter",
 &PyvtkDataSetTriangleFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkDataSetTriangleFilter_Type;

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

void PyVTKAddFile_vtkDataSetTriangleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetTriangleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetTriangleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

