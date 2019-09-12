// python wrapper for vtkGeneralizedKernel
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
#include "vtkGeneralizedKernel.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeneralizedKernel(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGeneralizedKernel_ClassNew(); }

#ifndef DECLARED_PyvtkInterpolationKernel_ClassNew
extern "C" { PyObject *PyvtkInterpolationKernel_ClassNew(); }
#define DECLARED_PyvtkInterpolationKernel_ClassNew
#endif

static const char *PyvtkGeneralizedKernel_Doc =
  "vtkGeneralizedKernel - flexible, general interpolation kernels\n\n"
  "Superclass: vtkInterpolationKernel\n\n"
  "vtkGeneralizedKernel is an abstract class that defines an API for\n"
  "concrete general-purpose, kernel subclasses. vtkGeneralizedKernels\n"
  "has important properties that make them useful in a variety of\n"
  "interpolation applications:\n\n"
  "1. The weights are normalized.\n"
  "2. The footprint of the basis is configurable.\n"
  "3. Probabilistic weighting functions can be used to favor certain\n"
  "   weights.  The following paragraphs describe each of these\n"
  "   properties in more detail.\n\n"
  "Normalized weightings simple mean Sum(w_i) = 1. This ensures that the\n"
  "interpolation process is well behaved.\n\n"
  "The interpolation footprint is the set of points that are used to\n"
  "perform the interpolation process. For example, it is possible to\n"
  "choose between a radius-based kernel selection, and one based on the\n"
  "N nearest neighbors. Note that the performance and mathematical\n"
  "properties of kernels may vary greatly depending on which kernel\n"
  "style is selected. For example, if a radius-based kernel footprint is\n"
  "used, and the radius is too big, the algorithm can perform in n^3\n"
  "fashion.\n\n"
  "Finally, in advanced usage, probability functions can be applied to\n"
  "the interpolation weights (prior to normalization). These probability\n"
  "functions are confidence estimates that the data at a particular\n"
  "point is accurate. A typical application is when laser scans are used\n"
  "to acquire point measurements, which return normals that indicate\n"
  "glancing returns versus direct, near orthogonal hits. Another use is\n"
  "when point clouds are combined, where some clouds are acquired with\n"
  "more accurate, detailed devices versus a broad, potentially coarser\n"
  "acquisition process.\n\n"
  "@warning\n"
  "Some kernels, like the Voronoi kernel, cannot be subclasses of this\n"
  "class because their definition inherently defines the basis style.\n"
  "For example, the Voronoi kernel is simply the single closest point.\n"
  "SPH kernels are similar, because they implicitly depend on a particle\n"
  "distribution consistent with simulation constraints such as\n"
  "conservation of mass, etc.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkPointInterpolator2D vtkGaussianKernel\n"
  "vtkSPHKernel vtkShepardKernel vtkLinearKernel vtkVoronoiKernel\n\n";

static PyTypeObject PyvtkGeneralizedKernel_KernelStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkGeneralizedKernel.KernelStyle", // tp_name
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

PyObject *PyvtkGeneralizedKernel_KernelStyle_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkGeneralizedKernel_KernelStyle_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkGeneralizedKernel_KernelStyle_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkGeneralizedKernel_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeneralizedKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeneralizedKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeneralizedKernel *tempr = vtkGeneralizedKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeneralizedKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeneralizedKernel::NewInstance());

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
PyvtkGeneralizedKernel_ComputeBasis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBasis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkIdType temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeBasis(temp0, temp1, temp2) :
      op->vtkGeneralizedKernel::ComputeBasis(temp0, temp1, temp2));

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
PyvtkGeneralizedKernel_ComputeWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = op->ComputeWeights(temp0, temp1, temp2, temp3);

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
PyvtkGeneralizedKernel_ComputeWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkGeneralizedKernel::ComputeWeights(temp0, temp1, temp2));

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
PyvtkGeneralizedKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkGeneralizedKernel_ComputeWeights_s1(self, args);
    case 3:
      return PyvtkGeneralizedKernel_ComputeWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWeights");
  return nullptr;
}



static PyObject *
PyvtkGeneralizedKernel_SetKernelFootprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelFootprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKernelFootprint(temp0);
    }
    else
    {
      op->vtkGeneralizedKernel::SetKernelFootprint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetKernelFootprint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernelFootprint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetKernelFootprint() :
      op->vtkGeneralizedKernel::GetKernelFootprint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SetKernelFootprintToRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelFootprintToRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetKernelFootprintToRadius();
    }
    else
    {
      op->vtkGeneralizedKernel::SetKernelFootprintToRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SetKernelFootprintToNClosest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelFootprintToNClosest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetKernelFootprintToNClosest();
    }
    else
    {
      op->vtkGeneralizedKernel::SetKernelFootprintToNClosest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkGeneralizedKernel::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkGeneralizedKernel::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkGeneralizedKernel::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkGeneralizedKernel::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkGeneralizedKernel::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMinValue() :
      op->vtkGeneralizedKernel::GetNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsMaxValue() :
      op->vtkGeneralizedKernel::GetNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkGeneralizedKernel::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_SetNormalizeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeWeights(temp0);
    }
    else
    {
      op->vtkGeneralizedKernel::SetNormalizeWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_GetNormalizeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalizeWeights() :
      op->vtkGeneralizedKernel::GetNormalizeWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_NormalizeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeWeightsOn();
    }
    else
    {
      op->vtkGeneralizedKernel::NormalizeWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeneralizedKernel_NormalizeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeneralizedKernel *op = static_cast<vtkGeneralizedKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeWeightsOff();
    }
    else
    {
      op->vtkGeneralizedKernel::NormalizeWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeneralizedKernel_Methods[] = {
  {"IsTypeOf", PyvtkGeneralizedKernel_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for type and printing.\n"},
  {"IsA", PyvtkGeneralizedKernel_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for type and printing.\n"},
  {"SafeDownCast", PyvtkGeneralizedKernel_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGeneralizedKernel\nC++: static vtkGeneralizedKernel *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for type and printing.\n"},
  {"NewInstance", PyvtkGeneralizedKernel_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGeneralizedKernel\nC++: vtkGeneralizedKernel *NewInstance()\n\nStandard methods for type and printing.\n"},
  {"ComputeBasis", PyvtkGeneralizedKernel_ComputeBasis, METH_VARARGS,
   "V.ComputeBasis([float, float, float], vtkIdList, int) -> int\nC++: vtkIdType ComputeBasis(double x[3], vtkIdList *pIds,\n    vtkIdType ptId=0) override;\n\nBased on the kernel style, invoke the appropriate locator method\nto obtain the points making up the basis. Given a point x (and\noptional associated point id), determine the points around x\nwhich form an interpolation basis. The user must provide the\nvtkIdList pIds, which will be dynamically resized as necessary.\nThe method returns the number of points in the basis. Typically\nthis method is called before ComputeWeights(). Note that ptId is\noptional in most cases, although in some kernels it is used to\nfacilitate basis computation.\n"},
  {"ComputeWeights", PyvtkGeneralizedKernel_ComputeWeights, METH_VARARGS,
   "V.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray,\n     vtkDoubleArray) -> int\nC++: virtual vtkIdType ComputeWeights(double x[3],\n    vtkIdList *pIds, vtkDoubleArray *prob,\n    vtkDoubleArray *weights)\nV.ComputeWeights([float, float, float], vtkIdList, vtkDoubleArray)\n     -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, a list of basis points pIds, and a probability\nweighting function prob, compute interpolation weights associated\nwith these basis points.  Note that basis points list pIds, the\nprobability weighting prob, and the weights array are provided by\nthe caller of the method, and may be dynamically resized as\nnecessary. The method returns the number of weights (pIds may be\nresized in some cases). Typically this method is called after\nComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly. The probably weighting prob are numbers 0<=prob<=1\nwhich are multiplied against the interpolation weights before\nnormalization. They are estimates of local confidence of weights.\nThe prob may be nullptr in which all probabilities are considered\n=1.\n"},
  {"SetKernelFootprint", PyvtkGeneralizedKernel_SetKernelFootprint, METH_VARARGS,
   "V.SetKernelFootprint(int)\nC++: virtual void SetKernelFootprint(int _arg)\n\nSpecify the interpolation basis style. By default, a Radius style\nis used (i.e., the basis is defined from all points within a\nspecified radius). However, it is also possible to select the N\nclosest points (NClosest). Note that in most formulations the\nRadius style is assumed as it provides better mathematical\nproperties. However, for convenience some bases are easier to use\nwhen the N closest points are taken.\n"},
  {"GetKernelFootprint", PyvtkGeneralizedKernel_GetKernelFootprint, METH_VARARGS,
   "V.GetKernelFootprint() -> int\nC++: virtual int GetKernelFootprint()\n\nSpecify the interpolation basis style. By default, a Radius style\nis used (i.e., the basis is defined from all points within a\nspecified radius). However, it is also possible to select the N\nclosest points (NClosest). Note that in most formulations the\nRadius style is assumed as it provides better mathematical\nproperties. However, for convenience some bases are easier to use\nwhen the N closest points are taken.\n"},
  {"SetKernelFootprintToRadius", PyvtkGeneralizedKernel_SetKernelFootprintToRadius, METH_VARARGS,
   "V.SetKernelFootprintToRadius()\nC++: void SetKernelFootprintToRadius()\n\nSpecify the interpolation basis style. By default, a Radius style\nis used (i.e., the basis is defined from all points within a\nspecified radius). However, it is also possible to select the N\nclosest points (NClosest). Note that in most formulations the\nRadius style is assumed as it provides better mathematical\nproperties. However, for convenience some bases are easier to use\nwhen the N closest points are taken.\n"},
  {"SetKernelFootprintToNClosest", PyvtkGeneralizedKernel_SetKernelFootprintToNClosest, METH_VARARGS,
   "V.SetKernelFootprintToNClosest()\nC++: void SetKernelFootprintToNClosest()\n\nSpecify the interpolation basis style. By default, a Radius style\nis used (i.e., the basis is defined from all points within a\nspecified radius). However, it is also possible to select the N\nclosest points (NClosest). Note that in most formulations the\nRadius style is assumed as it provides better mathematical\nproperties. However, for convenience some bases are easier to use\nwhen the N closest points are taken.\n"},
  {"SetRadius", PyvtkGeneralizedKernel_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nIf the interpolation basis style is Radius, then this method\nspecifies the radius within which the basis points must lie.\n"},
  {"GetRadiusMinValue", PyvtkGeneralizedKernel_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nIf the interpolation basis style is Radius, then this method\nspecifies the radius within which the basis points must lie.\n"},
  {"GetRadiusMaxValue", PyvtkGeneralizedKernel_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nIf the interpolation basis style is Radius, then this method\nspecifies the radius within which the basis points must lie.\n"},
  {"GetRadius", PyvtkGeneralizedKernel_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nIf the interpolation basis style is Radius, then this method\nspecifies the radius within which the basis points must lie.\n"},
  {"SetNumberOfPoints", PyvtkGeneralizedKernel_SetNumberOfPoints, METH_VARARGS,
   "V.SetNumberOfPoints(int)\nC++: virtual void SetNumberOfPoints(int _arg)\n\nIf the interpolation basis style is NClosest, then this method\nspecifies the number of the closest points used to form the\ninterpolation basis.\n"},
  {"GetNumberOfPointsMinValue", PyvtkGeneralizedKernel_GetNumberOfPointsMinValue, METH_VARARGS,
   "V.GetNumberOfPointsMinValue() -> int\nC++: virtual int GetNumberOfPointsMinValue()\n\nIf the interpolation basis style is NClosest, then this method\nspecifies the number of the closest points used to form the\ninterpolation basis.\n"},
  {"GetNumberOfPointsMaxValue", PyvtkGeneralizedKernel_GetNumberOfPointsMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsMaxValue() -> int\nC++: virtual int GetNumberOfPointsMaxValue()\n\nIf the interpolation basis style is NClosest, then this method\nspecifies the number of the closest points used to form the\ninterpolation basis.\n"},
  {"GetNumberOfPoints", PyvtkGeneralizedKernel_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nIf the interpolation basis style is NClosest, then this method\nspecifies the number of the closest points used to form the\ninterpolation basis.\n"},
  {"SetNormalizeWeights", PyvtkGeneralizedKernel_SetNormalizeWeights, METH_VARARGS,
   "V.SetNormalizeWeights(bool)\nC++: virtual void SetNormalizeWeights(bool _arg)\n\nIndicate whether the interpolation weights should be normalized\nafter they are computed. Generally this is left on as it results\nin more reasonable behavior.\n"},
  {"GetNormalizeWeights", PyvtkGeneralizedKernel_GetNormalizeWeights, METH_VARARGS,
   "V.GetNormalizeWeights() -> bool\nC++: virtual bool GetNormalizeWeights()\n\nIndicate whether the interpolation weights should be normalized\nafter they are computed. Generally this is left on as it results\nin more reasonable behavior.\n"},
  {"NormalizeWeightsOn", PyvtkGeneralizedKernel_NormalizeWeightsOn, METH_VARARGS,
   "V.NormalizeWeightsOn()\nC++: virtual void NormalizeWeightsOn()\n\nIndicate whether the interpolation weights should be normalized\nafter they are computed. Generally this is left on as it results\nin more reasonable behavior.\n"},
  {"NormalizeWeightsOff", PyvtkGeneralizedKernel_NormalizeWeightsOff, METH_VARARGS,
   "V.NormalizeWeightsOff()\nC++: virtual void NormalizeWeightsOff()\n\nIndicate whether the interpolation weights should be normalized\nafter they are computed. Generally this is left on as it results\nin more reasonable behavior.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGeneralizedKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkGeneralizedKernel", // tp_name
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
  PyvtkGeneralizedKernel_Doc, // tp_doc
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

PyObject *PyvtkGeneralizedKernel_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGeneralizedKernel_Type, PyvtkGeneralizedKernel_Methods,
    "vtkGeneralizedKernel",
 nullptr);

  PyTypeObject *pytype = &PyvtkGeneralizedKernel_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkInterpolationKernel_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGeneralizedKernel_KernelStyle_Type);
  PyvtkGeneralizedKernel_KernelStyle_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkGeneralizedKernel_KernelStyle_Type);

  o = (PyObject *)&PyvtkGeneralizedKernel_KernelStyle_Type;
  if (PyDict_SetItemString(d, "KernelStyle", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkGeneralizedKernel::KernelStyle cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "RADIUS", vtkGeneralizedKernel::RADIUS },
        { "N_CLOSEST", vtkGeneralizedKernel::N_CLOSEST },
      };

    o = PyvtkGeneralizedKernel_KernelStyle_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeneralizedKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeneralizedKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeneralizedKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

