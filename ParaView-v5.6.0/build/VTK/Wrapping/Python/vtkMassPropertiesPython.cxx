// python wrapper for vtkMassProperties
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
#include "vtkMassProperties.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMassProperties(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkMassProperties_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkMassProperties_Doc =
  "vtkMassProperties - estimate volume, area, shape index of triangle\nmesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMassProperties estimates the volume, the surface area, and the\n"
  "normalized shape index of a triangle mesh.  The algorithm implemented\n"
  "here is based on the discrete form of the divergence theorem.  The\n"
  "general assumption here is that the model is of closed surface.  For\n"
  "more details see the following reference (Alyassin A.M. et al,\n"
  "\"Evaluation of new algorithms for the interactive measurement of\n"
  "surface area and volume\", Med Phys 21(6) 1994.).\n\n"
  "@warning\n"
  "Currently only triangles are processed. Use vtkTriangleFilter to\n"
  "convert any strips or polygons to triangles. If multiple closed\n"
  "objects are defined consider using vtkMultiObjectMassProperties.\n"
  "Alternatively, vtkPolyDataConnectivityFilter can be used to extract\n"
  "connected regions (i.e., objects) one at a time, and then each object\n"
  "can be processed by this filter.\n\n"
  "@sa\n"
  "vtkTriangleFilter vtkMultiObjectMassProperties\n\n";


static PyObject *
PyvtkMassProperties_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMassProperties::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMassProperties::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMassProperties *tempr = vtkMassProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMassProperties *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMassProperties::NewInstance());

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
PyvtkMassProperties_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkMassProperties::GetVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeProjected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeProjected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeProjected() :
      op->vtkMassProperties::GetVolumeProjected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeX() :
      op->vtkMassProperties::GetVolumeX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeY() :
      op->vtkMassProperties::GetVolumeY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVolumeZ() :
      op->vtkMassProperties::GetVolumeZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKx() :
      op->vtkMassProperties::GetKx());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKy() :
      op->vtkMassProperties::GetKy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKz(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKz");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetKz() :
      op->vtkMassProperties::GetKz());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetSurfaceArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSurfaceArea() :
      op->vtkMassProperties::GetSurfaceArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMinCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinCellArea() :
      op->vtkMassProperties::GetMinCellArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMaxCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxCellArea() :
      op->vtkMassProperties::GetMaxCellArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMassProperties_GetNormalizedShapeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShapeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalizedShapeIndex() :
      op->vtkMassProperties::GetNormalizedShapeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMassProperties_Methods[] = {
  {"IsTypeOf", PyvtkMassProperties_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMassProperties_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMassProperties_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkMassProperties\nC++: static vtkMassProperties *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMassProperties_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkMassProperties\nC++: vtkMassProperties *NewInstance()\n\n"},
  {"GetVolume", PyvtkMassProperties_GetVolume, METH_VARARGS,
   "V.GetVolume() -> float\nC++: double GetVolume()\n\nCompute and return the volume.\n"},
  {"GetVolumeProjected", PyvtkMassProperties_GetVolumeProjected, METH_VARARGS,
   "V.GetVolumeProjected() -> float\nC++: double GetVolumeProjected()\n\nCompute and return the projected volume. Typically you should\ncompare this volume to the value returned by GetVolume if you get\nan error (GetVolume()-GetVolumeProjected())*10000 that is greater\nthan GetVolume() this should identify a problem:\n* Either the polydata is not closed\n* Or the polydata contains triangle that are flipped\n"},
  {"GetVolumeX", PyvtkMassProperties_GetVolumeX, METH_VARARGS,
   "V.GetVolumeX() -> float\nC++: double GetVolumeX()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {"GetVolumeY", PyvtkMassProperties_GetVolumeY, METH_VARARGS,
   "V.GetVolumeY() -> float\nC++: double GetVolumeY()\n\n"},
  {"GetVolumeZ", PyvtkMassProperties_GetVolumeZ, METH_VARARGS,
   "V.GetVolumeZ() -> float\nC++: double GetVolumeZ()\n\n"},
  {"GetKx", PyvtkMassProperties_GetKx, METH_VARARGS,
   "V.GetKx() -> float\nC++: double GetKx()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {"GetKy", PyvtkMassProperties_GetKy, METH_VARARGS,
   "V.GetKy() -> float\nC++: double GetKy()\n\n"},
  {"GetKz", PyvtkMassProperties_GetKz, METH_VARARGS,
   "V.GetKz() -> float\nC++: double GetKz()\n\n"},
  {"GetSurfaceArea", PyvtkMassProperties_GetSurfaceArea, METH_VARARGS,
   "V.GetSurfaceArea() -> float\nC++: double GetSurfaceArea()\n\nCompute and return the area.\n"},
  {"GetMinCellArea", PyvtkMassProperties_GetMinCellArea, METH_VARARGS,
   "V.GetMinCellArea() -> float\nC++: double GetMinCellArea()\n\nCompute and return the min cell area.\n"},
  {"GetMaxCellArea", PyvtkMassProperties_GetMaxCellArea, METH_VARARGS,
   "V.GetMaxCellArea() -> float\nC++: double GetMaxCellArea()\n\nCompute and return the max cell area.\n"},
  {"GetNormalizedShapeIndex", PyvtkMassProperties_GetNormalizedShapeIndex, METH_VARARGS,
   "V.GetNormalizedShapeIndex() -> float\nC++: double GetNormalizedShapeIndex()\n\nCompute and return the normalized shape index. This characterizes\nthe deviation of the shape of an object from a sphere. A sphere's\nNSI is one. This number is always >= 1.0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkMassProperties_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkMassProperties", // tp_name
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
  PyvtkMassProperties_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMassProperties_StaticNew()
{
  return vtkMassProperties::New();
}

PyObject *PyvtkMassProperties_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkMassProperties_Type, PyvtkMassProperties_Methods,
    "vtkMassProperties",
 &PyvtkMassProperties_StaticNew);

  PyTypeObject *pytype = &PyvtkMassProperties_Type;

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

void PyVTKAddFile_vtkMassProperties(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMassProperties_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMassProperties", o) != 0)
  {
    Py_DECREF(o);
  }

}

