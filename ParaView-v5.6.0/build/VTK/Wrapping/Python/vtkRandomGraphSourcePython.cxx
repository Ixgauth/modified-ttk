// python wrapper for vtkRandomGraphSource
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
#include "vtkRandomGraphSource.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomGraphSource(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkRandomGraphSource_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkRandomGraphSource_Doc =
  "vtkRandomGraphSource - a graph with random edges\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "Generates a graph with a specified number of vertices, with the\n"
  "density of edges specified by either an exact number of edges or the\n"
  "probability of an edge.  You may additionally specify whether to\n"
  "begin with a random tree (which enforces graph connectivity).\n\n";


static PyObject *
PyvtkRandomGraphSource_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomGraphSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomGraphSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomGraphSource *tempr = vtkRandomGraphSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomGraphSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomGraphSource::NewInstance());

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
PyvtkRandomGraphSource_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkRandomGraphSource::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVertices(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetNumberOfVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerticesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVerticesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfVerticesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkRandomGraphSource::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfEdges(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetNumberOfEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMinValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgesMaxValue() :
      op->vtkRandomGraphSource::GetNumberOfEdgesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbability() :
      op->vtkRandomGraphSource::GetEdgeProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeProbability(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgeProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMinValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeProbabilityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeProbabilityMaxValue() :
      op->vtkRandomGraphSource::GetEdgeProbabilityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeEdgeWeights(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetIncludeEdgeWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetIncludeEdgeWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeEdgeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeEdgeWeights() :
      op->vtkRandomGraphSource::GetIncludeEdgeWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeEdgeWeightsOn();
    }
    else
    {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_IncludeEdgeWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeEdgeWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeEdgeWeightsOff();
    }
    else
    {
      op->vtkRandomGraphSource::IncludeEdgeWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWeightArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgeWeightArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgeWeightArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWeightArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWeightArrayName() :
      op->vtkRandomGraphSource::GetEdgeWeightArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirected(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetDirected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkRandomGraphSource::GetDirected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOn();
    }
    else
    {
      op->vtkRandomGraphSource::DirectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOff();
    }
    else
    {
      op->vtkRandomGraphSource::DirectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseEdgeProbability(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetUseEdgeProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetUseEdgeProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeProbability() :
      op->vtkRandomGraphSource::GetUseEdgeProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeProbabilityOn();
    }
    else
    {
      op->vtkRandomGraphSource::UseEdgeProbabilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_UseEdgeProbabilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeProbabilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeProbabilityOff();
    }
    else
    {
      op->vtkRandomGraphSource::UseEdgeProbabilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartWithTree(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetStartWithTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetStartWithTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartWithTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStartWithTree() :
      op->vtkRandomGraphSource::GetStartWithTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWithTreeOn();
    }
    else
    {
      op->vtkRandomGraphSource::StartWithTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_StartWithTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWithTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWithTreeOff();
    }
    else
    {
      op->vtkRandomGraphSource::StartWithTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowSelfLoops(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetAllowSelfLoops(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowSelfLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowSelfLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowSelfLoops() :
      op->vtkRandomGraphSource::GetAllowSelfLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOn();
    }
    else
    {
      op->vtkRandomGraphSource::AllowSelfLoopsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowSelfLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowSelfLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowSelfLoopsOff();
    }
    else
    {
      op->vtkRandomGraphSource::AllowSelfLoopsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowParallelEdges(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetAllowParallelEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetAllowParallelEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowParallelEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowParallelEdges() :
      op->vtkRandomGraphSource::GetAllowParallelEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowParallelEdgesOn();
    }
    else
    {
      op->vtkRandomGraphSource::AllowParallelEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_AllowParallelEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowParallelEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowParallelEdgesOff();
    }
    else
    {
      op->vtkRandomGraphSource::AllowParallelEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePedigreeIds(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetGeneratePedigreeIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetGeneratePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePedigreeIds() :
      op->vtkRandomGraphSource::GetGeneratePedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOn();
    }
    else
    {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GeneratePedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePedigreeIdsOff();
    }
    else
    {
      op->vtkRandomGraphSource::GeneratePedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexPedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetVertexPedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexPedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetVertexPedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgePedigreeIdArrayName(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetEdgePedigreeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePedigreeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgePedigreeIdArrayName() :
      op->vtkRandomGraphSource::GetEdgePedigreeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_SetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkRandomGraphSource::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomGraphSource_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomGraphSource *op = static_cast<vtkRandomGraphSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkRandomGraphSource::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomGraphSource_Methods[] = {
  {"IsTypeOf", PyvtkRandomGraphSource_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomGraphSource_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomGraphSource_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkRandomGraphSource\nC++: static vtkRandomGraphSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomGraphSource_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkRandomGraphSource\nC++: vtkRandomGraphSource *NewInstance()\n\n"},
  {"GetNumberOfVertices", PyvtkRandomGraphSource_GetNumberOfVertices, METH_VARARGS,
   "V.GetNumberOfVertices() -> int\nC++: virtual int GetNumberOfVertices()\n\nThe number of vertices in the graph.\n"},
  {"SetNumberOfVertices", PyvtkRandomGraphSource_SetNumberOfVertices, METH_VARARGS,
   "V.SetNumberOfVertices(int)\nC++: virtual void SetNumberOfVertices(int _arg)\n\nThe number of vertices in the graph.\n"},
  {"GetNumberOfVerticesMinValue", PyvtkRandomGraphSource_GetNumberOfVerticesMinValue, METH_VARARGS,
   "V.GetNumberOfVerticesMinValue() -> int\nC++: virtual int GetNumberOfVerticesMinValue()\n\nThe number of vertices in the graph.\n"},
  {"GetNumberOfVerticesMaxValue", PyvtkRandomGraphSource_GetNumberOfVerticesMaxValue, METH_VARARGS,
   "V.GetNumberOfVerticesMaxValue() -> int\nC++: virtual int GetNumberOfVerticesMaxValue()\n\nThe number of vertices in the graph.\n"},
  {"GetNumberOfEdges", PyvtkRandomGraphSource_GetNumberOfEdges, METH_VARARGS,
   "V.GetNumberOfEdges() -> int\nC++: virtual int GetNumberOfEdges()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {"SetNumberOfEdges", PyvtkRandomGraphSource_SetNumberOfEdges, METH_VARARGS,
   "V.SetNumberOfEdges(int)\nC++: virtual void SetNumberOfEdges(int _arg)\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {"GetNumberOfEdgesMinValue", PyvtkRandomGraphSource_GetNumberOfEdgesMinValue, METH_VARARGS,
   "V.GetNumberOfEdgesMinValue() -> int\nC++: virtual int GetNumberOfEdgesMinValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {"GetNumberOfEdgesMaxValue", PyvtkRandomGraphSource_GetNumberOfEdgesMaxValue, METH_VARARGS,
   "V.GetNumberOfEdgesMaxValue() -> int\nC++: virtual int GetNumberOfEdgesMaxValue()\n\nIf UseEdgeProbability is off, creates a graph with the specified\nnumber of edges.  Duplicate (parallel) edges are allowed.\n"},
  {"GetEdgeProbability", PyvtkRandomGraphSource_GetEdgeProbability, METH_VARARGS,
   "V.GetEdgeProbability() -> float\nC++: virtual double GetEdgeProbability()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {"SetEdgeProbability", PyvtkRandomGraphSource_SetEdgeProbability, METH_VARARGS,
   "V.SetEdgeProbability(float)\nC++: virtual void SetEdgeProbability(double _arg)\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {"GetEdgeProbabilityMinValue", PyvtkRandomGraphSource_GetEdgeProbabilityMinValue, METH_VARARGS,
   "V.GetEdgeProbabilityMinValue() -> float\nC++: virtual double GetEdgeProbabilityMinValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {"GetEdgeProbabilityMaxValue", PyvtkRandomGraphSource_GetEdgeProbabilityMaxValue, METH_VARARGS,
   "V.GetEdgeProbabilityMaxValue() -> float\nC++: virtual double GetEdgeProbabilityMaxValue()\n\nIf UseEdgeProbability is on, adds an edge with this probability\nbetween 0 and 1 for each pair of vertices in the graph.\n"},
  {"SetIncludeEdgeWeights", PyvtkRandomGraphSource_SetIncludeEdgeWeights, METH_VARARGS,
   "V.SetIncludeEdgeWeights(bool)\nC++: virtual void SetIncludeEdgeWeights(bool _arg)\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {"GetIncludeEdgeWeights", PyvtkRandomGraphSource_GetIncludeEdgeWeights, METH_VARARGS,
   "V.GetIncludeEdgeWeights() -> bool\nC++: virtual bool GetIncludeEdgeWeights()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {"IncludeEdgeWeightsOn", PyvtkRandomGraphSource_IncludeEdgeWeightsOn, METH_VARARGS,
   "V.IncludeEdgeWeightsOn()\nC++: virtual void IncludeEdgeWeightsOn()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {"IncludeEdgeWeightsOff", PyvtkRandomGraphSource_IncludeEdgeWeightsOff, METH_VARARGS,
   "V.IncludeEdgeWeightsOff()\nC++: virtual void IncludeEdgeWeightsOff()\n\nWhen set, includes edge weights in an array named \"edge_weights\".\nDefaults to off.  Weights are random between 0 and 1.\n"},
  {"SetEdgeWeightArrayName", PyvtkRandomGraphSource_SetEdgeWeightArrayName, METH_VARARGS,
   "V.SetEdgeWeightArrayName(string)\nC++: virtual void SetEdgeWeightArrayName(const char *_arg)\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {"GetEdgeWeightArrayName", PyvtkRandomGraphSource_GetEdgeWeightArrayName, METH_VARARGS,
   "V.GetEdgeWeightArrayName() -> string\nC++: virtual char *GetEdgeWeightArrayName()\n\nThe name of the edge weight array. Default \"edge weight\".\n"},
  {"SetDirected", PyvtkRandomGraphSource_SetDirected, METH_VARARGS,
   "V.SetDirected(bool)\nC++: virtual void SetDirected(bool _arg)\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {"GetDirected", PyvtkRandomGraphSource_GetDirected, METH_VARARGS,
   "V.GetDirected() -> bool\nC++: virtual bool GetDirected()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {"DirectedOn", PyvtkRandomGraphSource_DirectedOn, METH_VARARGS,
   "V.DirectedOn()\nC++: virtual void DirectedOn()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {"DirectedOff", PyvtkRandomGraphSource_DirectedOff, METH_VARARGS,
   "V.DirectedOff()\nC++: virtual void DirectedOff()\n\nWhen set, creates a directed graph, as opposed to an undirected\ngraph.\n"},
  {"SetUseEdgeProbability", PyvtkRandomGraphSource_SetUseEdgeProbability, METH_VARARGS,
   "V.SetUseEdgeProbability(bool)\nC++: virtual void SetUseEdgeProbability(bool _arg)\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {"GetUseEdgeProbability", PyvtkRandomGraphSource_GetUseEdgeProbability, METH_VARARGS,
   "V.GetUseEdgeProbability() -> bool\nC++: virtual bool GetUseEdgeProbability()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {"UseEdgeProbabilityOn", PyvtkRandomGraphSource_UseEdgeProbabilityOn, METH_VARARGS,
   "V.UseEdgeProbabilityOn()\nC++: virtual void UseEdgeProbabilityOn()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {"UseEdgeProbabilityOff", PyvtkRandomGraphSource_UseEdgeProbabilityOff, METH_VARARGS,
   "V.UseEdgeProbabilityOff()\nC++: virtual void UseEdgeProbabilityOff()\n\nWhen set, uses the EdgeProbability parameter to determine the\ndensity of edges.  Otherwise, NumberOfEdges is used.\n"},
  {"SetStartWithTree", PyvtkRandomGraphSource_SetStartWithTree, METH_VARARGS,
   "V.SetStartWithTree(bool)\nC++: virtual void SetStartWithTree(bool _arg)\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {"GetStartWithTree", PyvtkRandomGraphSource_GetStartWithTree, METH_VARARGS,
   "V.GetStartWithTree() -> bool\nC++: virtual bool GetStartWithTree()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {"StartWithTreeOn", PyvtkRandomGraphSource_StartWithTreeOn, METH_VARARGS,
   "V.StartWithTreeOn()\nC++: virtual void StartWithTreeOn()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {"StartWithTreeOff", PyvtkRandomGraphSource_StartWithTreeOff, METH_VARARGS,
   "V.StartWithTreeOff()\nC++: virtual void StartWithTreeOff()\n\nWhen set, builds a random tree structure first, then adds\nadditional random edges.\n"},
  {"SetAllowSelfLoops", PyvtkRandomGraphSource_SetAllowSelfLoops, METH_VARARGS,
   "V.SetAllowSelfLoops(bool)\nC++: virtual void SetAllowSelfLoops(bool _arg)\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {"GetAllowSelfLoops", PyvtkRandomGraphSource_GetAllowSelfLoops, METH_VARARGS,
   "V.GetAllowSelfLoops() -> bool\nC++: virtual bool GetAllowSelfLoops()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {"AllowSelfLoopsOn", PyvtkRandomGraphSource_AllowSelfLoopsOn, METH_VARARGS,
   "V.AllowSelfLoopsOn()\nC++: virtual void AllowSelfLoopsOn()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {"AllowSelfLoopsOff", PyvtkRandomGraphSource_AllowSelfLoopsOff, METH_VARARGS,
   "V.AllowSelfLoopsOff()\nC++: virtual void AllowSelfLoopsOff()\n\nIf this flag is set to true, edges where the source and target\nvertex are the same can be generated.  The default is to forbid\nsuch loops.\n"},
  {"SetAllowParallelEdges", PyvtkRandomGraphSource_SetAllowParallelEdges, METH_VARARGS,
   "V.SetAllowParallelEdges(bool)\nC++: virtual void SetAllowParallelEdges(bool _arg)\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {"GetAllowParallelEdges", PyvtkRandomGraphSource_GetAllowParallelEdges, METH_VARARGS,
   "V.GetAllowParallelEdges() -> bool\nC++: virtual bool GetAllowParallelEdges()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {"AllowParallelEdgesOn", PyvtkRandomGraphSource_AllowParallelEdgesOn, METH_VARARGS,
   "V.AllowParallelEdgesOn()\nC++: virtual void AllowParallelEdgesOn()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {"AllowParallelEdgesOff", PyvtkRandomGraphSource_AllowParallelEdgesOff, METH_VARARGS,
   "V.AllowParallelEdgesOff()\nC++: virtual void AllowParallelEdgesOff()\n\nWhen set, multiple edges from a source to a target vertex are\nallowed. The default is to forbid such loops.\n"},
  {"SetGeneratePedigreeIds", PyvtkRandomGraphSource_SetGeneratePedigreeIds, METH_VARARGS,
   "V.SetGeneratePedigreeIds(bool)\nC++: virtual void SetGeneratePedigreeIds(bool _arg)\n\nAdd pedigree ids to vertex and edge data.\n"},
  {"GetGeneratePedigreeIds", PyvtkRandomGraphSource_GetGeneratePedigreeIds, METH_VARARGS,
   "V.GetGeneratePedigreeIds() -> bool\nC++: virtual bool GetGeneratePedigreeIds()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {"GeneratePedigreeIdsOn", PyvtkRandomGraphSource_GeneratePedigreeIdsOn, METH_VARARGS,
   "V.GeneratePedigreeIdsOn()\nC++: virtual void GeneratePedigreeIdsOn()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {"GeneratePedigreeIdsOff", PyvtkRandomGraphSource_GeneratePedigreeIdsOff, METH_VARARGS,
   "V.GeneratePedigreeIdsOff()\nC++: virtual void GeneratePedigreeIdsOff()\n\nAdd pedigree ids to vertex and edge data.\n"},
  {"SetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_SetVertexPedigreeIdArrayName, METH_VARARGS,
   "V.SetVertexPedigreeIdArrayName(string)\nC++: virtual void SetVertexPedigreeIdArrayName(const char *_arg)\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {"GetVertexPedigreeIdArrayName", PyvtkRandomGraphSource_GetVertexPedigreeIdArrayName, METH_VARARGS,
   "V.GetVertexPedigreeIdArrayName() -> string\nC++: virtual char *GetVertexPedigreeIdArrayName()\n\nThe name of the vertex pedigree id array. Default \"vertex id\".\n"},
  {"SetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_SetEdgePedigreeIdArrayName, METH_VARARGS,
   "V.SetEdgePedigreeIdArrayName(string)\nC++: virtual void SetEdgePedigreeIdArrayName(const char *_arg)\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {"GetEdgePedigreeIdArrayName", PyvtkRandomGraphSource_GetEdgePedigreeIdArrayName, METH_VARARGS,
   "V.GetEdgePedigreeIdArrayName() -> string\nC++: virtual char *GetEdgePedigreeIdArrayName()\n\nThe name of the edge pedigree id array. Default \"edge id\".\n"},
  {"SetSeed", PyvtkRandomGraphSource_SetSeed, METH_VARARGS,
   "V.SetSeed(int)\nC++: virtual void SetSeed(int _arg)\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {"GetSeed", PyvtkRandomGraphSource_GetSeed, METH_VARARGS,
   "V.GetSeed() -> int\nC++: virtual int GetSeed()\n\nControl the seed used for pseudo-random-number generation. This\nensures that vtkRandomGraphSource can produce repeatable results.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkRandomGraphSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkRandomGraphSource", // tp_name
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
  PyvtkRandomGraphSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomGraphSource_StaticNew()
{
  return vtkRandomGraphSource::New();
}

PyObject *PyvtkRandomGraphSource_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkRandomGraphSource_Type, PyvtkRandomGraphSource_Methods,
    "vtkRandomGraphSource",
 &PyvtkRandomGraphSource_StaticNew);

  PyTypeObject *pytype = &PyvtkRandomGraphSource_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomGraphSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomGraphSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomGraphSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

