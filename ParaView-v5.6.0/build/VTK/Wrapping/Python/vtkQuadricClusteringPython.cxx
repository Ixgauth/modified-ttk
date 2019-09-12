// python wrapper for vtkQuadricClustering
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
#include "vtkQuadricClustering.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadricClustering(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkQuadricClustering_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkQuadricClustering_Doc =
  "vtkQuadricClustering - reduce the number of triangles in a mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkQuadricClustering is a filter to reduce the number of triangles in\n"
  "a triangle mesh, forming a good approximation to the original\n"
  "geometry.  The input to vtkQuadricClustering is a vtkPolyData object,\n"
  "and all types of polygonal data are handled.\n\n"
  "The algorithm used is the one described by Peter Lindstrom in his\n"
  "Siggraph 2000 paper, \"Out-of-Core Simplification of Large Polygonal\n"
  "Models.\"  The general approach of the algorithm is to cluster\n"
  "vertices in a uniform binning of space, accumulating the quadric of\n"
  "each triangle (pushed out to the triangles vertices) within each bin,\n"
  "and then determining an optimal position for a single vertex in a bin\n"
  "by using the accumulated quadric. In more detail, the algorithm first\n"
  "gets the bounds of the input poly data. It then breaks this bounding\n"
  "volume into a user-specified number of spatial bins.  It then reads\n"
  "each triangle from the input and hashes its vertices into these bins.\n"
  " (If this is the first time a bin has been visited, initialize its\n"
  "quadric to the 0 matrix.) The algorithm computes the error quadric\n"
  "for this triangle and adds it to the existing quadric of the bin in\n"
  "which each vertex is contained. Then, if 2 or more vertices of the\n"
  "triangle fall in the same bin, the triangle is dicarded.  If the\n"
  "triangle is not discarded, it adds the triangle to the list of output\n"
  "triangles as a list of vertex identifiers.  (There is one vertex id\n"
  "per bin.)  After all the triangles have been read, the representative\n"
  "vertex for each bin is computed (an optimal location is found) using\n"
  "the quadric for that bin.  This determines the spatial location of\n"
  "the vertices of each of the triangles in the output.\n\n"
  "To use this filter, specify the divisions defining the spatial\n"
  "subdivision in the x, y, and z directions. You must also specify an\n"
  "input vtkPolyData. Then choose to either 1) use the original points\n"
  "that minimize the quadric error to produce the output triangles or 2)\n"
  "compute an optimal position in each bin to produce the output\n"
  "triangles (recommended and default behavior).\n\n"
  "This filter can take multiple inputs.  To do this, the user must\n"
  "explicitly call StartAppend, Append (once for each input), and\n"
  "EndAppend.  StartAppend sets up the data structure to hold the\n"
  "quadric matrices.  Append processes each triangle in the input poly\n"
  "data it was called on, hashes its vertices to the appropriate bins,\n"
  "determines whether to keep this triangle, and updates the appropriate\n"
  "quadric matrices.  EndAppend determines the spatial location of each\n"
  "of the representative vertices for the visited bins. While this\n"
  "approach does not fit into the visualization architecture and\n"
  "requires manual control, it has the advantage that extremely large\n"
  "data can be processed in pieces and appended to the filter\n"
  "piece-by-piece.\n\n"
  "@warning\n"
  "This filter can drastically affect topology, i.e., topology is not\n"
  "preserved.\n\n"
  "@warning\n"
  "The filter handles input triangle strips and arbitrary polygons.\n"
  "Arbitrary polygons are assumed convex: during insertion they are\n"
  "triangulated using a fan of triangles from the first point in the\n"
  "polygons. If the polygon is concave, this can produce bad results. In\n"
  "this case, use vtkTriangleFilter to triangulate the polygons first.\n\n"
  "@warning\n"
  "The filter also treats polylines and vertices.\n\n"
  "@warning\n"
  "Note that for certain types of geometry (e.g., a mostly 2D plane with\n"
  "jitter in the normal direction), the decimator can perform badly. In\n"
  "this situation, set the number of bins in the normal direction to\n"
  "one.\n\n"
  "@sa\n"
  "vtkQuadricDecimation vtkDecimatePro vtkDecimate vtkQuadricLODActor\n\n";


static PyObject *
PyvtkQuadricClustering_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadricClustering::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricClustering::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadricClustering *tempr = vtkQuadricClustering::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadricClustering *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricClustering::NewInstance());

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
PyvtkQuadricClustering_SetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetNumberOfXDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetNumberOfYDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetNumberOfZDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXDivisions() :
      op->vtkQuadricClustering::GetNumberOfXDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYDivisions() :
      op->vtkQuadricClustering::GetNumberOfYDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfZDivisions() :
      op->vtkQuadricClustering::GetNumberOfZDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetNumberOfDivisions(temp0);
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
PyvtkQuadricClustering_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetNumberOfDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkQuadricClustering::SetNumberOfDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkQuadricClustering_SetNumberOfDivisions_s1(self, args);
    case 3:
      return PyvtkQuadricClustering_SetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return nullptr;
}



static PyObject *
PyvtkQuadricClustering_GetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkQuadricClustering::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkQuadricClustering_GetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->GetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::GetNumberOfDivisions(temp0);
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
PyvtkQuadricClustering_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkQuadricClustering_GetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_GetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfDivisions");
  return nullptr;
}



static PyObject *
PyvtkQuadricClustering_SetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetAutoAdjustNumberOfDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustNumberOfDivisions() :
      op->vtkQuadricClustering::GetAutoAdjustNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustNumberOfDivisionsOn();
    }
    else
    {
      op->vtkQuadricClustering::AutoAdjustNumberOfDivisionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustNumberOfDivisionsOff();
    }
    else
    {
      op->vtkQuadricClustering::AutoAdjustNumberOfDivisionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetDivisionOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetDivisionOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkQuadricClustering::SetDivisionOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetDivisionOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDivisionOrigin(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetDivisionOrigin(temp0);
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
PyvtkQuadricClustering_SetDivisionOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkQuadricClustering_SetDivisionOrigin_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_SetDivisionOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionOrigin");
  return nullptr;
}



static PyObject *
PyvtkQuadricClustering_GetDivisionOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionOrigin() :
      op->vtkQuadricClustering::GetDivisionOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetDivisionSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->SetDivisionSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkQuadricClustering::SetDivisionSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadricClustering_SetDivisionSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDivisionSpacing(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetDivisionSpacing(temp0);
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
PyvtkQuadricClustering_SetDivisionSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkQuadricClustering_SetDivisionSpacing_s1(self, args);
    case 1:
      return PyvtkQuadricClustering_SetDivisionSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionSpacing");
  return nullptr;
}



static PyObject *
PyvtkQuadricClustering_GetDivisionSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionSpacing() :
      op->vtkQuadricClustering::GetDivisionSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInputPoints(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetUseInputPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseInputPoints() :
      op->vtkQuadricClustering::GetUseInputPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInputPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputPointsOn();
    }
    else
    {
      op->vtkQuadricClustering::UseInputPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInputPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputPointsOff();
    }
    else
    {
      op->vtkQuadricClustering::UseInputPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFeatureEdges(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetUseFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseFeatureEdges() :
      op->vtkQuadricClustering::GetUseFeatureEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeatureEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeatureEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFeatureEdgesOn();
    }
    else
    {
      op->vtkQuadricClustering::UseFeatureEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeatureEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeatureEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFeatureEdgesOff();
    }
    else
    {
      op->vtkQuadricClustering::UseFeatureEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFeatureEdges *tempr = (ap.IsBound() ?
      op->GetFeatureEdges() :
      op->vtkQuadricClustering::GetFeatureEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseFeaturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFeaturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFeaturePoints(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetUseFeaturePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseFeaturePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFeaturePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseFeaturePoints() :
      op->vtkQuadricClustering::GetUseFeaturePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeaturePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeaturePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFeaturePointsOn();
    }
    else
    {
      op->vtkQuadricClustering::UseFeaturePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseFeaturePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFeaturePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFeaturePointsOff();
    }
    else
    {
      op->vtkQuadricClustering::UseFeaturePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetFeaturePointsAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeaturePointsAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeaturePointsAngle(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetFeaturePointsAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngleMinValue() :
      op->vtkQuadricClustering::GetFeaturePointsAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngleMaxValue() :
      op->vtkQuadricClustering::GetFeaturePointsAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetFeaturePointsAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeaturePointsAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeaturePointsAngle() :
      op->vtkQuadricClustering::GetFeaturePointsAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetUseInternalTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInternalTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInternalTriangles(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetUseInternalTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetUseInternalTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInternalTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseInternalTriangles() :
      op->vtkQuadricClustering::GetUseInternalTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInternalTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInternalTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInternalTrianglesOn();
    }
    else
    {
      op->vtkQuadricClustering::UseInternalTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_UseInternalTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInternalTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInternalTrianglesOff();
    }
    else
    {
      op->vtkQuadricClustering::UseInternalTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_StartAppend_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartAppend(temp0);
    }
    else
    {
      op->vtkQuadricClustering::StartAppend(temp0);
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
PyvtkQuadricClustering_StartAppend_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->StartAppend(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkQuadricClustering::StartAppend(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuadricClustering_StartAppend(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkQuadricClustering_StartAppend_s1(self, args);
    case 6:
      return PyvtkQuadricClustering_StartAppend_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StartAppend");
  return nullptr;
}



static PyObject *
PyvtkQuadricClustering_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

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
      op->vtkQuadricClustering::Append(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndAppend();
    }
    else
    {
      op->vtkQuadricClustering::EndAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyCellData(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetCopyCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyCellData() :
      op->vtkQuadricClustering::GetCopyCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_CopyCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellDataOn();
    }
    else
    {
      op->vtkQuadricClustering::CopyCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_CopyCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellDataOff();
    }
    else
    {
      op->vtkQuadricClustering::CopyCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_SetPreventDuplicateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventDuplicateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreventDuplicateCells(temp0);
    }
    else
    {
      op->vtkQuadricClustering::SetPreventDuplicateCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_GetPreventDuplicateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventDuplicateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreventDuplicateCells() :
      op->vtkQuadricClustering::GetPreventDuplicateCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_PreventDuplicateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventDuplicateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventDuplicateCellsOn();
    }
    else
    {
      op->vtkQuadricClustering::PreventDuplicateCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricClustering_PreventDuplicateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventDuplicateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricClustering *op = static_cast<vtkQuadricClustering *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventDuplicateCellsOff();
    }
    else
    {
      op->vtkQuadricClustering::PreventDuplicateCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadricClustering_Methods[] = {
  {"IsTypeOf", PyvtkQuadricClustering_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard instantition, type and print methods.\n"},
  {"IsA", PyvtkQuadricClustering_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard instantition, type and print methods.\n"},
  {"SafeDownCast", PyvtkQuadricClustering_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkQuadricClustering\nC++: static vtkQuadricClustering *SafeDownCast(vtkObjectBase *o)\n\nStandard instantition, type and print methods.\n"},
  {"NewInstance", PyvtkQuadricClustering_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkQuadricClustering\nC++: vtkQuadricClustering *NewInstance()\n\nStandard instantition, type and print methods.\n"},
  {"SetNumberOfXDivisions", PyvtkQuadricClustering_SetNumberOfXDivisions, METH_VARARGS,
   "V.SetNumberOfXDivisions(int)\nC++: void SetNumberOfXDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"SetNumberOfYDivisions", PyvtkQuadricClustering_SetNumberOfYDivisions, METH_VARARGS,
   "V.SetNumberOfYDivisions(int)\nC++: void SetNumberOfYDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"SetNumberOfZDivisions", PyvtkQuadricClustering_SetNumberOfZDivisions, METH_VARARGS,
   "V.SetNumberOfZDivisions(int)\nC++: void SetNumberOfZDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"GetNumberOfXDivisions", PyvtkQuadricClustering_GetNumberOfXDivisions, METH_VARARGS,
   "V.GetNumberOfXDivisions() -> int\nC++: virtual int GetNumberOfXDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"GetNumberOfYDivisions", PyvtkQuadricClustering_GetNumberOfYDivisions, METH_VARARGS,
   "V.GetNumberOfYDivisions() -> int\nC++: virtual int GetNumberOfYDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"GetNumberOfZDivisions", PyvtkQuadricClustering_GetNumberOfZDivisions, METH_VARARGS,
   "V.GetNumberOfZDivisions() -> int\nC++: virtual int GetNumberOfZDivisions()\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"SetNumberOfDivisions", PyvtkQuadricClustering_SetNumberOfDivisions, METH_VARARGS,
   "V.SetNumberOfDivisions([int, int, int])\nC++: void SetNumberOfDivisions(int div[3])\nV.SetNumberOfDivisions(int, int, int)\nC++: void SetNumberOfDivisions(int div0, int div1, int div2)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"GetNumberOfDivisions", PyvtkQuadricClustering_GetNumberOfDivisions, METH_VARARGS,
   "V.GetNumberOfDivisions() -> (int, int, int)\nC++: int *GetNumberOfDivisions()\nV.GetNumberOfDivisions([int, int, int])\nC++: void GetNumberOfDivisions(int div[3])\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\n"},
  {"SetAutoAdjustNumberOfDivisions", PyvtkQuadricClustering_SetAutoAdjustNumberOfDivisions, METH_VARARGS,
   "V.SetAutoAdjustNumberOfDivisions(int)\nC++: virtual void SetAutoAdjustNumberOfDivisions(vtkTypeBool _arg)\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {"GetAutoAdjustNumberOfDivisions", PyvtkQuadricClustering_GetAutoAdjustNumberOfDivisions, METH_VARARGS,
   "V.GetAutoAdjustNumberOfDivisions() -> int\nC++: virtual vtkTypeBool GetAutoAdjustNumberOfDivisions()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {"AutoAdjustNumberOfDivisionsOn", PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOn, METH_VARARGS,
   "V.AutoAdjustNumberOfDivisionsOn()\nC++: virtual void AutoAdjustNumberOfDivisionsOn()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {"AutoAdjustNumberOfDivisionsOff", PyvtkQuadricClustering_AutoAdjustNumberOfDivisionsOff, METH_VARARGS,
   "V.AutoAdjustNumberOfDivisionsOff()\nC++: virtual void AutoAdjustNumberOfDivisionsOff()\n\nEnable automatic adjustment of number of divisions. If off, the\nnumber of divisions specified by the user is always used (as long\nas it is valid). The default is On\n"},
  {"SetDivisionOrigin", PyvtkQuadricClustering_SetDivisionOrigin, METH_VARARGS,
   "V.SetDivisionOrigin(float, float, float)\nC++: void SetDivisionOrigin(double x, double y, double z)\nV.SetDivisionOrigin([float, float, float])\nC++: void SetDivisionOrigin(double o[3])\n\nThis is an alternative way to set up the bins.  If you are trying\nto match boundaries between pieces, then you should use these\nmethods rather than SetNumberOfDivisions. To use these methods,\nspecify the origin and spacing of the spatial binning.\n"},
  {"GetDivisionOrigin", PyvtkQuadricClustering_GetDivisionOrigin, METH_VARARGS,
   "V.GetDivisionOrigin() -> (float, float, float)\nC++: double *GetDivisionOrigin()\n\n"},
  {"SetDivisionSpacing", PyvtkQuadricClustering_SetDivisionSpacing, METH_VARARGS,
   "V.SetDivisionSpacing(float, float, float)\nC++: void SetDivisionSpacing(double x, double y, double z)\nV.SetDivisionSpacing([float, float, float])\nC++: void SetDivisionSpacing(double s[3])\n\nThis is an alternative way to set up the bins.  If you are trying\nto match boundaries between pieces, then you should use these\nmethods rather than SetNumberOfDivisions. To use these methods,\nspecify the origin and spacing of the spatial binning.\n"},
  {"GetDivisionSpacing", PyvtkQuadricClustering_GetDivisionSpacing, METH_VARARGS,
   "V.GetDivisionSpacing() -> (float, float, float)\nC++: double *GetDivisionSpacing()\n\n"},
  {"SetUseInputPoints", PyvtkQuadricClustering_SetUseInputPoints, METH_VARARGS,
   "V.SetUseInputPoints(int)\nC++: virtual void SetUseInputPoints(vtkTypeBool _arg)\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {"GetUseInputPoints", PyvtkQuadricClustering_GetUseInputPoints, METH_VARARGS,
   "V.GetUseInputPoints() -> int\nC++: virtual vtkTypeBool GetUseInputPoints()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {"UseInputPointsOn", PyvtkQuadricClustering_UseInputPointsOn, METH_VARARGS,
   "V.UseInputPointsOn()\nC++: virtual void UseInputPointsOn()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {"UseInputPointsOff", PyvtkQuadricClustering_UseInputPointsOff, METH_VARARGS,
   "V.UseInputPointsOff()\nC++: virtual void UseInputPointsOff()\n\nNormally the point that minimizes the quadric error function is\nused as the output of the bin.  When this flag is on, the bin\npoint is forced to be one of the points from the input (the one\nwith the smallest error). This option does not work (i.e., input\npoints cannot be used) when the append methods (StartAppend(),\nAppend(), EndAppend()) are being called directly.\n"},
  {"SetUseFeatureEdges", PyvtkQuadricClustering_SetUseFeatureEdges, METH_VARARGS,
   "V.SetUseFeatureEdges(int)\nC++: virtual void SetUseFeatureEdges(vtkTypeBool _arg)\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {"GetUseFeatureEdges", PyvtkQuadricClustering_GetUseFeatureEdges, METH_VARARGS,
   "V.GetUseFeatureEdges() -> int\nC++: virtual vtkTypeBool GetUseFeatureEdges()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {"UseFeatureEdgesOn", PyvtkQuadricClustering_UseFeatureEdgesOn, METH_VARARGS,
   "V.UseFeatureEdgesOn()\nC++: virtual void UseFeatureEdgesOn()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {"UseFeatureEdgesOff", PyvtkQuadricClustering_UseFeatureEdgesOff, METH_VARARGS,
   "V.UseFeatureEdgesOff()\nC++: virtual void UseFeatureEdgesOff()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {"GetFeatureEdges", PyvtkQuadricClustering_GetFeatureEdges, METH_VARARGS,
   "V.GetFeatureEdges() -> vtkFeatureEdges\nC++: vtkFeatureEdges *GetFeatureEdges()\n\nBy default, this flag is off.  When \"UseFeatureEdges\" is on, then\nquadrics are computed for boundary edges/feature edges.  They\ninfluence the quadrics (position of points), but not the mesh. \nWhich features to use can be controlled by the filter\n\"FeatureEdges\".\n"},
  {"SetUseFeaturePoints", PyvtkQuadricClustering_SetUseFeaturePoints, METH_VARARGS,
   "V.SetUseFeaturePoints(int)\nC++: virtual void SetUseFeaturePoints(vtkTypeBool _arg)\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {"GetUseFeaturePoints", PyvtkQuadricClustering_GetUseFeaturePoints, METH_VARARGS,
   "V.GetUseFeaturePoints() -> int\nC++: virtual vtkTypeBool GetUseFeaturePoints()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {"UseFeaturePointsOn", PyvtkQuadricClustering_UseFeaturePointsOn, METH_VARARGS,
   "V.UseFeaturePointsOn()\nC++: virtual void UseFeaturePointsOn()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {"UseFeaturePointsOff", PyvtkQuadricClustering_UseFeaturePointsOff, METH_VARARGS,
   "V.UseFeaturePointsOff()\nC++: virtual void UseFeaturePointsOff()\n\nBy default, this flag is off.  It only has an effect when\n\"UseFeatureEdges\" is also on.  When \"UseFeaturePoints\" is on,\nthen quadrics are computed for boundary / feature points used in\nthe boundary / feature edges.  They influence the quadrics\n(position of points), but not the mesh.\n"},
  {"SetFeaturePointsAngle", PyvtkQuadricClustering_SetFeaturePointsAngle, METH_VARARGS,
   "V.SetFeaturePointsAngle(float)\nC++: virtual void SetFeaturePointsAngle(double _arg)\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {"GetFeaturePointsAngleMinValue", PyvtkQuadricClustering_GetFeaturePointsAngleMinValue, METH_VARARGS,
   "V.GetFeaturePointsAngleMinValue() -> float\nC++: virtual double GetFeaturePointsAngleMinValue()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {"GetFeaturePointsAngleMaxValue", PyvtkQuadricClustering_GetFeaturePointsAngleMaxValue, METH_VARARGS,
   "V.GetFeaturePointsAngleMaxValue() -> float\nC++: virtual double GetFeaturePointsAngleMaxValue()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {"GetFeaturePointsAngle", PyvtkQuadricClustering_GetFeaturePointsAngle, METH_VARARGS,
   "V.GetFeaturePointsAngle() -> float\nC++: virtual double GetFeaturePointsAngle()\n\nSet/Get the angle to use in determining whether a point on a\nboundary / feature edge is a feature point.\n"},
  {"SetUseInternalTriangles", PyvtkQuadricClustering_SetUseInternalTriangles, METH_VARARGS,
   "V.SetUseInternalTriangles(int)\nC++: virtual void SetUseInternalTriangles(vtkTypeBool _arg)\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {"GetUseInternalTriangles", PyvtkQuadricClustering_GetUseInternalTriangles, METH_VARARGS,
   "V.GetUseInternalTriangles() -> int\nC++: virtual vtkTypeBool GetUseInternalTriangles()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {"UseInternalTrianglesOn", PyvtkQuadricClustering_UseInternalTrianglesOn, METH_VARARGS,
   "V.UseInternalTrianglesOn()\nC++: virtual void UseInternalTrianglesOn()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {"UseInternalTrianglesOff", PyvtkQuadricClustering_UseInternalTrianglesOff, METH_VARARGS,
   "V.UseInternalTrianglesOff()\nC++: virtual void UseInternalTrianglesOff()\n\nWhen this flag is on (and it is on by default), then triangles\nthat are completely contained in a bin are added to the bin\nquadrics.  When the the flag is off the filter operates faster,\nbut the surface may not be as well behaved.\n"},
  {"StartAppend", PyvtkQuadricClustering_StartAppend, METH_VARARGS,
   "V.StartAppend([float, ...])\nC++: void StartAppend(double *bounds)\nV.StartAppend(float, float, float, float, float, float)\nC++: void StartAppend(double x0, double x1, double y0, double y1,\n    double z0, double z1)\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {"Append", PyvtkQuadricClustering_Append, METH_VARARGS,
   "V.Append(vtkPolyData)\nC++: void Append(vtkPolyData *piece)\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {"EndAppend", PyvtkQuadricClustering_EndAppend, METH_VARARGS,
   "V.EndAppend()\nC++: void EndAppend()\n\nThese methods provide an alternative way of executing the filter.\nPolyData can be added to the result in pieces (append). In this\nmode, the user must specify the bounds of the entire model as an\nargument to the \"StartAppend\" method.\n"},
  {"SetCopyCellData", PyvtkQuadricClustering_SetCopyCellData, METH_VARARGS,
   "V.SetCopyCellData(int)\nC++: virtual void SetCopyCellData(vtkTypeBool _arg)\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {"GetCopyCellData", PyvtkQuadricClustering_GetCopyCellData, METH_VARARGS,
   "V.GetCopyCellData() -> int\nC++: virtual vtkTypeBool GetCopyCellData()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {"CopyCellDataOn", PyvtkQuadricClustering_CopyCellDataOn, METH_VARARGS,
   "V.CopyCellDataOn()\nC++: virtual void CopyCellDataOn()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {"CopyCellDataOff", PyvtkQuadricClustering_CopyCellDataOff, METH_VARARGS,
   "V.CopyCellDataOff()\nC++: virtual void CopyCellDataOff()\n\nThis flag makes the filter copy cell data from input to output\n(the best it can).  It uses input cells that trigger the addition\nof output cells (no averaging).  This is off by default, and does\nnot work when append is being called explicitly (non-pipeline\nusage).\n"},
  {"SetPreventDuplicateCells", PyvtkQuadricClustering_SetPreventDuplicateCells, METH_VARARGS,
   "V.SetPreventDuplicateCells(int)\nC++: virtual void SetPreventDuplicateCells(vtkTypeBool _arg)\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {"GetPreventDuplicateCells", PyvtkQuadricClustering_GetPreventDuplicateCells, METH_VARARGS,
   "V.GetPreventDuplicateCells() -> int\nC++: virtual vtkTypeBool GetPreventDuplicateCells()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {"PreventDuplicateCellsOn", PyvtkQuadricClustering_PreventDuplicateCellsOn, METH_VARARGS,
   "V.PreventDuplicateCellsOn()\nC++: virtual void PreventDuplicateCellsOn()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {"PreventDuplicateCellsOff", PyvtkQuadricClustering_PreventDuplicateCellsOff, METH_VARARGS,
   "V.PreventDuplicateCellsOff()\nC++: virtual void PreventDuplicateCellsOff()\n\nSpecify a boolean indicating whether to remove duplicate cells\n(i.e. triangles).  This is a little slower, and takes more\nmemory, but in some cases can reduce the number of cells produced\nby an order of magnitude. By default, this flag is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkQuadricClustering_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkQuadricClustering", // tp_name
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
  PyvtkQuadricClustering_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadricClustering_StaticNew()
{
  return vtkQuadricClustering::New();
}

PyObject *PyvtkQuadricClustering_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkQuadricClustering_Type, PyvtkQuadricClustering_Methods,
    "vtkQuadricClustering",
 &PyvtkQuadricClustering_StaticNew);

  PyTypeObject *pytype = &PyvtkQuadricClustering_Type;

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

void PyVTKAddFile_vtkQuadricClustering(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadricClustering_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadricClustering", o) != 0)
  {
    Py_DECREF(o);
  }

}

