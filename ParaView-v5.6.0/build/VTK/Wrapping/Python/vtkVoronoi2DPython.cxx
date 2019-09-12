// python wrapper for vtkVoronoi2D
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
#include "vtkVoronoi2D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoronoi2D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkVoronoi2D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkVoronoi2D_Doc =
  "vtkVoronoi2D - create 2D Voronoi convex tiling of input points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVoronoi2D is a filter that constructs a 2D Voronoi tessellation of\n"
  "a list of input points. The points are assumed to lie in a plane.\n"
  "These points may be represented by any dataset of type vtkPointSet\n"
  "and subclasses. The output of the filter is a polygonal dataset. Each\n"
  "output cell is a convex polygon.\n\n"
  "The 2D Voronoi tessellation is a tiling of space, where each Voronoi\n"
  "tile represents the region nearest to one of the input points.\n"
  "Voronoi tessellations are important in computational geometry (and\n"
  "many other fields), and are the dual of Delaunay triangulations.\n\n"
  "The input to this filter is a list of points specified in 3D, even\n"
  "though the triangulation is 2D. Thus the triangulation is constructed\n"
  "in the x-y plane, and the z coordinate is ignored (although carried\n"
  "through to the output). If you desire to triangulate in a different\n"
  "plane, you can use the vtkTransformFilter to transform the points\n"
  "into and out of the x-y plane or you can specify a transform to\n"
  "vtkVoronoi2D directly.  In the latter case, the input points are\n"
  "transformed, the transformed points are triangulated, and the output\n"
  "will use the triangulated topology for the original (non-transformed)\n"
  "points.  This avoids transforming the data back as would be required\n"
  "when using the vtkTransformFilter method.  Specifying a transform\n"
  "directly also allows any transform to be used: rigid, non-rigid,\n"
  "non-invertible, etc.\n\n"
  "This filter is a reference implementation written with simplicity in\n"
  "mind. Additional methods are available for debugging / instructional\n"
  "purposes. This includes producing a single tile under various stages\n"
  "of creation, as well as the Voronoi flower, related to the error\n"
  "metric for point insertion / half-space clipping.\n\n"
  "Publications are in preparation to describe the algorithm. A brief\n"
  "summary is as follows. In parallel, each (generating) input point is\n"
  "associated with an initial Voronoi tile, which is simply the bounding\n"
  "box of the point set. A locator is then used to identify nearby\n"
  "points: each neighbor in turn generates a clipping line positioned\n"
  "halfway between the generating point and the neigboring point, and\n"
  "orthogonal to the line connecting them. Clips are readily performed\n"
  "by evaluationg the vertices of the convex Voronoi tile as being on\n"
  "either side (inside,outside) of the clip line. If two intersections\n"
  "of the Voronoi tile are found, the portion of the tile \"outside\" the\n"
  "clip line is discarded, resulting in a new convex, Voronoi tile. As\n"
  "each clip occurs, the Voronoi \"Flower\" error metric (the union of\n"
  "error spheres) is compared to the extent of the region containing the\n"
  "neighboring clip points. The clip region (along with the points\n"
  "contained in it) is grown by careful expansion (e.g., outward\n"
  "spiraling iterator over all candidate clip points). When the Voronoi\n"
  "Flower is contained within the clip region, the algorithm terminates\n"
  "and the Voronoi tile is output. Once complete, it is possible to\n"
  "construct the Delaunay triangulation from the Voronoi tessellation.\n"
  "Note that topological and geometric information is used to generate a\n"
  "valid triangulation (e.g., merging points and validating topology).\n\n"
  "@warning\n"
  "Coincident input points will result in overlapping tiles.  This is\n"
  "because the Voronoi tessellation requires unique input points.\n\n"
  "@warning\n"
  "This is a novel approach which implements an embarrasingly parallel\n"
  "algorithm. At the core of the algorithm a locator is used to\n"
  "determine points close to a specified position. A\n"
  "vtkStaticPointLocator2D is used because it is both threaded (when\n"
  "constructed) and supports thread-safe queries. While other locators\n"
  "could be used in principal, they must support thread-safe operations.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkDelaunay2D vtkTransformFilter vtkStaticPointLocator2D\n\n";

static PyTypeObject PyvtkVoronoi2D_GenerateScalarsStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkVoronoi2D.GenerateScalarsStrategy", // tp_name
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

PyObject *PyvtkVoronoi2D_GenerateScalarsStrategy_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkVoronoi2D_GenerateScalarsStrategy_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkVoronoi2D_GenerateScalarsStrategy_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}

static PyTypeObject PyvtkVoronoi2D_ProjectionPlaneStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkVoronoi2D.ProjectionPlaneStrategy", // tp_name
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

PyObject *PyvtkVoronoi2D_ProjectionPlaneStrategy_FromEnum(int val)
{
#ifdef VTK_PY3K
  PyObject *args = Py_BuildValue("(i)", val);
  PyObject *obj = PyLong_Type.tp_new(&PyvtkVoronoi2D_ProjectionPlaneStrategy_Type, args, nullptr);
  Py_DECREF(args);
  return obj;
#else
  PyIntObject *self = PyObject_New(PyIntObject,
    &PyvtkVoronoi2D_ProjectionPlaneStrategy_Type);
  self->ob_ival = val;
  return (PyObject *)self;
#endif
}


static PyObject *
PyvtkVoronoi2D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoronoi2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoronoi2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoronoi2D *tempr = vtkVoronoi2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoronoi2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoronoi2D::NewInstance());

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
PyvtkVoronoi2D_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkVoronoi2D::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkVoronoi2D::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkVoronoi2D::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalars(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetGenerateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateScalars() :
      op->vtkVoronoi2D::GetGenerateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetGenerateScalarsToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalarsToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalarsToNone();
    }
    else
    {
      op->vtkVoronoi2D::SetGenerateScalarsToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetGenerateScalarsToPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalarsToPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalarsToPointIds();
    }
    else
    {
      op->vtkVoronoi2D::SetGenerateScalarsToPointIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetGenerateScalarsToThreadIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalarsToThreadIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalarsToThreadIds();
    }
    else
    {
      op->vtkVoronoi2D::SetGenerateScalarsToThreadIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkVoronoi2D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPlaneMode(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetProjectionPlaneMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetProjectionPlaneModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMinValue() :
      op->vtkVoronoi2D::GetProjectionPlaneModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetProjectionPlaneModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneModeMaxValue() :
      op->vtkVoronoi2D::GetProjectionPlaneModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetProjectionPlaneMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPlaneMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionPlaneMode() :
      op->vtkVoronoi2D::GetProjectionPlaneMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetProjectionPlaneModeToXYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneModeToXYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPlaneModeToXYPlane();
    }
    else
    {
      op->vtkVoronoi2D::SetProjectionPlaneModeToXYPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetProjectionPlaneModeToSpecifiedTransformPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneModeToSpecifiedTransformPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPlaneModeToSpecifiedTransformPlane();
    }
    else
    {
      op->vtkVoronoi2D::SetProjectionPlaneModeToSpecifiedTransformPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetProjectionPlaneModeToBestFittingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPlaneModeToBestFittingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPlaneModeToBestFittingPlane();
    }
    else
    {
      op->vtkVoronoi2D::SetProjectionPlaneModeToBestFittingPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetPointOfInterest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointOfInterest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointOfInterest(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetPointOfInterest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPointOfInterestMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOfInterestMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointOfInterestMinValue() :
      op->vtkVoronoi2D::GetPointOfInterestMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPointOfInterestMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOfInterestMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointOfInterestMaxValue() :
      op->vtkVoronoi2D::GetPointOfInterestMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetPointOfInterest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOfInterest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointOfInterest() :
      op->vtkVoronoi2D::GetPointOfInterest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetMaximumNumberOfTileClips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfTileClips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfTileClips(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetMaximumNumberOfTileClips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetMaximumNumberOfTileClipsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTileClipsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTileClipsMinValue() :
      op->vtkVoronoi2D::GetMaximumNumberOfTileClipsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetMaximumNumberOfTileClipsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTileClipsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTileClipsMaxValue() :
      op->vtkVoronoi2D::GetMaximumNumberOfTileClipsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetMaximumNumberOfTileClips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTileClips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTileClips() :
      op->vtkVoronoi2D::GetMaximumNumberOfTileClips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator2D *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkVoronoi2D::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_SetGenerateVoronoiFlower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVoronoiFlower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVoronoiFlower(temp0);
    }
    else
    {
      op->vtkVoronoi2D::SetGenerateVoronoiFlower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetGenerateVoronoiFlower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVoronoiFlower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVoronoiFlower() :
      op->vtkVoronoi2D::GetGenerateVoronoiFlower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GenerateVoronoiFlowerOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVoronoiFlowerOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVoronoiFlowerOn();
    }
    else
    {
      op->vtkVoronoi2D::GenerateVoronoiFlowerOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GenerateVoronoiFlowerOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVoronoiFlowerOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVoronoiFlowerOff();
    }
    else
    {
      op->vtkVoronoi2D::GenerateVoronoiFlowerOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpheres *tempr = (ap.IsBound() ?
      op->GetSpheres() :
      op->vtkVoronoi2D::GetSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetNumberOfThreadsUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsUsed() :
      op->vtkVoronoi2D::GetNumberOfThreadsUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoronoi2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoronoi2D *op = static_cast<vtkVoronoi2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkVoronoi2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoronoi2D_Methods[] = {
  {"IsTypeOf", PyvtkVoronoi2D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"IsA", PyvtkVoronoi2D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SafeDownCast", PyvtkVoronoi2D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkVoronoi2D\nC++: static vtkVoronoi2D *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"NewInstance", PyvtkVoronoi2D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkVoronoi2D\nC++: vtkVoronoi2D *NewInstance()\n\nStandard methods for instantiation, type information, and\nprinting.\n"},
  {"SetPadding", PyvtkVoronoi2D_SetPadding, METH_VARARGS,
   "V.SetPadding(float)\nC++: virtual void SetPadding(double _arg)\n\nSpecify a padding for the bounding box of the points. A >0\npadding is necessary in order to create valid Voronoi tiles on\nthe boundary of the tessellation. The padding is specified as a\nfraction of the diagonal length of the bounding box of the\npoints.\n"},
  {"GetPaddingMinValue", PyvtkVoronoi2D_GetPaddingMinValue, METH_VARARGS,
   "V.GetPaddingMinValue() -> float\nC++: virtual double GetPaddingMinValue()\n\nSpecify a padding for the bounding box of the points. A >0\npadding is necessary in order to create valid Voronoi tiles on\nthe boundary of the tessellation. The padding is specified as a\nfraction of the diagonal length of the bounding box of the\npoints.\n"},
  {"GetPaddingMaxValue", PyvtkVoronoi2D_GetPaddingMaxValue, METH_VARARGS,
   "V.GetPaddingMaxValue() -> float\nC++: virtual double GetPaddingMaxValue()\n\nSpecify a padding for the bounding box of the points. A >0\npadding is necessary in order to create valid Voronoi tiles on\nthe boundary of the tessellation. The padding is specified as a\nfraction of the diagonal length of the bounding box of the\npoints.\n"},
  {"GetPadding", PyvtkVoronoi2D_GetPadding, METH_VARARGS,
   "V.GetPadding() -> float\nC++: virtual double GetPadding()\n\nSpecify a padding for the bounding box of the points. A >0\npadding is necessary in order to create valid Voronoi tiles on\nthe boundary of the tessellation. The padding is specified as a\nfraction of the diagonal length of the bounding box of the\npoints.\n"},
  {"SetGenerateScalars", PyvtkVoronoi2D_SetGenerateScalars, METH_VARARGS,
   "V.SetGenerateScalars(int)\nC++: virtual void SetGenerateScalars(int _arg)\n\nIndicate whether to create a scalar array as part of the output.\nNo scalars; point ids, or execution thread ids may be output. By\ndefault no scalars are generated.\n"},
  {"GetGenerateScalars", PyvtkVoronoi2D_GetGenerateScalars, METH_VARARGS,
   "V.GetGenerateScalars() -> int\nC++: virtual int GetGenerateScalars()\n\nIndicate whether to create a scalar array as part of the output.\nNo scalars; point ids, or execution thread ids may be output. By\ndefault no scalars are generated.\n"},
  {"SetGenerateScalarsToNone", PyvtkVoronoi2D_SetGenerateScalarsToNone, METH_VARARGS,
   "V.SetGenerateScalarsToNone()\nC++: void SetGenerateScalarsToNone()\n\nIndicate whether to create a scalar array as part of the output.\nNo scalars; point ids, or execution thread ids may be output. By\ndefault no scalars are generated.\n"},
  {"SetGenerateScalarsToPointIds", PyvtkVoronoi2D_SetGenerateScalarsToPointIds, METH_VARARGS,
   "V.SetGenerateScalarsToPointIds()\nC++: void SetGenerateScalarsToPointIds()\n\nIndicate whether to create a scalar array as part of the output.\nNo scalars; point ids, or execution thread ids may be output. By\ndefault no scalars are generated.\n"},
  {"SetGenerateScalarsToThreadIds", PyvtkVoronoi2D_SetGenerateScalarsToThreadIds, METH_VARARGS,
   "V.SetGenerateScalarsToThreadIds()\nC++: void SetGenerateScalarsToThreadIds()\n\nIndicate whether to create a scalar array as part of the output.\nNo scalars; point ids, or execution thread ids may be output. By\ndefault no scalars are generated.\n"},
  {"SetTransform", PyvtkVoronoi2D_SetTransform, METH_VARARGS,
   "V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *)\n\nSet / get the transform which is applied to points to generate a\n2D problem.  This maps a 3D dataset into a 2D dataset where\ntriangulation can be done on the XY plane.  The points are then\ntessellated and the topology of tessellation are used as the\noutput topology.  The output points are the original\n(untransformed) points.  The transform can be any subclass of\nvtkAbstractTransform (thus it does not need to be a linear or\ninvertible transform).\n"},
  {"GetTransform", PyvtkVoronoi2D_GetTransform, METH_VARARGS,
   "V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nSet / get the transform which is applied to points to generate a\n2D problem.  This maps a 3D dataset into a 2D dataset where\ntriangulation can be done on the XY plane.  The points are then\ntessellated and the topology of tessellation are used as the\noutput topology.  The output points are the original\n(untransformed) points.  The transform can be any subclass of\nvtkAbstractTransform (thus it does not need to be a linear or\ninvertible transform).\n"},
  {"SetProjectionPlaneMode", PyvtkVoronoi2D_SetProjectionPlaneMode, METH_VARARGS,
   "V.SetProjectionPlaneMode(int)\nC++: virtual void SetProjectionPlaneMode(int _arg)\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"GetProjectionPlaneModeMinValue", PyvtkVoronoi2D_GetProjectionPlaneModeMinValue, METH_VARARGS,
   "V.GetProjectionPlaneModeMinValue() -> int\nC++: virtual int GetProjectionPlaneModeMinValue()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"GetProjectionPlaneModeMaxValue", PyvtkVoronoi2D_GetProjectionPlaneModeMaxValue, METH_VARARGS,
   "V.GetProjectionPlaneModeMaxValue() -> int\nC++: virtual int GetProjectionPlaneModeMaxValue()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"GetProjectionPlaneMode", PyvtkVoronoi2D_GetProjectionPlaneMode, METH_VARARGS,
   "V.GetProjectionPlaneMode() -> int\nC++: virtual int GetProjectionPlaneMode()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"SetProjectionPlaneModeToXYPlane", PyvtkVoronoi2D_SetProjectionPlaneModeToXYPlane, METH_VARARGS,
   "V.SetProjectionPlaneModeToXYPlane()\nC++: void SetProjectionPlaneModeToXYPlane()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"SetProjectionPlaneModeToSpecifiedTransformPlane", PyvtkVoronoi2D_SetProjectionPlaneModeToSpecifiedTransformPlane, METH_VARARGS,
   "V.SetProjectionPlaneModeToSpecifiedTransformPlane()\nC++: void SetProjectionPlaneModeToSpecifiedTransformPlane()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"SetProjectionPlaneModeToBestFittingPlane", PyvtkVoronoi2D_SetProjectionPlaneModeToBestFittingPlane, METH_VARARGS,
   "V.SetProjectionPlaneModeToBestFittingPlane()\nC++: void SetProjectionPlaneModeToBestFittingPlane()\n\nDefine the method to project the input 3D points into a 2D plane\nfor tessellation. When the VTK_XY_PLANE is set, the z-coordinate\nis simply ignored. When VTK_SET_TRANSFORM_PLANE is set, then a\ntransform must be supplied and the points are transformed using\nit. Finally, if VTK_BEST_FITTING_PLANE is set, then the filter\ncomputes a best fitting plane and projects the points onto it.\n"},
  {"SetPointOfInterest", PyvtkVoronoi2D_SetPointOfInterest, METH_VARARGS,
   "V.SetPointOfInterest(int)\nC++: virtual void SetPointOfInterest(vtkIdType _arg)\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetPointOfInterestMinValue", PyvtkVoronoi2D_GetPointOfInterestMinValue, METH_VARARGS,
   "V.GetPointOfInterestMinValue() -> int\nC++: virtual vtkIdType GetPointOfInterestMinValue()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetPointOfInterestMaxValue", PyvtkVoronoi2D_GetPointOfInterestMaxValue, METH_VARARGS,
   "V.GetPointOfInterestMaxValue() -> int\nC++: virtual vtkIdType GetPointOfInterestMaxValue()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetPointOfInterest", PyvtkVoronoi2D_GetPointOfInterest, METH_VARARGS,
   "V.GetPointOfInterest() -> int\nC++: virtual vtkIdType GetPointOfInterest()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"SetMaximumNumberOfTileClips", PyvtkVoronoi2D_SetMaximumNumberOfTileClips, METH_VARARGS,
   "V.SetMaximumNumberOfTileClips(int)\nC++: virtual void SetMaximumNumberOfTileClips(vtkIdType _arg)\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetMaximumNumberOfTileClipsMinValue", PyvtkVoronoi2D_GetMaximumNumberOfTileClipsMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfTileClipsMinValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTileClipsMinValue()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetMaximumNumberOfTileClipsMaxValue", PyvtkVoronoi2D_GetMaximumNumberOfTileClipsMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfTileClipsMaxValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTileClipsMaxValue()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetMaximumNumberOfTileClips", PyvtkVoronoi2D_GetMaximumNumberOfTileClips, METH_VARARGS,
   "V.GetMaximumNumberOfTileClips() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTileClips()\n\nThese methods are for debugging or instructional purposes. When\nthe point of interest is specified (i.e., to a non-negative\nnumber) then the algorithm will only process this single point\n(whose id is the PointOfInterest). The maximum number of clips\n(the MaximumNumberOfTileClips) can be specified. If\nMaximumNumberOfTileClips=0, then the initial tile (single point\nwithin the bounding box) is produced; if =1 then the split with\nthe closest point is produced; and so on. By default the\nPointOfInterest is set to (-1), and the number of clips is\nunlimited (i.e., MaximumNumberOfTileClips=VTK_ID_MAX and\ntherefore automatically limited by the algorithm).\n"},
  {"GetLocator", PyvtkVoronoi2D_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkStaticPointLocator2D\nC++: vtkStaticPointLocator2D *GetLocator()\n\nRetrieve the internal locator to manually configure it, for\nexample specifying the number of points per bucket. This method\nis generally used for debugging or testing purposes.\n"},
  {"SetGenerateVoronoiFlower", PyvtkVoronoi2D_SetGenerateVoronoiFlower, METH_VARARGS,
   "V.SetGenerateVoronoiFlower(int)\nC++: virtual void SetGenerateVoronoiFlower(vtkTypeBool _arg)\n\nThese methods are for debugging or instructional purposes. If\nGenerateVoronoiFlower is on, and the PointOfIntersect is\nspecified, then second and third (optional) outputs are populated\nwhich contains a representation of the Voronoi flower error\nmetric (second output) and the single Voronoi tile (corresponding\nto PointOfInterest) with point scalar values indicating the radii\nof the Voronoi Flower petals (i.e., circles contributing to the\nerror metric).\n"},
  {"GetGenerateVoronoiFlower", PyvtkVoronoi2D_GetGenerateVoronoiFlower, METH_VARARGS,
   "V.GetGenerateVoronoiFlower() -> int\nC++: virtual vtkTypeBool GetGenerateVoronoiFlower()\n\nThese methods are for debugging or instructional purposes. If\nGenerateVoronoiFlower is on, and the PointOfIntersect is\nspecified, then second and third (optional) outputs are populated\nwhich contains a representation of the Voronoi flower error\nmetric (second output) and the single Voronoi tile (corresponding\nto PointOfInterest) with point scalar values indicating the radii\nof the Voronoi Flower petals (i.e., circles contributing to the\nerror metric).\n"},
  {"GenerateVoronoiFlowerOn", PyvtkVoronoi2D_GenerateVoronoiFlowerOn, METH_VARARGS,
   "V.GenerateVoronoiFlowerOn()\nC++: virtual void GenerateVoronoiFlowerOn()\n\nThese methods are for debugging or instructional purposes. If\nGenerateVoronoiFlower is on, and the PointOfIntersect is\nspecified, then second and third (optional) outputs are populated\nwhich contains a representation of the Voronoi flower error\nmetric (second output) and the single Voronoi tile (corresponding\nto PointOfInterest) with point scalar values indicating the radii\nof the Voronoi Flower petals (i.e., circles contributing to the\nerror metric).\n"},
  {"GenerateVoronoiFlowerOff", PyvtkVoronoi2D_GenerateVoronoiFlowerOff, METH_VARARGS,
   "V.GenerateVoronoiFlowerOff()\nC++: virtual void GenerateVoronoiFlowerOff()\n\nThese methods are for debugging or instructional purposes. If\nGenerateVoronoiFlower is on, and the PointOfIntersect is\nspecified, then second and third (optional) outputs are populated\nwhich contains a representation of the Voronoi flower error\nmetric (second output) and the single Voronoi tile (corresponding\nto PointOfInterest) with point scalar values indicating the radii\nof the Voronoi Flower petals (i.e., circles contributing to the\nerror metric).\n"},
  {"GetSpheres", PyvtkVoronoi2D_GetSpheres, METH_VARARGS,
   "V.GetSpheres() -> vtkSpheres\nC++: virtual vtkSpheres *GetSpheres()\n\nReturn the Voronoi flower (a collection of spheres) for the point\nof interest in the form of a vtkSpheres implicit function. This\nis valid only if GenerateVoronoiFlower and the PointOfInterest\nare set, and after the filter executes. Typically this is used\nfor debugging or educational purposes.\n"},
  {"GetNumberOfThreadsUsed", PyvtkVoronoi2D_GetNumberOfThreadsUsed, METH_VARARGS,
   "V.GetNumberOfThreadsUsed() -> int\nC++: int GetNumberOfThreadsUsed()\n\nReturn the number of threads actually used during execution. This\nis valid only after algorithm execution.\n"},
  {"GetMTime", PyvtkVoronoi2D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkVoronoi2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkVoronoi2D", // tp_name
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
  PyvtkVoronoi2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoronoi2D_StaticNew()
{
  return vtkVoronoi2D::New();
}

PyObject *PyvtkVoronoi2D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkVoronoi2D_Type, PyvtkVoronoi2D_Methods,
    "vtkVoronoi2D",
 &PyvtkVoronoi2D_StaticNew);

  PyTypeObject *pytype = &PyvtkVoronoi2D_Type;

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

  PyType_Ready(&PyvtkVoronoi2D_GenerateScalarsStrategy_Type);
  PyvtkVoronoi2D_GenerateScalarsStrategy_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkVoronoi2D_GenerateScalarsStrategy_Type);

  o = (PyObject *)&PyvtkVoronoi2D_GenerateScalarsStrategy_Type;
  if (PyDict_SetItemString(d, "GenerateScalarsStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkVoronoi2D_ProjectionPlaneStrategy_Type);
  PyvtkVoronoi2D_ProjectionPlaneStrategy_Type.tp_new = nullptr;
  vtkPythonUtil::AddEnumToMap(&PyvtkVoronoi2D_ProjectionPlaneStrategy_Type);

  o = (PyObject *)&PyvtkVoronoi2D_ProjectionPlaneStrategy_Type;
  if (PyDict_SetItemString(d, "ProjectionPlaneStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkVoronoi2D::GenerateScalarsStrategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "NONE", vtkVoronoi2D::NONE },
        { "POINT_IDS", vtkVoronoi2D::POINT_IDS },
        { "THREAD_IDS", vtkVoronoi2D::THREAD_IDS },
      };

    o = PyvtkVoronoi2D_GenerateScalarsStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkVoronoi2D::ProjectionPlaneStrategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "XY_PLANE", vtkVoronoi2D::XY_PLANE },
        { "SPECIFIED_TRANSFORM_PLANE", vtkVoronoi2D::SPECIFIED_TRANSFORM_PLANE },
        { "BEST_FITTING_PLANE", vtkVoronoi2D::BEST_FITTING_PLANE },
      };

    o = PyvtkVoronoi2D_ProjectionPlaneStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoronoi2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoronoi2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoronoi2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

