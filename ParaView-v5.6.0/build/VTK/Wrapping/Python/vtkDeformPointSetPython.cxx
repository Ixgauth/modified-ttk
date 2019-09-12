// python wrapper for vtkDeformPointSet
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
#include "vtkDeformPointSet.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDeformPointSet(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDeformPointSet_ClassNew(); }

#ifndef DECLARED_PyvtkPointSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPointSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPointSetAlgorithm_ClassNew
#endif

static const char *PyvtkDeformPointSet_Doc =
  "vtkDeformPointSet - use a control polyhedron to deform an input\nvtkPointSet\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkDeformPointSet is a filter that uses a control polyhdron to deform\n"
  "an input dataset of type vtkPointSet. The control polyhedron (or\n"
  "mesh) must be a closed, manifold surface.\n\n"
  "The filter executes as follows. In initial pipeline execution, the\n"
  "control mesh and input vtkPointSet are assumed in undeformed\n"
  "position, and an initial set of interpolation weights are computed\n"
  "for each point in the vtkPointSet (one interpolation weight value for\n"
  "each point in the control mesh). The filter then stores these\n"
  "interpolation weights after filter execution. The next time the\n"
  "filter executes, assuming that the number of points/cells in the\n"
  "control mesh and vtkPointSet have not changed, the points in the\n"
  "vtkPointSet are recomputed based on the original weights. Hence if\n"
  "the control mesh has been deformed, it will in turn cause deformation\n"
  "in the vtkPointSet. This can be used to animate or edit the geometry\n"
  "of the vtkPointSet.\n\n"
  "@warning\n"
  "Note that a set of interpolation weights per point in the vtkPointSet\n"
  "is maintained. The number of interpolation weights is the number of\n"
  "points in the control mesh. Hence keep the control mesh small in size\n"
  "or a n^2 data explostion will occur.\n\n"
  "@warning\n"
  "The filter maintains interpolation weights between executions (after\n"
  "the initial execution pass computes the interpolation weights). You\n"
  "can explicitly cause the filter to reinitialize by setting the\n"
  "InitializeWeights boolean to true. By default, the filter will\n"
  "execute and then set InitializeWeights to false.\n\n"
  "@warning\n"
  "This work was motivated by the work of Tao Ju et al in \"Mesh Value\n"
  "Coordinates for Closed Triangular Meshes.\" The MVC algorithm is\n"
  "currently used to generate interpolation weights. However, in the\n"
  "future this filter may be extended to provide other interpolation\n"
  "functions.\n\n"
  "@warning\n"
  "A final note: point data and cell data are passed from the input to\n"
  "the output. Only the point coordinates of the input vtkPointSet are\n"
  "modified.\n\n"
  "@sa\n"
  "vtkMeanValueCoordinatesInterpolator vtkProbePolyhedron vtkPolyhedron\n\n";


static PyObject *
PyvtkDeformPointSet_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDeformPointSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDeformPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDeformPointSet *tempr = vtkDeformPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDeformPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDeformPointSet::NewInstance());

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
PyvtkDeformPointSet_SetControlMeshData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlMeshData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetControlMeshData(temp0);
    }
    else
    {
      op->vtkDeformPointSet::SetControlMeshData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_GetControlMeshData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlMeshData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetControlMeshData() :
      op->vtkDeformPointSet::GetControlMeshData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SetControlMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetControlMeshConnection(temp0);
    }
    else
    {
      op->vtkDeformPointSet::SetControlMeshConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_SetInitializeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitializeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitializeWeights(temp0);
    }
    else
    {
      op->vtkDeformPointSet::SetInitializeWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_GetInitializeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInitializeWeights() :
      op->vtkDeformPointSet::GetInitializeWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_InitializeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeWeightsOn();
    }
    else
    {
      op->vtkDeformPointSet::InitializeWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeformPointSet_InitializeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeformPointSet *op = static_cast<vtkDeformPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeWeightsOff();
    }
    else
    {
      op->vtkDeformPointSet::InitializeWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDeformPointSet_Methods[] = {
  {"IsTypeOf", PyvtkDeformPointSet_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"IsA", PyvtkDeformPointSet_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"SafeDownCast", PyvtkDeformPointSet_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDeformPointSet\nC++: static vtkDeformPointSet *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"NewInstance", PyvtkDeformPointSet_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDeformPointSet\nC++: vtkDeformPointSet *NewInstance()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"SetControlMeshData", PyvtkDeformPointSet_SetControlMeshData, METH_VARARGS,
   "V.SetControlMeshData(vtkPolyData)\nC++: void SetControlMeshData(vtkPolyData *controlMesh)\n\nSpecify the control mesh to deform the input vtkPointSet. The\ncontrol mesh must be a closed, non-self-intersecting, manifold\nmesh.\n"},
  {"GetControlMeshData", PyvtkDeformPointSet_GetControlMeshData, METH_VARARGS,
   "V.GetControlMeshData() -> vtkPolyData\nC++: vtkPolyData *GetControlMeshData()\n\nSpecify the control mesh to deform the input vtkPointSet. The\ncontrol mesh must be a closed, non-self-intersecting, manifold\nmesh.\n"},
  {"SetControlMeshConnection", PyvtkDeformPointSet_SetControlMeshConnection, METH_VARARGS,
   "V.SetControlMeshConnection(vtkAlgorithmOutput)\nC++: void SetControlMeshConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {"SetInitializeWeights", PyvtkDeformPointSet_SetInitializeWeights, METH_VARARGS,
   "V.SetInitializeWeights(int)\nC++: virtual void SetInitializeWeights(vtkTypeBool _arg)\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {"GetInitializeWeights", PyvtkDeformPointSet_GetInitializeWeights, METH_VARARGS,
   "V.GetInitializeWeights() -> int\nC++: virtual vtkTypeBool GetInitializeWeights()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {"InitializeWeightsOn", PyvtkDeformPointSet_InitializeWeightsOn, METH_VARARGS,
   "V.InitializeWeightsOn()\nC++: virtual void InitializeWeightsOn()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {"InitializeWeightsOff", PyvtkDeformPointSet_InitializeWeightsOff, METH_VARARGS,
   "V.InitializeWeightsOff()\nC++: virtual void InitializeWeightsOff()\n\nSpecify whether to regenerate interpolation weights or not.\nInitially the filter will reexecute no matter what this flag is\nset to (initial weights must be computed). Also, this flag is\nignored if the number of input points/cells or the number of\ncontrol mesh points/cells changes between executions. Thus flag\nis used to force reexecution and recomputation of weights.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDeformPointSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDeformPointSet", // tp_name
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
  PyvtkDeformPointSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDeformPointSet_StaticNew()
{
  return vtkDeformPointSet::New();
}

PyObject *PyvtkDeformPointSet_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDeformPointSet_Type, PyvtkDeformPointSet_Methods,
    "vtkDeformPointSet",
 &PyvtkDeformPointSet_StaticNew);

  PyTypeObject *pytype = &PyvtkDeformPointSet_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDeformPointSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDeformPointSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDeformPointSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

