// python wrapper for vtkWindowedSincPolyDataFilter
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
#include "vtkWindowedSincPolyDataFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindowedSincPolyDataFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkWindowedSincPolyDataFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkWindowedSincPolyDataFilter_Doc =
  "vtkWindowedSincPolyDataFilter - adjust point positions using a\nwindowed sinc function interpolation kernel\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkWindowedSincPolyDataFiler adjust point coordinate using a windowed\n"
  "sinc function interpolation kernel.  The effect is to \"relax\" the\n"
  "mesh, making the cells better shaped and the vertices more evenly\n"
  "distributed. Note that this filter operates the lines, polygons, and\n"
  "triangle strips composing an instance of vtkPolyData.  Vertex or\n"
  "poly-vertex cells are never modified.\n\n"
  "The algorithm proceeds as follows. For each vertex v, a topological\n"
  "and geometric analysis is performed to determine which vertices are\n"
  "connected to v, and which cells are connected to v. Then, a\n"
  "connectivity array is constructed for each vertex. (The connectivity\n"
  "array is a list of lists of vertices that directly attach to each\n"
  "vertex.) Next, an iteration phase begins over all vertices. For each\n"
  "vertex v, the coordinates of v are modified using a windowed sinc\n"
  "function interpolation kernel. Taubin describes this methodology is\n"
  "the IBM tech report RC-20404 (#90237, dated 3/12/96) \"Optimal Surface Smoothing as Filter\n"
  "Design\" G. Taubin, T. Zhang and G. Golub. (Zhang and Golub are at\n"
  "Stanford University).\n\n"
  "This report discusses using standard signal processing low-pass\n"
  "filters (in particular windowed sinc functions) to smooth polyhedra.\n"
  "The transfer functions of the low-pass filters are approximated by\n"
  "Chebyshev polynomials. This facilitates applying the filters in an\n"
  "iterative diffusion process (as opposed to a kernel convolution). \n"
  "The more smoothing iterations applied, the higher the degree of\n"
  "polynomial approximating the low-pass filter transfer function. Each\n"
  "smoothing iteration, therefore, applies the next higher term of the\n"
  "Chebyshev filter approximation to the polyhedron. This decoupling of\n"
  "the filter into an iteratively applied polynomial is possible since\n"
  "the Chebyshev polynomials are orthogonal, i.e. increasing the order\n"
  "of the approximation to the filter transfer function does not alter\n"
  "the previously calculated coefficients for the low order terms.\n\n"
  "Note: Care must be taken to avoid smoothing with too few iterations.\n"
  "A Chebyshev approximation with too few terms is an poor\n"
  "approximation. The first few smoothing iterations represent a severe\n"
  "scaling and translation of the data.  Subsequent iterations cause the\n"
  "smoothed polyhedron to converge to the true location and scale of the\n"
  "object. We have attempted to protect against this by automatically\n"
  "adjusting the filter, effectively widening the pass band. This\n"
  "adjustment is only possible if the number of iterations is greater\n"
  "than 1.  Note that this sacrifices some degree of smoothing for model\n"
  "integrity. For those interested, the filter is adjusted by searching\n"
  "for a value sigma such that the actual pass band is k_pb + sigma and\n"
  "such that the filter transfer function evaluates to unity at k_pb,\n"
  "i.e. f(k_pb) = 1\n\n"
  "To improve the numerical stability of the solution and minimize the\n"
  "scaling the translation effects, the algorithm can translate and\n"
  "scale the position coordinates to within the unit cube [-1, 1],\n"
  "perform the smoothing, and translate and scale the position\n"
  "coordinates back to the original coordinate frame.  This mode is\n"
  "controlled with the NormalizeCoordinatesOn() /\n"
  "NormalizeCoordinatesOff() methods.  For legacy reasons, the default\n"
  "is NormalizeCoordinatesOff.\n\n"
  "This implementation is currently limited to using an interpolation\n"
  "kernel based on Hamming windows.  Other windows (such as Hann,\n"
  "Blackman, Kaiser, Lanczos, Gaussian, and exponential windows) could\n"
  "be used instead.\n\n"
  "There are some special instance variables used to control the\n"
  "execution of this filter. (These ivars basically control what\n"
  "vertices can be smoothed, and the creation of the connectivity\n"
  "array.) The BoundarySmoothing ivar enables/disables the smoothing\n"
  "operation on vertices that are on the \"boundary\" of the mesh. A\n"
  "boundary vertex is one that is surrounded by a semi-cycle of polygons\n"
  "(or used by a single line).\n\n"
  "Another important ivar is FeatureEdgeSmoothing. If this ivar is\n"
  "enabled, then interior vertices are classified as either \"simple\", \"interior\n"
  "edge\", or \"fixed\", and smoothed differently. (Interior vertices are\n"
  "manifold vertices surrounded by a cycle of polygons; or used by two\n"
  "line cells.) The classification is based on the number of feature\n"
  "edges attached to v. A feature edge occurs when the angle between the\n"
  "two surface normals of a polygon sharing an edge is greater than the\n"
  "FeatureAngle ivar. Then, vertices used by no feature edges are\n"
  "classified \"simple\", vertices used by exactly two feature edges are\n"
  "classified \"interior edge\", and all others are \"fixed\" vertices.\n\n"
  "Once the classification is known, the vertices are smoothed\n"
  "differently. Corner (i.e., fixed) vertices are not smoothed at all.\n"
  "Simple vertices are smoothed as before . Interior edge vertices are\n"
  "smoothed only along their two connected edges, and only if the angle\n"
  "between the edges is less than the EdgeAngle ivar.\n\n"
  "The total smoothing can be controlled by using two ivars. The\n"
  "NumberOfIterations determines the maximum number of smoothing passes.\n"
  "The NumberOfIterations corresponds to the degree of the polynomial\n"
  "that is used to approximate the windowed sinc function. Ten or twenty\n"
  "iterations is all the is usually necessary. Contrast this with\n"
  "vtkSmoothPolyDataFilter which usually requires 100 to 200 smoothing\n"
  "iterations. vtkSmoothPolyDataFilter is also not an approximation to\n"
  "an ideal low-pass filter, which can cause the geometry to shrink as\n"
  "the amount of smoothing increases.\n\n"
  "The second ivar is the specification of the PassBand for the windowed\n"
  "sinc filter.  By design, the PassBand is specified as a doubleing\n"
  "point number between 0 and 2.  Lower PassBand values produce more\n"
  "smoothing. A good default value for the PassBand is 0.1 (for those\n"
  "interested, the PassBand (and frequencies) for PolyData are based on\n"
  "the valence of the vertices, this limits all the frequency modes in a\n"
  "polyhedral mesh to between 0 and 2.)\n\n"
  "There are two instance variables that control the generation of error\n"
  "data. If the ivar GenerateErrorScalars is on, then a scalar value\n"
  "indicating the distance of each vertex from its original position is\n"
  "computed. If the ivar GenerateErrorVectors is on, then a vector\n"
  "representing change in position is computed.\n\n"
  "@warning\n"
  "The smoothing operation reduces high frequency information in the\n"
  "geometry of the mesh. With excessive smoothing important details may\n"
  "be lost. Enabling FeatureEdgeSmoothing helps reduce this effect, but\n"
  "cannot entirely eliminate it.\n\n"
  "@sa\n"
  "vtkSmoothPolyDataFilter vtkDecimate vtkDecimatePro\n\n";


static PyObject *
PyvtkWindowedSincPolyDataFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindowedSincPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowedSincPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindowedSincPolyDataFilter *tempr = vtkWindowedSincPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindowedSincPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowedSincPolyDataFilter::NewInstance());

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
PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassBand(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetPassBand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBand() :
      op->vtkWindowedSincPolyDataFilter::GetPassBand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeCoordinates(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNormalizeCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeCoordinates() :
      op->vtkWindowedSincPolyDataFilter::GetNormalizeCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeCoordinatesOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeCoordinatesOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureEdgeSmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdgeSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureEdgeSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeAngle(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetEdgeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngle() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundarySmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetBoundarySmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundarySmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetBoundarySmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldSmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNonManifoldSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetNonManifoldSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldSmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldSmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorScalars(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorVectors(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowedSincPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkWindowedSincPolyDataFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindowedSincPolyDataFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindowedSincPolyDataFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkWindowedSincPolyDataFilter\nC++: static vtkWindowedSincPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindowedSincPolyDataFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkWindowedSincPolyDataFilter\nC++: vtkWindowedSincPolyDataFilter *NewInstance()\n\n"},
  {"SetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations, METH_VARARGS,
   "V.SetNumberOfIterations(int)\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {"GetNumberOfIterationsMinValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "V.GetNumberOfIterationsMinValue() -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "V.GetNumberOfIterationsMaxValue() -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {"GetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations, METH_VARARGS,
   "V.GetNumberOfIterations() -> int\nC++: virtual int GetNumberOfIterations()\n\nSpecify the number of iterations (or degree of the polynomial\napproximating the windowed sinc function).\n"},
  {"SetPassBand", PyvtkWindowedSincPolyDataFilter_SetPassBand, METH_VARARGS,
   "V.SetPassBand(float)\nC++: virtual void SetPassBand(double _arg)\n\nSet the passband value for the windowed sinc filter\n"},
  {"GetPassBandMinValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue, METH_VARARGS,
   "V.GetPassBandMinValue() -> float\nC++: virtual double GetPassBandMinValue()\n\nSet the passband value for the windowed sinc filter\n"},
  {"GetPassBandMaxValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue, METH_VARARGS,
   "V.GetPassBandMaxValue() -> float\nC++: virtual double GetPassBandMaxValue()\n\nSet the passband value for the windowed sinc filter\n"},
  {"GetPassBand", PyvtkWindowedSincPolyDataFilter_GetPassBand, METH_VARARGS,
   "V.GetPassBand() -> float\nC++: virtual double GetPassBand()\n\nSet the passband value for the windowed sinc filter\n"},
  {"SetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates, METH_VARARGS,
   "V.SetNormalizeCoordinates(int)\nC++: virtual void SetNormalizeCoordinates(vtkTypeBool _arg)\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {"GetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates, METH_VARARGS,
   "V.GetNormalizeCoordinates() -> int\nC++: virtual vtkTypeBool GetNormalizeCoordinates()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {"NormalizeCoordinatesOn", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn, METH_VARARGS,
   "V.NormalizeCoordinatesOn()\nC++: virtual void NormalizeCoordinatesOn()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {"NormalizeCoordinatesOff", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff, METH_VARARGS,
   "V.NormalizeCoordinatesOff()\nC++: virtual void NormalizeCoordinatesOff()\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {"SetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing, METH_VARARGS,
   "V.SetFeatureEdgeSmoothing(int)\nC++: virtual void SetFeatureEdgeSmoothing(vtkTypeBool _arg)\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"GetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing, METH_VARARGS,
   "V.GetFeatureEdgeSmoothing() -> int\nC++: virtual vtkTypeBool GetFeatureEdgeSmoothing()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"FeatureEdgeSmoothingOn", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn, METH_VARARGS,
   "V.FeatureEdgeSmoothingOn()\nC++: virtual void FeatureEdgeSmoothingOn()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"FeatureEdgeSmoothingOff", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff, METH_VARARGS,
   "V.FeatureEdgeSmoothingOff()\nC++: virtual void FeatureEdgeSmoothingOff()\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"SetFeatureAngle", PyvtkWindowedSincPolyDataFilter_SetFeatureAngle, METH_VARARGS,
   "V.SetFeatureAngle(float)\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue, METH_VARARGS,
   "V.GetFeatureAngleMinValue() -> float\nC++: virtual double GetFeatureAngleMinValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue, METH_VARARGS,
   "V.GetFeatureAngleMaxValue() -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngle", PyvtkWindowedSincPolyDataFilter_GetFeatureAngle, METH_VARARGS,
   "V.GetFeatureAngle() -> float\nC++: virtual double GetFeatureAngle()\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"SetEdgeAngle", PyvtkWindowedSincPolyDataFilter_SetEdgeAngle, METH_VARARGS,
   "V.SetEdgeAngle(float)\nC++: virtual void SetEdgeAngle(double _arg)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue, METH_VARARGS,
   "V.GetEdgeAngleMinValue() -> float\nC++: virtual double GetEdgeAngleMinValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue, METH_VARARGS,
   "V.GetEdgeAngleMaxValue() -> float\nC++: virtual double GetEdgeAngleMaxValue()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngle", PyvtkWindowedSincPolyDataFilter_GetEdgeAngle, METH_VARARGS,
   "V.GetEdgeAngle() -> float\nC++: virtual double GetEdgeAngle()\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"SetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing, METH_VARARGS,
   "V.SetBoundarySmoothing(int)\nC++: virtual void SetBoundarySmoothing(vtkTypeBool _arg)\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"GetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing, METH_VARARGS,
   "V.GetBoundarySmoothing() -> int\nC++: virtual vtkTypeBool GetBoundarySmoothing()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"BoundarySmoothingOn", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn, METH_VARARGS,
   "V.BoundarySmoothingOn()\nC++: virtual void BoundarySmoothingOn()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"BoundarySmoothingOff", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff, METH_VARARGS,
   "V.BoundarySmoothingOff()\nC++: virtual void BoundarySmoothingOff()\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"SetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing, METH_VARARGS,
   "V.SetNonManifoldSmoothing(int)\nC++: virtual void SetNonManifoldSmoothing(vtkTypeBool _arg)\n\nSmooth non-manifold vertices.\n"},
  {"GetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing, METH_VARARGS,
   "V.GetNonManifoldSmoothing() -> int\nC++: virtual vtkTypeBool GetNonManifoldSmoothing()\n\nSmooth non-manifold vertices.\n"},
  {"NonManifoldSmoothingOn", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn, METH_VARARGS,
   "V.NonManifoldSmoothingOn()\nC++: virtual void NonManifoldSmoothingOn()\n\nSmooth non-manifold vertices.\n"},
  {"NonManifoldSmoothingOff", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff, METH_VARARGS,
   "V.NonManifoldSmoothingOff()\nC++: virtual void NonManifoldSmoothingOff()\n\nSmooth non-manifold vertices.\n"},
  {"SetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars, METH_VARARGS,
   "V.SetGenerateErrorScalars(int)\nC++: virtual void SetGenerateErrorScalars(vtkTypeBool _arg)\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars, METH_VARARGS,
   "V.GetGenerateErrorScalars() -> int\nC++: virtual vtkTypeBool GetGenerateErrorScalars()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GenerateErrorScalarsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn, METH_VARARGS,
   "V.GenerateErrorScalarsOn()\nC++: virtual void GenerateErrorScalarsOn()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GenerateErrorScalarsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff, METH_VARARGS,
   "V.GenerateErrorScalarsOff()\nC++: virtual void GenerateErrorScalarsOff()\n\nTurn on/off the generation of scalar distance values.\n"},
  {"SetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors, METH_VARARGS,
   "V.SetGenerateErrorVectors(int)\nC++: virtual void SetGenerateErrorVectors(vtkTypeBool _arg)\n\nTurn on/off the generation of error vectors.\n"},
  {"GetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors, METH_VARARGS,
   "V.GetGenerateErrorVectors() -> int\nC++: virtual vtkTypeBool GetGenerateErrorVectors()\n\nTurn on/off the generation of error vectors.\n"},
  {"GenerateErrorVectorsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn, METH_VARARGS,
   "V.GenerateErrorVectorsOn()\nC++: virtual void GenerateErrorVectorsOn()\n\nTurn on/off the generation of error vectors.\n"},
  {"GenerateErrorVectorsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff, METH_VARARGS,
   "V.GenerateErrorVectorsOff()\nC++: virtual void GenerateErrorVectorsOff()\n\nTurn on/off the generation of error vectors.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkWindowedSincPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkWindowedSincPolyDataFilter", // tp_name
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
  PyvtkWindowedSincPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindowedSincPolyDataFilter_StaticNew()
{
  return vtkWindowedSincPolyDataFilter::New();
}

PyObject *PyvtkWindowedSincPolyDataFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkWindowedSincPolyDataFilter_Type, PyvtkWindowedSincPolyDataFilter_Methods,
    "vtkWindowedSincPolyDataFilter",
 &PyvtkWindowedSincPolyDataFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkWindowedSincPolyDataFilter_Type;

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

void PyVTKAddFile_vtkWindowedSincPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindowedSincPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindowedSincPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

