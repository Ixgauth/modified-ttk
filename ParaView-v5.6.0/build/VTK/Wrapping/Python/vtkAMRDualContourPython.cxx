// python wrapper for vtkAMRDualContour
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
#include "vtkAMRDualContour.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRDualContour(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAMRDualContour_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static const char *PyvtkAMRDualContour_Doc =
  "vtkAMRDualContour - Extract particles and analyse them.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This filter takes a cell data volume fraction and generates a\n"
  "polydata surface.  It also performs connectivity on the particles and\n"
  "generates a particle index as part of the cell data of the output. \n"
  "It computes the volume of each particle from the volume fraction.\n\n"
  "This will turn on validation and debug i/o of the filter.{.cpp}\n"
  "#define vtkAMRDualContourDEBUG\n"
  "#define vtkAMRDualContourPROFILE\n\n";


static PyObject *
PyvtkAMRDualContour_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRDualContour::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRDualContour::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRDualContour *tempr = vtkAMRDualContour::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRDualContour *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRDualContour::NewInstance());

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
PyvtkAMRDualContour_SetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsoValue(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetIsoValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetIsoValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsoValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIsoValue() :
      op->vtkAMRDualContour::GetIsoValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableCapping(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetEnableCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableCapping() :
      op->vtkAMRDualContour::GetEnableCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableCappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableCappingOn();
    }
    else
    {
      op->vtkAMRDualContour::EnableCappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableCappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableCappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableCappingOff();
    }
    else
    {
      op->vtkAMRDualContour::EnableCappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableDegenerateCells(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetEnableDegenerateCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableDegenerateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableDegenerateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableDegenerateCells() :
      op->vtkAMRDualContour::GetEnableDegenerateCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableDegenerateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOn();
    }
    else
    {
      op->vtkAMRDualContour::EnableDegenerateCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableDegenerateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableDegenerateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableDegenerateCellsOff();
    }
    else
    {
      op->vtkAMRDualContour::EnableDegenerateCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableMultiProcessCommunication(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetEnableMultiProcessCommunication(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableMultiProcessCommunication(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMultiProcessCommunication");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableMultiProcessCommunication() :
      op->vtkAMRDualContour::GetEnableMultiProcessCommunication());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMultiProcessCommunicationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMultiProcessCommunicationOn();
    }
    else
    {
      op->vtkAMRDualContour::EnableMultiProcessCommunicationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMultiProcessCommunicationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMultiProcessCommunicationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMultiProcessCommunicationOff();
    }
    else
    {
      op->vtkAMRDualContour::EnableMultiProcessCommunicationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableMergePoints(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetEnableMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetEnableMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableMergePoints() :
      op->vtkAMRDualContour::GetEnableMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMergePointsOn();
    }
    else
    {
      op->vtkAMRDualContour::EnableMergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_EnableMergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableMergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableMergePointsOff();
    }
    else
    {
      op->vtkAMRDualContour::EnableMergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetTriangulateCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulateCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulateCap(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetTriangulateCap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetTriangulateCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulateCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulateCap() :
      op->vtkAMRDualContour::GetTriangulateCap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_TriangulateCapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateCapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateCapOn();
    }
    else
    {
      op->vtkAMRDualContour::TriangulateCapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_TriangulateCapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulateCapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulateCapOff();
    }
    else
    {
      op->vtkAMRDualContour::TriangulateCapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipGhostCopy(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetSkipGhostCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetSkipGhostCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipGhostCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipGhostCopy() :
      op->vtkAMRDualContour::GetSkipGhostCopy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SkipGhostCopyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipGhostCopyOn();
    }
    else
    {
      op->vtkAMRDualContour::SkipGhostCopyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SkipGhostCopyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipGhostCopyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipGhostCopyOff();
    }
    else
    {
      op->vtkAMRDualContour::SkipGhostCopyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRDualContour::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRDualContour_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRDualContour *op = static_cast<vtkAMRDualContour *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRDualContour::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRDualContour_Methods[] = {
  {"IsTypeOf", PyvtkAMRDualContour_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRDualContour_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRDualContour_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAMRDualContour\nC++: static vtkAMRDualContour *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRDualContour_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAMRDualContour\nC++: vtkAMRDualContour *NewInstance()\n\n"},
  {"SetIsoValue", PyvtkAMRDualContour_SetIsoValue, METH_VARARGS,
   "V.SetIsoValue(float)\nC++: virtual void SetIsoValue(double _arg)\n\n"},
  {"GetIsoValue", PyvtkAMRDualContour_GetIsoValue, METH_VARARGS,
   "V.GetIsoValue() -> float\nC++: virtual double GetIsoValue()\n\n"},
  {"SetEnableCapping", PyvtkAMRDualContour_SetEnableCapping, METH_VARARGS,
   "V.SetEnableCapping(int)\nC++: virtual void SetEnableCapping(int _arg)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"GetEnableCapping", PyvtkAMRDualContour_GetEnableCapping, METH_VARARGS,
   "V.GetEnableCapping() -> int\nC++: virtual int GetEnableCapping()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableCappingOn", PyvtkAMRDualContour_EnableCappingOn, METH_VARARGS,
   "V.EnableCappingOn()\nC++: virtual void EnableCappingOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableCappingOff", PyvtkAMRDualContour_EnableCappingOff, METH_VARARGS,
   "V.EnableCappingOff()\nC++: virtual void EnableCappingOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"SetEnableDegenerateCells", PyvtkAMRDualContour_SetEnableDegenerateCells, METH_VARARGS,
   "V.SetEnableDegenerateCells(int)\nC++: virtual void SetEnableDegenerateCells(int _arg)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"GetEnableDegenerateCells", PyvtkAMRDualContour_GetEnableDegenerateCells, METH_VARARGS,
   "V.GetEnableDegenerateCells() -> int\nC++: virtual int GetEnableDegenerateCells()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableDegenerateCellsOn", PyvtkAMRDualContour_EnableDegenerateCellsOn, METH_VARARGS,
   "V.EnableDegenerateCellsOn()\nC++: virtual void EnableDegenerateCellsOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableDegenerateCellsOff", PyvtkAMRDualContour_EnableDegenerateCellsOff, METH_VARARGS,
   "V.EnableDegenerateCellsOff()\nC++: virtual void EnableDegenerateCellsOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"SetEnableMultiProcessCommunication", PyvtkAMRDualContour_SetEnableMultiProcessCommunication, METH_VARARGS,
   "V.SetEnableMultiProcessCommunication(int)\nC++: virtual void SetEnableMultiProcessCommunication(int _arg)\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"GetEnableMultiProcessCommunication", PyvtkAMRDualContour_GetEnableMultiProcessCommunication, METH_VARARGS,
   "V.GetEnableMultiProcessCommunication() -> int\nC++: virtual int GetEnableMultiProcessCommunication()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableMultiProcessCommunicationOn", PyvtkAMRDualContour_EnableMultiProcessCommunicationOn, METH_VARARGS,
   "V.EnableMultiProcessCommunicationOn()\nC++: virtual void EnableMultiProcessCommunicationOn()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"EnableMultiProcessCommunicationOff", PyvtkAMRDualContour_EnableMultiProcessCommunicationOff, METH_VARARGS,
   "V.EnableMultiProcessCommunicationOff()\nC++: virtual void EnableMultiProcessCommunicationOff()\n\nThese are to evaluate performances. You can turn off capping,\ndegenerate cells and multiprocess communication to see how they\naffect speed of execution. Degenerate cells is the meshing\nbetween levels in the grid.\n"},
  {"SetEnableMergePoints", PyvtkAMRDualContour_SetEnableMergePoints, METH_VARARGS,
   "V.SetEnableMergePoints(int)\nC++: virtual void SetEnableMergePoints(int _arg)\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"GetEnableMergePoints", PyvtkAMRDualContour_GetEnableMergePoints, METH_VARARGS,
   "V.GetEnableMergePoints() -> int\nC++: virtual int GetEnableMergePoints()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"EnableMergePointsOn", PyvtkAMRDualContour_EnableMergePointsOn, METH_VARARGS,
   "V.EnableMergePointsOn()\nC++: virtual void EnableMergePointsOn()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"EnableMergePointsOff", PyvtkAMRDualContour_EnableMergePointsOff, METH_VARARGS,
   "V.EnableMergePointsOff()\nC++: virtual void EnableMergePointsOff()\n\nThis flag causes blocks to share locators so there are no\nboundary edges between blocks. It does not eliminate boundary\nedges between processes.\n"},
  {"SetTriangulateCap", PyvtkAMRDualContour_SetTriangulateCap, METH_VARARGS,
   "V.SetTriangulateCap(int)\nC++: virtual void SetTriangulateCap(int _arg)\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {"GetTriangulateCap", PyvtkAMRDualContour_GetTriangulateCap, METH_VARARGS,
   "V.GetTriangulateCap() -> int\nC++: virtual int GetTriangulateCap()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {"TriangulateCapOn", PyvtkAMRDualContour_TriangulateCapOn, METH_VARARGS,
   "V.TriangulateCapOn()\nC++: virtual void TriangulateCapOn()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {"TriangulateCapOff", PyvtkAMRDualContour_TriangulateCapOff, METH_VARARGS,
   "V.TriangulateCapOff()\nC++: virtual void TriangulateCapOff()\n\nA flag that causes the polygons on the capping surfaces to be\ntriagulated.\n"},
  {"SetSkipGhostCopy", PyvtkAMRDualContour_SetSkipGhostCopy, METH_VARARGS,
   "V.SetSkipGhostCopy(int)\nC++: virtual void SetSkipGhostCopy(int _arg)\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {"GetSkipGhostCopy", PyvtkAMRDualContour_GetSkipGhostCopy, METH_VARARGS,
   "V.GetSkipGhostCopy() -> int\nC++: virtual int GetSkipGhostCopy()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {"SkipGhostCopyOn", PyvtkAMRDualContour_SkipGhostCopyOn, METH_VARARGS,
   "V.SkipGhostCopyOn()\nC++: virtual void SkipGhostCopyOn()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {"SkipGhostCopyOff", PyvtkAMRDualContour_SkipGhostCopyOff, METH_VARARGS,
   "V.SkipGhostCopyOff()\nC++: virtual void SkipGhostCopyOff()\n\nAn option to turn off copying ghost values across process\nboundaries. If the ghost values are already correct, then the\nextra communication is not necessary.  If this assumption is\nwrong, this option will produce cracks / seams.\n"},
  {"GetController", PyvtkAMRDualContour_GetController, METH_VARARGS,
   "V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetController", PyvtkAMRDualContour_SetController, METH_VARARGS,
   "V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAMRDualContour_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVVTKExtensionsDefaultPython.vtkAMRDualContour", // tp_name
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
  PyvtkAMRDualContour_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRDualContour_StaticNew()
{
  return vtkAMRDualContour::New();
}

PyObject *PyvtkAMRDualContour_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAMRDualContour_Type, PyvtkAMRDualContour_Methods,
    "vtkAMRDualContour",
 &PyvtkAMRDualContour_StaticNew);

  PyTypeObject *pytype = &PyvtkAMRDualContour_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRDualContour(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRDualContour_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRDualContour", o) != 0)
  {
    Py_DECREF(o);
  }

}

