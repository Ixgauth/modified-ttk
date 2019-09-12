// python wrapper for vtkDiscreteFlyingEdges3D
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
#include "vtkDiscreteFlyingEdges3D.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscreteFlyingEdges3D(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDiscreteFlyingEdges3D_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkDiscreteFlyingEdges3D_Doc =
  "vtkDiscreteFlyingEdges3D - generate isosurface from 3D image data\n(volume)\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDiscreteFlyingEdges3D creates output representations of label maps\n"
  "(e.g., segmented volumes) using a variation of the flying edges\n"
  "algorithm. The input is a 3D image (volume( where each point is\n"
  "labeled (integer labels are preferred to real values), and the output\n"
  "data is polygonal data representing labeled regions. (Note that on\n"
  "output each region [corresponding to a different contour value] is\n"
  "represented independently; i.e., points are not shared between\n"
  "regions even if they are coincident.)\n\n"
  "This filter is similar to but produces different results than the\n"
  "filter vtkDiscreteMarchingCubes. This filter can produce output\n"
  "normals, and each labeled region is completely disconnected from\n"
  "neighboring regions (coincident points are not merged). Both\n"
  "algorithms interpolate edges at the halfway point between vertices\n"
  "with different segmentation labels.\n\n"
  "See the paper \"Flying Edges: A High-Performance Scalable\n"
  "Isocontouring Algorithm\" by Schroeder, Maynard, Geveci. Proc. of LDAV\n"
  "2015. Chicago, IL.\n\n"
  "@warning\n"
  "This filter is specialized to 3D volumes. This implementation can\n"
  "produce degenerate triangles (i.e., zero-area triangles).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkDiscreteMarchingCubes vtkDiscreteFlyingEdges2D\n"
  "vtkDiscreteFlyingEdges3D\n\n";


static PyObject *
PyvtkDiscreteFlyingEdges3D_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscreteFlyingEdges3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteFlyingEdges3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscreteFlyingEdges3D *tempr = vtkDiscreteFlyingEdges3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscreteFlyingEdges3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteFlyingEdges3D::NewInstance());

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
PyvtkDiscreteFlyingEdges3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiscreteFlyingEdges3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkDiscreteFlyingEdges3D::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradients(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetComputeGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkDiscreteFlyingEdges3D::GetComputeGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeGradientsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeGradientsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkDiscreteFlyingEdges3D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkDiscreteFlyingEdges3D::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkDiscreteFlyingEdges3D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkDiscreteFlyingEdges3D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges3D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

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
      op->GetValues(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::GetValues(temp0);
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
PyvtkDiscreteFlyingEdges3D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDiscreteFlyingEdges3D_GetValues_s1(self, args);
    case 1:
      return PyvtkDiscreteFlyingEdges3D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}



static PyObject *
PyvtkDiscreteFlyingEdges3D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkDiscreteFlyingEdges3D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::GenerateValues(temp0, temp1);
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
PyvtkDiscreteFlyingEdges3D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges3D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDiscreteFlyingEdges3D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkDiscreteFlyingEdges3D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}



static PyObject *
PyvtkDiscreteFlyingEdges3D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges3D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges3D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges3D *op = static_cast<vtkDiscreteFlyingEdges3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkDiscreteFlyingEdges3D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscreteFlyingEdges3D_Methods[] = {
  {"IsTypeOf", PyvtkDiscreteFlyingEdges3D_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiscreteFlyingEdges3D_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiscreteFlyingEdges3D_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDiscreteFlyingEdges3D\nC++: static vtkDiscreteFlyingEdges3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiscreteFlyingEdges3D_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDiscreteFlyingEdges3D\nC++: vtkDiscreteFlyingEdges3D *NewInstance()\n\n"},
  {"GetMTime", PyvtkDiscreteFlyingEdges3D_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nBecause we delegate to vtkContourValues.\n"},
  {"SetComputeNormals", PyvtkDiscreteFlyingEdges3D_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(int _arg)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"GetComputeNormals", PyvtkDiscreteFlyingEdges3D_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual int GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOn", PyvtkDiscreteFlyingEdges3D_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOff", PyvtkDiscreteFlyingEdges3D_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"SetComputeGradients", PyvtkDiscreteFlyingEdges3D_SetComputeGradients, METH_VARARGS,
   "V.SetComputeGradients(int)\nC++: virtual void SetComputeGradients(int _arg)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"GetComputeGradients", PyvtkDiscreteFlyingEdges3D_GetComputeGradients, METH_VARARGS,
   "V.GetComputeGradients() -> int\nC++: virtual int GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOn", PyvtkDiscreteFlyingEdges3D_ComputeGradientsOn, METH_VARARGS,
   "V.ComputeGradientsOn()\nC++: virtual void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOff", PyvtkDiscreteFlyingEdges3D_ComputeGradientsOff, METH_VARARGS,
   "V.ComputeGradientsOff()\nC++: virtual void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"SetComputeScalars", PyvtkDiscreteFlyingEdges3D_SetComputeScalars, METH_VARARGS,
   "V.SetComputeScalars(int)\nC++: virtual void SetComputeScalars(int _arg)\n\nSet/Get the computation of scalars.\n"},
  {"GetComputeScalars", PyvtkDiscreteFlyingEdges3D_GetComputeScalars, METH_VARARGS,
   "V.GetComputeScalars() -> int\nC++: virtual int GetComputeScalars()\n\nSet/Get the computation of scalars.\n"},
  {"ComputeScalarsOn", PyvtkDiscreteFlyingEdges3D_ComputeScalarsOn, METH_VARARGS,
   "V.ComputeScalarsOn()\nC++: virtual void ComputeScalarsOn()\n\nSet/Get the computation of scalars.\n"},
  {"ComputeScalarsOff", PyvtkDiscreteFlyingEdges3D_ComputeScalarsOff, METH_VARARGS,
   "V.ComputeScalarsOff()\nC++: virtual void ComputeScalarsOff()\n\nSet/Get the computation of scalars.\n"},
  {"SetInterpolateAttributes", PyvtkDiscreteFlyingEdges3D_SetInterpolateAttributes, METH_VARARGS,
   "V.SetInterpolateAttributes(int)\nC++: virtual void SetInterpolateAttributes(int _arg)\n\nIndicate whether to interpolate other attribute data. That is, as\nthe isosurface is generated, interpolate all point attribute data\nacross the edge. This is independent of scalar interpolation,\nwhich is controlled by the ComputeScalars flag.\n"},
  {"GetInterpolateAttributes", PyvtkDiscreteFlyingEdges3D_GetInterpolateAttributes, METH_VARARGS,
   "V.GetInterpolateAttributes() -> int\nC++: virtual int GetInterpolateAttributes()\n\nIndicate whether to interpolate other attribute data. That is, as\nthe isosurface is generated, interpolate all point attribute data\nacross the edge. This is independent of scalar interpolation,\nwhich is controlled by the ComputeScalars flag.\n"},
  {"InterpolateAttributesOn", PyvtkDiscreteFlyingEdges3D_InterpolateAttributesOn, METH_VARARGS,
   "V.InterpolateAttributesOn()\nC++: virtual void InterpolateAttributesOn()\n\nIndicate whether to interpolate other attribute data. That is, as\nthe isosurface is generated, interpolate all point attribute data\nacross the edge. This is independent of scalar interpolation,\nwhich is controlled by the ComputeScalars flag.\n"},
  {"InterpolateAttributesOff", PyvtkDiscreteFlyingEdges3D_InterpolateAttributesOff, METH_VARARGS,
   "V.InterpolateAttributesOff()\nC++: virtual void InterpolateAttributesOff()\n\nIndicate whether to interpolate other attribute data. That is, as\nthe isosurface is generated, interpolate all point attribute data\nacross the edge. This is independent of scalar interpolation,\nwhich is controlled by the ComputeScalars flag.\n"},
  {"SetValue", PyvtkDiscreteFlyingEdges3D_SetValue, METH_VARARGS,
   "V.SetValue(int, float)\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkDiscreteFlyingEdges3D_GetValue, METH_VARARGS,
   "V.GetValue(int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkDiscreteFlyingEdges3D_GetValues, METH_VARARGS,
   "V.GetValues() -> (float, ...)\nC++: double *GetValues()\nV.GetValues([float, ...])\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkDiscreteFlyingEdges3D_SetNumberOfContours, METH_VARARGS,
   "V.SetNumberOfContours(int)\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkDiscreteFlyingEdges3D_GetNumberOfContours, METH_VARARGS,
   "V.GetNumberOfContours() -> int\nC++: int GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkDiscreteFlyingEdges3D_GenerateValues, METH_VARARGS,
   "V.GenerateValues(int, [float, float])\nC++: void GenerateValues(int numContours, double range[2])\nV.GenerateValues(int, float, float)\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"SetArrayComponent", PyvtkDiscreteFlyingEdges3D_SetArrayComponent, METH_VARARGS,
   "V.SetArrayComponent(int)\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {"GetArrayComponent", PyvtkDiscreteFlyingEdges3D_GetArrayComponent, METH_VARARGS,
   "V.GetArrayComponent() -> int\nC++: virtual int GetArrayComponent()\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDiscreteFlyingEdges3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersGeneralPython.vtkDiscreteFlyingEdges3D", // tp_name
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
  PyvtkDiscreteFlyingEdges3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscreteFlyingEdges3D_StaticNew()
{
  return vtkDiscreteFlyingEdges3D::New();
}

PyObject *PyvtkDiscreteFlyingEdges3D_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDiscreteFlyingEdges3D_Type, PyvtkDiscreteFlyingEdges3D_Methods,
    "vtkDiscreteFlyingEdges3D",
 &PyvtkDiscreteFlyingEdges3D_StaticNew);

  PyTypeObject *pytype = &PyvtkDiscreteFlyingEdges3D_Type;

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

void PyVTKAddFile_vtkDiscreteFlyingEdges3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscreteFlyingEdges3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscreteFlyingEdges3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

