// python wrapper for vtkPCANormalEstimation
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
#include "vtkPCANormalEstimation.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCANormalEstimation(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPCANormalEstimation_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPCANormalEstimation_Doc =
  "vtkPCANormalEstimation - generate point normals using local tangent\nplanes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPCANormalEstimation generates point normals using PCA (principal\n"
  "component analysis).  Basically this estimates a local tangent plane\n"
  "around each sample point p by considering a small neighborhood of\n"
  "points around p, and fitting a plane to the neighborhood (via PCA). A\n"
  "good introductory reference is Hoppe's \"Surface reconstruction from\n"
  "unorganized points.\"\n\n"
  "To use this filter, specify a neighborhood size. This may have to be\n"
  "set via experimentation. In addition, the user may optionally specify\n"
  "a point locator (instead of the default locator), which is used to\n"
  "accelerate searches around the sample point. Finally, the user should\n"
  "specify how to generate consistently-oriented normals. As computed by\n"
  "PCA, normals may point in arbitrary +/- orientation, which may not be\n"
  "consistent with neighboring normals. There are three methods to\n"
  "address normal consistency: 1) leave the normals as computed, 2)\n"
  "adjust the +/- sign of the normals so that the normals all point\n"
  "towards a specified point, and\n"
  "3) perform a traversal of the point cloud and flip neighboring\n"
  "   normals so that they are mutually consistent.\n\n"
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
  "vtkPCACurvatureEstimation\n\n";

static PyTypeObject PyvtkPCANormalEstimation_Style_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkPCANormalEstimation.Style", // tp_name
  sizeof(PyIntObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
  nullptr, // tp_print
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyInt_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkPCANormalEstimation_Style_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkPCANormalEstimation_Style_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkPCANormalEstimation_Style_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkPCANormalEstimation_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCANormalEstimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCANormalEstimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCANormalEstimation *tempr = vtkPCANormalEstimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCANormalEstimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCANormalEstimation::NewInstance());

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
PyvtkPCANormalEstimation_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

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
      op->vtkPCANormalEstimation::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMinValue() :
      op->vtkPCANormalEstimation::GetSampleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMaxValue() :
      op->vtkPCANormalEstimation::GetSampleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkPCANormalEstimation::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientation(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetNormalOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalOrientation() :
      op->vtkPCANormalEstimation::GetNormalOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToAsComputed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToAsComputed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToAsComputed();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToAsComputed();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToPoint();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetNormalOrientationToGraphTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOrientationToGraphTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOrientationToGraphTraversal();
    }
    else
    {
      op->vtkPCANormalEstimation::SetNormalOrientationToGraphTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrientationPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPCANormalEstimation::SetOrientationPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationPoint(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetOrientationPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPCANormalEstimation_SetOrientationPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPCANormalEstimation_SetOrientationPoint_s1(self, args);
    case 1:
      return PyvtkPCANormalEstimation_SetOrientationPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrientationPoint");
  return nullptr;
}



static PyObject *
PyvtkPCANormalEstimation_GetOrientationPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientationPoint() :
      op->vtkPCANormalEstimation::GetOrientationPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipNormals(temp0);
    }
    else
    {
      op->vtkPCANormalEstimation::SetFlipNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkPCANormalEstimation::GetFlipNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOn();
    }
    else
    {
      op->vtkPCANormalEstimation::FlipNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOff();
    }
    else
    {
      op->vtkPCANormalEstimation::FlipNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

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
      op->vtkPCANormalEstimation::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCANormalEstimation_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCANormalEstimation *op = static_cast<vtkPCANormalEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPCANormalEstimation::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPCANormalEstimation_Methods[] = {
  {"IsTypeOf", PyvtkPCANormalEstimation_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkPCANormalEstimation_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkPCANormalEstimation_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPCANormalEstimation\nC++: static vtkPCANormalEstimation *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkPCANormalEstimation_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPCANormalEstimation\nC++: vtkPCANormalEstimation *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetSampleSize", PyvtkPCANormalEstimation_SetSampleSize, METH_VARARGS,
   "V.SetSampleSize(int)\nC++: virtual void SetSampleSize(int _arg)\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMinValue", PyvtkPCANormalEstimation_GetSampleSizeMinValue, METH_VARARGS,
   "V.GetSampleSizeMinValue() -> int\nC++: virtual int GetSampleSizeMinValue()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMaxValue", PyvtkPCANormalEstimation_GetSampleSizeMaxValue, METH_VARARGS,
   "V.GetSampleSizeMaxValue() -> int\nC++: virtual int GetSampleSizeMaxValue()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSize", PyvtkPCANormalEstimation_GetSampleSize, METH_VARARGS,
   "V.GetSampleSize() -> int\nC++: virtual int GetSampleSize()\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"SetNormalOrientation", PyvtkPCANormalEstimation_SetNormalOrientation, METH_VARARGS,
   "V.SetNormalOrientation(int)\nC++: virtual void SetNormalOrientation(int _arg)\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"GetNormalOrientation", PyvtkPCANormalEstimation_GetNormalOrientation, METH_VARARGS,
   "V.GetNormalOrientation() -> int\nC++: virtual int GetNormalOrientation()\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"SetNormalOrientationToAsComputed", PyvtkPCANormalEstimation_SetNormalOrientationToAsComputed, METH_VARARGS,
   "V.SetNormalOrientationToAsComputed()\nC++: void SetNormalOrientationToAsComputed()\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"SetNormalOrientationToPoint", PyvtkPCANormalEstimation_SetNormalOrientationToPoint, METH_VARARGS,
   "V.SetNormalOrientationToPoint()\nC++: void SetNormalOrientationToPoint()\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"SetNormalOrientationToGraphTraversal", PyvtkPCANormalEstimation_SetNormalOrientationToGraphTraversal, METH_VARARGS,
   "V.SetNormalOrientationToGraphTraversal()\nC++: void SetNormalOrientationToGraphTraversal()\n\nConfigure how the filter addresses consistency in normal\noreientation. When initially computed using PCA, a point normal\nmay point in the + or - direction, which may not be consistent\nwith neighboring points. To address this, various strategies have\nbeen used to create consistent normals. The simplest approach is\nto do nothing (AsComputed). Another simple approach is to flip\nthe normal based on its direction with respect to a specified\npoint (i.e., point normals will point towrads the specified\npoint). Finally, a full traversal of points across the graph of\nneighboring, connected points produces the best results but is\ncomputationally expensive.\n"},
  {"SetOrientationPoint", PyvtkPCANormalEstimation_SetOrientationPoint, METH_VARARGS,
   "V.SetOrientationPoint(float, float, float)\nC++: void SetOrientationPoint(double, double, double)\nV.SetOrientationPoint((float, float, float))\nC++: void SetOrientationPoint(double a[3])\n\n"},
  {"GetOrientationPoint", PyvtkPCANormalEstimation_GetOrientationPoint, METH_VARARGS,
   "V.GetOrientationPoint() -> (float, float, float)\nC++: double *GetOrientationPoint()\n\nIf the normal orientation is to be consistent with a specified\ndirection, then an orientation point should be set. The sign of\nthe normals will be modified so that they point towards this\npoint. By default, the specified orientation point is (0,0,0).\n"},
  {"SetFlipNormals", PyvtkPCANormalEstimation_SetFlipNormals, METH_VARARGS,
   "V.SetFlipNormals(bool)\nC++: virtual void SetFlipNormals(bool _arg)\n\nThe normal orientation can be flipped by enabling this flag.\n"},
  {"GetFlipNormals", PyvtkPCANormalEstimation_GetFlipNormals, METH_VARARGS,
   "V.GetFlipNormals() -> bool\nC++: virtual bool GetFlipNormals()\n\nThe normal orientation can be flipped by enabling this flag.\n"},
  {"FlipNormalsOn", PyvtkPCANormalEstimation_FlipNormalsOn, METH_VARARGS,
   "V.FlipNormalsOn()\nC++: virtual void FlipNormalsOn()\n\nThe normal orientation can be flipped by enabling this flag.\n"},
  {"FlipNormalsOff", PyvtkPCANormalEstimation_FlipNormalsOff, METH_VARARGS,
   "V.FlipNormalsOff()\nC++: virtual void FlipNormalsOff()\n\nThe normal orientation can be flipped by enabling this flag.\n"},
  {"SetLocator", PyvtkPCANormalEstimation_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkPCANormalEstimation_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPCANormalEstimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkPCANormalEstimation", // tp_name
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
  PyvtkPCANormalEstimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCANormalEstimation_StaticNew()
{
  return vtkPCANormalEstimation::New();
}

PyObject *PyvtkPCANormalEstimation_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPCANormalEstimation_Type, PyvtkPCANormalEstimation_Methods,
    "vtkPCANormalEstimation",
 &PyvtkPCANormalEstimation_StaticNew);

  PyTypeObject *pytype = &PyvtkPCANormalEstimation_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataAlgorithm_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPCANormalEstimation_Style_Type);
  PyvtkPCANormalEstimation_Style_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkPCANormalEstimation_Style_Type);

  o = (PyObject *)&PyvtkPCANormalEstimation_Style_Type;
  if (PyDict_SetItemString(d, "Style", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPCANormalEstimation::Style cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "AS_COMPUTED", vtkPCANormalEstimation::AS_COMPUTED },
        { "POINT", vtkPCANormalEstimation::POINT },
        { "GRAPH_TRAVERSAL", vtkPCANormalEstimation::GRAPH_TRAVERSAL },
      };

    o = PyvtkPCANormalEstimation_Style_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCANormalEstimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCANormalEstimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCANormalEstimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

