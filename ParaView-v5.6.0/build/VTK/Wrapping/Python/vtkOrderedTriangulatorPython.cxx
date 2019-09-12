// python wrapper for vtkOrderedTriangulator
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
#include "vtkOrderedTriangulator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrderedTriangulator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkOrderedTriangulator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkOrderedTriangulator_Doc =
  "vtkOrderedTriangulator - helper class to generate triangulations\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to generate unique triangulations of points. The\n"
  "uniqueness of the triangulation is controlled by the id of the\n"
  "inserted points in combination with a Delaunay criterion. The class\n"
  "is designed to be as fast as possible (since the algorithm can be\n"
  "slow) and uses block memory allocations to support rapid\n"
  "triangulation generation. Also, the assumption behind the class is\n"
  "that a maximum of hundreds of points are to be triangulated. If you\n"
  "desire more robust triangulation methods use\n"
  "vtkPolygon::Triangulate(), vtkDelaunay2D, or vtkDelaunay3D.\n\n"
  "@par Background: This work is documented in the technical paper: W.J.\n"
  "Schroeder, B. Geveci, M. Malaterre. Compatible Triangulations of\n"
  "Spatial Decompositions. In Proceedings of Visualization 2004, IEEE\n"
  "Press October 2004.\n\n"
  "@par Background: Delaunay triangulations are unique assuming a random\n"
  "distribution of input points. The 3D Delaunay criterion is as\n"
  "follows: the circumsphere of each tetrahedron contains no other\n"
  "points of the triangulation except for the four points defining the\n"
  "tetrahedron.  In application this property is hard to satisfy because\n"
  "objects like cubes are defined by eight points all sharing the same\n"
  "circumsphere (center and radius); hence the Delaunay triangulation is\n"
  "not unique.  These so-called degenerate situations are typically\n"
  "resolved by arbitrary selecting a triangulation. This code does\n"
  "something different: it resolves degenerate triangulations by\n"
  "modifying the \"InCircumsphere\" method to use a slightly smaller\n"
  "radius. Hence, degenerate points are always considered \"out\" of the\n"
  "circumsphere. This, in combination with an ordering (based on id) of\n"
  "the input points, guarantees a unique triangulation.\n\n"
  "@par Background: There is another related characteristic of Delaunay\n"
  "triangulations. Given a N-dimensional Delaunay triangulation, points\n"
  "laying on a (N-1) dimensional plane also form a (N-1) Delaunay\n"
  "triangulation. This means for example, that if a 3D cell is defined\n"
  "by a set of (2D) planar faces, then the face triangulations are\n"
  "Delaunay. Combining this with the method to generate unique\n"
  "triangulations described previously, the triangulations on the face\n"
  "are guaranteed unique. This fact can be used to triangulate 3D\n"
  "objects in such a way to guarantee compatible face triangulations.\n"
  "This is a very useful fact for parallel processing, or performing\n"
  "operations like clipping that require compatible triangulations\n"
  "across 3D cell faces. (See vtkClipVolume for an example.)\n\n"
  "@par Background: A special feature of this class is that it can\n"
  "generate triangulation templates on the fly. If template\n"
  "triangulation is enabled, then the ordered triangulator will first\n"
  "triangulate the cell using the slower ordered Delaunay approach, and\n"
  "then store the result as a template. Later, if the same cell type and\n"
  "cell configuration is encountered, then the template is reused which\n"
  "greatly speeds the triangulation.\n\n"
  "@warning\n"
  "Duplicate vertices will be ignored, i.e., if two points have the same\n"
  "coordinates the second one is discarded. The implications are that\n"
  "the user of this class must prevent duplicate points. Because the\n"
  "precision of this algorithm is double, it's also a good idea to merge\n"
  "points that are within some epsilon of one another.\n\n"
  "@warning\n"
  "The triangulation is performed using the parametric coordinates of\n"
  "the inserted points. Therefore the bounds (see InitTriangulation())\n"
  "should represent the range of the parametric coordinates of the\n"
  "inserted points.\n\n"
  "@sa\n"
  "vtkDelaunay2D vtkDelaunay3D vtkPolygon\n\n";


static PyObject *
PyvtkOrderedTriangulator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrderedTriangulator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrderedTriangulator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrderedTriangulator *tempr = vtkOrderedTriangulator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrderedTriangulator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrderedTriangulator::NewInstance());

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
PyvtkOrderedTriangulator_InitTriangulation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->InitTriangulation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkOrderedTriangulator::InitTriangulation(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InitTriangulation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->InitTriangulation(temp0, temp1);
    }
    else
    {
      op->vtkOrderedTriangulator::InitTriangulation(temp0, temp1);
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
PyvtkOrderedTriangulator_InitTriangulation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkOrderedTriangulator_InitTriangulation_s1(self, args);
    case 2:
      return PyvtkOrderedTriangulator_InitTriangulation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InitTriangulation");
  return nullptr;
}



static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3) :
      op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3));

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4) :
      op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkOrderedTriangulator::InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkOrderedTriangulator_InsertPoint_s1(self, args);
    case 5:
      return PyvtkOrderedTriangulator_InsertPoint_s2(self, args);
    case 6:
      return PyvtkOrderedTriangulator_InsertPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return nullptr;
}



static PyObject *
PyvtkOrderedTriangulator_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Triangulate();
    }
    else
    {
      op->vtkOrderedTriangulator::Triangulate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_TemplateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

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
      op->TemplateTriangulate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrderedTriangulator::TemplateTriangulate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UpdatePointType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePointType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdatePointType(temp0, temp1);
    }
    else
    {
      op->vtkOrderedTriangulator::UpdatePointType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPointPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointPosition(temp0) :
      op->vtkOrderedTriangulator::GetPointPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPointLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointLocation(temp0) :
      op->vtkOrderedTriangulator::GetPointLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetPointId(temp0) :
      op->vtkOrderedTriangulator::GetPointId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkOrderedTriangulator::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetUseTemplates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTemplates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTemplates(temp0);
    }
    else
    {
      op->vtkOrderedTriangulator::SetUseTemplates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetUseTemplates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTemplates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTemplates() :
      op->vtkOrderedTriangulator::GetUseTemplates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTemplatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTemplatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTemplatesOn();
    }
    else
    {
      op->vtkOrderedTriangulator::UseTemplatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTemplatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTemplatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTemplatesOff();
    }
    else
    {
      op->vtkOrderedTriangulator::UseTemplatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetPreSorted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreSorted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreSorted(temp0);
    }
    else
    {
      op->vtkOrderedTriangulator::SetPreSorted(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetPreSorted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreSorted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreSorted() :
      op->vtkOrderedTriangulator::GetPreSorted());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_PreSortedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSortedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreSortedOn();
    }
    else
    {
      op->vtkOrderedTriangulator::PreSortedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_PreSortedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSortedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreSortedOff();
    }
    else
    {
      op->vtkOrderedTriangulator::PreSortedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_SetUseTwoSortIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTwoSortIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTwoSortIds(temp0);
    }
    else
    {
      op->vtkOrderedTriangulator::SetUseTwoSortIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetUseTwoSortIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTwoSortIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseTwoSortIds() :
      op->vtkOrderedTriangulator::GetUseTwoSortIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTwoSortIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTwoSortIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTwoSortIdsOn();
    }
    else
    {
      op->vtkOrderedTriangulator::UseTwoSortIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_UseTwoSortIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTwoSortIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTwoSortIdsOff();
    }
    else
    {
      op->vtkOrderedTriangulator::UseTwoSortIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetTetras(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkUnstructuredGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetTetras(temp0, temp1) :
      op->vtkOrderedTriangulator::GetTetras(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_AddTetras_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkUnstructuredGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnstructuredGrid"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTetras(temp0, temp1) :
      op->vtkOrderedTriangulator::AddTetras(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTetras(temp0, temp1) :
      op->vtkOrderedTriangulator::AddTetras(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkIncrementalPointLocator *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkIdType temp6;
  vtkCellData *temp7 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetValue(temp6) &&
      ap.GetVTKObject(temp7, "vtkCellData"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTetras(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkOrderedTriangulator::AddTetras(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTetras_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTetras");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTetras(temp0, temp1, temp2) :
      op->vtkOrderedTriangulator::AddTetras(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrderedTriangulator_AddTetras_Methods[] = {
  {nullptr, PyvtkOrderedTriangulator_AddTetras_s1, METH_VARARGS,
   "@iV *vtkUnstructuredGrid"},
  {nullptr, PyvtkOrderedTriangulator_AddTetras_s2, METH_VARARGS,
   "@iV *vtkCellArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOrderedTriangulator_AddTetras(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOrderedTriangulator_AddTetras_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkOrderedTriangulator_AddTetras_s3(self, args);
    case 3:
      return PyvtkOrderedTriangulator_AddTetras_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddTetras");
  return nullptr;
}



static PyObject *
PyvtkOrderedTriangulator_AddTriangles_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTriangles(temp0) :
      op->vtkOrderedTriangulator::AddTriangles(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTriangles_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  vtkIdType temp0;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddTriangles(temp0, temp1) :
      op->vtkOrderedTriangulator::AddTriangles(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrderedTriangulator_AddTriangles(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOrderedTriangulator_AddTriangles_s1(self, args);
    case 2:
      return PyvtkOrderedTriangulator_AddTriangles_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddTriangles");
  return nullptr;
}



static PyObject *
PyvtkOrderedTriangulator_InitTetraTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTetraTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTetraTraversal();
    }
    else
    {
      op->vtkOrderedTriangulator::InitTetraTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrderedTriangulator_GetNextTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrderedTriangulator *op = static_cast<vtkOrderedTriangulator *>(vp);

  int temp0;
  vtkTetra *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTetra") &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextTetra(temp0, temp1, temp2, temp3) :
      op->vtkOrderedTriangulator::GetNextTetra(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrderedTriangulator_Methods[] = {
  {"IsTypeOf", PyvtkOrderedTriangulator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrderedTriangulator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrderedTriangulator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkOrderedTriangulator\nC++: static vtkOrderedTriangulator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrderedTriangulator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkOrderedTriangulator\nC++: vtkOrderedTriangulator *NewInstance()\n\n"},
  {"InitTriangulation", PyvtkOrderedTriangulator_InitTriangulation, METH_VARARGS,
   "V.InitTriangulation(float, float, float, float, float, float, int)\nC++: void InitTriangulation(double xmin, double xmax, double ymin,\n     double ymax, double zmin, double zmax, int numPts)\nV.InitTriangulation([float, float, float, float, float, float],\n    int)\nC++: void InitTriangulation(double bounds[6], int numPts)\n\nInitialize the triangulation process. Provide a bounding box and\nthe maximum number of points to be inserted. Note that since the\ntriangulation is performed using parametric coordinates (see\nInsertPoint()) the bounds should be represent the range of the\nparametric coordinates inserted.\n\\post no_point_inserted: GetNumberOfPoints()==0\n"},
  {"InsertPoint", PyvtkOrderedTriangulator_InsertPoint, METH_VARARGS,
   "V.InsertPoint(int, [float, float, float], [float, float, float],\n    int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, double x[3], double p[3],\n     int type)\nV.InsertPoint(int, int, [float, float, float], [float, float,\n    float], int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, vtkIdType sortid,\n    double x[3], double p[3], int type)\nV.InsertPoint(int, int, int, [float, float, float], [float, float,\n     float], int) -> int\nC++: vtkIdType InsertPoint(vtkIdType id, vtkIdType sortid,\n    vtkIdType sortid2, double x[3], double p[3], int type)\n\nFor each point to be inserted, provide an id, a position x,\nparametric coordinate p, and whether the point is inside\n(type=0), outside (type=1), or on the boundary (type=2). You must\ncall InitTriangulation() prior to invoking this method. Make sure\nthat the number of points inserted does not exceed the numPts\nspecified in InitTriangulation(). Also note that the \"id\" can be\nany integer and can be greater than numPts. It is used to create\ntetras (in AddTetras()) with the appropriate connectivity ids.\nThe method returns an internal id that can be used prior to the\nTriangulate() method to update the type of the point with\nUpdatePointType(). (Note: the algorithm triangulated with the\nparametric coordinate p[3] and creates tetras with the global\ncoordinate x[3]. The parametric coordinates and global\ncoordinates may be the same.)\n"},
  {"Triangulate", PyvtkOrderedTriangulator_Triangulate, METH_VARARGS,
   "V.Triangulate()\nC++: void Triangulate()\n\nPerform the triangulation. (Complete all calls to InsertPoint()\nprior to invoking this method.) A special version is available\nwhen templates should be used.\n"},
  {"TemplateTriangulate", PyvtkOrderedTriangulator_TemplateTriangulate, METH_VARARGS,
   "V.TemplateTriangulate(int, int, int)\nC++: void TemplateTriangulate(int cellType, int numPts,\n    int numEdges)\n\nPerform the triangulation. (Complete all calls to InsertPoint()\nprior to invoking this method.) A special version is available\nwhen templates should be used.\n"},
  {"UpdatePointType", PyvtkOrderedTriangulator_UpdatePointType, METH_VARARGS,
   "V.UpdatePointType(int, int)\nC++: void UpdatePointType(vtkIdType internalId, int type)\n\nUpdate the point type. This is useful when the merging of nearly\ncoincident points is performed. The id is the internal id\nreturned from InsertPoint(). The method should be invoked prior\nto the Triangulate method. The type is specified as inside\n(type=0), outside (type=1), or on the boundary (type=2).\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {"GetPointPosition", PyvtkOrderedTriangulator_GetPointPosition, METH_VARARGS,
   "V.GetPointPosition(int) -> (float, ...)\nC++: double *GetPointPosition(vtkIdType internalId)\n\nReturn the parametric coordinates of point `internalId'. It\nassumes that the point has already been inserted. The method\nshould be invoked prior to the Triangulate method.\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {"GetPointLocation", PyvtkOrderedTriangulator_GetPointLocation, METH_VARARGS,
   "V.GetPointLocation(int) -> (float, ...)\nC++: double *GetPointLocation(vtkIdType internalId)\n\nReturn the global coordinates of point `internalId'. It assumes\nthat the point has already been inserted. The method should be\ninvoked prior to the Triangulate method.\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {"GetPointId", PyvtkOrderedTriangulator_GetPointId, METH_VARARGS,
   "V.GetPointId(int) -> int\nC++: vtkIdType GetPointId(vtkIdType internalId)\n\nReturn the Id of point `internalId'. This id is the one passed in\nargument of InsertPoint. It assumes that the point has already\nbeen inserted. The method should be invoked prior to the\nTriangulate method.\n\\pre valid_range: internalId>=0 &&\n    internalId<this->GetNumberOfPoints()\n"},
  {"GetNumberOfPoints", PyvtkOrderedTriangulator_GetNumberOfPoints, METH_VARARGS,
   "V.GetNumberOfPoints() -> int\nC++: virtual int GetNumberOfPoints()\n\nReturn the number of inserted points.\n"},
  {"SetUseTemplates", PyvtkOrderedTriangulator_SetUseTemplates, METH_VARARGS,
   "V.SetUseTemplates(int)\nC++: virtual void SetUseTemplates(vtkTypeBool _arg)\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {"GetUseTemplates", PyvtkOrderedTriangulator_GetUseTemplates, METH_VARARGS,
   "V.GetUseTemplates() -> int\nC++: virtual vtkTypeBool GetUseTemplates()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {"UseTemplatesOn", PyvtkOrderedTriangulator_UseTemplatesOn, METH_VARARGS,
   "V.UseTemplatesOn()\nC++: virtual void UseTemplatesOn()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {"UseTemplatesOff", PyvtkOrderedTriangulator_UseTemplatesOff, METH_VARARGS,
   "V.UseTemplatesOff()\nC++: virtual void UseTemplatesOff()\n\nIf this flag is set, then the ordered triangulator will create\nand use templates for the triangulation. To use templates, the\nTemplateTriangulate() method should be called when appropriate.\n(Note: the TemplateTriangulate() method works for complete\n(interior) cells without extra points due to intersection, etc.)\n"},
  {"SetPreSorted", PyvtkOrderedTriangulator_SetPreSorted, METH_VARARGS,
   "V.SetPreSorted(int)\nC++: virtual void SetPreSorted(vtkTypeBool _arg)\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {"GetPreSorted", PyvtkOrderedTriangulator_GetPreSorted, METH_VARARGS,
   "V.GetPreSorted() -> int\nC++: virtual vtkTypeBool GetPreSorted()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {"PreSortedOn", PyvtkOrderedTriangulator_PreSortedOn, METH_VARARGS,
   "V.PreSortedOn()\nC++: virtual void PreSortedOn()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {"PreSortedOff", PyvtkOrderedTriangulator_PreSortedOff, METH_VARARGS,
   "V.PreSortedOff()\nC++: virtual void PreSortedOff()\n\nBoolean indicates whether the points have been pre-sorted. If\npre-sorted is enabled, the points are not sorted on point id. By\ndefault, presorted is off. (The point id is defined in\nInsertPoint().)\n"},
  {"SetUseTwoSortIds", PyvtkOrderedTriangulator_SetUseTwoSortIds, METH_VARARGS,
   "V.SetUseTwoSortIds(int)\nC++: virtual void SetUseTwoSortIds(vtkTypeBool _arg)\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {"GetUseTwoSortIds", PyvtkOrderedTriangulator_GetUseTwoSortIds, METH_VARARGS,
   "V.GetUseTwoSortIds() -> int\nC++: virtual vtkTypeBool GetUseTwoSortIds()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {"UseTwoSortIdsOn", PyvtkOrderedTriangulator_UseTwoSortIdsOn, METH_VARARGS,
   "V.UseTwoSortIdsOn()\nC++: virtual void UseTwoSortIdsOn()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {"UseTwoSortIdsOff", PyvtkOrderedTriangulator_UseTwoSortIdsOff, METH_VARARGS,
   "V.UseTwoSortIdsOff()\nC++: virtual void UseTwoSortIdsOff()\n\nTells the triangulator that a second sort id is provided for each\npoint and should also be considered when sorting.\n"},
  {"GetTetras", PyvtkOrderedTriangulator_GetTetras, METH_VARARGS,
   "V.GetTetras(int, vtkUnstructuredGrid) -> int\nC++: vtkIdType GetTetras(int classification,\n    vtkUnstructuredGrid *ugrid)\n\nInitialize and add the tetras and points from the triangulation\nto the unstructured grid provided.  New points are created and\nthe mesh is allocated. (This method differs from AddTetras() in\nthat it inserts points and cells; AddTetras only adds the tetra\ncells.) The tetrahdera added are of the type specified\n(0=inside,1=outside,2=all). Inside tetrahedron are those whose\npoints are classified \"inside\" or on the \"boundary.\"  Outside\ntetrahedron have at least one point classified \"outside.\"  The\nmethod returns the number of tetrahedrahedron of the type\nrequested.\n"},
  {"AddTetras", PyvtkOrderedTriangulator_AddTetras, METH_VARARGS,
   "V.AddTetras(int, vtkUnstructuredGrid) -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkUnstructuredGrid *ugrid)\nV.AddTetras(int, vtkCellArray) -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkCellArray *connectivity)\nV.AddTetras(int, vtkIncrementalPointLocator, vtkCellArray,\n    vtkPointData, vtkPointData, vtkCellData, int, vtkCellData)\n    -> int\nC++: vtkIdType AddTetras(int classification,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *outConnectivity, vtkPointData *inPD,\n    vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId,\n    vtkCellData *outCD)\nV.AddTetras(int, vtkIdList, vtkPoints) -> int\nC++: vtkIdType AddTetras(int classification, vtkIdList *ptIds,\n    vtkPoints *pts)\n\nAdd the tetras to the unstructured grid provided. The\nunstructured grid is assumed to have been initialized (with\nAllocate()) and points set (with SetPoints()). The tetrahdera\nadded are of the type specified (0=inside,1=outside,2=all).\nInside tetrahedron are those whose points are classified \"inside\"\nor on the \"boundary.\" Outside tetrahedron have at least one point\nclassified \"outside.\" The method returns the number of\ntetrahedrahedron of the type requested.\n"},
  {"AddTriangles", PyvtkOrderedTriangulator_AddTriangles, METH_VARARGS,
   "V.AddTriangles(vtkCellArray) -> int\nC++: vtkIdType AddTriangles(vtkCellArray *connectivity)\nV.AddTriangles(int, vtkCellArray) -> int\nC++: vtkIdType AddTriangles(vtkIdType id,\n    vtkCellArray *connectivity)\n\nAdd the triangle faces classified (2=boundary) to the\nconnectivity list provided. The method returns the number of\ntriangles.\n"},
  {"InitTetraTraversal", PyvtkOrderedTriangulator_InitTetraTraversal, METH_VARARGS,
   "V.InitTetraTraversal()\nC++: void InitTetraTraversal()\n\nMethods to get one tetra at a time. Start with\nInitTetraTraversal() and then invoke GetNextTetra() until the\nmethod returns 0.\n"},
  {"GetNextTetra", PyvtkOrderedTriangulator_GetNextTetra, METH_VARARGS,
   "V.GetNextTetra(int, vtkTetra, vtkDataArray, vtkDoubleArray) -> int\nC++: int GetNextTetra(int classification, vtkTetra *tet,\n    vtkDataArray *cellScalars, vtkDoubleArray *tetScalars)\n\nMethods to get one tetra at a time. Start with\nInitTetraTraversal() and then invoke GetNextTetra() until the\nmethod returns 0. cellScalars are point-centered scalars on the\noriginal cell. tetScalars are point-centered scalars on the\ntetra: the values will be copied from cellScalars.\n\\pre tet_exists: tet!=0\n\\pre cellScalars_exists: cellScalars!=0\n\\pre tetScalars_exists: tetScalars!=0\n\\pre tetScalars_valid_size: tetScalars->GetNumberOfTuples()==4\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkOrderedTriangulator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkOrderedTriangulator", // tp_name
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
  PyvtkOrderedTriangulator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrderedTriangulator_StaticNew()
{
  return vtkOrderedTriangulator::New();
}

PyObject *PyvtkOrderedTriangulator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkOrderedTriangulator_Type, PyvtkOrderedTriangulator_Methods,
    "vtkOrderedTriangulator",
 &PyvtkOrderedTriangulator_StaticNew);

  PyTypeObject *pytype = &PyvtkOrderedTriangulator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrderedTriangulator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrderedTriangulator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrderedTriangulator", o) != 0)
  {
    Py_DECREF(o);
  }

}

