// python wrapper for vtkAdaptiveSubdivisionFilter
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
#include "vtkAdaptiveSubdivisionFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAdaptiveSubdivisionFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAdaptiveSubdivisionFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkAdaptiveSubdivisionFilter_Doc =
  "vtkAdaptiveSubdivisionFilter - subdivide triangles based on edge\nand/or area metrics\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkAdaptiveSubdivisionFilter is a filter that subdivides triangles\n"
  "based on maximum edge length and/or triangle area. It uses a simple\n"
  "case-based, multi-pass approach to repeatedly subdivide the input\n"
  "triangle mesh to meet the area and/or edge length criteria. New\n"
  "points may be inserted only on edges; depending on the number of\n"
  "edges to be subdivided a different number of triangles are inserted\n"
  "ranging from two (i.e., two triangles replace the original one) to\n"
  "four.\n\n"
  "Triangle subdivision is controlled by specifying a maximum edge\n"
  "length and/or triangle area that any given triangle may have.\n"
  "Subdivision proceeds until their criteria are satisfied. Note that\n"
  "using excessively small criteria values can produce enormous meshes\n"
  "with the possibility of exhausting system memory. Also, if you want\n"
  "to ignore a particular criterion value (e.g., triangle area) then\n"
  "simply set the criterion value to a very large value (e.g.,\n"
  "VTK_DOUBLE_MAX).\n\n"
  "An incremental point locator is used because as new points are\n"
  "created, a search is made to ensure that a point has not already been\n"
  "created. This ensures that the mesh remains compatible (watertight)\n"
  "as long as certain criteria are not used (triangle area limit, and\n"
  "number of triangles limit).\n\n"
  "To prevent overly large triangle meshes from being created, it is\n"
  "possible to set a limit on the number of triangles created. By\n"
  "default this number is a very large number (i.e., no limit). Further,\n"
  "a limit on the number of passes can also be set, this is mostly\n"
  "useful to generated animations of the algorithm.\n\n"
  "Finally, the attribute data (point and cell data) is treated as\n"
  "follows. The cell data from a parent triangle is assigned to its\n"
  "subdivided children.  Point data is interpolated along edges as the\n"
  "edges are subdivided.\n\n"
  "@warning\n"
  "The subdivision is linear along edges. Thus do not expect smoothing\n"
  "or blending effects to occur. If you need to smooth the resulting\n"
  "mesh use an algorithm like vtkWindowedSincPolyDataFilter or\n"
  "vtkSmoothPolyDataFilter.\n\n"
  "The filter retains mesh compatibility (watertightness) if the mesh\n"
  "was originally compatible; and the area, max triangles criteria are\n"
  "not used.\n\n"
  "@warning\n"
  "The filter requires a triangle mesh. Use vtkTriangleFilter to\n"
  "tessellate the mesh if necessary.\n\n"
  "@sa\n"
  "vtkInterpolatingSubdivisionFilter vtkLinearSubdivisionFilter\n"
  "vtkButterflySubdivisionFilter vtkTriangleFilter\n\n";


static PyObject *
PyvtkAdaptiveSubdivisionFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAdaptiveSubdivisionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAdaptiveSubdivisionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAdaptiveSubdivisionFilter *tempr = vtkAdaptiveSubdivisionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAdaptiveSubdivisionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAdaptiveSubdivisionFilter::NewInstance());

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
PyvtkAdaptiveSubdivisionFilter_SetMaximumEdgeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumEdgeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumEdgeLength(temp0);
    }
    else
    {
      op->vtkAdaptiveSubdivisionFilter::SetMaximumEdgeLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumEdgeLengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumEdgeLengthMinValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumEdgeLengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumEdgeLengthMaxValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumEdgeLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumEdgeLength() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumEdgeLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SetMaximumTriangleArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumTriangleArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTriangleArea(temp0);
    }
    else
    {
      op->vtkAdaptiveSubdivisionFilter::SetMaximumTriangleArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleAreaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTriangleAreaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumTriangleAreaMinValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumTriangleAreaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleAreaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTriangleAreaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumTriangleAreaMaxValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumTriangleAreaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumTriangleArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumTriangleArea() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumTriangleArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SetMaximumNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfTriangles(temp0);
    }
    else
    {
      op->vtkAdaptiveSubdivisionFilter::SetMaximumNumberOfTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTrianglesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTrianglesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTrianglesMinValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTrianglesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTrianglesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTrianglesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTrianglesMaxValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTrianglesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfTriangles() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SetMaximumNumberOfPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPasses(temp0);
    }
    else
    {
      op->vtkAdaptiveSubdivisionFilter::SetMaximumNumberOfPasses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPassesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPassesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPassesMinValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPassesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPassesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPassesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPassesMaxValue() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPassesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPasses() :
      op->vtkAdaptiveSubdivisionFilter::GetMaximumNumberOfPasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

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
      op->vtkAdaptiveSubdivisionFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkAdaptiveSubdivisionFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

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
      op->vtkAdaptiveSubdivisionFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAdaptiveSubdivisionFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkAdaptiveSubdivisionFilter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAdaptiveSubdivisionFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAdaptiveSubdivisionFilter *op = static_cast<vtkAdaptiveSubdivisionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAdaptiveSubdivisionFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAdaptiveSubdivisionFilter_Methods[] = {
  {"IsTypeOf", PyvtkAdaptiveSubdivisionFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiation, type info, and printing.\n"},
  {"IsA", PyvtkAdaptiveSubdivisionFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiation, type info, and printing.\n"},
  {"SafeDownCast", PyvtkAdaptiveSubdivisionFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAdaptiveSubdivisionFilter\nC++: static vtkAdaptiveSubdivisionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiation, type info, and printing.\n"},
  {"NewInstance", PyvtkAdaptiveSubdivisionFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAdaptiveSubdivisionFilter\nC++: vtkAdaptiveSubdivisionFilter *NewInstance()\n\nStandard methods for instantiation, type info, and printing.\n"},
  {"SetMaximumEdgeLength", PyvtkAdaptiveSubdivisionFilter_SetMaximumEdgeLength, METH_VARARGS,
   "V.SetMaximumEdgeLength(float)\nC++: virtual void SetMaximumEdgeLength(double _arg)\n\nSpecify the maximum edge length that a triangle may have. Edges\nlonger than this value are split in half and the associated\ntriangles are modified accordingly.\n"},
  {"GetMaximumEdgeLengthMinValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLengthMinValue, METH_VARARGS,
   "V.GetMaximumEdgeLengthMinValue() -> float\nC++: virtual double GetMaximumEdgeLengthMinValue()\n\nSpecify the maximum edge length that a triangle may have. Edges\nlonger than this value are split in half and the associated\ntriangles are modified accordingly.\n"},
  {"GetMaximumEdgeLengthMaxValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLengthMaxValue, METH_VARARGS,
   "V.GetMaximumEdgeLengthMaxValue() -> float\nC++: virtual double GetMaximumEdgeLengthMaxValue()\n\nSpecify the maximum edge length that a triangle may have. Edges\nlonger than this value are split in half and the associated\ntriangles are modified accordingly.\n"},
  {"GetMaximumEdgeLength", PyvtkAdaptiveSubdivisionFilter_GetMaximumEdgeLength, METH_VARARGS,
   "V.GetMaximumEdgeLength() -> float\nC++: virtual double GetMaximumEdgeLength()\n\nSpecify the maximum edge length that a triangle may have. Edges\nlonger than this value are split in half and the associated\ntriangles are modified accordingly.\n"},
  {"SetMaximumTriangleArea", PyvtkAdaptiveSubdivisionFilter_SetMaximumTriangleArea, METH_VARARGS,
   "V.SetMaximumTriangleArea(float)\nC++: virtual void SetMaximumTriangleArea(double _arg)\n\nSpecify the maximum area that a triangle may have. Triangles\nlarger than this value are subdivided to meet this threshold.\nNote that if this criterion is used it may produce non-watertight\nmeshes as a result.\n"},
  {"GetMaximumTriangleAreaMinValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleAreaMinValue, METH_VARARGS,
   "V.GetMaximumTriangleAreaMinValue() -> float\nC++: virtual double GetMaximumTriangleAreaMinValue()\n\nSpecify the maximum area that a triangle may have. Triangles\nlarger than this value are subdivided to meet this threshold.\nNote that if this criterion is used it may produce non-watertight\nmeshes as a result.\n"},
  {"GetMaximumTriangleAreaMaxValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleAreaMaxValue, METH_VARARGS,
   "V.GetMaximumTriangleAreaMaxValue() -> float\nC++: virtual double GetMaximumTriangleAreaMaxValue()\n\nSpecify the maximum area that a triangle may have. Triangles\nlarger than this value are subdivided to meet this threshold.\nNote that if this criterion is used it may produce non-watertight\nmeshes as a result.\n"},
  {"GetMaximumTriangleArea", PyvtkAdaptiveSubdivisionFilter_GetMaximumTriangleArea, METH_VARARGS,
   "V.GetMaximumTriangleArea() -> float\nC++: virtual double GetMaximumTriangleArea()\n\nSpecify the maximum area that a triangle may have. Triangles\nlarger than this value are subdivided to meet this threshold.\nNote that if this criterion is used it may produce non-watertight\nmeshes as a result.\n"},
  {"SetMaximumNumberOfTriangles", PyvtkAdaptiveSubdivisionFilter_SetMaximumNumberOfTriangles, METH_VARARGS,
   "V.SetMaximumNumberOfTriangles(int)\nC++: virtual void SetMaximumNumberOfTriangles(vtkIdType _arg)\n\nSet a limit on the maximum number of triangles that can be\ncreated.  If the limit is hit, it may result in premature\ntermination of the algorithm and the results may be less than\nsatisfactory (for example non-watertight meshes may be created).\nBy default, the limit is set to a very large number (i.e., no\neffective limit).\n"},
  {"GetMaximumNumberOfTrianglesMinValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTrianglesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfTrianglesMinValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTrianglesMinValue()\n\nSet a limit on the maximum number of triangles that can be\ncreated.  If the limit is hit, it may result in premature\ntermination of the algorithm and the results may be less than\nsatisfactory (for example non-watertight meshes may be created).\nBy default, the limit is set to a very large number (i.e., no\neffective limit).\n"},
  {"GetMaximumNumberOfTrianglesMaxValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTrianglesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfTrianglesMaxValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTrianglesMaxValue()\n\nSet a limit on the maximum number of triangles that can be\ncreated.  If the limit is hit, it may result in premature\ntermination of the algorithm and the results may be less than\nsatisfactory (for example non-watertight meshes may be created).\nBy default, the limit is set to a very large number (i.e., no\neffective limit).\n"},
  {"GetMaximumNumberOfTriangles", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfTriangles, METH_VARARGS,
   "V.GetMaximumNumberOfTriangles() -> int\nC++: virtual vtkIdType GetMaximumNumberOfTriangles()\n\nSet a limit on the maximum number of triangles that can be\ncreated.  If the limit is hit, it may result in premature\ntermination of the algorithm and the results may be less than\nsatisfactory (for example non-watertight meshes may be created).\nBy default, the limit is set to a very large number (i.e., no\neffective limit).\n"},
  {"SetMaximumNumberOfPasses", PyvtkAdaptiveSubdivisionFilter_SetMaximumNumberOfPasses, METH_VARARGS,
   "V.SetMaximumNumberOfPasses(int)\nC++: virtual void SetMaximumNumberOfPasses(vtkIdType _arg)\n\nSet a limit on the number of passes (i.e., levels of\nsubdivision).  If the limit is hit, then the subdivision process\nstops and additional passes (needed to meet other criteria) are\naborted. The default limit is set to a very large number (i.e.,\nno effective limit).\n"},
  {"GetMaximumNumberOfPassesMinValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPassesMinValue, METH_VARARGS,
   "V.GetMaximumNumberOfPassesMinValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPassesMinValue()\n\nSet a limit on the number of passes (i.e., levels of\nsubdivision).  If the limit is hit, then the subdivision process\nstops and additional passes (needed to meet other criteria) are\naborted. The default limit is set to a very large number (i.e.,\nno effective limit).\n"},
  {"GetMaximumNumberOfPassesMaxValue", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPassesMaxValue, METH_VARARGS,
   "V.GetMaximumNumberOfPassesMaxValue() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPassesMaxValue()\n\nSet a limit on the number of passes (i.e., levels of\nsubdivision).  If the limit is hit, then the subdivision process\nstops and additional passes (needed to meet other criteria) are\naborted. The default limit is set to a very large number (i.e.,\nno effective limit).\n"},
  {"GetMaximumNumberOfPasses", PyvtkAdaptiveSubdivisionFilter_GetMaximumNumberOfPasses, METH_VARARGS,
   "V.GetMaximumNumberOfPasses() -> int\nC++: virtual vtkIdType GetMaximumNumberOfPasses()\n\nSet a limit on the number of passes (i.e., levels of\nsubdivision).  If the limit is hit, then the subdivision process\nstops and additional passes (needed to meet other criteria) are\naborted. The default limit is set to a very large number (i.e.,\nno effective limit).\n"},
  {"SetLocator", PyvtkAdaptiveSubdivisionFilter_SetLocator, METH_VARARGS,
   "V.SetLocator(vtkIncrementalPointLocator)\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used. This is used to merge\ncoincident points during subdivision.\n"},
  {"GetLocator", PyvtkAdaptiveSubdivisionFilter_GetLocator, METH_VARARGS,
   "V.GetLocator() -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used. This is used to merge\ncoincident points during subdivision.\n"},
  {"SetOutputPointsPrecision", PyvtkAdaptiveSubdivisionFilter_SetOutputPointsPrecision, METH_VARARGS,
   "V.SetOutputPointsPrecision(int)\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkAdaptiveSubdivisionFilter_GetOutputPointsPrecision, METH_VARARGS,
   "V.GetOutputPointsPrecision() -> int\nC++: virtual int GetOutputPointsPrecision()\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"CreateDefaultLocator", PyvtkAdaptiveSubdivisionFilter_CreateDefaultLocator, METH_VARARGS,
   "V.CreateDefaultLocator()\nC++: void CreateDefaultLocator()\n\nCreate a default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkAdaptiveSubdivisionFilter_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nModified GetMTime because of the dependence on the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAdaptiveSubdivisionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersModelingPython.vtkAdaptiveSubdivisionFilter", // tp_name
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
  PyvtkAdaptiveSubdivisionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAdaptiveSubdivisionFilter_StaticNew()
{
  return vtkAdaptiveSubdivisionFilter::New();
}

PyObject *PyvtkAdaptiveSubdivisionFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAdaptiveSubdivisionFilter_Type, PyvtkAdaptiveSubdivisionFilter_Methods,
    "vtkAdaptiveSubdivisionFilter",
 &PyvtkAdaptiveSubdivisionFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkAdaptiveSubdivisionFilter_Type;

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

void PyVTKAddFile_vtkAdaptiveSubdivisionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAdaptiveSubdivisionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAdaptiveSubdivisionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

