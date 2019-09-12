// python wrapper for vtkTree
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
#include "vtkGraph.h"
#include "vtkTree.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTree(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTree_ClassNew(); }

#ifndef DECLARED_PyvtkDirectedAcyclicGraph_ClassNew
extern "C" { PyObject *PyvtkDirectedAcyclicGraph_ClassNew(); }
#define DECLARED_PyvtkDirectedAcyclicGraph_ClassNew
#endif

static const char *PyvtkTree_Doc =
  "vtkTree - A rooted tree data structure.\n\n"
  "Superclass: vtkDirectedAcyclicGraph\n\n"
  "vtkTree is a connected directed graph with no cycles. A tree is a\n"
  "type of directed graph, so works with all graph algorithms.\n\n"
  "vtkTree is a read-only data structure. To construct a tree, create an\n"
  "instance of vtkMutableDirectedGraph. Add vertices and edges with\n"
  "AddVertex() and AddEdge(). You may alternately start by adding a\n"
  "single vertex as the root then call graph->AddChild(parent) which\n"
  "adds a new vertex and connects the parent to the child. The tree MUST\n"
  "have all edges in the proper direction, from parent to child. After\n"
  "building the tree, call tree->CheckedShallowCopy(graph) to copy the\n"
  "structure into a vtkTree. This method will return false if the graph\n"
  "is an invalid tree.\n\n"
  "vtkTree provides some convenience methods for obtaining the parent\n"
  "and children of a vertex, for finding the root, and determining if a\n"
  "vertex is a leaf (a vertex with no children).\n\n"
  "@sa\n"
  "vtkDirectedGraph vtkMutableDirectedGraph vtkGraph\n\n";


static PyObject *
PyvtkTree_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTree *tempr = vtkTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTree::NewInstance());

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
PyvtkTree_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkTree::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetRoot() :
      op->vtkTree::GetRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetNumberOfChildren(temp0) :
      op->vtkTree::GetNumberOfChildren(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetChild(temp0, temp1) :
      op->vtkTree::GetChild(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkAdjacentVertexIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAdjacentVertexIterator"))
  {
    if (ap.IsBound())
    {
      op->GetChildren(temp0, temp1);
    }
    else
    {
      op->vtkTree::GetChildren(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetParent(temp0) :
      op->vtkTree::GetParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetParentEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->GetParentEdge(temp0) :
      op->vtkTree::GetParentEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLevel(temp0) :
      op->vtkTree::GetLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf(temp0) :
      op->vtkTree::IsLeaf(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTree_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkTree *tempr = vtkTree::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTree_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkTree *tempr = vtkTree::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTree_GetData_Methods[] = {
  {nullptr, PyvtkTree_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkTree_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTree_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTree_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkTree_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}



static PyObject *
PyvtkTree_ReorderChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTree *op = static_cast<vtkTree *>(vp);

  vtkIdType temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->ReorderChildren(temp0, temp1);
    }
    else
    {
      op->vtkTree::ReorderChildren(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTree_Methods[] = {
  {"IsTypeOf", PyvtkTree_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTree_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTree_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTree\nC++: static vtkTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTree_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTree\nC++: vtkTree *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkTree_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetRoot", PyvtkTree_GetRoot, METH_VARARGS,
   "V.GetRoot() -> int\nC++: virtual vtkIdType GetRoot()\n\nGet the root vertex of the tree.\n"},
  {"GetNumberOfChildren", PyvtkTree_GetNumberOfChildren, METH_VARARGS,
   "V.GetNumberOfChildren(int) -> int\nC++: vtkIdType GetNumberOfChildren(vtkIdType v)\n\nGet the number of children of a vertex.\n"},
  {"GetChild", PyvtkTree_GetChild, METH_VARARGS,
   "V.GetChild(int, int) -> int\nC++: vtkIdType GetChild(vtkIdType v, vtkIdType i)\n\nGet the i-th child of a parent vertex.\n"},
  {"GetChildren", PyvtkTree_GetChildren, METH_VARARGS,
   "V.GetChildren(int, vtkAdjacentVertexIterator)\nC++: void GetChildren(vtkIdType v, vtkAdjacentVertexIterator *it)\n\nGet the child vertices of a vertex. This is a convenience method\nthat functions exactly like GetAdjacentVertices.\n"},
  {"GetParent", PyvtkTree_GetParent, METH_VARARGS,
   "V.GetParent(int) -> int\nC++: vtkIdType GetParent(vtkIdType v)\n\nGet the parent of a vertex.\n"},
  {"GetParentEdge", PyvtkTree_GetParentEdge, METH_VARARGS,
   "V.GetParentEdge(int) -> vtkEdgeType\nC++: vtkEdgeType GetParentEdge(vtkIdType v)\n\nGet the edge connecting the vertex to its parent.\n"},
  {"GetLevel", PyvtkTree_GetLevel, METH_VARARGS,
   "V.GetLevel(int) -> int\nC++: vtkIdType GetLevel(vtkIdType v)\n\nGet the level of the vertex in the tree.  The root vertex has\nlevel 0. Returns -1 if the vertex id is < 0 or greater than the\nnumber of vertices in the tree.\n"},
  {"IsLeaf", PyvtkTree_IsLeaf, METH_VARARGS,
   "V.IsLeaf(int) -> bool\nC++: bool IsLeaf(vtkIdType vertex)\n\nReturn whether the vertex is a leaf (i.e. it has no children).\n"},
  {"GetData", PyvtkTree_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkTree\nC++: static vtkTree *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkTree\nC++: static vtkTree *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {"ReorderChildren", PyvtkTree_ReorderChildren, METH_VARARGS,
   "V.ReorderChildren(int, vtkIdTypeArray)\nC++: virtual void ReorderChildren(vtkIdType parent,\n    vtkIdTypeArray *children)\n\nReorder the children of a parent vertex. The children array must\ncontain all the children of parent, just in a different order.\nThis does not change the topology of the tree.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkTree", // tp_name
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
  PyvtkTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTree_StaticNew()
{
  return vtkTree::New();
}

PyObject *PyvtkTree_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTree_Type, PyvtkTree_Methods,
    "vtkTree",
 &PyvtkTree_StaticNew);

  PyTypeObject *pytype = &PyvtkTree_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDirectedAcyclicGraph_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

