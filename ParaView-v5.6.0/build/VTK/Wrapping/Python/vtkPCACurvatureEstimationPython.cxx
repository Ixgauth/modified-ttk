// python wrapper for vtkPCACurvatureEstimation
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
#include "vtkPCACurvatureEstimation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCACurvatureEstimation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCACurvatureEstimation_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPCACurvatureEstimation_Doc =
  "vtkPCACurvatureEstimation - generate curvature estimates using\nprincipal component analysis\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPCACurvatureEstimation generates point normals using PCA\n"
  "(principal component analysis).  Basically this estimates a local\n"
  "tangent plane around sample point p by considering a small\n"
  "neighborhood of points around p, and fitting a plane to the\n"
  "neighborhood (via PCA). A good introductory reference is Hoppe's\n"
  "\"Surface reconstruction from unorganized points.\"\n\n"
  "To use this filter, specify a neighborhood size. This may have to be\n"
  "set via experimentation. Optionally a point locator can be specified\n"
  "(instead of the default locator), which is used to accelerate\n"
  "searches around a sample point. Finally, the user should specify how\n"
  "to generate consistently-oriented normals. As computed by PCA,\n"
  "normals may point in +/- orientation, which may not be consistent\n"
  "with neighboring normals.\n\n"
  "The output of this filter is the same as the input except that a\n"
  "normal per point is produced. (Note that these are unit normals.)\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPCANormalEstimation\n\n";


static PyObject *
PyvtkPCACurvatureEstimation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCACurvatureEstimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCACurvatureEstimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCACurvatureEstimation *tempr = vtkPCACurvatureEstimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCACurvatureEstimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCACurvatureEstimation::NewInstance());

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
PyvtkPCACurvatureEstimation_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSize(temp0);
    }
    else
    {
      op->vtkPCACurvatureEstimation::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMinValue() :
      op->vtkPCACurvatureEstimation::GetSampleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMaxValue() :
      op->vtkPCACurvatureEstimation::GetSampleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkPCACurvatureEstimation::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkPCACurvatureEstimation::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPCACurvatureEstimation::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPCACurvatureEstimation_Methods[] = {
  {"IsTypeOf", PyvtkPCACurvatureEstimation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkPCACurvatureEstimation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkPCACurvatureEstimation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCACurvatureEstimation\nC++: static vtkPCACurvatureEstimation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkPCACurvatureEstimation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCACurvatureEstimation\nC++: vtkPCACurvatureEstimation *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetSampleSize", PyvtkPCACurvatureEstimation_SetSampleSize, METH_VARARGS,
   "V.SetSampleSize(int)\nC++: virtual void SetSampleSize(int _arg)\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMinValue", PyvtkPCACurvatureEstimation_GetSampleSizeMinValue, METH_VARARGS,
   "V.GetSampleSizeMinValue() -> int\nC++: virtual int GetSampleSizeMinValue()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMaxValue", PyvtkPCACurvatureEstimation_GetSampleSizeMaxValue, METH_VARARGS,
   "V.GetSampleSizeMaxValue() -> int\nC++: virtual int GetSampleSizeMaxValue()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSize", PyvtkPCACurvatureEstimation_GetSampleSize, METH_VARARGS,
   "V.GetSampleSize() -> int\nC++: virtual int GetSampleSize()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"SetLocator", PyvtkPCACurvatureEstimation_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkPCACurvatureEstimation_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCACurvatureEstimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkPCACurvatureEstimation", // tp_name
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
  PyvtkPCACurvatureEstimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCACurvatureEstimation_StaticNew()
{
  return vtkPCACurvatureEstimation::New();
}

PyObject *PyvtkPCACurvatureEstimation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCACurvatureEstimation_Type, PyvtkPCACurvatureEstimation_Methods,
    "vtkPCACurvatureEstimation",
 &PyvtkPCACurvatureEstimation_StaticNew);

  PyTypeObject *pytype = &PyvtkPCACurvatureEstimation_Type;

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

void PyVTKAddFile_vtkPCACurvatureEstimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCACurvatureEstimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCACurvatureEstimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

