// python wrapper for vtkVoxelGrid
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
#include "vtkVoxelGrid.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoxelGrid(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVoxelGrid_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkVoxelGrid_Doc =
  "vtkVoxelGrid - subsample points using uniform binning\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVoxelGrid is a filter that subsamples a point cloud based on a\n"
  "regular binning of space. Basically the algorithm operates by\n"
  "dividing space into a volume of M x N x O bins, and then for each bin\n"
  "averaging all of the points positions into a single representative\n"
  "point. Several strategies for computing the binning can be used: 1)\n"
  "manual configuration of a requiring specifying bin dimensions (the\n"
  "bounds are calculated from the data); 2) by explicit specification of\n"
  "the bin size in world coordinates (x-y-z lengths); and 3) an\n"
  "automatic process in which the user specifies an approximate, average\n"
  "number of points per bin and dimensions and bin size are computed\n"
  "automatically. (Note that under the hood a vtkStaticPointLocator is\n"
  "used.)\n\n"
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
  "vtkStaticPointLocator vtkPointCloudFilter vtkQuadricClustering\n\n";

static PyTypeObject PyvtkVoxelGrid_Style_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkVoxelGrid.Style", // tp_name
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

PyObject *PyvtkVoxelGrid_Style_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkVoxelGrid_Style_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkVoxelGrid_Style_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkVoxelGrid_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoxelGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoxelGrid *tempr = vtkVoxelGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoxelGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelGrid::NewInstance());

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
PyvtkVoxelGrid_SetConfigurationStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyle(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetConfigurationStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConfigurationStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConfigurationStyle() :
      op->vtkVoxelGrid::GetConfigurationStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToManual();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToManual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToLeafSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToLeafSize();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToLeafSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToAutomatic();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToAutomatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelGrid::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelGrid_SetDivisions_s1(self, args);
    case 1:
      return PyvtkVoxelGrid_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}



static PyObject *
PyvtkVoxelGrid_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkVoxelGrid::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetLeafSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

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
      op->SetLeafSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelGrid::SetLeafSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetLeafSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLeafSize(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetLeafSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetLeafSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelGrid_SetLeafSize_s1(self, args);
    case 1:
      return PyvtkVoxelGrid_SetLeafSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLeafSize");
  return nullptr;
}



static PyObject *
PyvtkVoxelGrid_GetLeafSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLeafSize() :
      op->vtkVoxelGrid::GetLeafSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetNumberOfPointsPerBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerBin(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetNumberOfPointsPerBin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBinMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBinMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBinMinValue() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBinMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBinMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBinMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBinMaxValue() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBinMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBin() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  vtkInterpolationKernel *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInterpolationKernel"))
  {
    if (ap.IsBound())
    {
      op->SetKernel(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolationKernel *tempr = (ap.IsBound() ?
      op->GetKernel() :
      op->vtkVoxelGrid::GetKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoxelGrid_Methods[] = {
  {"IsTypeOf", PyvtkVoxelGrid_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkVoxelGrid_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkVoxelGrid_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVoxelGrid\nC++: static vtkVoxelGrid *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkVoxelGrid_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVoxelGrid\nC++: vtkVoxelGrid *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetConfigurationStyle", PyvtkVoxelGrid_SetConfigurationStyle, METH_VARARGS,
   "V.SetConfigurationStyle(int)\nC++: virtual void SetConfigurationStyle(int _arg)\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"GetConfigurationStyle", PyvtkVoxelGrid_GetConfigurationStyle, METH_VARARGS,
   "V.GetConfigurationStyle() -> int\nC++: virtual int GetConfigurationStyle()\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"SetConfigurationStyleToManual", PyvtkVoxelGrid_SetConfigurationStyleToManual, METH_VARARGS,
   "V.SetConfigurationStyleToManual()\nC++: void SetConfigurationStyleToManual()\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"SetConfigurationStyleToLeafSize", PyvtkVoxelGrid_SetConfigurationStyleToLeafSize, METH_VARARGS,
   "V.SetConfigurationStyleToLeafSize()\nC++: void SetConfigurationStyleToLeafSize()\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"SetConfigurationStyleToAutomatic", PyvtkVoxelGrid_SetConfigurationStyleToAutomatic, METH_VARARGS,
   "V.SetConfigurationStyleToAutomatic()\nC++: void SetConfigurationStyleToAutomatic()\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"SetDivisions", PyvtkVoxelGrid_SetDivisions, METH_VARARGS,
   "V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {"GetDivisions", PyvtkVoxelGrid_GetDivisions, METH_VARARGS,
   "V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of divisions in x-y-z directions (the binning\nvolume dimensions). This data member is used when the\nconfiguration style is set to MANUAL. Note that these values may\nbe adjusted if <1 or too large.\n"},
  {"SetLeafSize", PyvtkVoxelGrid_SetLeafSize, METH_VARARGS,
   "V.SetLeafSize(float, float, float)\nC++: void SetLeafSize(double, double, double)\nV.SetLeafSize((float, float, float))\nC++: void SetLeafSize(double a[3])\n\n"},
  {"GetLeafSize", PyvtkVoxelGrid_GetLeafSize, METH_VARARGS,
   "V.GetLeafSize() -> (float, float, float)\nC++: double *GetLeafSize()\n\nSet the bin size in the x-y-z directions. This data member is\nused when the configuration style is set to SPECIFY_LEAF_SIZE.\nThe class will use these x-y-z lengths, within the bounding box\nof the point cloud, to determine the binning dimensions.\n"},
  {"SetNumberOfPointsPerBin", PyvtkVoxelGrid_SetNumberOfPointsPerBin, METH_VARARGS,
   "V.SetNumberOfPointsPerBin(int)\nC++: virtual void SetNumberOfPointsPerBin(int _arg)\n\nSpecify the average number of points in each bin. Larger values\nresult in higher rates of subsampling. This data member is used\nwhen the configuration style is set to AUTOMATIC. The class will\nautomatically determine the binning dimensions in the x-y-z\ndirections.\n"},
  {"GetNumberOfPointsPerBinMinValue", PyvtkVoxelGrid_GetNumberOfPointsPerBinMinValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBinMinValue() -> int\nC++: virtual int GetNumberOfPointsPerBinMinValue()\n\nSpecify the average number of points in each bin. Larger values\nresult in higher rates of subsampling. This data member is used\nwhen the configuration style is set to AUTOMATIC. The class will\nautomatically determine the binning dimensions in the x-y-z\ndirections.\n"},
  {"GetNumberOfPointsPerBinMaxValue", PyvtkVoxelGrid_GetNumberOfPointsPerBinMaxValue, METH_VARARGS,
   "V.GetNumberOfPointsPerBinMaxValue() -> int\nC++: virtual int GetNumberOfPointsPerBinMaxValue()\n\nSpecify the average number of points in each bin. Larger values\nresult in higher rates of subsampling. This data member is used\nwhen the configuration style is set to AUTOMATIC. The class will\nautomatically determine the binning dimensions in the x-y-z\ndirections.\n"},
  {"GetNumberOfPointsPerBin", PyvtkVoxelGrid_GetNumberOfPointsPerBin, METH_VARARGS,
   "V.GetNumberOfPointsPerBin() -> int\nC++: virtual int GetNumberOfPointsPerBin()\n\nSpecify the average number of points in each bin. Larger values\nresult in higher rates of subsampling. This data member is used\nwhen the configuration style is set to AUTOMATIC. The class will\nautomatically determine the binning dimensions in the x-y-z\ndirections.\n"},
  {"SetKernel", PyvtkVoxelGrid_SetKernel, METH_VARARGS,
   "V.SetKernel(vtkInterpolationKernel)\nC++: void SetKernel(vtkInterpolationKernel *kernel)\n\nSpecify an interpolation kernel to combine the point attributes.\nBy default a vtkLinearKernel is used (i.e., average values). The\ninterpolation kernel changes the basis of the interpolation.\n"},
  {"GetKernel", PyvtkVoxelGrid_GetKernel, METH_VARARGS,
   "V.GetKernel() -> vtkInterpolationKernel\nC++: virtual vtkInterpolationKernel *GetKernel()\n\nSpecify an interpolation kernel to combine the point attributes.\nBy default a vtkLinearKernel is used (i.e., average values). The\ninterpolation kernel changes the basis of the interpolation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVoxelGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkVoxelGrid", // tp_name
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
  PyvtkVoxelGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoxelGrid_StaticNew()
{
  return vtkVoxelGrid::New();
}

PyObject *PyvtkVoxelGrid_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVoxelGrid_Type, PyvtkVoxelGrid_Methods,
    "vtkVoxelGrid",
 &PyvtkVoxelGrid_StaticNew);

  PyTypeObject *pytype = &PyvtkVoxelGrid_Type;

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

  PyType_Ready(&PyvtkVoxelGrid_Style_Type);
  PyvtkVoxelGrid_Style_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkVoxelGrid_Style_Type);

  o = (PyObject *)&PyvtkVoxelGrid_Style_Type;
  if (PyDict_SetItemString(d, "Style", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkVoxelGrid::Style cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MANUAL", vtkVoxelGrid::MANUAL },
        { "SPECIFY_LEAF_SIZE", vtkVoxelGrid::SPECIFY_LEAF_SIZE },
        { "AUTOMATIC", vtkVoxelGrid::AUTOMATIC },
      };

    o = PyvtkVoxelGrid_Style_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoxelGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoxelGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoxelGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

