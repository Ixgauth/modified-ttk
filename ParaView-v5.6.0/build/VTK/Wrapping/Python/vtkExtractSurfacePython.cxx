// python wrapper for vtkExtractSurface
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
#include "vtkExtractSurface.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSurface(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExtractSurface_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkExtractSurface_Doc =
  "vtkExtractSurface - generate zero-crossing isosurface from truncated\nsigned distance volume\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter extracts the zero-crossing isosurface from a truncated\n"
  "signed distance function TSDF. The TSDF is sampled across a volume,\n"
  "and is extracted using a modified version of the Flying Edges (FE)\n"
  "algorithm for increased speed, and to support multithreading. To use\n"
  "the filter, an input volume should be assigned, which may have\n"
  "special values indicating empty and/or unseen portions of the volume.\n"
  "These values are equal to +/- radius value of the signed distance\n"
  "function, and should be consistent with any filters used to generate\n"
  "the input volume (e.g., vtkSignedDistance).\n\n"
  "The Flying Edges algorithm is modified to deal with the nature of the\n"
  "truncated, signed distance function. Being truncated, the distance\n"
  "function typically is not computed throughout the volume, rather the\n"
  "special data values \"unseen\" and/or \"empty\" maybe assigned to distant\n"
  "or bordering voxels. The implications of this are that this\n"
  "implementation may produce non-closed, non-manifold surfaces, which\n"
  "is what is required to extract surfaces.\n\n"
  "More specifically, voxels may exist in one of three states: 1) within\n"
  "the TSDF, which extends +/-Radius from a generating geometry\n"
  "(typically a point cloud); 2) in the empty state, in which it is\n"
  "known that the surface does not exist; and 3) the unseen state, where\n"
  "a surface may exist but not enough information is known to be\n"
  "certain. Such situations arise, for example, when laser scanners\n"
  "generate point clouds, and the propagation of the laser beam \"carves\"\n"
  "out regions where no geometry exists (thereby defining empty space).\n"
  "Furthermore, areas in which the beam are occluded by geometry are\n"
  "known as \"unseen\" and the boundary between empty and unseen can be\n"
  "processed to produced a portion of the output isosurface (this is\n"
  "called hole filling).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "Empty regions are expected to have a data value\n"
  "-(this->Radius+FLT_EPSILON). Unseen regions are expected to have a\n"
  "    data value (this->Radius+FLT_EPSILON). Near regions have data\n"
  "    values d such that:\n"
  "-(this->Radius+FLT_EPSILON) < d (this->Radius+FLT_EPSILON).\n\n"
  "@warning\n\n"
  "Notes on the implementation:\n"
  "1. This is a lightly modified version of vtkFlyingEdges3D. Some\n"
  "   design goals included minimizing the impact on the FE algorithm,\n"
  "   and not adding extra memory requirements.\n"
  "2. It presumes an isocontour value=0.0 (the zero crossing of a signed\n"
  "   distance function).\n"
  "3. The major modifications are to the edge cases. In Flying Edges, a\n"
  "   single byte represents the case of an edge, and within that byte\n"
  "   only 2 bits are needed (the extra six bytes are not used). Here,\n"
  "   these unused bytes are repurposed to represent the \"state\" of the\n"
  "   edge, whether it is\n"
  "1) near to the TSDF; 2) in an empty state; or 3) unseen state.\n"
  "4. Since these now-used bits encode extra state information, masking\n"
  "   and related methods are modified from FE to tease apart the edge\n"
  "   cases from the edge state.\n"
  "5. Voxels with edges marked \"empty\" are not processed, i.e., no\n"
  "   output triangle primitives are generated. Depending on whether\n"
  "   hole filling is enabled, voxels with edges marked \"unseen\" may not\n"
  "be processed either.\n"
  "6. As a result of #1 and #5, and the desire to keep the\n"
  "   implementation simple, it is possible to produce output points\n"
  "   which are not used by any output triangle. \n\n"
  "@warning\n"
  "This algorithm loosely follows the most excellent paper by Curless\n"
  "and Levoy: \"A Volumetric Method for Building Complex Models from\n"
  "Range Images.\"\n\n"
  "@warning\n"
  "This algorithm differs from the paper cited above in an important\n"
  "way. The Curless & Levoy algorithm is designed to create watertight\n"
  "surfaces, while this modified algorithm may not do so as the\n"
  "generating surface is not assumed to be closed.\n\n"
  "@sa\n"
  "vtkSignedDistance vtkFlyingEdges3D\n\n";


static PyObject *
PyvtkExtractSurface_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSurface *tempr = vtkExtractSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSurface::NewInstance());

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
PyvtkExtractSurface_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkExtractSurface::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkExtractSurface::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkExtractSurface::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkExtractSurface::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_SetHoleFilling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleFilling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleFilling(temp0);
    }
    else
    {
      op->vtkExtractSurface::SetHoleFilling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetHoleFilling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleFilling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHoleFilling() :
      op->vtkExtractSurface::GetHoleFilling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_HoleFillingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HoleFillingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HoleFillingOn();
    }
    else
    {
      op->vtkExtractSurface::HoleFillingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_HoleFillingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HoleFillingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HoleFillingOff();
    }
    else
    {
      op->vtkExtractSurface::HoleFillingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

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
      op->vtkExtractSurface::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkExtractSurface::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkExtractSurface::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkExtractSurface::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

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
      op->vtkExtractSurface::SetComputeGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkExtractSurface::GetComputeGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOn();
    }
    else
    {
      op->vtkExtractSurface::ComputeGradientsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSurface_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSurface *op = static_cast<vtkExtractSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOff();
    }
    else
    {
      op->vtkExtractSurface::ComputeGradientsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSurface_Methods[] = {
  {"IsTypeOf", PyvtkExtractSurface_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"IsA", PyvtkExtractSurface_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"SafeDownCast", PyvtkExtractSurface_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExtractSurface\nC++: static vtkExtractSurface *SafeDownCast(vtkObjectBase *o)\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"NewInstance", PyvtkExtractSurface_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExtractSurface\nC++: vtkExtractSurface *NewInstance()\n\nStandard methods for instantiating the class, providing type\ninformation, and printing.\n"},
  {"SetRadius", PyvtkExtractSurface_SetRadius, METH_VARARGS,
   "V.SetRadius(float)\nC++: virtual void SetRadius(double _arg)\n\nSpecify the radius of influence of the signed distance function.\nData values (which are distances) that are greater than the\nradius (i.e., d > Radius) are considered empty voxels; those\nvoxel data values d < -Radius are considered unseen voxels.\n"},
  {"GetRadiusMinValue", PyvtkExtractSurface_GetRadiusMinValue, METH_VARARGS,
   "V.GetRadiusMinValue() -> float\nC++: virtual double GetRadiusMinValue()\n\nSpecify the radius of influence of the signed distance function.\nData values (which are distances) that are greater than the\nradius (i.e., d > Radius) are considered empty voxels; those\nvoxel data values d < -Radius are considered unseen voxels.\n"},
  {"GetRadiusMaxValue", PyvtkExtractSurface_GetRadiusMaxValue, METH_VARARGS,
   "V.GetRadiusMaxValue() -> float\nC++: virtual double GetRadiusMaxValue()\n\nSpecify the radius of influence of the signed distance function.\nData values (which are distances) that are greater than the\nradius (i.e., d > Radius) are considered empty voxels; those\nvoxel data values d < -Radius are considered unseen voxels.\n"},
  {"GetRadius", PyvtkExtractSurface_GetRadius, METH_VARARGS,
   "V.GetRadius() -> float\nC++: virtual double GetRadius()\n\nSpecify the radius of influence of the signed distance function.\nData values (which are distances) that are greater than the\nradius (i.e., d > Radius) are considered empty voxels; those\nvoxel data values d < -Radius are considered unseen voxels.\n"},
  {"SetHoleFilling", PyvtkExtractSurface_SetHoleFilling, METH_VARARGS,
   "V.SetHoleFilling(bool)\nC++: virtual void SetHoleFilling(bool _arg)\n\nEnable hole filling. This generates separating surfaces between\nthe empty and unseen portions of the volume.\n"},
  {"GetHoleFilling", PyvtkExtractSurface_GetHoleFilling, METH_VARARGS,
   "V.GetHoleFilling() -> bool\nC++: virtual bool GetHoleFilling()\n\nEnable hole filling. This generates separating surfaces between\nthe empty and unseen portions of the volume.\n"},
  {"HoleFillingOn", PyvtkExtractSurface_HoleFillingOn, METH_VARARGS,
   "V.HoleFillingOn()\nC++: virtual void HoleFillingOn()\n\nEnable hole filling. This generates separating surfaces between\nthe empty and unseen portions of the volume.\n"},
  {"HoleFillingOff", PyvtkExtractSurface_HoleFillingOff, METH_VARARGS,
   "V.HoleFillingOff()\nC++: virtual void HoleFillingOff()\n\nEnable hole filling. This generates separating surfaces between\nthe empty and unseen portions of the volume.\n"},
  {"SetComputeNormals", PyvtkExtractSurface_SetComputeNormals, METH_VARARGS,
   "V.SetComputeNormals(int)\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"GetComputeNormals", PyvtkExtractSurface_GetComputeNormals, METH_VARARGS,
   "V.GetComputeNormals() -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOn", PyvtkExtractSurface_ComputeNormalsOn, METH_VARARGS,
   "V.ComputeNormalsOn()\nC++: virtual void ComputeNormalsOn()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"ComputeNormalsOff", PyvtkExtractSurface_ComputeNormalsOff, METH_VARARGS,
   "V.ComputeNormalsOff()\nC++: virtual void ComputeNormalsOff()\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"SetComputeGradients", PyvtkExtractSurface_SetComputeGradients, METH_VARARGS,
   "V.SetComputeGradients(int)\nC++: virtual void SetComputeGradients(vtkTypeBool _arg)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"GetComputeGradients", PyvtkExtractSurface_GetComputeGradients, METH_VARARGS,
   "V.GetComputeGradients() -> int\nC++: virtual vtkTypeBool GetComputeGradients()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOn", PyvtkExtractSurface_ComputeGradientsOn, METH_VARARGS,
   "V.ComputeGradientsOn()\nC++: virtual void ComputeGradientsOn()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {"ComputeGradientsOff", PyvtkExtractSurface_ComputeGradientsOff, METH_VARARGS,
   "V.ComputeGradientsOff()\nC++: virtual void ComputeGradientsOff()\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset. If the output data will\nbe processed by filters that modify topology or geometry, it may\nbe wise to turn Normals and Gradients off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExtractSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkExtractSurface", // tp_name
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
  PyvtkExtractSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSurface_StaticNew()
{
  return vtkExtractSurface::New();
}

PyObject *PyvtkExtractSurface_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExtractSurface_Type, PyvtkExtractSurface_Methods,
    "vtkExtractSurface",
 &PyvtkExtractSurface_StaticNew);

  PyTypeObject *pytype = &PyvtkExtractSurface_Type;

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

void PyVTKAddFile_vtkExtractSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSurface", o) != 0)
  {
    Py_DECREF(o);
  }

}

