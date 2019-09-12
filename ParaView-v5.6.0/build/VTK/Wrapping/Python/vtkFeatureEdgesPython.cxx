// python wrapper for vtkFeatureEdges
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
#include "vtkFeatureEdges.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFeatureEdges(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkFeatureEdges_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkFeatureEdges_Doc =
  "vtkFeatureEdges - extract boundary, non-manifold, and/or sharp edges\nfrom polygonal data\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFeatureEdges is a filter to extract special types of edges from\n"
  "input polygonal data. These edges are either 1) boundary (used by one\n"
  "polygon) or a line cell; 2) non-manifold (used by three or more\n"
  "polygons); 3) feature edges (edges used by two triangles and whose\n"
  "dihedral angle > FeatureAngle); or 4) manifold edges (edges used by\n"
  "exactly two polygons). These edges may be extracted in any\n"
  "combination. Edges may also be \"colored\" (i.e., scalar values\n"
  "assigned) based on edge type. The cell coloring is assigned to the\n"
  "cell data of the extracted edges.\n\n"
  "@warning\n"
  "To see the coloring of the liens you may have to set the ScalarMode\n"
  "instance variable of the mapper to SetScalarModeToUseCellData().\n"
  "(This is only a problem if there are point data scalars.)\n\n"
  "@sa\n"
  "vtkExtractEdges\n\n";


static PyObject *
PyvtkFeatureEdges_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFeatureEdges::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFeatureEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFeatureEdges *tempr = vtkFeatureEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFeatureEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFeatureEdges::NewInstance());

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
PyvtkFeatureEdges_SetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetBoundaryEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryEdges() :
      op->vtkFeatureEdges::GetBoundaryEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::BoundaryEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::BoundaryEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdges() :
      op->vtkFeatureEdges::GetFeatureEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::FeatureEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::FeatureEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

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
      op->vtkFeatureEdges::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkFeatureEdges::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkFeatureEdges::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkFeatureEdges::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetNonManifoldEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldEdges() :
      op->vtkFeatureEdges::GetNonManifoldEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::NonManifoldEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::NonManifoldEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManifoldEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetManifoldEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetManifoldEdges() :
      op->vtkFeatureEdges::GetManifoldEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManifoldEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::ManifoldEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManifoldEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::ManifoldEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColoring(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColoring() :
      op->vtkFeatureEdges::GetColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColoringOn();
    }
    else
    {
      op->vtkFeatureEdges::ColoringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColoringOff();
    }
    else
    {
      op->vtkFeatureEdges::ColoringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

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
      op->vtkFeatureEdges::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkFeatureEdges::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkFeatureEdges::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFeatureEdges::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

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
      op->vtkFeatureEdges::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkFeatureEdges::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFeatureEdges_Methods[] = {
  {"IsTypeOf", PyvtkFeatureEdges_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFeatureEdges_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFeatureEdges_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkFeatureEdges\nC++: static vtkFeatureEdges *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFeatureEdges_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkFeatureEdges\nC++: vtkFeatureEdges *NewInstance()\n\n"},
  {"SetBoundaryEdges", PyvtkFeatureEdges_SetBoundaryEdges, METH_VARARGS,
   "V.SetBoundaryEdges(int)\nC++: virtual void SetBoundaryEdges(vtkTypeBool _arg)\n\nTurn on/off the extraction of boundary edges.\n"},
  {"GetBoundaryEdges", PyvtkFeatureEdges_GetBoundaryEdges, METH_VARARGS,
   "V.GetBoundaryEdges() -> int\nC++: virtual vtkTypeBool GetBoundaryEdges()\n\nTurn on/off the extraction of boundary edges.\n"},
  {"BoundaryEdgesOn", PyvtkFeatureEdges_BoundaryEdgesOn, METH_VARARGS,
   "V.BoundaryEdgesOn()\nC++: virtual void BoundaryEdgesOn()\n\nTurn on/off the extraction of boundary edges.\n"},
  {"BoundaryEdgesOff", PyvtkFeatureEdges_BoundaryEdgesOff, METH_VARARGS,
   "V.BoundaryEdgesOff()\nC++: virtual void BoundaryEdgesOff()\n\nTurn on/off the extraction of boundary edges.\n"},
  {"SetFeatureEdges", PyvtkFeatureEdges_SetFeatureEdges, METH_VARARGS,
   "V.SetFeatureEdges(int)\nC++: virtual void SetFeatureEdges(vtkTypeBool _arg)\n\nTurn on/off the extraction of feature edges.\n"},
  {"GetFeatureEdges", PyvtkFeatureEdges_GetFeatureEdges, METH_VARARGS,
   "V.GetFeatureEdges() -> int\nC++: virtual vtkTypeBool GetFeatureEdges()\n\nTurn on/off the extraction of feature edges.\n"},
  {"FeatureEdgesOn", PyvtkFeatureEdges_FeatureEdgesOn, METH_VARARGS,
   "V.FeatureEdgesOn()\nC++: virtual void FeatureEdgesOn()\n\nTurn on/off the extraction of feature edges.\n"},
  {"FeatureEdgesOff", PyvtkFeatureEdges_FeatureEdgesOff, METH_VARARGS,
   "V.FeatureEdgesOff()\nC++: virtual void FeatureEdgesOff()\n\nTurn on/off the extraction of feature edges.\n"},
  {"SetFeatureAngle", PyvtkFeatureEdges_SetFeatureAngle, METH_VARARGS,
   "V.SetFeatureAngle(float)\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for extracting feature edges.\n"},
  {"GetFeatureAngleMinValue", PyvtkFeatureEdges_GetFeatureAngleMinValue, METH_VARARGS,
   "V.GetFeatureAngleMinValue() -> float\nC++: virtual double GetFeatureAngleMinValue()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {"GetFeatureAngleMaxValue", PyvtkFeatureEdges_GetFeatureAngleMaxValue, METH_VARARGS,
   "V.GetFeatureAngleMaxValue() -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {"GetFeatureAngle", PyvtkFeatureEdges_GetFeatureAngle, METH_VARARGS,
   "V.GetFeatureAngle() -> float\nC++: virtual double GetFeatureAngle()\n\nSpecify the feature angle for extracting feature edges.\n"},
  {"SetNonManifoldEdges", PyvtkFeatureEdges_SetNonManifoldEdges, METH_VARARGS,
   "V.SetNonManifoldEdges(int)\nC++: virtual void SetNonManifoldEdges(vtkTypeBool _arg)\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {"GetNonManifoldEdges", PyvtkFeatureEdges_GetNonManifoldEdges, METH_VARARGS,
   "V.GetNonManifoldEdges() -> int\nC++: virtual vtkTypeBool GetNonManifoldEdges()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {"NonManifoldEdgesOn", PyvtkFeatureEdges_NonManifoldEdgesOn, METH_VARARGS,
   "V.NonManifoldEdgesOn()\nC++: virtual void NonManifoldEdgesOn()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {"NonManifoldEdgesOff", PyvtkFeatureEdges_NonManifoldEdgesOff, METH_VARARGS,
   "V.NonManifoldEdgesOff()\nC++: virtual void NonManifoldEdgesOff()\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {"SetManifoldEdges", PyvtkFeatureEdges_SetManifoldEdges, METH_VARARGS,
   "V.SetManifoldEdges(int)\nC++: virtual void SetManifoldEdges(vtkTypeBool _arg)\n\nTurn on/off the extraction of manifold edges.\n"},
  {"GetManifoldEdges", PyvtkFeatureEdges_GetManifoldEdges, METH_VARARGS,
   "V.GetManifoldEdges() -> int\nC++: virtual vtkTypeBool GetManifoldEdges()\n\nTurn on/off the extraction of manifold edges.\n"},
  {"ManifoldEdgesOn", PyvtkFeatureEdges_ManifoldEdgesOn, METH_VARARGS,
   "V.ManifoldEdgesOn()\nC++: virtual void ManifoldEdgesOn()\n\nTurn on/off the extraction of manifold edges.\n"},
  {"ManifoldEdgesOff", PyvtkFeatureEdges_ManifoldEdgesOff, METH_VARARGS,
   "V.ManifoldEdgesOff()\nC++: virtual void ManifoldEdgesOff()\n\nTurn on/off the extraction of manifold edges.\n"},
  {"SetColoring", PyvtkFeatureEdges_SetColoring, METH_VARARGS,
   "V.SetColoring(int)\nC++: virtual void SetColoring(vtkTypeBool _arg)\n\nTurn on/off the coloring of edges by type.\n"},
  {"GetColoring", PyvtkFeatureEdges_GetColoring, METH_VARARGS,
   "V.GetColoring() -> int\nC++: virtual vtkTypeBool GetColoring()\n\nTurn on/off the coloring of edges by type.\n"},
  {"ColoringOn", PyvtkFeatureEdges_ColoringOn, METH_VARARGS,
   "V.ColoringOn()\nC++: virtual void ColoringOn()\n\nTurn on/off the coloring of edges by type.\n"},
  {"ColoringOff", PyvtkFeatureEdges_ColoringOff, METH_VARARGS,
   "V.ColoringOff()\nC++: virtual void ColoringOff()\n\nTurn on/off the coloring of edges by type.\n"},
  {"SetLocator", PyvtkFeatureEdges_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkFeatureEdges_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"CreateDefaultLocator", PyvtkFeatureEdges_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkFeatureEdges_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the locator.\n"},
  {"SetOutputPointsPrecision", PyvtkFeatureEdges_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkFeatureEdges_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkFeatureEdges_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkFeatureEdges", // tp_name
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
  PyvtkFeatureEdges_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFeatureEdges_StaticNew()
{
  return vtkFeatureEdges::New();
}

PyObject *PyvtkFeatureEdges_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkFeatureEdges_Type, PyvtkFeatureEdges_Methods,
    "vtkFeatureEdges",
 &PyvtkFeatureEdges_StaticNew);

  PyTypeObject *pytype = &PyvtkFeatureEdges_Type;

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

void PyVTKAddFile_vtkFeatureEdges(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFeatureEdges_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFeatureEdges", o) != 0)
  {
    Py_DECREF(o);
  }

}

