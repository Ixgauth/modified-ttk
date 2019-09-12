// python wrapper for vtkExtractEnclosedPoints
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
#include "vtkExtractEnclosedPoints.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractEnclosedPoints(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractEnclosedPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static const char *PyvtkExtractEnclosedPoints_Doc =
  "vtkExtractEnclosedPoints - extract points inside of a closed\npolygonal surface\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkExtractEnclosedPoints is a filter that evaluates all the input\n"
  "points to determine whether they are contained within an enclosing\n"
  "surface. Those within the surface are sent to the output. The\n"
  "enclosing surface is specified through a second input to the filter.\n\n"
  "Note: as a derived class of vtkPointCloudFilter, additional methods\n"
  "are available for generating an in/out mask, and also extracting\n"
  "points outside of the enclosing surface.\n\n"
  "@warning\n"
  "The filter assumes that the surface is closed and manifold. A boolean\n"
  "flag can be set to force the filter to first check whether this is\n"
  "true. If false, all points will be marked outside. Note that if this\n"
  "check is not performed and the surface is not closed, the results are\n"
  "undefined.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "The filter vtkSelectEnclosedPoints marks points as to in/out of the\n"
  "enclosing surface, and operates on any dataset type, producing an\n"
  "output dataset of the same type as the input. Then, thresholding and\n"
  "masking filters can be used to extract parts of the dataset. This\n"
  "filter (vtkExtractEnclosedPoints) is meant to operate on point clouds\n"
  "represented by vtkPolyData, and produces vtkPolyData on output, so it\n"
  "is more efficient for point processing. Note that this filter\n"
  "delegates many of its methods to vtkSelectEnclosedPoints.\n\n"
  "@sa\n"
  "vtkSelectEnclosedPoints vtkExtractPoints\n\n";


static PyObject *
PyvtkExtractEnclosedPoints_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractEnclosedPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractEnclosedPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractEnclosedPoints *tempr = vtkExtractEnclosedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractEnclosedPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractEnclosedPoints::NewInstance());

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
PyvtkExtractEnclosedPoints_SetSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceData(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetSurfaceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceConnection(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetSurfaceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface() :
      op->vtkExtractEnclosedPoints::GetSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractEnclosedPoints_GetSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface(temp0) :
      op->vtkExtractEnclosedPoints::GetSurface(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractEnclosedPoints_GetSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkExtractEnclosedPoints_GetSurface_s1(self, args);
    case 1:
      return PyvtkExtractEnclosedPoints_GetSurface_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSurface");
  return nullptr;
}



static PyObject *
PyvtkExtractEnclosedPoints_SetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckSurface(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetCheckSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_CheckSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOn();
    }
    else
    {
      op->vtkExtractEnclosedPoints::CheckSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_CheckSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOff();
    }
    else
    {
      op->vtkExtractEnclosedPoints::CheckSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckSurface() :
      op->vtkExtractEnclosedPoints::GetCheckSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkExtractEnclosedPoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkExtractEnclosedPoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkExtractEnclosedPoints::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractEnclosedPoints_Methods[] = {
  {"IsTypeOf", PyvtkExtractEnclosedPoints_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkExtractEnclosedPoints_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkExtractEnclosedPoints_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractEnclosedPoints\nC++: static vtkExtractEnclosedPoints *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkExtractEnclosedPoints_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractEnclosedPoints\nC++: vtkExtractEnclosedPoints *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SetSurfaceData", PyvtkExtractEnclosedPoints_SetSurfaceData, METH_VARARGS,
   "V.SetSurfaceData(vtkPolyData)\nC++: void SetSurfaceData(vtkPolyData *pd)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {"SetSurfaceConnection", PyvtkExtractEnclosedPoints_SetSurfaceConnection, METH_VARARGS,
   "V.SetSurfaceConnection(vtkAlgorithmOutput)\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {"GetSurface", PyvtkExtractEnclosedPoints_GetSurface, METH_VARARGS,
   "V.GetSurface() -> vtkPolyData\nC++: vtkPolyData *GetSurface()\nV.GetSurface(vtkInformationVector) -> vtkPolyData\nC++: vtkPolyData *GetSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {"SetCheckSurface", PyvtkExtractEnclosedPoints_SetCheckSurface, METH_VARARGS,
   "V.SetCheckSurface(int)\nC++: virtual void SetCheckSurface(vtkTypeBool _arg)\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"CheckSurfaceOn", PyvtkExtractEnclosedPoints_CheckSurfaceOn, METH_VARARGS,
   "V.CheckSurfaceOn()\nC++: virtual void CheckSurfaceOn()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"CheckSurfaceOff", PyvtkExtractEnclosedPoints_CheckSurfaceOff, METH_VARARGS,
   "V.CheckSurfaceOff()\nC++: virtual void CheckSurfaceOff()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"GetCheckSurface", PyvtkExtractEnclosedPoints_GetCheckSurface, METH_VARARGS,
   "V.GetCheckSurface() -> int\nC++: virtual vtkTypeBool GetCheckSurface()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"SetTolerance", PyvtkExtractEnclosedPoints_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetToleranceMinValue", PyvtkExtractEnclosedPoints_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetToleranceMaxValue", PyvtkExtractEnclosedPoints_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetTolerance", PyvtkExtractEnclosedPoints_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractEnclosedPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkExtractEnclosedPoints", // tp_name
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
  PyvtkExtractEnclosedPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractEnclosedPoints_StaticNew()
{
  return vtkExtractEnclosedPoints::New();
}

PyObject *PyvtkExtractEnclosedPoints_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractEnclosedPoints_Type, PyvtkExtractEnclosedPoints_Methods,
    "vtkExtractEnclosedPoints",
 &PyvtkExtractEnclosedPoints_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractEnclosedPoints_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractEnclosedPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractEnclosedPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractEnclosedPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

