// python wrapper for vtkFlyingEdgesPlaneCutter
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
#include "vtkFlyingEdgesPlaneCutter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFlyingEdgesPlaneCutter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFlyingEdgesPlaneCutter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkFlyingEdgesPlaneCutter_Doc =
  "vtkFlyingEdgesPlaneCutter - cut a volume with a plane and generate a\npolygonal cut surface\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFlyingEdgesPlaneCutter is a specialization of the FlyingEdges\n"
  "algorithm to cut a volume with a single plane. It is designed for\n"
  "performance and an exploratory, fast workflow.\n\n"
  "This algorithm is not only fast because it uses flying edges, but\n"
  "also because it plays some \"tricks\" during processing. For example,\n"
  "rather than evaluate the cut (plane) function on all volume points\n"
  "like vtkCutter and its ilk do, this algorithm intersects the volume\n"
  "x-edges against the plane to (potentially) generate the single\n"
  "intersection point. It then quickly classifies the voxel edges as\n"
  "above, below, or straddling the cut plane. Thus the number of plane\n"
  "evaluations is greatly reduced.\n\n"
  "For more information see vtkFlyingEdges3D and/or the paper \"Flying\n"
  "Edges: A High-Performance Scalable Isocontouring Algorithm\" by\n"
  "Schroeder, Maynard, Geveci. Proc. of LDAV 2015. Chicago, IL.\n\n"
  "@warning\n"
  "This filter is specialized to 3D volumes. This implementation can\n"
  "produce degenerate triangles (i.e., zero-area triangles).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkFlyingEdges2D vtkFlyingEdges3D\n\n";


static PyObject *
PyvtkFlyingEdgesPlaneCutter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFlyingEdgesPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFlyingEdgesPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFlyingEdgesPlaneCutter *tempr = vtkFlyingEdgesPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFlyingEdgesPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFlyingEdgesPlaneCutter::NewInstance());

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
PyvtkFlyingEdgesPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFlyingEdgesPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkFlyingEdgesPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkFlyingEdgesPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkFlyingEdgesPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkFlyingEdgesPlaneCutter::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFlyingEdgesPlaneCutter_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFlyingEdgesPlaneCutter *op = static_cast<vtkFlyingEdgesPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkFlyingEdgesPlaneCutter::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFlyingEdgesPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkFlyingEdgesPlaneCutter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard construction and print methods.\n"},
  {"IsA", PyvtkFlyingEdgesPlaneCutter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard construction and print methods.\n"},
  {"SafeDownCast", PyvtkFlyingEdgesPlaneCutter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFlyingEdgesPlaneCutter\nC++: static vtkFlyingEdgesPlaneCutter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard construction and print methods.\n"},
  {"NewInstance", PyvtkFlyingEdgesPlaneCutter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFlyingEdgesPlaneCutter\nC++: vtkFlyingEdgesPlaneCutter *NewInstance()\n\nStandard construction and print methods.\n"},
  {"GetMTime", PyvtkFlyingEdgesPlaneCutter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated cut plane.\n"},
  {"SetPlane", PyvtkFlyingEdgesPlaneCutter_SetPlane, METH_VARARGS,
   "V.SetPlane(vtkPlane)\nC++: virtual void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"GetPlane", PyvtkFlyingEdgesPlaneCutter_GetPlane, METH_VARARGS,
   "V.GetPlane() -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"SetComputeNormals", PyvtkFlyingEdgesPlaneCutter_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. By default this is disabled.\n"},
  {"GetComputeNormals", PyvtkFlyingEdgesPlaneCutter_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. By default this is disabled.\n"},
  {"ComputeNormalsOn", PyvtkFlyingEdgesPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. By default this is disabled.\n"},
  {"ComputeNormalsOff", PyvtkFlyingEdgesPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. By default this is disabled.\n"},
  {"SetInterpolateAttributes", PyvtkFlyingEdgesPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "V.SetInterpolateAttributes(int)\nC++: virtual void SetInterpolateAttributes(vtkTypeBool _arg)\n\nIndicate whether to interpolate other attribute data besides the\ninput scalars (which are required). That is, as the isosurface is\ngenerated, interpolate all other point attribute data across\nintersected edges.\n"},
  {"GetInterpolateAttributes", PyvtkFlyingEdgesPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "V.GetInterpolateAttributes() -> int\nC++: virtual vtkTypeBool GetInterpolateAttributes()\n\nIndicate whether to interpolate other attribute data besides the\ninput scalars (which are required). That is, as the isosurface is\ngenerated, interpolate all other point attribute data across\nintersected edges.\n"},
  {"InterpolateAttributesOn", PyvtkFlyingEdgesPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "V.InterpolateAttributesOn()\nC++: virtual void InterpolateAttributesOn()\n\nIndicate whether to interpolate other attribute data besides the\ninput scalars (which are required). That is, as the isosurface is\ngenerated, interpolate all other point attribute data across\nintersected edges.\n"},
  {"InterpolateAttributesOff", PyvtkFlyingEdgesPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "V.InterpolateAttributesOff()\nC++: virtual void InterpolateAttributesOff()\n\nIndicate whether to interpolate other attribute data besides the\ninput scalars (which are required). That is, as the isosurface is\ngenerated, interpolate all other point attribute data across\nintersected edges.\n"},
  {"SetArrayComponent", PyvtkFlyingEdgesPlaneCutter_SetArrayComponent, METH_VARARGS,
   "V.SetArrayComponent(int)\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {"GetArrayComponent", PyvtkFlyingEdgesPlaneCutter_GetArrayComponent, METH_VARARGS,
   "V.GetArrayComponent() -> int\nC++: virtual int GetArrayComponent()\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFlyingEdgesPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkFlyingEdgesPlaneCutter", // tp_name
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
  PyvtkFlyingEdgesPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFlyingEdgesPlaneCutter_StaticNew()
{
  return vtkFlyingEdgesPlaneCutter::New();
}

PyObject *PyvtkFlyingEdgesPlaneCutter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFlyingEdgesPlaneCutter_Type, PyvtkFlyingEdgesPlaneCutter_Methods,
    "vtkFlyingEdgesPlaneCutter",
 &PyvtkFlyingEdgesPlaneCutter_StaticNew);

  PyTypeObject *pytype = &PyvtkFlyingEdgesPlaneCutter_Type;

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

void PyVTKAddFile_vtkFlyingEdgesPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFlyingEdgesPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFlyingEdgesPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

