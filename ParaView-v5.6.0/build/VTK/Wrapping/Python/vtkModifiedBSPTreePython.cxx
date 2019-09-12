// python wrapper for vtkModifiedBSPTree
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
#include "vtkModifiedBSPTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkModifiedBSPTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkModifiedBSPTree_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractCellLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractCellLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractCellLocator_ClassNew
#endif

static const char *PyvtkModifiedBSPTree_Doc =
  "vtkModifiedBSPTree - Generate axis aligned BBox tree for raycasting\nand other Locator based searches\n\n"
  "Superclass: vtkAbstractCellLocator\n\n"
  "vtkModifiedBSPTree creates an evenly balanced BSP tree using a top\n"
  "down implementation. Axis aligned split planes are found which evenly\n"
  "divide cells into two buckets. Generally a split plane will intersect\n"
  "some cells and these are usually stored in both child nodes of the\n"
  "current parent. (Or split into separate cells which we cannot\n"
  "consider in this case). Storing cells in multiple buckets creates\n"
  "problems associated with multiple tests against rays and increases\n"
  "the required storage as complex meshes will have many cells\n"
  "straddling a split plane (and further splits may cause multiple\n"
  "copies of these).\n\n"
  "During a discussion with Arno Formella in 1998 he suggested using a\n"
  "third child node to store objects which straddle split planes. I've\n"
  "not seen this published (Yes! - see below), but thought it worth\n"
  "trying. This implementation of the BSP tree creates a third child\n"
  "node for storing cells laying across split planes, the third cell may\n"
  "overlap the other two, but the two 'proper' nodes otherwise conform\n"
  "to usual BSP rules.\n\n"
  "The advantage of this implementation is cells only ever lie in one\n"
  "node and mailbox testing is avoided. All BBoxes are axis aligned and\n"
  "a ray cast uses an efficient search strategy based on near/far nodes\n"
  "and rejects all BBoxes using simple tests.\n\n"
  "For fast raytracing, 6 copies of cell lists are stored in each leaf\n"
  "node each list is in axis sorted order +/- x,y,z and cells are always\n"
  "tested in the direction of the ray dominant axis. Once an\n"
  "intersection is found any cell or BBox with a closest point further\n"
  "than the I-point can be instantly rejected and raytracing stops as\n"
  "soon as no nodes can be closer than the current best intersection\n"
  "point.\n\n"
  "The addition of the 'middle' node upsets the optimal balance of the\n"
  "tree, but is a minor overhead during the raytrace. Each child node is\n"
  "contracted such that it tightly fits all cells inside it, enabling\n"
  "further ray/box rejections.\n\n"
  "This class is intended for persons requiring many ray tests and is\n"
  "optimized for this purpose. As no cell ever lies in more than one\n"
  "leaf node, and parent nodes do not maintain cell lists, the memory\n"
  "overhead of the sorted cell lists is 6*num_cells*4 for 6 lists of\n"
  "ints, each num_cells in length. The memory requirement of the nodes\n"
  "themselves is usually of minor significance.\n\n"
  "Subdividision is controlled by MaxCellsPerNode - any node with more\n"
  "than this number will be subdivided providing a good split plane can\n"
  "be found and the max depth is not exceeded.\n\n"
  "The average cells per leaf will usually be around half the\n"
  "MaxCellsPerNode, though the middle node is usually sparsely populated\n"
  "and lowers the average slightly. The middle node will not be created\n"
  "when not needed. Subdividing down to very small cells per node is not\n"
  "generally suggested as then the 6 stored cell lists are effectively\n"
  "redundant.\n\n"
  "Values of MaxcellsPerNode of around 16->128 depending on dataset size\n"
  "will usually give good results.\n\n"
  "Cells are only sorted into 6 lists once - before tree creation, each\n"
  "node segments the lists and passes them down to the new child nodes\n"
  "whilst maintaining sorted order. This makes for an efficient\n"
  "subdivision strategy.\n\n"
  "NB. The following reference has been sent to me \n"
  "@Article{formella-1995-ray,\n"
  "    author =     \"Arno Formella and Christian Gill\",\n"
  "    title =      \"{Ray Tracing: A Quantitative Analysis and a New\n"
  "                  Practical Algorithm}\",\n"
  "    journal =    \"{The Visual Computer}\",\n"
  "    year =       \"{1995}\",\n"
  "    month =       dec,\n"
  "    pages =      \"{465--476}\",\n"
  "    volume =     \"{11}\",\n"
  "    number =     \"{9}\",\n"
  "    publisher =  \"{Springer}\",\n"
  "    keywords =   \"{ray tracing, space subdivision, plane traversal,\n"
  "                   octree, clustering, benchmark scenes}\",\n"
  "    annote =     \"{We present a new method to accelerate the process\n"
  "of\n"
  "                   finding nearest ray--object intersections in ray\n"
  "                   tracing. The algorithm consumes an amount of\n"
  "memory\n"
  "                   more or less linear in the number of objects. The\n"
  "basic\n"
  "                   ideas can be characterized with a modified\n"
  "BSP--tree\n"
  "                   and plane traversal. Plane traversal is a fast\n"
  "linear\n"
  "                   time algorithm to find the closest intersection\n"
  "point\n"
  "                   in a list of bounding volumes hit by a ray. We use\n"
  "                   plane traversal at every node of the high\n"
  "outdegree\n"
  "                   BSP--tree. Our implementation is competitive to\n"
  "fast\n"
  "                   ray tracing programs. We present a benchmark suite\n"
  "                   which allows for an extensive comparison of ray\n"
  "tracing\n"
  "                   algorithms.}\",\n"
  "  }\n\n"
  "@par Thanks:\n"
  " John Biddiscombe for developing and contributing this class\n\n"
  "@todo\n"
  "------------- Implement intersection heap for testing rays against\n"
  "    transparent objects\n\n"
  "@par Style:\n"
  "-------------- This class is currently maintained by J. Biddiscombe\n"
  "    who has specially requested that the code style not be modified\n"
  "    to the kitware standard. Please respect the contribution of this\n"
  "    class by keeping the style as close as possible to the author's\n"
  "    original.\n\n";


static PyObject *
PyvtkModifiedBSPTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkModifiedBSPTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkModifiedBSPTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkModifiedBSPTree *tempr = vtkModifiedBSPTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkModifiedBSPTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkModifiedBSPTree::NewInstance());

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
PyvtkModifiedBSPTree_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkModifiedBSPTree::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkModifiedBSPTree::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkModifiedBSPTree::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentationLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentationLeafs(temp0);
    }
    else
    {
      op->vtkModifiedBSPTree::GenerateRepresentationLeafs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  vtkIdType temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  vtkIdType temp7;
  vtkGenericCell *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    ap.Save(temp4, save4, size4);
    ap.Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (ap.HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  vtkPoints *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkModifiedBSPTree_IntersectWithLine_s1(self, args);
    case 9:
      return PyvtkModifiedBSPTree_IntersectWithLine_s2(self, args);
    case 5:
      return PyvtkModifiedBSPTree_IntersectWithLine_s3(self, args);
    case 7:
      return PyvtkModifiedBSPTree_IntersectWithLine_s4(self, args);
    case 4:
      return PyvtkModifiedBSPTree_IntersectWithLine_s5(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}



static PyObject *
PyvtkModifiedBSPTree_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    ap.Save(temp0, save0, size0);
    ap.Save(temp3, save3, size3);
    ap.Save(temp4, save4, size4);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::FindCell(temp0, temp1, temp2, temp3, temp4));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (ap.HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (ap.HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    vtkIdType tempr = (ap.IsBound() ?
      op->FindCell(temp0) :
      op->vtkModifiedBSPTree::FindCell(temp0));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkModifiedBSPTree_FindCell_s1(self, args);
    case 1:
      return PyvtkModifiedBSPTree_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}



static PyObject *
PyvtkModifiedBSPTree_InsideCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->InsideCellBounds(temp0, temp1) :
      op->vtkModifiedBSPTree::InsideCellBounds(temp0, temp1));

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GetLeafNodeCellInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafNodeCellInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdListCollection *tempr = (ap.IsBound() ?
      op->GetLeafNodeCellInformation() :
      op->vtkModifiedBSPTree::GetLeafNodeCellInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkModifiedBSPTree_Methods[] = {
  {"IsTypeOf", PyvtkModifiedBSPTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard Type-Macro\n"},
  {"IsA", PyvtkModifiedBSPTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard Type-Macro\n"},
  {"SafeDownCast", PyvtkModifiedBSPTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkModifiedBSPTree\nC++: static vtkModifiedBSPTree *SafeDownCast(vtkObjectBase *o)\n\nStandard Type-Macro\n"},
  {"NewInstance", PyvtkModifiedBSPTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkModifiedBSPTree\nC++: vtkModifiedBSPTree *NewInstance()\n\nStandard Type-Macro\n"},
  {"FreeSearchStructure", PyvtkModifiedBSPTree_FreeSearchStructure, METH_VARARGS,
   "V.FreeSearchStructure()\nC++: void FreeSearchStructure() override;\n\nFree tree memory\n"},
  {"BuildLocator", PyvtkModifiedBSPTree_BuildLocator, METH_VARARGS,
   "V.BuildLocator()\nC++: void BuildLocator() override;\n\nBuild Tree\n"},
  {"GenerateRepresentation", PyvtkModifiedBSPTree_GenerateRepresentation, METH_VARARGS,
   "V.GenerateRepresentation(int, vtkPolyData)\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nGenerate BBox representation of Nth level\n"},
  {"GenerateRepresentationLeafs", PyvtkModifiedBSPTree_GenerateRepresentationLeafs, METH_VARARGS,
   "V.GenerateRepresentationLeafs(vtkPolyData)\nC++: virtual void GenerateRepresentationLeafs(vtkPolyData *pd)\n\nGenerate BBox representation of all leaf nodes\n"},
  {"IntersectWithLine", PyvtkModifiedBSPTree_IntersectWithLine, METH_VARARGS,
   "V.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId) override;\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int, int, vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], const double tol, vtkPoints *points,\n    vtkIdList *cellIds)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    float, float, [float, float, float], [float, float, float],\n    int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nV.IntersectWithLine((float, float, float), (float, float, float),\n    vtkPoints, vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\n\nReturn intersection point (if any) AND the cell which was\nintersected by the finite line. Uses fast tree-search BBox\nrejection tests.\n"},
  {"FindCell", PyvtkModifiedBSPTree_FindCell, METH_VARARGS,
   "V.FindCell([float, float, float], float, vtkGenericCell, [float,\n    float, float], [float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n    override;\nV.FindCell([float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\n\nTest a point to find if it is inside a cell. Returns the cellId\nif inside or -1 if not.\n"},
  {"InsideCellBounds", PyvtkModifiedBSPTree_InsideCellBounds, METH_VARARGS,
   "V.InsideCellBounds([float, float, float], int) -> bool\nC++: bool InsideCellBounds(double x[3], vtkIdType cell_ID)\n    override;\n\nQuickly test if a point is inside the bounds of a particular\ncell. Some locators cache cell bounds and this function can make\nuse of fast access to the data.\n"},
  {"GetLeafNodeCellInformation", PyvtkModifiedBSPTree_GetLeafNodeCellInformation, METH_VARARGS,
   "V.GetLeafNodeCellInformation() -> vtkIdListCollection\nC++: vtkIdListCollection *GetLeafNodeCellInformation()\n\nAfter subdivision has completed, one may wish to query the tree\nto find which cells are in which leaf nodes. This function\nreturns a list which holds a cell Id list for each leaf node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkModifiedBSPTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkFiltersFlowPathsPython.vtkModifiedBSPTree", // tp_name
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
  PyvtkModifiedBSPTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkModifiedBSPTree_StaticNew()
{
  return vtkModifiedBSPTree::New();
}

PyObject *PyvtkModifiedBSPTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkModifiedBSPTree_Type, PyvtkModifiedBSPTree_Methods,
    "vtkModifiedBSPTree",
 &PyvtkModifiedBSPTree_StaticNew);

  PyTypeObject *pytype = &PyvtkModifiedBSPTree_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractCellLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkModifiedBSPTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkModifiedBSPTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkModifiedBSPTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

