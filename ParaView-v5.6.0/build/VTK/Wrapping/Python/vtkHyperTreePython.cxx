// python wrapper for vtkHyperTree
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
#include "vtkHyperTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkHyperTree_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkHyperTree_Doc =
  "vtkHyperTree - An object structured as a tree where each node has\nexactly either 2^d or 3^d children.\n\n"
  "Superclass: vtkObject\n\n"
  "A hypertree is a dataset where each node has either exactly f^d\n"
  "children or no child at all if the node is a leaf, where f in {2,3}\n"
  "is the branching factor of the tree and d in {1,2,3} is the dimension\n"
  "of the dataset. Such trees have particular names when f=2: bintree\n"
  "(d=1), quadtree (d=2), and octree (d=3). When f=3, we respectively\n"
  "call them 3-tree, 9-tree, and 27-tree.\n\n"
  "The original octree class name came from the following paper:\n"
  " @ARTICLE{yau-srihari-1983,\n"
  "  author={Mann-May Yau and Sargur N. Srihari},\n"
  "  title={A Hierarchical Data Structure for Multidimensional Digital Images},\n"
  "  journal={Communications of the ACM},\n"
  "  month={July},\n"
  "  year={1983},\n"
  "  volume={26},\n"
  "  number={7},\n"
  "  pages={504--515}\n"
  "  }\n"
  " \n\n"
  "Each node is a cell. Attributes are associated with cells, not with\n"
  "points. The geometry is implicitly given by the size of the root node\n"
  "on each axis and position of the center and the orientation. (TODO:\n"
  "review center position and orientation). The geometry is then not\n"
  "limited to a hybercube but can have a rectangular shape. Attributes\n"
  "are associated with leaves. For LOD (Level-Of-Detail) purpose,\n"
  "attributes can be computed on none-leaf nodes by computing the\n"
  "average values from its children (which can be leaves or not).\n\n"
  "By construction, a hypertree is efficient in memory usage when the\n"
  "geometry is sparse. The LOD feature allows for quick culling of part\n"
  "of the dataset.\n\n"
  "This is an abstract class used as a superclass by a templated compact\n"
  "class. All methods are pure virtual. This is done to hide templates.\n\n"
  "@par Case with f=2:\n"
  "* d=3 case (octree) for each node, each child index (from 0 to 7) is\n"
  "  encoded in the following orientation. It is easy to access each\n"
  "  child as a cell of a grid. Note also that the binary representation\n"
  "is relevant, each bit code a side: bit 0 encodes -x side (0) or +x\n"
  "  side (1) bit 1 encodes -y side (0) or +y side (1) bit 2 encodes -z\n"
  "  side (0) or +z side (2)\n"
  "-z side is first, in counter-clockwise order: 0: -y -x sides 1: -y +x\n"
  "sides 2: +y -x sides 3: +y +x sides\n"
  "              +y\n"
  " +-+-+        ^\n"
  " |2|3|        |\n"
  " +-+-+  O +z  +-> +x\n"
  " |0|1|\n"
  " +-+-+\n"
  " \n\n"
  "@par Case with f=2: +z side is last, in counter-clockwise order:\n"
  " 4: -y -x sides\n"
  " 5: -y +x sides\n"
  " 6: +y -x sides\n"
  " 7: +y +x sides\n"
  "              +y\n"
  " +-+-+        ^\n"
  " |6|7|        |\n"
  " +-+-+  O +z  +-> +x\n"
  " |4|5|\n"
  " +-+-+\n"
  " \n\n"
  "@par Case with f=2: The cases with fewer dimensions are consistent\n"
  "with the octree case:\n\n"
  "@par Case with f=2:\n"
  "* d=2 case (quadtree): in counter-clockwise order: 0: -y -x edges 1:\n"
  "  -y +x edges 2: +y -x edges 3: +y +x edges\n"
  "         +y\n"
  " +-+-+   ^\n"
  " |2|3|   |\n"
  " +-+-+  O+-> +x\n"
  " |0|1|\n"
  " +-+-+\n"
  " \n\n"
  "@par Case with f=2:\n"
  "* d=1 case (bintree):\n"
  " +0+1+  O+-> +x\n"
  " \n\n"
  "@warning\n"
  "It is not a spatial search object. If you are looking for this kind\n"
  "of octree see vtkCellLocator instead.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was modified\n"
  "by Philippe Pebay, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF)\n\n";


static PyObject *
PyvtkHyperTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTree *tempr = vtkHyperTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTree::NewInstance());

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
PyvtkHyperTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfLevels();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfVertices();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfNodes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfLeaves();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetBranchFactor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdType tempr = op->GetNumberOfChildren();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->SetScale(temp0);

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
PyvtkHyperTree_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    ap.Save(temp0, save0, size0);

    op->GetScale(temp0);

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
PyvtkHyperTree_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = op->GetScale(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTree_GetScale_Methods[] = {
  {nullptr, PyvtkHyperTree_GetScale_s1, METH_VARARGS,
   "@P *d"},
  {nullptr, PyvtkHyperTree_GetScale_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTree_GetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTree_GetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return nullptr;
}



static PyObject *
PyvtkHyperTree_CreateInstance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkHyperTree *tempr = vtkHyperTree::CreateInstance(temp0, temp1);

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
PyvtkHyperTree_FindParentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindParentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->FindParentIndex(temp0);
    }
    else
    {
      op->vtkHyperTree::FindParentIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_FindChildParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindChildParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  int temp0;
  vtkIdType temp1;
  bool temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FindChildParameters(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTree::FindChildParameters(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_NewCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHyperTreeCursor *tempr = op->NewCursor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    op->SubdivideLeaf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGlobalIndexStart(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetGlobalIndexFromLocal(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = op->GetGlobalIndexFromLocal(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTree_Methods[] = {
  {"IsTypeOf", PyvtkHyperTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkHyperTree\nC++: static vtkHyperTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkHyperTree\nC++: vtkHyperTree *NewInstance()\n\n"},
  {"Initialize", PyvtkHyperTree_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: virtual void Initialize()\n\nRestore the initial state: only one node and one leaf: the root.\n"},
  {"GetNumberOfLevels", PyvtkHyperTree_GetNumberOfLevels, METH_VARARGS,
   "V.GetNumberOfLevels() -> int\nC++: virtual vtkIdType GetNumberOfLevels()\n\nReturn the number of levels.\n"},
  {"GetNumberOfVertices", PyvtkHyperTree_GetNumberOfVertices, METH_VARARGS,
   "V.GetNumberOfVertices() -> int\nC++: virtual vtkIdType GetNumberOfVertices()\n\nReturn the number of vertices in the tree.\n"},
  {"GetNumberOfNodes", PyvtkHyperTree_GetNumberOfNodes, METH_VARARGS,
   "V.GetNumberOfNodes() -> int\nC++: virtual vtkIdType GetNumberOfNodes()\n\nReturn the number of nodes (non-leaf vertices) in the tree.\n"},
  {"GetNumberOfLeaves", PyvtkHyperTree_GetNumberOfLeaves, METH_VARARGS,
   "V.GetNumberOfLeaves() -> int\nC++: virtual vtkIdType GetNumberOfLeaves()\n\nReturn the number of leaf vertices in the tree.\n"},
  {"GetBranchFactor", PyvtkHyperTree_GetBranchFactor, METH_VARARGS,
   "V.GetBranchFactor() -> int\nC++: virtual int GetBranchFactor()\n\nReturn the branch factor of the tree.\n"},
  {"GetDimension", PyvtkHyperTree_GetDimension, METH_VARARGS,
   "V.GetDimension() -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of the tree.\n"},
  {"GetNumberOfChildren", PyvtkHyperTree_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren() -> int\nC++: virtual vtkIdType GetNumberOfChildren()\n\nReturn the number of children per node of the tree.\n"},
  {"SetScale", PyvtkHyperTree_SetScale, METH_VARARGS,
   "V.SetScale([float, float, float])\nC++: virtual void SetScale(double[3])\n\nSet/Get scale of the tree in each direction.\n"},
  {"GetScale", PyvtkHyperTree_GetScale, METH_VARARGS,
   "V.GetScale([float, float, float])\nC++: virtual void GetScale(double[3])\nV.GetScale(int) -> float\nC++: virtual double GetScale(unsigned int)\n\nSet/Get scale of the tree in each direction.\n"},
  {"CreateInstance", PyvtkHyperTree_CreateInstance, METH_VARARGS,
   "V.CreateInstance(int, int) -> vtkHyperTree\nC++: static vtkHyperTree *CreateInstance(\n    unsigned int branchFactor, unsigned int dimension)\n\nReturn an instance of a templated hypertree for given branch\nfactor and dimension. This is done to hide templates.\n"},
  {"FindParentIndex", PyvtkHyperTree_FindParentIndex, METH_VARARGS,
   "V.FindParentIndex(int)\nC++: virtual void FindParentIndex(vtkIdType &)\n\nFind the Index of the parent of a vertex in the hypertree. This\nis done to hide templates.\n"},
  {"FindChildParameters", PyvtkHyperTree_FindChildParameters, METH_VARARGS,
   "V.FindChildParameters(int, int, bool)\nC++: virtual void FindChildParameters(int, vtkIdType &, bool &)\n\nFind the Index, Parent Index and IsLeaf() parameters of the child\nof a node in the hypertree. This is done to hide templates.\n"},
  {"NewCursor", PyvtkHyperTree_NewCursor, METH_VARARGS,
   "V.NewCursor() -> vtkHyperTreeCursor\nC++: virtual vtkHyperTreeCursor *NewCursor()\n\nReturn pointer to new instance of hyper tree cursor\n"},
  {"SubdivideLeaf", PyvtkHyperTree_SubdivideLeaf, METH_VARARGS,
   "V.SubdivideLeaf(vtkHyperTreeCursor)\nC++: virtual void SubdivideLeaf(vtkHyperTreeCursor *leaf)\n\nSubdivide node pointed by cursor, only if its a leaf. At the end,\ncursor points on the node that used to be leaf.\n\\pre leaf_exists: leaf!=0\n\\pre is_a_leaf: leaf->CurrentIsLeaf()\n"},
  {"GetActualMemorySize", PyvtkHyperTree_GetActualMemorySize, METH_VARARGS,
   "V.GetActualMemorySize() -> int\nC++: virtual unsigned int GetActualMemorySize()\n\nReturn memory used in kibibytes (1024 bytes). NB: Ignore the\nattribute array because its size is added by the data set.\n"},
  {"SetGlobalIndexStart", PyvtkHyperTree_SetGlobalIndexStart, METH_VARARGS,
   "V.SetGlobalIndexStart(int)\nC++: virtual void SetGlobalIndexStart(vtkIdType)\n\nSet the start global index for the current tree. The global index\nof a node will be this index + the node index.\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTree_SetGlobalIndexFromLocal, METH_VARARGS,
   "V.SetGlobalIndexFromLocal(int, int)\nC++: virtual void SetGlobalIndexFromLocal(vtkIdType local,\n    vtkIdType global)\n\nSet the mapping between local & global Ids used by\nHyperTreeGrids.\n"},
  {"GetGlobalIndexFromLocal", PyvtkHyperTree_GetGlobalIndexFromLocal, METH_VARARGS,
   "V.GetGlobalIndexFromLocal(int) -> int\nC++: virtual vtkIdType GetGlobalIndexFromLocal(vtkIdType local)\n\nGet the global id of a local node. Use the mapping function if\navailable or the start global index.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkHyperTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkHyperTree", // tp_name
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
  PyvtkHyperTree_Doc, // tp_doc
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

PyObject *PyvtkHyperTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkHyperTree_Type, PyvtkHyperTree_Methods,
    "vtkHyperTree",
 nullptr);

  PyTypeObject *pytype = &PyvtkHyperTree_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

