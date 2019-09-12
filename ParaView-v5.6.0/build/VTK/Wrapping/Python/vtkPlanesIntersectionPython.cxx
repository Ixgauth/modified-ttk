// python wrapper for vtkPlanesIntersection
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
#include "vtkPlanesIntersection.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlanesIntersection(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPlanesIntersection_ClassNew(); }

#ifndef DECLARED_PyvtkPlanes_ClassNew
extern "C" { PyObject *PyvtkPlanes_ClassNew(); }
#define DECLARED_PyvtkPlanes_ClassNew
#endif

static const char *PyvtkPlanesIntersection_Doc =
  "vtkPlanesIntersection - A vtkPlanesIntersection object is a\n   vtkPlanes object that can compute whether the arbitrary convex\nregion\n   bounded by it's planes intersects an axis-aligned box.\n\n"
  "Superclass: vtkPlanes\n\n"
  "A subclass of vtkPlanes, this class determines whether it\n"
  "   intersects an axis aligned box.   This is motivated by the\n"
  "   need to intersect the axis aligned region of a spacial\n"
  "   decomposition of volume data with various other regions.\n"
  "   It uses the algorithm from Graphics Gems IV, page 81.\n\n"
  "@par Caveat:\n"
  "   An instance of vtkPlanes can be redefined by changing the planes,\n"
  "   but this subclass then will not know if the region vertices are\n"
  "   up to date.  (Region vertices can be specified in\n"
  "SetRegionVertices\n"
  "   or computed by the subclass.)  So Delete and recreate if you want\n"
  "   to change the set of planes.\n\n";


static PyObject *
PyvtkPlanesIntersection_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlanesIntersection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlanesIntersection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlanesIntersection *tempr = vtkPlanesIntersection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlanesIntersection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlanesIntersection::NewInstance());

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
PyvtkPlanesIntersection_SetRegionVertices_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetRegionVertices(temp0);
    }
    else
    {
      op->vtkPlanesIntersection::SetRegionVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlanesIntersection_SetRegionVertices_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetRegionVertices(temp0, temp1);
    }
    else
    {
      op->vtkPlanesIntersection::SetRegionVertices(temp0, temp1);
    }

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
PyvtkPlanesIntersection_SetRegionVertices(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlanesIntersection_SetRegionVertices_s1(self, args);
    case 2:
      return PyvtkPlanesIntersection_SetRegionVertices_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRegionVertices");
  return nullptr;
}



static PyObject *
PyvtkPlanesIntersection_GetNumberOfRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionVertices() :
      op->vtkPlanesIntersection::GetNumberOfRegionVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetNumRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumRegionVertices() :
      op->vtkPlanesIntersection::GetNumRegionVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_GetRegionVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetRegionVertices(temp0, temp1) :
      op->vtkPlanesIntersection::GetRegionVertices(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_IntersectsRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanesIntersection *op = static_cast<vtkPlanesIntersection *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectsRegion(temp0) :
      op->vtkPlanesIntersection::IntersectsRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_PolygonIntersectsBBox(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PolygonIntersectsBBox");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    ap.Save(temp0, save0, size0);

    int tempr = vtkPlanesIntersection::PolygonIntersectsBBox(temp0, temp1);

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlanesIntersection_Convert3DCell(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Convert3DCell");

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    vtkPlanesIntersection *tempr = vtkPlanesIntersection::Convert3DCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlanesIntersection_Methods[] = {
  {"IsTypeOf", PyvtkPlanesIntersection_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkPlanesIntersection_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkPlanesIntersection_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPlanesIntersection\nC++: static vtkPlanesIntersection *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkPlanesIntersection_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPlanesIntersection\nC++: vtkPlanesIntersection *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SetRegionVertices", PyvtkPlanesIntersection_SetRegionVertices, METH_VARARGS,
   "V.SetRegionVertices(vtkPoints)\nC++: void SetRegionVertices(vtkPoints *pts)\nV.SetRegionVertices([float, ...], int)\nC++: void SetRegionVertices(double *v, int nvertices)\n\nIt helps if you know the vertices of the convex region. If you\ndon't, we will calculate them.  Region vertices are 3-tuples.\n"},
  {"GetNumberOfRegionVertices", PyvtkPlanesIntersection_GetNumberOfRegionVertices, METH_VARARGS,
   "V.GetNumberOfRegionVertices() -> int\nC++: int GetNumberOfRegionVertices()\n\n"},
  {"GetNumRegionVertices", PyvtkPlanesIntersection_GetNumRegionVertices, METH_VARARGS,
   "V.GetNumRegionVertices() -> int\nC++: int GetNumRegionVertices()\n\n"},
  {"GetRegionVertices", PyvtkPlanesIntersection_GetRegionVertices, METH_VARARGS,
   "V.GetRegionVertices([float, ...], int) -> int\nC++: int GetRegionVertices(double *v, int nvertices)\n\n"},
  {"IntersectsRegion", PyvtkPlanesIntersection_IntersectsRegion, METH_VARARGS,
   "V.IntersectsRegion(vtkPoints) -> int\nC++: int IntersectsRegion(vtkPoints *R)\n\nReturn 1 if the axis aligned box defined by R intersects the\nregion defined by the planes, or 0 otherwise.\n"},
  {"PolygonIntersectsBBox", PyvtkPlanesIntersection_PolygonIntersectsBBox, METH_VARARGS,
   "V.PolygonIntersectsBBox([float, float, float, float, float,\n    float], vtkPoints) -> int\nC++: static int PolygonIntersectsBBox(double bounds[6],\n    vtkPoints *pts)\n\nA convenience function provided by this class, returns 1 if the\npolygon defined in pts intersects the bounding box defined in\nbounds, 0 otherwise.\n\n* The points must define a planar polygon.\n"},
  {"Convert3DCell", PyvtkPlanesIntersection_Convert3DCell, METH_VARARGS,
   "V.Convert3DCell(vtkCell) -> vtkPlanesIntersection\nC++: static vtkPlanesIntersection *Convert3DCell(vtkCell *cell)\n\nAnother convenience function provided by this class, returns the\nvtkPlanesIntersection object representing a 3D cell.  The point\nIDs for each face must be given in counter-clockwise order from\nthe outside of the cell.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPlanesIntersection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkPlanesIntersection", // tp_name
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
  PyvtkPlanesIntersection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlanesIntersection_StaticNew()
{
  return vtkPlanesIntersection::New();
}

PyObject *PyvtkPlanesIntersection_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPlanesIntersection_Type, PyvtkPlanesIntersection_Methods,
    "vtkPlanesIntersection",
 &PyvtkPlanesIntersection_StaticNew);

  PyTypeObject *pytype = &PyvtkPlanesIntersection_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPlanes_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlanesIntersection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlanesIntersection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlanesIntersection", o) != 0)
  {
    Py_DECREF(o);
  }

}

