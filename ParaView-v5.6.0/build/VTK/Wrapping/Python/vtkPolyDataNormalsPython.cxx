// python wrapper for vtkPolyDataNormals
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
#include "vtkPolyDataNormals.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataNormals(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataNormals_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPolyDataNormals_Doc =
  "vtkPolyDataNormals - compute normals for polygonal mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataNormals is a filter that computes point and/or cell\n"
  "normals for a polygonal mesh. The user specifies if they would like\n"
  "the point and/or cell normals to be computed by setting the\n"
  "ComputeCellNormals and ComputePointNormals flags.\n\n"
  "The computed normals (a vtkFloatArray) are set to be the active\n"
  "normals (using SetNormals()) of the PointData and/or the CellData\n"
  "(respectively) of the output PolyData. The name of these arrays is\n"
  "\"Normals\", so they can be retrieved either with\n"
  "vtkArrayDownCast(output->GetPointData()->GetNormals()) or with\n"
  "vtkArrayDownCast(output->GetPointData()->GetArray(\"Normals\"))\n\n"
  "The filter can reorder polygons to insure consistent orientation\n"
  "across polygon neighbors. Sharp edges can be split and points\n"
  "duplicated with separate normals to give crisp (rendered) surface\n"
  "definition. It is also possible to globally flip the normal\n"
  "orientation.\n\n"
  "The algorithm works by determining normals for each polygon and then\n"
  "averaging them at shared points. When sharp edges are present, the\n"
  "edges are split and new points generated to prevent blurry edges (due\n"
  "to Gouraud shading).\n\n"
  "@warning\n"
  "Normals are computed only for polygons and triangle strips. Normals\n"
  "are not computed for lines or vertices.\n\n"
  "@warning\n"
  "Triangle strips are broken up into triangle polygons. You may want to\n"
  "restrip the triangles.\n\n"
  "@sa\n"
  "For high-performance rendering, you could use\n"
  "vtkTriangleMeshPointNormals if you know that you have a triangle mesh\n"
  "which does not require splitting nor consistency check on the cell\n"
  "orientations.\n\n";


static PyObject *
PyvtkPolyDataNormals_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataNormals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataNormals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataNormals *tempr = vtkPolyDataNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataNormals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataNormals::NewInstance());

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
PyvtkPolyDataNormals_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

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
      op->vtkPolyDataNormals::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkPolyDataNormals::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkPolyDataNormals::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkPolyDataNormals::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitting(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetSplitting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitting() :
      op->vtkPolyDataNormals::GetSplitting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SplittingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplittingOn();
    }
    else
    {
      op->vtkPolyDataNormals::SplittingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SplittingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplittingOff();
    }
    else
    {
      op->vtkPolyDataNormals::SplittingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConsistency(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetConsistency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetConsistency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConsistency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConsistency() :
      op->vtkPolyDataNormals::GetConsistency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ConsistencyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsistencyOn();
    }
    else
    {
      op->vtkPolyDataNormals::ConsistencyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ConsistencyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConsistencyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConsistencyOff();
    }
    else
    {
      op->vtkPolyDataNormals::ConsistencyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoOrientNormals(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetAutoOrientNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetAutoOrientNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoOrientNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoOrientNormals() :
      op->vtkPolyDataNormals::GetAutoOrientNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_AutoOrientNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoOrientNormalsOn();
    }
    else
    {
      op->vtkPolyDataNormals::AutoOrientNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_AutoOrientNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoOrientNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoOrientNormalsOff();
    }
    else
    {
      op->vtkPolyDataNormals::AutoOrientNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetComputePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputePointNormals(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetComputePointNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetComputePointNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputePointNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputePointNormals() :
      op->vtkPolyDataNormals::GetComputePointNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputePointNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePointNormalsOn();
    }
    else
    {
      op->vtkPolyDataNormals::ComputePointNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputePointNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePointNormalsOff();
    }
    else
    {
      op->vtkPolyDataNormals::ComputePointNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetComputeCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCellNormals(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetComputeCellNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetComputeCellNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeCellNormals() :
      op->vtkPolyDataNormals::GetComputeCellNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputeCellNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellNormalsOn();
    }
    else
    {
      op->vtkPolyDataNormals::ComputeCellNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_ComputeCellNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellNormalsOff();
    }
    else
    {
      op->vtkPolyDataNormals::ComputeCellNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
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
      op->vtkPolyDataNormals::SetFlipNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkPolyDataNormals::GetFlipNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOn();
    }
    else
    {
      op->vtkPolyDataNormals::FlipNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOff();
    }
    else
    {
      op->vtkPolyDataNormals::FlipNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldTraversal(temp0);
    }
    else
    {
      op->vtkPolyDataNormals::SetNonManifoldTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetNonManifoldTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldTraversal() :
      op->vtkPolyDataNormals::GetNonManifoldTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NonManifoldTraversalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldTraversalOn();
    }
    else
    {
      op->vtkPolyDataNormals::NonManifoldTraversalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_NonManifoldTraversalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldTraversalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldTraversalOff();
    }
    else
    {
      op->vtkPolyDataNormals::NonManifoldTraversalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

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
      op->vtkPolyDataNormals::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkPolyDataNormals::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkPolyDataNormals::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataNormals_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataNormals *op = static_cast<vtkPolyDataNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPolyDataNormals::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataNormals_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataNormals_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataNormals_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataNormals_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataNormals\nC++: static vtkPolyDataNormals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataNormals_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataNormals\nC++: vtkPolyDataNormals *NewInstance()\n\n"},
  {"SetFeatureAngle", PyvtkPolyDataNormals_SetFeatureAngle, METH_VARARGS,
   "V.SetFeatureAngle(float)\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {"GetFeatureAngleMinValue", PyvtkPolyDataNormals_GetFeatureAngleMinValue, METH_VARARGS,
   "V.GetFeatureAngleMinValue() -> float\nC++: virtual double GetFeatureAngleMinValue()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {"GetFeatureAngleMaxValue", PyvtkPolyDataNormals_GetFeatureAngleMaxValue, METH_VARARGS,
   "V.GetFeatureAngleMaxValue() -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {"GetFeatureAngle", PyvtkPolyDataNormals_GetFeatureAngle, METH_VARARGS,
   "V.GetFeatureAngle() -> float\nC++: virtual double GetFeatureAngle()\n\nSpecify the angle that defines a sharp edge. If the difference in\nangle across neighboring polygons is greater than this value, the\nshared edge is considered \"sharp\".\n"},
  {"SetSplitting", PyvtkPolyDataNormals_SetSplitting, METH_VARARGS,
   "V.SetSplitting(int)\nC++: virtual void SetSplitting(vtkTypeBool _arg)\n\nTurn on/off the splitting of sharp edges.\n"},
  {"GetSplitting", PyvtkPolyDataNormals_GetSplitting, METH_VARARGS,
   "V.GetSplitting() -> int\nC++: virtual vtkTypeBool GetSplitting()\n\nTurn on/off the splitting of sharp edges.\n"},
  {"SplittingOn", PyvtkPolyDataNormals_SplittingOn, METH_VARARGS,
   "V.SplittingOn()\nC++: virtual void SplittingOn()\n\nTurn on/off the splitting of sharp edges.\n"},
  {"SplittingOff", PyvtkPolyDataNormals_SplittingOff, METH_VARARGS,
   "V.SplittingOff()\nC++: virtual void SplittingOff()\n\nTurn on/off the splitting of sharp edges.\n"},
  {"SetConsistency", PyvtkPolyDataNormals_SetConsistency, METH_VARARGS,
   "V.SetConsistency(int)\nC++: virtual void SetConsistency(vtkTypeBool _arg)\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {"GetConsistency", PyvtkPolyDataNormals_GetConsistency, METH_VARARGS,
   "V.GetConsistency() -> int\nC++: virtual vtkTypeBool GetConsistency()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {"ConsistencyOn", PyvtkPolyDataNormals_ConsistencyOn, METH_VARARGS,
   "V.ConsistencyOn()\nC++: virtual void ConsistencyOn()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {"ConsistencyOff", PyvtkPolyDataNormals_ConsistencyOff, METH_VARARGS,
   "V.ConsistencyOff()\nC++: virtual void ConsistencyOff()\n\nTurn on/off the enforcement of consistent polygon ordering.\n"},
  {"SetAutoOrientNormals", PyvtkPolyDataNormals_SetAutoOrientNormals, METH_VARARGS,
   "V.SetAutoOrientNormals(int)\nC++: virtual void SetAutoOrientNormals(vtkTypeBool _arg)\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {"GetAutoOrientNormals", PyvtkPolyDataNormals_GetAutoOrientNormals, METH_VARARGS,
   "V.GetAutoOrientNormals() -> int\nC++: virtual vtkTypeBool GetAutoOrientNormals()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {"AutoOrientNormalsOn", PyvtkPolyDataNormals_AutoOrientNormalsOn, METH_VARARGS,
   "V.AutoOrientNormalsOn()\nC++: virtual void AutoOrientNormalsOn()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {"AutoOrientNormalsOff", PyvtkPolyDataNormals_AutoOrientNormalsOff, METH_VARARGS,
   "V.AutoOrientNormalsOff()\nC++: virtual void AutoOrientNormalsOff()\n\nTurn on/off the automatic determination of correct normal\norientation. NOTE: This assumes a completely closed surface (i.e.\nno boundary edges) and no non-manifold edges. If these\nconstraints do not hold, all bets are off. This option adds some\ncomputational complexity, and is useful if you don't want to have\nto inspect the rendered image to determine whether to turn on the\nFlipNormals flag. However, this flag can work with the\nFlipNormals flag, and if both are set, all the normals in the\noutput will point \"inward\".\n"},
  {"SetComputePointNormals", PyvtkPolyDataNormals_SetComputePointNormals, METH_VARARGS,
   "V.SetComputePointNormals(int)\nC++: virtual void SetComputePointNormals(vtkTypeBool _arg)\n\nTurn on/off the computation of point normals.\n"},
  {"GetComputePointNormals", PyvtkPolyDataNormals_GetComputePointNormals, METH_VARARGS,
   "V.GetComputePointNormals() -> int\nC++: virtual vtkTypeBool GetComputePointNormals()\n\nTurn on/off the computation of point normals.\n"},
  {"ComputePointNormalsOn", PyvtkPolyDataNormals_ComputePointNormalsOn, METH_VARARGS,
   "V.ComputePointNormalsOn()\nC++: virtual void ComputePointNormalsOn()\n\nTurn on/off the computation of point normals.\n"},
  {"ComputePointNormalsOff", PyvtkPolyDataNormals_ComputePointNormalsOff, METH_VARARGS,
   "V.ComputePointNormalsOff()\nC++: virtual void ComputePointNormalsOff()\n\nTurn on/off the computation of point normals.\n"},
  {"SetComputeCellNormals", PyvtkPolyDataNormals_SetComputeCellNormals, METH_VARARGS,
   "V.SetComputeCellNormals(int)\nC++: virtual void SetComputeCellNormals(vtkTypeBool _arg)\n\nTurn on/off the computation of cell normals.\n"},
  {"GetComputeCellNormals", PyvtkPolyDataNormals_GetComputeCellNormals, METH_VARARGS,
   "V.GetComputeCellNormals() -> int\nC++: virtual vtkTypeBool GetComputeCellNormals()\n\nTurn on/off the computation of cell normals.\n"},
  {"ComputeCellNormalsOn", PyvtkPolyDataNormals_ComputeCellNormalsOn, METH_VARARGS,
   "V.ComputeCellNormalsOn()\nC++: virtual void ComputeCellNormalsOn()\n\nTurn on/off the computation of cell normals.\n"},
  {"ComputeCellNormalsOff", PyvtkPolyDataNormals_ComputeCellNormalsOff, METH_VARARGS,
   "V.ComputeCellNormalsOff()\nC++: virtual void ComputeCellNormalsOff()\n\nTurn on/off the computation of cell normals.\n"},
  {"SetFlipNormals", PyvtkPolyDataNormals_SetFlipNormals, METH_VARARGS,
   "V.SetFlipNormals(int)\nC++: virtual void SetFlipNormals(vtkTypeBool _arg)\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {"GetFlipNormals", PyvtkPolyDataNormals_GetFlipNormals, METH_VARARGS,
   "V.GetFlipNormals() -> int\nC++: virtual vtkTypeBool GetFlipNormals()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {"FlipNormalsOn", PyvtkPolyDataNormals_FlipNormalsOn, METH_VARARGS,
   "V.FlipNormalsOn()\nC++: virtual void FlipNormalsOn()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {"FlipNormalsOff", PyvtkPolyDataNormals_FlipNormalsOff, METH_VARARGS,
   "V.FlipNormalsOff()\nC++: virtual void FlipNormalsOff()\n\nTurn on/off the global flipping of normal orientation. Flipping\nreverves the meaning of front and back for Frontface and Backface\nculling in vtkProperty.  Flipping modifies both the normal\ndirection and the order of a cell's points.\n"},
  {"SetNonManifoldTraversal", PyvtkPolyDataNormals_SetNonManifoldTraversal, METH_VARARGS,
   "V.SetNonManifoldTraversal(int)\nC++: virtual void SetNonManifoldTraversal(vtkTypeBool _arg)\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {"GetNonManifoldTraversal", PyvtkPolyDataNormals_GetNonManifoldTraversal, METH_VARARGS,
   "V.GetNonManifoldTraversal() -> int\nC++: virtual vtkTypeBool GetNonManifoldTraversal()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {"NonManifoldTraversalOn", PyvtkPolyDataNormals_NonManifoldTraversalOn, METH_VARARGS,
   "V.NonManifoldTraversalOn()\nC++: virtual void NonManifoldTraversalOn()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {"NonManifoldTraversalOff", PyvtkPolyDataNormals_NonManifoldTraversalOff, METH_VARARGS,
   "V.NonManifoldTraversalOff()\nC++: virtual void NonManifoldTraversalOff()\n\nTurn on/off traversal across non-manifold edges. This will\nprevent problems where the consistency of polygonal ordering is\ncorrupted due to topological loops.\n"},
  {"SetOutputPointsPrecision", PyvtkPolyDataNormals_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkPolyDataNormals_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMinValue() -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkPolyDataNormals_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "V.GetOutputPointsPrecisionMaxValue() -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkPolyDataNormals_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataNormals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkPolyDataNormals", // tp_name
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
  PyvtkPolyDataNormals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataNormals_StaticNew()
{
  return vtkPolyDataNormals::New();
}

PyObject *PyvtkPolyDataNormals_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataNormals_Type, PyvtkPolyDataNormals_Methods,
    "vtkPolyDataNormals",
 &PyvtkPolyDataNormals_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataNormals_Type;

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

void PyVTKAddFile_vtkPolyDataNormals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataNormals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataNormals", o) != 0)
  {
    Py_DECREF(o);
  }

}

