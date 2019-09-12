// python wrapper for vtkHierarchicalBinningFilter
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
#include "vtkHierarchicalBinningFilter.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHierarchicalBinningFilter(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHierarchicalBinningFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataAlgorithm_ClassNew
extern "C" { PyObject *PyvtkPolyDataAlgorithm_ClassNew(); }
#define DECLARED_PyvtkPolyDataAlgorithm_ClassNew
#endif

static const char *PyvtkHierarchicalBinningFilter_Doc =
  "vtkHierarchicalBinningFilter - uniform binning of points into a\nhierarchical structure\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkHierarchicalBinningFilter creates a spatial, hierarchical ordering\n"
  "of input points. This hierarchy is suitable for level-of-detail\n"
  "rendering, or multiresolution processing. Each level of the hierarchy\n"
  "is based on uniform binning of space, where deeper levels (and its\n"
  "bins) are repeatedly subdivided by a given branching factor. Points\n"
  "are associated with bins at different levels, with the number of\n"
  "points in each level proportional to the number of bins in that\n"
  "level. The output points are sorted according to a bin number, where\n"
  "the bin number is unique, monotonically increasing number\n"
  "representing the breadth first ordering of all of the levels and\n"
  "their bins. Thus all points in a bin (or even a level) are segmented\n"
  "into contiguous runs.\n\n"
  "Note that points are associated with different bins using a pseudo\n"
  "random process. No points are repeated, and no new points are\n"
  "created, thus the effect of executing this filter is simply to\n"
  "reorder the input points.\n\n"
  "The algorithm proceeds as follows: Given an initial bounding box, the\n"
  "space is uniformally subdivided into bins of (M x N x O) dimensions;\n"
  "in turn each subsequent level in the tree is further divided into (M\n"
  "x N x O) bins (note that level 0 is a single, root bin). Thus the\n"
  "number of bins at level L of the hierarchical tree is: Nbins=(M^L x\n"
  "N^L x O^L). Once the binning is created to a specified depth, then\n"
  "points are placed in the bins using a pseudo-random sampling\n"
  "proportional to the number of bins in each level. All input points\n"
  "are sorted in the order described above, with no points repeated.\n\n"
  "The output of this filter are sorted points and associated point\n"
  "attributes represented by a vtkPolyData. In addition, an offset\n"
  "integral array is associated with the field data of the output,\n"
  "providing offsets into the points list via a breadth-first traversal\n"
  "order. Metadata describing the output is provided in the field data.\n"
  "Convenience functions are also provided here to access the data in a\n"
  "particular bin or across a level. (Using the offset array directly\n"
  "may result in higher performance.)\n\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointCloudFilter vtkQuadricClustering vtkStaticPointLocator\n\n";


static PyObject *
PyvtkHierarchicalBinningFilter_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHierarchicalBinningFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHierarchicalBinningFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHierarchicalBinningFilter *tempr = vtkHierarchicalBinningFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalBinningFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHierarchicalBinningFilter::NewInstance());

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
PyvtkHierarchicalBinningFilter_SetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLevels(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetNumberOfLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMinValue() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevelsMaxValue() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHierarchicalBinningFilter::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomatic(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetAutomatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutomatic() :
      op->vtkHierarchicalBinningFilter::GetAutomatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_AutomaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOn();
    }
    else
    {
      op->vtkHierarchicalBinningFilter::AutomaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_AutomaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticOff();
    }
    else
    {
      op->vtkHierarchicalBinningFilter::AutomaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

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
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHierarchicalBinningFilter_SetDivisions_s1(self, args);
    case 1:
      return PyvtkHierarchicalBinningFilter_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}



static PyObject *
PyvtkHierarchicalBinningFilter_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkHierarchicalBinningFilter::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHierarchicalBinningFilter_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkHierarchicalBinningFilter_SetBounds_s1(self, args);
    case 1:
      return PyvtkHierarchicalBinningFilter_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}



static PyObject *
PyvtkHierarchicalBinningFilter_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHierarchicalBinningFilter::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfGlobalBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGlobalBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGlobalBins() :
      op->vtkHierarchicalBinningFilter::GetNumberOfGlobalBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBins(temp0) :
      op->vtkHierarchicalBinningFilter::GetNumberOfBins(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetLevelOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLevelOffset(temp0, temp1) :
      op->vtkHierarchicalBinningFilter::GetLevelOffset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetBinOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetBinOffset(temp0, temp1) :
      op->vtkHierarchicalBinningFilter::GetBinOffset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetLocalBinOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalBinOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  int temp1;
  vtkIdType temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLocalBinOffset(temp0, temp1, temp2) :
      op->vtkHierarchicalBinningFilter::GetLocalBinOffset(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHierarchicalBinningFilter_GetBinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    ap.Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBinBounds(temp0, temp1);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::GetBinBounds(temp0, temp1);
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
PyvtkHierarchicalBinningFilter_GetLocalBinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalBinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBinningFilter *op = static_cast<vtkHierarchicalBinningFilter *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    ap.Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetLocalBinBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHierarchicalBinningFilter::GetLocalBinBounds(temp0, temp1, temp2);
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

static PyMethodDef PyvtkHierarchicalBinningFilter_Methods[] = {
  {"IsTypeOf", PyvtkHierarchicalBinningFilter_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"IsA", PyvtkHierarchicalBinningFilter_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SafeDownCast", PyvtkHierarchicalBinningFilter_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHierarchicalBinningFilter\nC++: static vtkHierarchicalBinningFilter *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"NewInstance", PyvtkHierarchicalBinningFilter_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHierarchicalBinningFilter\nC++: vtkHierarchicalBinningFilter *NewInstance()\n\nStandard methods for instantiating, obtaining type information,\nand printing information.\n"},
  {"SetNumberOfLevels", PyvtkHierarchicalBinningFilter_SetNumberOfLevels, METH_VARARGS,
   "V.SetNumberOfLevels(int)\nC++: virtual void SetNumberOfLevels(int _arg)\n\nSpecify the number of levels in the spatial hierarchy. By\ndefault, the number of levels is three.\n"},
  {"GetNumberOfLevelsMinValue", PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMinValue, METH_VARARGS,
   "V.GetNumberOfLevelsMinValue() -> int\nC++: virtual int GetNumberOfLevelsMinValue()\n\nSpecify the number of levels in the spatial hierarchy. By\ndefault, the number of levels is three.\n"},
  {"GetNumberOfLevelsMaxValue", PyvtkHierarchicalBinningFilter_GetNumberOfLevelsMaxValue, METH_VARARGS,
   "V.GetNumberOfLevelsMaxValue() -> int\nC++: virtual int GetNumberOfLevelsMaxValue()\n\nSpecify the number of levels in the spatial hierarchy. By\ndefault, the number of levels is three.\n"},
  {"GetNumberOfLevels", PyvtkHierarchicalBinningFilter_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: virtual int GetNumberOfLevels()\n\nSpecify the number of levels in the spatial hierarchy. By\ndefault, the number of levels is three.\n"},
  {"SetAutomatic", PyvtkHierarchicalBinningFilter_SetAutomatic, METH_VARARGS,
   "V.SetAutomatic(bool)\nC++: virtual void SetAutomatic(bool _arg)\n\nSpecify whether to determine the determine the level divisions,\nand the bounding box automatically (by default this is on). If\noff, then the user must specify both the bounding box and bin\ndivisions. (Computing the bounding box can be slow for large\npoint clouds, manual specification can save time.)\n"},
  {"GetAutomatic", PyvtkHierarchicalBinningFilter_GetAutomatic, METH_VARARGS,
   "V.GetAutomatic() -> bool\nC++: virtual bool GetAutomatic()\n\nSpecify whether to determine the determine the level divisions,\nand the bounding box automatically (by default this is on). If\noff, then the user must specify both the bounding box and bin\ndivisions. (Computing the bounding box can be slow for large\npoint clouds, manual specification can save time.)\n"},
  {"AutomaticOn", PyvtkHierarchicalBinningFilter_AutomaticOn, METH_VARARGS,
   "V.AutomaticOn()\nC++: virtual void AutomaticOn()\n\nSpecify whether to determine the determine the level divisions,\nand the bounding box automatically (by default this is on). If\noff, then the user must specify both the bounding box and bin\ndivisions. (Computing the bounding box can be slow for large\npoint clouds, manual specification can save time.)\n"},
  {"AutomaticOff", PyvtkHierarchicalBinningFilter_AutomaticOff, METH_VARARGS,
   "V.AutomaticOff()\nC++: virtual void AutomaticOff()\n\nSpecify whether to determine the determine the level divisions,\nand the bounding box automatically (by default this is on). If\noff, then the user must specify both the bounding box and bin\ndivisions. (Computing the bounding box can be slow for large\npoint clouds, manual specification can save time.)\n"},
  {"SetDivisions", PyvtkHierarchicalBinningFilter_SetDivisions, METH_VARARGS,
   "V.SetDivisions(int, int, int)\nC++: void SetDivisions(int, int, int)\nV.SetDivisions((int, int, int))\nC++: void SetDivisions(int a[3])\n\n"},
  {"GetDivisions", PyvtkHierarchicalBinningFilter_GetDivisions, METH_VARARGS,
   "V.GetDivisions() -> (int, int, int)\nC++: int *GetDivisions()\n\nSet the number of branching divisions in each binning direction.\nEach level of the tree is subdivided by this factor. The\nDivisions[i] must be >= 1. Note: if Automatic subdivision is\nspecified, the Divisions are set by the filter.\n"},
  {"SetBounds", PyvtkHierarchicalBinningFilter_SetBounds, METH_VARARGS,
   "V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {"GetBounds", PyvtkHierarchicalBinningFilter_GetBounds, METH_VARARGS,
   "V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\nSet the bounding box of the point cloud. If Automatic is enabled,\nthen this is computed during filter execution. If manually\nspecified (Automatic is off) then make sure the bounds is\nrepresented as (xmin,xmax, ymin,ymax, zmin,zmax). If the bounds\nspecified is does not enclose the points, then points are clamped\nto lie in the bounding box.\n"},
  {"GetNumberOfGlobalBins", PyvtkHierarchicalBinningFilter_GetNumberOfGlobalBins, METH_VARARGS,
   "V.GetNumberOfGlobalBins() -> int\nC++: int GetNumberOfGlobalBins()\n\nConvenience methods for extracting useful information about this\nbin tree.  Return the number of total bins across all levels\n(i.e., the total global bins). Invoke this method after the bin\ntree has been built.\n"},
  {"GetNumberOfBins", PyvtkHierarchicalBinningFilter_GetNumberOfBins, METH_VARARGS,
   "V.GetNumberOfBins(int) -> int\nC++: int GetNumberOfBins(int level)\n\nConvenience methods for extracting useful information about this\nbin tree.  Return the number of bins in a particular level of the\ntree. Invoke this method after the bin tree has been built.\n"},
  {"GetLevelOffset", PyvtkHierarchicalBinningFilter_GetLevelOffset, METH_VARARGS,
   "V.GetLevelOffset(int, int) -> int\nC++: vtkIdType GetLevelOffset(int level, vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a level, return the beginning point id and\nnumber of points that level. Invoke this method after the bin\ntree has been built.\n"},
  {"GetBinOffset", PyvtkHierarchicalBinningFilter_GetBinOffset, METH_VARARGS,
   "V.GetBinOffset(int, int) -> int\nC++: vtkIdType GetBinOffset(int globalBin, vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a global bin number, return the point id and\nnumber of points for that bin. Invoke this method after the bin\ntree has been built.\n"},
  {"GetLocalBinOffset", PyvtkHierarchicalBinningFilter_GetLocalBinOffset, METH_VARARGS,
   "V.GetLocalBinOffset(int, int, int) -> int\nC++: vtkIdType GetLocalBinOffset(int level, int localBin,\n    vtkIdType &npts)\n\nConvenience methods for extracting useful information about this\nbin tree.  Given a level, and the bin number in that level,\nreturn the offset point id and number of points for that bin.\nInvoke this method after the bin tree has been built.\n"},
  {"GetBinBounds", PyvtkHierarchicalBinningFilter_GetBinBounds, METH_VARARGS,
   "V.GetBinBounds(int, [float, float, float, float, float, float])\nC++: void GetBinBounds(int globalBin, double bounds[6])\n\nConvenience methods for extracting useful information about a bin\ntree. Given a global bin number, return the bounds\n(xmin,xmax,ymin,ymax,zmin,zmax) for that bin. Invoke this method\nafter the bin tree has been built.\n"},
  {"GetLocalBinBounds", PyvtkHierarchicalBinningFilter_GetLocalBinBounds, METH_VARARGS,
   "V.GetLocalBinBounds(int, int, [float, float, float, float, float,\n    float])\nC++: void GetLocalBinBounds(int level, int localBin,\n    double bounds[6])\n\nConvenience methods for extracting useful information about a bin\ntree. Given a level, and a local bin number, return the bounds\n(xmin,xmax,ymin,ymax,zmin,zmax) for that bin. Invoke this method\nafter the bin tree has been built.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHierarchicalBinningFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersPointsPython.vtkHierarchicalBinningFilter", // tp_name
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
  PyvtkHierarchicalBinningFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHierarchicalBinningFilter_StaticNew()
{
  return vtkHierarchicalBinningFilter::New();
}

PyObject *PyvtkHierarchicalBinningFilter_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHierarchicalBinningFilter_Type, PyvtkHierarchicalBinningFilter_Methods,
    "vtkHierarchicalBinningFilter",
 &PyvtkHierarchicalBinningFilter_StaticNew);

  PyTypeObject *pytype = &PyvtkHierarchicalBinningFilter_Type;

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

void PyVTKAddFile_vtkHierarchicalBinningFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHierarchicalBinningFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHierarchicalBinningFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyInt_FromLong(12);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_LEVEL", o);
    Py_DECREF(o);
  }
}

