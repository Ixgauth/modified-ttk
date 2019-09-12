// python wrapper for vtkDelaunay3D
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
#include "vtkPoints.h"
#include "vtkDelaunay3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDelaunay3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDelaunay3D_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridAlgorithm_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridAlgorithm_ClassNew
#endif

static const char *PyvtkDelaunay3D_Doc =
  "vtkDelaunay3D - create 3D Delaunay triangulation of input points\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkDelaunay3D is a filter that constructs a 3D Delaunay triangulation\n"
  "from a list of input points. These points may be represented by any\n"
  "dataset of type vtkPointSet and subclasses. The output of the filter\n"
  "is an unstructured grid dataset. Usually the output is a tetrahedral\n"
  "mesh, but if a non-zero alpha distance value is specified (called the\n"
  "\"alpha\" value), then only tetrahedra, triangles, edges, and vertices\n"
  "laying within the alpha radius are output. In other words, non-zero\n"
  "alpha values may result in arbitrary combinations of tetrahedra,\n"
  "triangles, lines, and vertices. (The notion of alpha value is derived\n"
  "from Edelsbrunner's work on \"alpha shapes\".) Note that a modification\n"
  "to alpha shapes enables output of combinations of tetrahedra,\n"
  "triangles, lines, and/or verts (see the boolean ivars AlphaTets,\n"
  "AlphaTris, AlphaLines, AlphaVerts).\n\n"
  "The 3D Delaunay triangulation is defined as the triangulation that\n"
  "satisfies the Delaunay criterion for n-dimensional simplexes (in this\n"
  "case n=3 and the simplexes are tetrahedra). This criterion states\n"
  "that a circumsphere of each simplex in a triangulation contains only\n"
  "the n+1 defining points of the simplex. (See text for more\n"
  "information.) While in two dimensions this translates into an\n"
  "\"optimal\" triangulation, this is not true in 3D, since a measurement\n"
  "for optimality in 3D is not agreed on.\n\n"
  "Delaunay triangulations are used to build topological structures from\n"
  "unorganized (or unstructured) points. The input to this filter is a\n"
  "list of points specified in 3D. (If you wish to create 2D\n"
  "triangulations see vtkDelaunay2D.) The output is an unstructured\n"
  "grid.\n\n"
  "The Delaunay triangulation can be numerically sensitive. To prevent\n"
  "problems, try to avoid injecting points that will result in triangles\n"
  "with bad aspect ratios (1000:1 or greater). In practice this means\n"
  "inserting points that are \"widely dispersed\", and enables smooth\n"
  "transition of triangle sizes throughout the mesh. (You may even want\n"
  "to add extra points to create a better point distribution.) If\n"
  "numerical problems are present, you will see a warning message to\n"
  "this effect at the end of the triangulation process.\n\n"
  "@warning\n"
  "Points arranged on a regular lattice (termed degenerate cases) can be\n"
  "triangulated in more than one way (at least according to the Delaunay\n"
  "criterion). The choice of triangulation (as implemented by this\n"
  "algorithm) depends on the order of the input points. The first four\n"
  "points will form a tetrahedron; other degenerate points (relative to\n"
  "this initial tetrahedron) will not break it.\n\n"
  "@warning\n"
  "Points that are coincident (or nearly so) may be discarded by the\n"
  "algorithm.  This is because the Delaunay triangulation requires\n"
  "unique input points.  You can control the definition of coincidence\n"
  "with the \"Tolerance\" instance variable.\n\n"
  "@warning\n"
  "The output of the Delaunay triangulation is supposedly a convex hull.\n"
  "In certain cases this implementation may not generate the convex\n"
  "hull. This behavior can be controlled by the Offset instance\n"
  "variable. Offset is a multiplier used to control the size of the\n"
  "initial triangulation. The larger the offset value, the more likely\n"
  "you will generate a convex hull; and the more likely you are to see\n"
  "numerical problems.\n\n"
  "@warning\n"
  "The implementation of this algorithm varies from the 2D Delaunay\n"
  "algorithm (i.e., vtkDelaunay2D) in an important way. When points are\n"
  "injected into the triangulation, the search for the enclosing\n"
  "tetrahedron is quite different. In the 3D case, the closest\n"
  "previously inserted point point is found, and then the connected\n"
  "tetrahedra are searched to find the containing one. (In 2D, a \"walk\"\n"
  "towards the enclosing triangle is performed.) If the triangulation is\n"
  "Delaunay, then an enclosing tetrahedron will be found. However, in\n"
  "degenerate cases an enclosing tetrahedron may not be found and the\n"
  "point will be rejected.\n\n"
  "@sa\n"
  "vtkDelaunay2D vtkGaussianSplatter vtkUnstructuredGrid\n\n";


static PyObject *
PyvtkDelaunay3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDelaunay3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDelaunay3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDelaunay3D *tempr = vtkDelaunay3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDelaunay3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDelaunay3D::NewInstance());

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
PyvtkDelaunay3D_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMinValue() :
      op->vtkDelaunay3D::GetAlphaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlphaMaxValue() :
      op->vtkDelaunay3D::GetAlphaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkDelaunay3D::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetAlphaTets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaTets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaTets(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetAlphaTets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaTets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaTets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaTets() :
      op->vtkDelaunay3D::GetAlphaTets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaTetsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaTetsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaTetsOn();
    }
    else
    {
      op->vtkDelaunay3D::AlphaTetsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaTetsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaTetsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaTetsOff();
    }
    else
    {
      op->vtkDelaunay3D::AlphaTetsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetAlphaTris(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaTris");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaTris(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetAlphaTris(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaTris(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaTris");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaTris() :
      op->vtkDelaunay3D::GetAlphaTris());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaTrisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaTrisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaTrisOn();
    }
    else
    {
      op->vtkDelaunay3D::AlphaTrisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaTrisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaTrisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaTrisOff();
    }
    else
    {
      op->vtkDelaunay3D::AlphaTrisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetAlphaLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaLines(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetAlphaLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaLines() :
      op->vtkDelaunay3D::GetAlphaLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaLinesOn();
    }
    else
    {
      op->vtkDelaunay3D::AlphaLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaLinesOff();
    }
    else
    {
      op->vtkDelaunay3D::AlphaLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetAlphaVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlphaVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlphaVerts(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetAlphaVerts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetAlphaVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlphaVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlphaVerts() :
      op->vtkDelaunay3D::GetAlphaVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaVertsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaVertsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaVertsOn();
    }
    else
    {
      op->vtkDelaunay3D::AlphaVertsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_AlphaVertsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlphaVertsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlphaVertsOff();
    }
    else
    {
      op->vtkDelaunay3D::AlphaVertsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

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
      op->vtkDelaunay3D::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkDelaunay3D::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkDelaunay3D::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkDelaunay3D::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkDelaunay3D::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkDelaunay3D::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkDelaunay3D::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundingTriangulation(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetBoundingTriangulation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetBoundingTriangulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundingTriangulation() :
      op->vtkDelaunay3D::GetBoundingTriangulation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_BoundingTriangulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundingTriangulationOn();
    }
    else
    {
      op->vtkDelaunay3D::BoundingTriangulationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_BoundingTriangulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundingTriangulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundingTriangulationOff();
    }
    else
    {
      op->vtkDelaunay3D::BoundingTriangulationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkDelaunay3D::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkDelaunay3D::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  vtkIdType temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDelaunay3D::InsertPoint(temp0, temp1, temp2, temp3, temp4);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_EndPointInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPointInsertion();
    }
    else
    {
      op->vtkDelaunay3D::EndPointInsertion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDelaunay3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkDelaunay3D::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDelaunay3D_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDelaunay3D *op = static_cast<vtkDelaunay3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDelaunay3D::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDelaunay3D_Methods[] = {
  {"IsTypeOf", PyvtkDelaunay3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDelaunay3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDelaunay3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDelaunay3D\nC++: static vtkDelaunay3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDelaunay3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDelaunay3D\nC++: vtkDelaunay3D *NewInstance()\n\n"},
  {"SetAlpha", PyvtkDelaunay3D_SetAlpha, METH_VARARGS,
   "V.SetAlpha(float)\nC++: virtual void SetAlpha(double _arg)\n\nSpecify alpha (or distance) value to control output of this\nfilter.  For a non-zero alpha value, only verts, edges, faces, or\ntetra contained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output. Note that the\nflags AlphaTets, AlphaTris, AlphaLines, and AlphaVerts control\nwhether these primitives are output when Alpha is non-zero. (By\ndefault all tets, triangles, lines and verts satisfying the alpha\nshape criterion are output.)\n"},
  {"GetAlphaMinValue", PyvtkDelaunay3D_GetAlphaMinValue, METH_VARARGS,
   "V.GetAlphaMinValue() -> float\nC++: virtual double GetAlphaMinValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter.  For a non-zero alpha value, only verts, edges, faces, or\ntetra contained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output. Note that the\nflags AlphaTets, AlphaTris, AlphaLines, and AlphaVerts control\nwhether these primitives are output when Alpha is non-zero. (By\ndefault all tets, triangles, lines and verts satisfying the alpha\nshape criterion are output.)\n"},
  {"GetAlphaMaxValue", PyvtkDelaunay3D_GetAlphaMaxValue, METH_VARARGS,
   "V.GetAlphaMaxValue() -> float\nC++: virtual double GetAlphaMaxValue()\n\nSpecify alpha (or distance) value to control output of this\nfilter.  For a non-zero alpha value, only verts, edges, faces, or\ntetra contained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output. Note that the\nflags AlphaTets, AlphaTris, AlphaLines, and AlphaVerts control\nwhether these primitives are output when Alpha is non-zero. (By\ndefault all tets, triangles, lines and verts satisfying the alpha\nshape criterion are output.)\n"},
  {"GetAlpha", PyvtkDelaunay3D_GetAlpha, METH_VARARGS,
   "V.GetAlpha() -> float\nC++: virtual double GetAlpha()\n\nSpecify alpha (or distance) value to control output of this\nfilter.  For a non-zero alpha value, only verts, edges, faces, or\ntetra contained within the circumsphere (of radius alpha) will be\noutput. Otherwise, only tetrahedra will be output. Note that the\nflags AlphaTets, AlphaTris, AlphaLines, and AlphaVerts control\nwhether these primitives are output when Alpha is non-zero. (By\ndefault all tets, triangles, lines and verts satisfying the alpha\nshape criterion are output.)\n"},
  {"SetAlphaTets", PyvtkDelaunay3D_SetAlphaTets, METH_VARARGS,
   "V.SetAlphaTets(int)\nC++: virtual void SetAlphaTets(vtkTypeBool _arg)\n\nBoolean controls whether tetrahedra are output for non-zero alpha\nvalues.\n"},
  {"GetAlphaTets", PyvtkDelaunay3D_GetAlphaTets, METH_VARARGS,
   "V.GetAlphaTets() -> int\nC++: virtual vtkTypeBool GetAlphaTets()\n\nBoolean controls whether tetrahedra are output for non-zero alpha\nvalues.\n"},
  {"AlphaTetsOn", PyvtkDelaunay3D_AlphaTetsOn, METH_VARARGS,
   "V.AlphaTetsOn()\nC++: virtual void AlphaTetsOn()\n\nBoolean controls whether tetrahedra are output for non-zero alpha\nvalues.\n"},
  {"AlphaTetsOff", PyvtkDelaunay3D_AlphaTetsOff, METH_VARARGS,
   "V.AlphaTetsOff()\nC++: virtual void AlphaTetsOff()\n\nBoolean controls whether tetrahedra are output for non-zero alpha\nvalues.\n"},
  {"SetAlphaTris", PyvtkDelaunay3D_SetAlphaTris, METH_VARARGS,
   "V.SetAlphaTris(int)\nC++: virtual void SetAlphaTris(vtkTypeBool _arg)\n\nBoolean controls whether triangles are output for non-zero alpha\nvalues.\n"},
  {"GetAlphaTris", PyvtkDelaunay3D_GetAlphaTris, METH_VARARGS,
   "V.GetAlphaTris() -> int\nC++: virtual vtkTypeBool GetAlphaTris()\n\nBoolean controls whether triangles are output for non-zero alpha\nvalues.\n"},
  {"AlphaTrisOn", PyvtkDelaunay3D_AlphaTrisOn, METH_VARARGS,
   "V.AlphaTrisOn()\nC++: virtual void AlphaTrisOn()\n\nBoolean controls whether triangles are output for non-zero alpha\nvalues.\n"},
  {"AlphaTrisOff", PyvtkDelaunay3D_AlphaTrisOff, METH_VARARGS,
   "V.AlphaTrisOff()\nC++: virtual void AlphaTrisOff()\n\nBoolean controls whether triangles are output for non-zero alpha\nvalues.\n"},
  {"SetAlphaLines", PyvtkDelaunay3D_SetAlphaLines, METH_VARARGS,
   "V.SetAlphaLines(int)\nC++: virtual void SetAlphaLines(vtkTypeBool _arg)\n\nBoolean controls whether lines are output for non-zero alpha\nvalues.\n"},
  {"GetAlphaLines", PyvtkDelaunay3D_GetAlphaLines, METH_VARARGS,
   "V.GetAlphaLines() -> int\nC++: virtual vtkTypeBool GetAlphaLines()\n\nBoolean controls whether lines are output for non-zero alpha\nvalues.\n"},
  {"AlphaLinesOn", PyvtkDelaunay3D_AlphaLinesOn, METH_VARARGS,
   "V.AlphaLinesOn()\nC++: virtual void AlphaLinesOn()\n\nBoolean controls whether lines are output for non-zero alpha\nvalues.\n"},
  {"AlphaLinesOff", PyvtkDelaunay3D_AlphaLinesOff, METH_VARARGS,
   "V.AlphaLinesOff()\nC++: virtual void AlphaLinesOff()\n\nBoolean controls whether lines are output for non-zero alpha\nvalues.\n"},
  {"SetAlphaVerts", PyvtkDelaunay3D_SetAlphaVerts, METH_VARARGS,
   "V.SetAlphaVerts(int)\nC++: virtual void SetAlphaVerts(vtkTypeBool _arg)\n\nBoolean controls whether vertices are output for non-zero alpha\nvalues.\n"},
  {"GetAlphaVerts", PyvtkDelaunay3D_GetAlphaVerts, METH_VARARGS,
   "V.GetAlphaVerts() -> int\nC++: virtual vtkTypeBool GetAlphaVerts()\n\nBoolean controls whether vertices are output for non-zero alpha\nvalues.\n"},
  {"AlphaVertsOn", PyvtkDelaunay3D_AlphaVertsOn, METH_VARARGS,
   "V.AlphaVertsOn()\nC++: virtual void AlphaVertsOn()\n\nBoolean controls whether vertices are output for non-zero alpha\nvalues.\n"},
  {"AlphaVertsOff", PyvtkDelaunay3D_AlphaVertsOff, METH_VARARGS,
   "V.AlphaVertsOff()\nC++: virtual void AlphaVertsOff()\n\nBoolean controls whether vertices are output for non-zero alpha\nvalues.\n"},
  {"SetTolerance", PyvtkDelaunay3D_SetTolerance, METH_VARARGS,
   "V.SetTolerance(float)\nC++: virtual void SetTolerance(double _arg)\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {"GetToleranceMinValue", PyvtkDelaunay3D_GetToleranceMinValue, METH_VARARGS,
   "V.GetToleranceMinValue() -> float\nC++: virtual double GetToleranceMinValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {"GetToleranceMaxValue", PyvtkDelaunay3D_GetToleranceMaxValue, METH_VARARGS,
   "V.GetToleranceMaxValue() -> float\nC++: virtual double GetToleranceMaxValue()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {"GetTolerance", PyvtkDelaunay3D_GetTolerance, METH_VARARGS,
   "V.GetTolerance() -> float\nC++: virtual double GetTolerance()\n\nSpecify a tolerance to control discarding of closely spaced\npoints. This tolerance is specified as a fraction of the diagonal\nlength of the bounding box of the points.\n"},
  {"SetOffset", PyvtkDelaunay3D_SetOffset, METH_VARARGS,
   "V.SetOffset(float)\nC++: virtual void SetOffset(double _arg)\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {"GetOffsetMinValue", PyvtkDelaunay3D_GetOffsetMinValue, METH_VARARGS,
   "V.GetOffsetMinValue() -> float\nC++: virtual double GetOffsetMinValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {"GetOffsetMaxValue", PyvtkDelaunay3D_GetOffsetMaxValue, METH_VARARGS,
   "V.GetOffsetMaxValue() -> float\nC++: virtual double GetOffsetMaxValue()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {"GetOffset", PyvtkDelaunay3D_GetOffset, METH_VARARGS,
   "V.GetOffset() -> float\nC++: virtual double GetOffset()\n\nSpecify a multiplier to control the size of the initial, bounding\nDelaunay triangulation.\n"},
  {"SetBoundingTriangulation", PyvtkDelaunay3D_SetBoundingTriangulation, METH_VARARGS,
   "V.SetBoundingTriangulation(int)\nC++: virtual void SetBoundingTriangulation(vtkTypeBool _arg)\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {"GetBoundingTriangulation", PyvtkDelaunay3D_GetBoundingTriangulation, METH_VARARGS,
   "V.GetBoundingTriangulation() -> int\nC++: virtual vtkTypeBool GetBoundingTriangulation()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {"BoundingTriangulationOn", PyvtkDelaunay3D_BoundingTriangulationOn, METH_VARARGS,
   "V.BoundingTriangulationOn()\nC++: virtual void BoundingTriangulationOn()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {"BoundingTriangulationOff", PyvtkDelaunay3D_BoundingTriangulationOff, METH_VARARGS,
   "V.BoundingTriangulationOff()\nC++: virtual void BoundingTriangulationOff()\n\nBoolean controls whether bounding triangulation points (and\nassociated triangles) are included in the output. (These are\nintroduced as an initial triangulation to begin the triangulation\nprocess. This feature is nice for debugging output.)\n"},
  {"SetLocator", PyvtkDelaunay3D_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkPointLocator is used.\n"},
  {"GetLocator", PyvtkDelaunay3D_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkPointLocator is used.\n"},
  {"CreateDefaultLocator", PyvtkDelaunay3D_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to eliminate \"coincident\" points.\n"},
  {"InsertPoint", PyvtkDelaunay3D_InsertPoint, METH_VARARGS,
   "V.InsertPoint(vtkUnstructuredGrid, vtkPoints, int, [float, float,\n    float], vtkIdList)\nC++: void InsertPoint(vtkUnstructuredGrid *Mesh,\n    vtkPoints *points, vtkIdType id, double x[3],\n    vtkIdList *holeTetras)\n\nThis is a helper method used with InitPointInsertion() to create\ntetrahedronalizations of points. Its purpose is to inject point\nat coordinates specified into tetrahedronalization. The point id\nis an index into the list of points in the mesh structure.  (See\nvtkDelaunay3D::InitPointInsertion() for more information.)  When\nyou have completed inserting points, traverse the mesh structure\nto extract desired tetrahedra (or tetra faces and edges).The\nholeTetras id list lists all the tetrahedra that are deleted\n(invalid) in the mesh structure.\n"},
  {"EndPointInsertion", PyvtkDelaunay3D_EndPointInsertion, METH_VARARGS,
   "V.EndPointInsertion()\nC++: void EndPointInsertion()\n\nInvoke this method after all points have been inserted. The\npurpose of the method is to clean up internal data structures.\nNote that the (vtkUnstructuredGrid *)Mesh returned from\nInitPointInsertion() is NOT deleted, you still are responsible\nfor cleaning that up.\n"},
  {"GetMTime", PyvtkDelaunay3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {"SetOutputPointsPrecision", PyvtkDelaunay3D_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkDelaunay3D_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDelaunay3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkDelaunay3D", // tp_name
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
  PyvtkDelaunay3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDelaunay3D_StaticNew()
{
  return vtkDelaunay3D::New();
}

PyObject *PyvtkDelaunay3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDelaunay3D_Type, PyvtkDelaunay3D_Methods,
    "vtkDelaunay3D",
 &PyvtkDelaunay3D_StaticNew);

  PyTypeObject *pytype = &PyvtkDelaunay3D_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDelaunay3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDelaunay3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDelaunay3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

