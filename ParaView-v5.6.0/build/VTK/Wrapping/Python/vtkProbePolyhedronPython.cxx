// python wrapper for vtkProbePolyhedron
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
#include "vtkProbePolyhedron.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProbePolyhedron(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkProbePolyhedron_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkProbePolyhedron_Doc =
  "vtkProbePolyhedron - probe/interpolate data values in the interior,\nexterior or of the surface of a closed, manifold polyhedron\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProbePolyhedron is a filter that computes point attributes (e.g.,\n"
  "scalars, vectors, etc.) at specified point positions. The filter has\n"
  "two inputs: the Input and Source. The Source geometric structure is\n"
  "passed through the filter. The point attributes are computed at the\n"
  "Input point positions by interpolating into the source data. In this\n"
  "filter, the Source is always a closed, non-self-intersecting,\n"
  "polyhedral mesh. For example, we can compute data values on a plane\n"
  "(plane specified as Input) from a triangle mesh (e.g., output of\n"
  "marching cubes).\n\n"
  "This filter can be used to resample data from a mesh onto a different\n"
  "dataset type. For example, a polyhedral mesh (vtkPolyData) can be\n"
  "probed with a volume (three-dimensional vtkImageData), and then\n"
  "volume rendering techniques can be used to visualize the results.\n"
  "Another example: a line or curve can be used to probe a mesh to\n"
  "produce x-y plots along that line or curve.\n\n"
  "@warning\n"
  "Note that cell data is not interpolated from the source. If you need\n"
  "cell data, you can always use vtkPointDataToCellData and/or\n"
  "vtkCellDataToPointData in various combinations.\n\n"
  "@warning\n"
  "Note that the filter interpolates from a mesh to points interior,\n"
  "exterior or on the surface of the mesh. This process is necessarily\n"
  "an approximation. Currently the approach of Mean Value Coordinates is\n"
  "used, but this filter may be extended in the future to use other\n"
  "methods.\n\n"
  "@sa\n"
  "vtkProbeFilter vtkMeanValueCoordinatesInterpolator vtkPolyhedron\n\n";


static PyObject *
PyvtkProbePolyhedron_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProbePolyhedron::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbePolyhedron::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProbePolyhedron *tempr = vtkProbePolyhedron::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProbePolyhedron *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbePolyhedron::NewInstance());

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
PyvtkProbePolyhedron_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProbePolyhedron::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbePointData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetProbePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProbePointData() :
      op->vtkProbePolyhedron::GetProbePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbePointDataOn();
    }
    else
    {
      op->vtkProbePolyhedron::ProbePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbePointDataOff();
    }
    else
    {
      op->vtkProbePolyhedron::ProbePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbeCellData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetProbeCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProbeCellData() :
      op->vtkProbePolyhedron::GetProbeCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbeCellDataOn();
    }
    else
    {
      op->vtkProbePolyhedron::ProbeCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbeCellDataOff();
    }
    else
    {
      op->vtkProbePolyhedron::ProbeCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProbePolyhedron_Methods[] = {
  {"IsTypeOf", PyvtkProbePolyhedron_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"IsA", PyvtkProbePolyhedron_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"SafeDownCast", PyvtkProbePolyhedron_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkProbePolyhedron\nC++: static vtkProbePolyhedron *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"NewInstance", PyvtkProbePolyhedron_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkProbePolyhedron\nC++: vtkProbePolyhedron *NewInstance()\n\nStandard methods for instantiable (i.e., concrete) class.\n"},
  {"SetSourceData", PyvtkProbePolyhedron_SetSourceData, METH_VARARGS,
   "V.SetSourceData(vtkPolyData)\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {"GetSource", PyvtkProbePolyhedron_GetSource, METH_VARARGS,
   "V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {"SetSourceConnection", PyvtkProbePolyhedron_SetSourceConnection, METH_VARARGS,
   "V.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {"SetProbePointData", PyvtkProbePolyhedron_SetProbePointData, METH_VARARGS,
   "V.SetProbePointData(int)\nC++: virtual void SetProbePointData(vtkTypeBool _arg)\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {"GetProbePointData", PyvtkProbePolyhedron_GetProbePointData, METH_VARARGS,
   "V.GetProbePointData() -> int\nC++: virtual vtkTypeBool GetProbePointData()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {"ProbePointDataOn", PyvtkProbePolyhedron_ProbePointDataOn, METH_VARARGS,
   "V.ProbePointDataOn()\nC++: virtual void ProbePointDataOn()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {"ProbePointDataOff", PyvtkProbePolyhedron_ProbePointDataOff, METH_VARARGS,
   "V.ProbePointDataOff()\nC++: virtual void ProbePointDataOff()\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {"SetProbeCellData", PyvtkProbePolyhedron_SetProbeCellData, METH_VARARGS,
   "V.SetProbeCellData(int)\nC++: virtual void SetProbeCellData(vtkTypeBool _arg)\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {"GetProbeCellData", PyvtkProbePolyhedron_GetProbeCellData, METH_VARARGS,
   "V.GetProbeCellData() -> int\nC++: virtual vtkTypeBool GetProbeCellData()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {"ProbeCellDataOn", PyvtkProbePolyhedron_ProbeCellDataOn, METH_VARARGS,
   "V.ProbeCellDataOn()\nC++: virtual void ProbeCellDataOn()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {"ProbeCellDataOff", PyvtkProbePolyhedron_ProbeCellDataOff, METH_VARARGS,
   "V.ProbeCellDataOff()\nC++: virtual void ProbeCellDataOff()\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkProbePolyhedron_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkProbePolyhedron", // tp_name
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
  PyvtkProbePolyhedron_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProbePolyhedron_StaticNew()
{
  return vtkProbePolyhedron::New();
}

PyObject *PyvtkProbePolyhedron_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkProbePolyhedron_Type, PyvtkProbePolyhedron_Methods,
    "vtkProbePolyhedron",
 &PyvtkProbePolyhedron_StaticNew);

  PyTypeObject *pytype = &PyvtkProbePolyhedron_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProbePolyhedron(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProbePolyhedron_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProbePolyhedron", o) != 0)
  {
    Py_DECREF(o);
  }

}

