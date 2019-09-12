// python wrapper for vtkSignedDistance
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
#include "vtkInformationVector.h"
#include "vtkSignedDistance.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSignedDistance(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSignedDistance_ClassNew(); }

#ifndef DECLARED_PyvtkImageAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageAlgorithm_ClassNew
#endif

static const char *PyvtkSignedDistance_Doc =
  "vtkSignedDistance - compute signed distances from an input point cloud\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkSignedDistance is a filter that computes signed distances over a\n"
  "volume from an input point cloud. The input point cloud must have\n"
  "point normals defined, as well as an optional weighting function\n"
  "(e.g., probabilities that the point measurements are accurate). Once\n"
  "the signed distance function is computed, then the output volume may\n"
  "be isocontoured to with vtkExtractSurface to extract a approximating\n"
  "surface to the point cloud.\n\n"
  "To use this filter, specify the input vtkPolyData (which represents\n"
  "the point cloud); define the sampling volume; specify a radius (which\n"
  "limits the radius of influence of each point); and set an optional\n"
  "point locator (to accelerate proximity operations, a\n"
  "vtkStaticPointLocator is used by default). Note that large radius\n"
  "values may have significant impact on performance. The volume is\n"
  "defined by specifying dimensions in the x-y-z directions, as well as\n"
  "a domain bounds. By default the model bounds are defined from the\n"
  "input points, but the user can also manually specify them.\n\n"
  "This filter has one other unusual capability: it is possible to\n"
  "append data in a sequence of operations to generate a single output.\n"
  "This is useful when you have multiple point clouds (e.g., possibly\n"
  "from multiple acqusition scans) and want to incrementally accumulate\n"
  "all the data. However, the user must be careful to either specify the\n"
  "Bounds or order the input such that the bounds of the first input\n"
  "completely contains all other input data.  This is because the\n"
  "geometry and topology of the output sampling volume cannot be changed\n"
  "after the initial Append operation.\n\n"
  "This algorithm loosely follows the most excellent paper by Curless\n"
  "and Levoy: \"A Volumetric Method for Building Complex Models from\n"
  "Range Images.\" As described in this paper it may produce a signed\n"
  "distance volume that may contain the three data states for each\n"
  "voxel: near surface, empty, or unseen (see vtkExtractSurface for\n"
  "additional information). Note in this implementation the initial\n"
  "values of the volume are set to < this->Radius. This indicates that\n"
  "these voxels are \"empty\". Of course voxels with value -this->Radius\n"
  "<= d <= this->Radius are \"near\" the surface. (Voxels with values >\n"
  "this->Radius are \"unseen\" -- this filter does not produce such\n"
  "values.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "Empty voxel values are set to -this->Radius.\n\n"
  "@sa\n"
  "vtkExtractSurface vtkImplicitModeller\n\n";


static PyObject *
PyvtkSignedDistance_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSignedDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSignedDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSignedDistance *tempr = vtkSignedDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSignedDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSignedDistance::NewInstance());

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
PyvtkSignedDistance_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkSignedDistance::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

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
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSignedDistance::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSignedDistance_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkSignedDistance::SetDimensions(temp0);
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
PyvtkSignedDistance_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSignedDistance_SetDimensions_s1(self, args);
    case 1:
      return PyvtkSignedDistance_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}



static PyObject *
PyvtkSignedDistance_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSignedDistance::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSignedDistance_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkSignedDistance::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSignedDistance_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkSignedDistance_SetBounds_s1(self, args);
    case 1:
      return PyvtkSignedDistance_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkSignedDistance_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSignedDistance::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

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
      op->vtkSignedDistance::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkSignedDistance::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkSignedDistance::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSignedDistance::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

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
      op->vtkSignedDistance::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkSignedDistance::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_StartAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartAppend();
    }
    else
    {
      op->vtkSignedDistance::StartAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0);
    }
    else
    {
      op->vtkSignedDistance::Append(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSignedDistance_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSignedDistance *op = static_cast<vtkSignedDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndAppend();
    }
    else
    {
      op->vtkSignedDistance::EndAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSignedDistance_Methods[] = {
  {"IsTypeOf", PyvtkSignedDistance_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"IsA", PyvtkSignedDistance_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"SafeDownCast", PyvtkSignedDistance_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSignedDistance\nC++: static vtkSignedDistance *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"NewInstance", PyvtkSignedDistance_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSignedDistance\nC++: vtkSignedDistance *NewInstance()\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"GetDimensions", PyvtkSignedDistance_GetDimensions, METH_VARARGS,
   "V.GetDimensions() -> (int, int, int)\nC++: int *GetDimensions()\n\nSet/Get the i-j-k dimensions on which to computer the distance\nfunction.\n"},
  {"SetDimensions", PyvtkSignedDistance_SetDimensions, METH_VARARGS,
   "V.SetDimensions(int, int, int)\nC++: void SetDimensions(int i, int j, int k)\nV.SetDimensions([int, int, int])\nC++: void SetDimensions(int dim[3])\n\nSet/Get the i-j-k dimensions on which to computer the distance\nfunction.\n"},
  {"SetBounds", PyvtkSignedDistance_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkSignedDistance_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSet / get the region in space in which to perform the sampling.\nIf not specified, it will be computed automatically.\n"},
  {"SetRadius", PyvtkSignedDistance_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly. Note that after the\nsigned distance function is computed, any voxel taking on the\nvalue >= Radius is presumed to be \"unseen\" or uninitialized.\n"},
  {"GetRadiusMinValue", PyvtkSignedDistance_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly. Note that after the\nsigned distance function is computed, any voxel taking on the\nvalue >= Radius is presumed to be \"unseen\" or uninitialized.\n"},
  {"GetRadiusMaxValue", PyvtkSignedDistance_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly. Note that after the\nsigned distance function is computed, any voxel taking on the\nvalue >= Radius is presumed to be \"unseen\" or uninitialized.\n"},
  {"GetRadius", PyvtkSignedDistance_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSet / get the radius of influence of each point. Smaller values\ngenerally improve performance markedly. Note that after the\nsigned distance function is computed, any voxel taking on the\nvalue >= Radius is presumed to be \"unseen\" or uninitialized.\n"},
  {"SetLocator", PyvtkSignedDistance_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkAbstractPointLocator)\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\nsurrounding a voxel (within the specified radius).\n"},
  {"GetLocator", PyvtkSignedDistance_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\nsurrounding a voxel (within the specified radius).\n"},
  {"StartAppend", PyvtkSignedDistance_StartAppend, METH_VARARGS,
   "V.StartAppend()\nC++: void StartAppend()\n\nInitialize the filter for appending data. You must invoke the\nStartAppend() method before doing successive Appends(). It's also\na good idea to manually specify the model bounds; otherwise the\ninput bounds for the data will be used.\n"},
  {"Append", PyvtkSignedDistance_Append, METH_VARARGS,
   "V.Append(vtkPolyData)\nC++: void Append(vtkPolyData *input)\n\nAppend a data set to the existing output. To use this function,\nyou'll have to invoke the StartAppend() method before doing\nsuccessive appends. It's also a good idea to specify the model\nbounds; otherwise the input model bounds is used. When you've\nfinished appending, use the EndAppend() method.\n"},
  {"EndAppend", PyvtkSignedDistance_EndAppend, METH_VARARGS,
   "V.EndAppend()\nC++: void EndAppend()\n\nMethod completes the append process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSignedDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkSignedDistance", // tp_name
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
  PyvtkSignedDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSignedDistance_StaticNew()
{
  return vtkSignedDistance::New();
}

PyObject *PyvtkSignedDistance_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSignedDistance_Type, PyvtkSignedDistance_Methods,
    "vtkSignedDistance",
 &PyvtkSignedDistance_StaticNew);

  PyTypeObject *pytype = &PyvtkSignedDistance_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkImageAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSignedDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSignedDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSignedDistance", o) != 0)
  {
    Py_DECREF(o);
  }

}

