// python wrapper for vtkPolyDataPointSampler
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
#include "vtkPolyDataPointSampler.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkPolyDataPointSampler_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkPolyDataPointSampler_Doc =
  "vtkPolyDataPointSampler - generate points from vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataPointSampler generates points from input vtkPolyData. The\n"
  "points are placed approximately a specified distance apart.\n\n"
  "This filter functions as follows. First, it regurgitates all input\n"
  "points, then samples all lines, plus edges associated with the input\n"
  "polygons and triangle strips to produce edge points. Finally, the\n"
  "interiors of polygons and triangle strips are subsampled to produce\n"
  "points.  All of these functiona can be enabled or disabled\n"
  "separately. Note that this algorithm only approximately generates\n"
  "points the specified distance apart. Generally the point density is\n"
  "finer than requested.\n\n"
  "@warning\n"
  "Point generation can be useful in a variety of applications. For\n"
  "example, generating seed points for glyphing or streamline\n"
  "generation. Another useful application is generating points for\n"
  "implicit modeling. In many cases implicit models can be more\n"
  "efficiently generated from points than from polygons or other\n"
  "primitives.\n\n"
  "@sa\n"
  "vtkImplicitModeller\n\n";


static PyObject *
PyvtkPolyDataPointSampler_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataPointSampler::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPointSampler::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataPointSampler *tempr = vtkPolyDataPointSampler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataPointSampler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPointSampler::NewInstance());

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
PyvtkPolyDataPointSampler_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMinValue() :
      op->vtkPolyDataPointSampler::GetDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMaxValue() :
      op->vtkPolyDataPointSampler::GetDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkPolyDataPointSampler::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertexPoints() :
      op->vtkPolyDataPointSampler::GetGenerateVertexPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertexPoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateVertexPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateEdgePoints() :
      op->vtkPolyDataPointSampler::GetGenerateEdgePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdgePoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateEdgePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateInteriorPoints() :
      op->vtkPolyDataPointSampler::GetGenerateInteriorPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateInteriorPoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateInteriorPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInteriorPointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInteriorPointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkPolyDataPointSampler::GetGenerateVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertices(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataPointSampler_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataPointSampler_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard macros for type information and printing.\n"},
  {"IsA", PyvtkPolyDataPointSampler_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard macros for type information and printing.\n"},
  {"SafeDownCast", PyvtkPolyDataPointSampler_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkPolyDataPointSampler\nC++: static vtkPolyDataPointSampler *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard macros for type information and printing.\n"},
  {"NewInstance", PyvtkPolyDataPointSampler_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *NewInstance()\n\nStandard macros for type information and printing.\n"},
  {"SetDistance", PyvtkPolyDataPointSampler_SetDistance, METH_VARARGS,
   "V.SetDistance(float)\nC++: virtual void SetDistance(double _arg)\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {"GetDistanceMinValue", PyvtkPolyDataPointSampler_GetDistanceMinValue, METH_VARARGS,
   "V.GetDistanceMinValue() -> float\nC++: virtual double GetDistanceMinValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {"GetDistanceMaxValue", PyvtkPolyDataPointSampler_GetDistanceMaxValue, METH_VARARGS,
   "V.GetDistanceMaxValue() -> float\nC++: virtual double GetDistanceMaxValue()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {"GetDistance", PyvtkPolyDataPointSampler_GetDistance, METH_VARARGS,
   "V.GetDistance() -> float\nC++: virtual double GetDistance()\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {"GetGenerateVertexPoints", PyvtkPolyDataPointSampler_GetGenerateVertexPoints, METH_VARARGS,
   "V.GetGenerateVertexPoints() -> int\nC++: virtual vtkTypeBool GetGenerateVertexPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {"SetGenerateVertexPoints", PyvtkPolyDataPointSampler_SetGenerateVertexPoints, METH_VARARGS,
   "V.SetGenerateVertexPoints(int)\nC++: virtual void SetGenerateVertexPoints(vtkTypeBool _arg)\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {"GenerateVertexPointsOn", PyvtkPolyDataPointSampler_GenerateVertexPointsOn, METH_VARARGS,
   "V.GenerateVertexPointsOn()\nC++: virtual void GenerateVertexPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {"GenerateVertexPointsOff", PyvtkPolyDataPointSampler_GenerateVertexPointsOff, METH_VARARGS,
   "V.GenerateVertexPointsOff()\nC++: virtual void GenerateVertexPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {"GetGenerateEdgePoints", PyvtkPolyDataPointSampler_GetGenerateEdgePoints, METH_VARARGS,
   "V.GetGenerateEdgePoints() -> int\nC++: virtual vtkTypeBool GetGenerateEdgePoints()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {"SetGenerateEdgePoints", PyvtkPolyDataPointSampler_SetGenerateEdgePoints, METH_VARARGS,
   "V.SetGenerateEdgePoints(int)\nC++: virtual void SetGenerateEdgePoints(vtkTypeBool _arg)\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {"GenerateEdgePointsOn", PyvtkPolyDataPointSampler_GenerateEdgePointsOn, METH_VARARGS,
   "V.GenerateEdgePointsOn()\nC++: virtual void GenerateEdgePointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {"GenerateEdgePointsOff", PyvtkPolyDataPointSampler_GenerateEdgePointsOff, METH_VARARGS,
   "V.GenerateEdgePointsOff()\nC++: virtual void GenerateEdgePointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {"GetGenerateInteriorPoints", PyvtkPolyDataPointSampler_GetGenerateInteriorPoints, METH_VARARGS,
   "V.GetGenerateInteriorPoints() -> int\nC++: virtual vtkTypeBool GetGenerateInteriorPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {"SetGenerateInteriorPoints", PyvtkPolyDataPointSampler_SetGenerateInteriorPoints, METH_VARARGS,
   "V.SetGenerateInteriorPoints(int)\nC++: virtual void SetGenerateInteriorPoints(vtkTypeBool _arg)\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {"GenerateInteriorPointsOn", PyvtkPolyDataPointSampler_GenerateInteriorPointsOn, METH_VARARGS,
   "V.GenerateInteriorPointsOn()\nC++: virtual void GenerateInteriorPointsOn()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {"GenerateInteriorPointsOff", PyvtkPolyDataPointSampler_GenerateInteriorPointsOff, METH_VARARGS,
   "V.GenerateInteriorPointsOff()\nC++: virtual void GenerateInteriorPointsOff()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {"GetGenerateVertices", PyvtkPolyDataPointSampler_GetGenerateVertices, METH_VARARGS,
   "V.GetGenerateVertices() -> int\nC++: virtual vtkTypeBool GetGenerateVertices()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {"SetGenerateVertices", PyvtkPolyDataPointSampler_SetGenerateVertices, METH_VARARGS,
   "V.SetGenerateVertices(int)\nC++: virtual void SetGenerateVertices(vtkTypeBool _arg)\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {"GenerateVerticesOn", PyvtkPolyDataPointSampler_GenerateVerticesOn, METH_VARARGS,
   "V.GenerateVerticesOn()\nC++: virtual void GenerateVerticesOn()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {"GenerateVerticesOff", PyvtkPolyDataPointSampler_GenerateVerticesOff, METH_VARARGS,
   "V.GenerateVerticesOff()\nC++: virtual void GenerateVerticesOff()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points. The default is true.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkPolyDataPointSampler_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkPolyDataPointSampler", // tp_name
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
  PyvtkPolyDataPointSampler_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataPointSampler_StaticNew()
{
  return vtkPolyDataPointSampler::New();
}

PyObject *PyvtkPolyDataPointSampler_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkPolyDataPointSampler_Type, PyvtkPolyDataPointSampler_Methods,
    "vtkPolyDataPointSampler",
 &PyvtkPolyDataPointSampler_StaticNew);

  PyTypeObject *pytype = &PyvtkPolyDataPointSampler_Type;

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

void PyVTKAddFile_vtkPolyDataPointSampler(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataPointSampler_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataPointSampler", o) != 0)
  {
    Py_DECREF(o);
  }

}

