// python wrapper for vtkPolygonalSurfaceContourLineInterpolator
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
#include "vtkPolygonalSurfaceContourLineInterpolator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkPolyDataContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkPolyDataContourLineInterpolator_ClassNew
#endif

static const char *PyvtkPolygonalSurfaceContourLineInterpolator_Doc =
  "vtkPolygonalSurfaceContourLineInterpolator - Contour interpolator for\nto place points on polygonal surfaces.\n\n"
  "Superclass: vtkPolyDataContourLineInterpolator\n\n"
  "vtkPolygonalSurfaceContourLineInterpolator interpolates and places\n"
  "contour points on polygonal surfaces. The class interpolates nodes by\n"
  "computing a graph geodesic laying on the polygonal data. By \\em graph\n"
  "Geodesic, we mean that the line interpolating the two end points\n"
  "traverses along on the mesh edges so as to form the shortest path. A\n"
  "Dijkstra algorithm is used to compute the path. See\n"
  "vtkDijkstraGraphGeodesicPath.\n\n"
  "The class is mean to be used in conjunction with\n"
  "vtkPolygonalSurfacePointPlacer. The reason for this weak coupling is\n"
  "a performance issue, both classes need to perform a cell pick, and\n"
  "coupling avoids multiple cell picks (cell picks are slow).\n\n"
  "@warning\n"
  "You should have computed cell normals for the input polydata.\n\n"
  "@sa\n"
  "vtkDijkstraGraphGeodesicPath, vtkPolyDataNormals\n\n";


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygonalSurfaceContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalSurfaceContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalSurfaceContourLineInterpolator::NewInstance());

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
PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateNode(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceOffset(temp0);
    }
    else
    {
      op->vtkPolygonalSurfaceContourLineInterpolator::SetDistanceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceOffset() :
      op->vtkPolygonalSurfaceContourLineInterpolator::GetDistanceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkContourRepresentation *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkContourRepresentation") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetContourPointIds(temp0, temp1);
    }
    else
    {
      op->vtkPolygonalSurfaceContourLineInterpolator::GetContourPointIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfaceContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkPolygonalSurfaceContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkPolygonalSurfaceContourLineInterpolator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkPolygonalSurfaceContourLineInterpolator\nC++: static vtkPolygonalSurfaceContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"InterpolateLine", PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "V.InterpolateLine(vtkRenderer, vtkContourRepresentation, int, int)\n     -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"UpdateNode", PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode, METH_VARARGS,
   "V.UpdateNode(vtkRenderer, vtkContourRepresentation, [float, ...],\n    int) -> int\nC++: int UpdateNode(vtkRenderer *, vtkContourRepresentation *,\n    double *node, int idx) override;\n\nThe interpolator is given a chance to update the node.\nvtkImageContourLineInterpolator updates the idx'th node in the\ncontour, so it automatically sticks to edges in the vicinity as\nthe user constructs the contour. Returns 0 if the node (world\nposition) is unchanged.\n"},
  {"SetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset, METH_VARARGS,
   "V.SetDistanceOffset(float)\nC++: virtual void SetDistanceOffset(double _arg)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {"GetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset, METH_VARARGS,
   "V.GetDistanceOffset() -> float\nC++: virtual double GetDistanceOffset()\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {"GetContourPointIds", PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds, METH_VARARGS,
   "V.GetContourPointIds(vtkContourRepresentation, vtkIdList)\nC++: void GetContourPointIds(vtkContourRepresentation *rep,\n    vtkIdList *idList)\n\nGet the contour point ids. These point ids correspond to those on\nthe polygonal surface\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolygonalSurfaceContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInteractionWidgetsPython.vtkPolygonalSurfaceContourLineInterpolator", // tp_name
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
  PyvtkPolygonalSurfaceContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew()
{
  return vtkPolygonalSurfaceContourLineInterpolator::New();
}

PyObject *PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolygonalSurfaceContourLineInterpolator_Type, PyvtkPolygonalSurfaceContourLineInterpolator_Methods,
    "vtkPolygonalSurfaceContourLineInterpolator",
 &PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew);

  PyTypeObject *pytype = &PyvtkPolygonalSurfaceContourLineInterpolator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonalSurfaceContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

