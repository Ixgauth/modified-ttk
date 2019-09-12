// python wrapper for vtkStreamingTessellator
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
#include "vtkStreamingTessellator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingTessellator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkStreamingTessellator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkStreamingTessellator_Doc =
  "vtkStreamingTessellator - An algorithm that refines an initial\nsimplicial tessellation using edge subdivision\n\n"
  "Superclass: vtkObject\n\n"
  "This class is a simple algorithm that takes a single starting simplex\n"
  "-- a tetrahedron, triangle, or line segment -- and calls a function\n"
  "you pass it with (possibly many times) tetrahedra, triangles, or\n"
  "lines adaptively sampled from the one you specified. It uses an\n"
  "algorithm you specify to control the level of adaptivity.\n\n"
  "This class does not create vtkUnstructuredGrid output because it is\n"
  "intended for use in mappers as well as filters. Instead, it calls the\n"
  "registered function with simplices as they are created.\n\n"
  "The subdivision algorithm should change the vertex coordinates (it\n"
  "must change both geometric and, if desired, parametric coordinates)\n"
  "of the midpoint. These coordinates need not be changed unless the\n"
  "EvaluateEdge() member returns true. The vtkStreamingTessellator\n"
  "itself has no way of creating a more accurate midpoint vertex.\n\n"
  "Here's how to use this class:\n"
  "- Call AdaptivelySample1Facet, AdaptivelySample2Facet, or\n"
  "  AdaptivelySample3Facet, with an edge, triangle, or tetrahedron you\n"
  "  want tessellated.\n"
  "- The adaptive tessellator classifies each edge by passing the\n"
  "  midpoint values to the vtkEdgeSubdivisionCriterion.\n"
  "- After each edge is classified, the tessellator subdivides edges as\n"
  "  required until the subdivision criterion is satisfied or the\n"
  "  maximum subdivision depth has been reached.\n"
  "- Edges, triangles, or tetrahedra connecting the vertices generated\n"
  "  by the subdivision algorithm are processed by calling the\n"
  "  user-defined callback functions (set with SetTetrahedronCallback(),\n"
  "SetTriangleCallback(), or SetEdgeCallback() ).\n\n"
  "@warning\n"
  "Note that the vertices passed to AdaptivelySample3Facet,\n"
  "AdaptivelySample2Facet, or AdaptivelySample1Facet must be at least 6,\n"
  "5, or 4 entries long, respectively! This is because the\n"
  "&lt;r,s,t&gt;, &lt;r,s&gt;, or &lt;r&gt; parametric coordinates of\n"
  "the vertices are maintained as the facet is subdivided. This\n"
  "information is often required by the subdivision algorithm in order\n"
  "to compute an error metric. You may change the number of parametric\n"
  "coordinates associated with each vertex using\n"
  "vtkStreamingTessellator::SetEmbeddingDimension().\n\n"
  "@par Interpolating Field Values: If you wish, you may also use\n"
  "vtkStreamingTessellator to interpolate field values at newly created\n"
  "vertices. Interpolated field values are stored just beyond the\n"
  "parametric coordinates associated with a vertex. They will always be\n"
  "double values; it does not make sense to interpolate a boolean or\n"
  "string value and your output and subdivision subroutines may always\n"
  "cast to a float or use floor() to truncate an interpolated value to\n"
  "an integer.\n\n"
  "@sa\n"
  "vtkEdgeSubdivisionCriterion\n\n";


static PyObject *
PyvtkStreamingTessellator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingTessellator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingTessellator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingTessellator *tempr = vtkStreamingTessellator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingTessellator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingTessellator::NewInstance());

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
PyvtkStreamingTessellator_SetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetPrivateData(temp0);
    }
    else
    {
      op->vtkStreamingTessellator::SetPrivateData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetPrivateData() :
      op->vtkStreamingTessellator::GetPrivateData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = VTK_PYBUFFER_INITIALIZER;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetConstPrivateData(temp0);
    }
    else
    {
      op->vtkStreamingTessellator::SetConstPrivateData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

#if PY_VERSION_HEX >= 0x02060000
  if (pbuf0.obj != 0)
  {
    PyBuffer_Release(&pbuf0);
  }
#endif
  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetConstPrivateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstPrivateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const void  *tempr = (ap.IsBound() ?
      op->GetConstPrivateData() :
      op->vtkStreamingTessellator::GetConstPrivateData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  vtkEdgeSubdivisionCriterion *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeSubdivisionCriterion"))
  {
    if (ap.IsBound())
    {
      op->SetSubdivisionAlgorithm(temp0);
    }
    else
    {
      op->vtkStreamingTessellator::SetSubdivisionAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubdivisionAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivisionAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->GetSubdivisionAlgorithm() :
      op->vtkStreamingTessellator::GetSubdivisionAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEmbeddingDimension(temp0, temp1);
    }
    else
    {
      op->vtkStreamingTessellator::SetEmbeddingDimension(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetEmbeddingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmbeddingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEmbeddingDimension(temp0) :
      op->vtkStreamingTessellator::GetEmbeddingDimension(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldSize(temp0, temp1);
    }
    else
    {
      op->vtkStreamingTessellator::SetFieldSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetFieldSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldSize(temp0) :
      op->vtkStreamingTessellator::GetFieldSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkStreamingTessellator::SetMaximumNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSubdivisions() :
      op->vtkStreamingTessellator::GetMaximumNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_AdaptivelySample3Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample3Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);
    ap.Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->AdaptivelySample3Facet(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStreamingTessellator::AdaptivelySample3Facet(temp0, temp1, temp2, temp3);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkStreamingTessellator_AdaptivelySample2Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample2Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AdaptivelySample2Facet(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStreamingTessellator::AdaptivelySample2Facet(temp0, temp1, temp2);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_AdaptivelySample1Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample1Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AdaptivelySample1Facet(temp0, temp1);
    }
    else
    {
      op->vtkStreamingTessellator::AdaptivelySample1Facet(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_AdaptivelySample0Facet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptivelySample0Facet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

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
      op->AdaptivelySample0Facet(temp0);
    }
    else
    {
      op->vtkStreamingTessellator::AdaptivelySample0Facet(temp0);
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
PyvtkStreamingTessellator_ResetCounts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetCounts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetCounts();
    }
    else
    {
      op->vtkStreamingTessellator::ResetCounts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetCaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetCaseCount(temp0) :
      op->vtkStreamingTessellator::GetCaseCount(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingTessellator_GetSubcaseCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubcaseCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingTessellator *op = static_cast<vtkStreamingTessellator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetSubcaseCount(temp0, temp1) :
      op->vtkStreamingTessellator::GetSubcaseCount(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingTessellator_Methods[] = {
  {"IsTypeOf", PyvtkStreamingTessellator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingTessellator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingTessellator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkStreamingTessellator\nC++: static vtkStreamingTessellator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingTessellator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkStreamingTessellator\nC++: vtkStreamingTessellator *NewInstance()\n\n"},
  {"SetPrivateData", PyvtkStreamingTessellator_SetPrivateData, METH_VARARGS,
   "V.SetPrivateData(void)\nC++: virtual void SetPrivateData(void *Private)\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {"GetPrivateData", PyvtkStreamingTessellator_GetPrivateData, METH_VARARGS,
   "V.GetPrivateData() -> void\nC++: virtual void *GetPrivateData()\n\nGet/Set a void pointer passed to the triangle and edge output\nfunctions.\n"},
  {"SetConstPrivateData", PyvtkStreamingTessellator_SetConstPrivateData, METH_VARARGS,
   "V.SetConstPrivateData(void)\nC++: virtual void SetConstPrivateData(const void *ConstPrivate)\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {"GetConstPrivateData", PyvtkStreamingTessellator_GetConstPrivateData, METH_VARARGS,
   "V.GetConstPrivateData() -> void\nC++: virtual const void *GetConstPrivateData()\n\nGet/Set a constant void pointer passed to the simplex output\nfunctions.\n"},
  {"SetSubdivisionAlgorithm", PyvtkStreamingTessellator_SetSubdivisionAlgorithm, METH_VARARGS,
   "V.SetSubdivisionAlgorithm(vtkEdgeSubdivisionCriterion)\nC++: virtual void SetSubdivisionAlgorithm(\n    vtkEdgeSubdivisionCriterion *)\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {"GetSubdivisionAlgorithm", PyvtkStreamingTessellator_GetSubdivisionAlgorithm, METH_VARARGS,
   "V.GetSubdivisionAlgorithm() -> vtkEdgeSubdivisionCriterion\nC++: virtual vtkEdgeSubdivisionCriterion *GetSubdivisionAlgorithm(\n    )\n\nGet/Set the algorithm used to determine whether an edge should be\nsubdivided or left as-is. This is used once for each call to\nAdaptivelySample1Facet (which is recursive and will call itself\nresulting in additional edges to be checked) or three times for\neach call to AdaptivelySample2Facet (also recursive).\n"},
  {"SetEmbeddingDimension", PyvtkStreamingTessellator_SetEmbeddingDimension, METH_VARARGS,
   "V.SetEmbeddingDimension(int, int)\nC++: virtual void SetEmbeddingDimension(int k, int d)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {"GetEmbeddingDimension", PyvtkStreamingTessellator_GetEmbeddingDimension, METH_VARARGS,
   "V.GetEmbeddingDimension(int) -> int\nC++: int GetEmbeddingDimension(int k)\n\nGet/Set the number of parameter-space coordinates associated with\neach input and output point. The default is k for k -facets. You\nmay specify a different dimension, d, for each type of k -facet\nto be processed. For example, SetEmbeddingDimension( 2, 3 ) would\nassociate r, s, andt coordinates with each input and output point\ngenerated by AdaptivelySample2Facet but does not say anything\nabout input or output points generated byAdaptivelySample1Facet.\nCall SetEmbeddingDimension( -1, d ) to specify the same dimension\nfor all possible k values.d may not exceed 8, as that would be\nplain silly.\n"},
  {"SetFieldSize", PyvtkStreamingTessellator_SetFieldSize, METH_VARARGS,
   "V.SetFieldSize(int, int)\nC++: virtual void SetFieldSize(int k, int s)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\n* Normally, you will not call SetFieldSize() directly; instead,\n  subclasses of\n* vtkEdgeSubdivisionCriterion, such as\n  vtkShoeMeshSubdivisionAlgorithm, will call it\n* for you.\n\n* In any event, setting FieldSize to a non-zero value means you\n  must pass field\n* values to the AdaptivelySamplekFacet routines; For example,\n* \n * vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n * t->SetFieldSize( 1, 3 );\n * t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n * double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n * double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n * t->AdaptivelySample1Facet( p0, p1 );\n * \n* This would adaptively sample an curve (1-facet) with geometry\n  and\n* a vector field at every output point on the curve.\n"},
  {"GetFieldSize", PyvtkStreamingTessellator_GetFieldSize, METH_VARARGS,
   "V.GetFieldSize(int) -> int\nC++: int GetFieldSize(int k)\n\nGet/Set the number of field value coordinates associated with\neach input and output point. The default is 0; no field values\nare interpolated. You may specify a different size, s, for each\ntype of k -facet to be processed. For example, SetFieldSize( 2, 3\n) would associate 3 field value coordinates with each input and\noutput point of an AdaptivelySample2Facet call, but does not say\nanything about input or output points of AdaptivelySample1Facet.\nCall SetFieldSize( -1, s ) to specify the same dimension for all\npossible k values.s may not exceed\nvtkStreamingTessellator::MaxFieldSize. This is a compile-time\nconstant that defaults to 18, which is large enough for a scalar,\nvector, tensor, normal, and texture coordinate to be included at\neach point.\n\n* Normally, you will not call SetFieldSize() directly; instead,\n  subclasses of\n* vtkEdgeSubdivisionCriterion, such as\n  vtkShoeMeshSubdivisionAlgorithm, will call it\n* for you.\n\n* In any event, setting FieldSize to a non-zero value means you\n  must pass field\n* values to the AdaptivelySamplekFacet routines; For example,\n* \n * vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n * t->SetFieldSize( 1, 3 );\n * t->SetEmbeddingDimension( 1, 1 ); // not really required, this is the default\n * double p0[3+1+3] = { x0, y0, z0, r0, fx0, fy0, fz0 };\n * double p1[3+1+3] = { x1, y1, z1, r1, fx1, fy1, fz1 };\n * t->AdaptivelySample1Facet( p0, p1 );\n * \n* This would adaptively sample an curve (1-facet) with geometry\n  and\n* a vector field at every output point on the curve.\n"},
  {"SetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_SetMaximumNumberOfSubdivisions, METH_VARARGS,
   "V.SetMaximumNumberOfSubdivisions(int)\nC++: virtual void SetMaximumNumberOfSubdivisions(\n    int num_subdiv_in)\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {"GetMaximumNumberOfSubdivisions", PyvtkStreamingTessellator_GetMaximumNumberOfSubdivisions, METH_VARARGS,
   "V.GetMaximumNumberOfSubdivisions() -> int\nC++: int GetMaximumNumberOfSubdivisions()\n\nGet/Set the maximum number of subdivisions that may occur.\n"},
  {"AdaptivelySample3Facet", PyvtkStreamingTessellator_AdaptivelySample3Facet, METH_VARARGS,
   "V.AdaptivelySample3Facet([float, ...], [float, ...], [float, ...],\n     [float, ...])\nC++: void AdaptivelySample3Facet(double *v0, double *v1,\n    double *v2, double *v3)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\n* Use SetMaximumNumberOfSubdivisions to change the maximum\n* recursion depth.\n\n* The AdaptivelySample0Facet method is provided as a convenience.\n* Obviously, there is no way to adaptively subdivide a vertex.\n* Instead the input vertex is passed unchanged to the output\n* via a call to the registered VertexProcessorFunction callback.\n\n* .SECTION Warning\n* This assumes that you have called SetSubdivisionAlgorithm(),\n* SetEdgeCallback(), SetTriangleCallback(), and\n  SetTetrahedronCallback()\n* with valid values!\n"},
  {"AdaptivelySample2Facet", PyvtkStreamingTessellator_AdaptivelySample2Facet, METH_VARARGS,
   "V.AdaptivelySample2Facet([float, ...], [float, ...], [float, ...])\nC++: void AdaptivelySample2Facet(double *v0, double *v1,\n    double *v2)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\n* Use SetMaximumNumberOfSubdivisions to change the maximum\n* recursion depth.\n\n* The AdaptivelySample0Facet method is provided as a convenience.\n* Obviously, there is no way to adaptively subdivide a vertex.\n* Instead the input vertex is passed unchanged to the output\n* via a call to the registered VertexProcessorFunction callback.\n\n* .SECTION Warning\n* This assumes that you have called SetSubdivisionAlgorithm(),\n* SetEdgeCallback(), SetTriangleCallback(), and\n  SetTetrahedronCallback()\n* with valid values!\n"},
  {"AdaptivelySample1Facet", PyvtkStreamingTessellator_AdaptivelySample1Facet, METH_VARARGS,
   "V.AdaptivelySample1Facet([float, ...], [float, ...])\nC++: void AdaptivelySample1Facet(double *v0, double *v1)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\n* Use SetMaximumNumberOfSubdivisions to change the maximum\n* recursion depth.\n\n* The AdaptivelySample0Facet method is provided as a convenience.\n* Obviously, there is no way to adaptively subdivide a vertex.\n* Instead the input vertex is passed unchanged to the output\n* via a call to the registered VertexProcessorFunction callback.\n\n* .SECTION Warning\n* This assumes that you have called SetSubdivisionAlgorithm(),\n* SetEdgeCallback(), SetTriangleCallback(), and\n  SetTetrahedronCallback()\n* with valid values!\n"},
  {"AdaptivelySample0Facet", PyvtkStreamingTessellator_AdaptivelySample0Facet, METH_VARARGS,
   "V.AdaptivelySample0Facet([float, ...])\nC++: void AdaptivelySample0Facet(double *v0)\n\nThis will adaptively subdivide the tetrahedron (3-facet),\ntriangle (2-facet), or edge (1-facet) until the subdivision\nalgorithm returns false for every edge or the maximum recursion\ndepth is reached.\n\n* Use SetMaximumNumberOfSubdivisions to change the maximum\n* recursion depth.\n\n* The AdaptivelySample0Facet method is provided as a convenience.\n* Obviously, there is no way to adaptively subdivide a vertex.\n* Instead the input vertex is passed unchanged to the output\n* via a call to the registered VertexProcessorFunction callback.\n\n* .SECTION Warning\n* This assumes that you have called SetSubdivisionAlgorithm(),\n* SetEdgeCallback(), SetTriangleCallback(), and\n  SetTetrahedronCallback()\n* with valid values!\n"},
  {"ResetCounts", PyvtkStreamingTessellator_ResetCounts, METH_VARARGS,
   "V.ResetCounts()\nC++: void ResetCounts()\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\n* These functions have no effect (and return 0) when\n  PARAVIEW_DEBUG_TESSELLATOR has not been defined.\n* By default, PARAVIEW_DEBUG_TESSELLATOR is not defined, and your\ncode will be fast and efficient. Really!\n"},
  {"GetCaseCount", PyvtkStreamingTessellator_GetCaseCount, METH_VARARGS,
   "V.GetCaseCount(int) -> int\nC++: vtkIdType GetCaseCount(int c)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\n* These functions have no effect (and return 0) when\n  PARAVIEW_DEBUG_TESSELLATOR has not been defined.\n* By default, PARAVIEW_DEBUG_TESSELLATOR is not defined, and your\ncode will be fast and efficient. Really!\n"},
  {"GetSubcaseCount", PyvtkStreamingTessellator_GetSubcaseCount, METH_VARARGS,
   "V.GetSubcaseCount(int, int) -> int\nC++: vtkIdType GetSubcaseCount(int casenum, int sub)\n\nReset/access the histogram of subdivision cases encountered. The\nhistogram may be used to examine coverage during testing as well\nas characterizing the tessellation algorithm's performance. You\nshould call ResetCounts() once, at the beginning of a stream of\ntetrahedra. It must be called before AdaptivelySample3Facet() to\nprevent uninitialized memory reads.\n\n* These functions have no effect (and return 0) when\n  PARAVIEW_DEBUG_TESSELLATOR has not been defined.\n* By default, PARAVIEW_DEBUG_TESSELLATOR is not defined, and your\ncode will be fast and efficient. Really!\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkStreamingTessellator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersCorePython.vtkStreamingTessellator", // tp_name
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
  PyvtkStreamingTessellator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamingTessellator_StaticNew()
{
  return vtkStreamingTessellator::New();
}

PyObject *PyvtkStreamingTessellator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkStreamingTessellator_Type, PyvtkStreamingTessellator_Methods,
    "vtkStreamingTessellator",
 &PyvtkStreamingTessellator_StaticNew);

  PyTypeObject *pytype = &PyvtkStreamingTessellator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyInt_FromLong(vtkStreamingTessellator::MaxFieldSize);
  if (o)
  {
    PyDict_SetItemString(d, "MaxFieldSize", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamingTessellator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingTessellator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingTessellator", o) != 0)
  {
    Py_DECREF(o);
  }

}

