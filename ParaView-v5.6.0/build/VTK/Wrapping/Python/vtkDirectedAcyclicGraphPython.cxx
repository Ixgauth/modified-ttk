// python wrapper for vtkDirectedAcyclicGraph
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
#include "vtkDirectedAcyclicGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDirectedAcyclicGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkDirectedAcyclicGraph_ClassNew(); }

#ifndef DECLARED_PyvtkDirectedGraph_ClassNew
extern "C" { PyObject *PyvtkDirectedGraph_ClassNew(); }
#define DECLARED_PyvtkDirectedGraph_ClassNew
#endif

static const char *PyvtkDirectedAcyclicGraph_Doc =
  "vtkDirectedAcyclicGraph - A rooted tree data structure.\n\n"
  "Superclass: vtkDirectedGraph\n\n"
  "vtkDirectedAcyclicGraph is a connected directed graph with no cycles.\n"
  "A tree is a type of directed graph, so works with all graph\n"
  "algorithms.\n\n"
  "vtkDirectedAcyclicGraph is a read-only data structure. To construct a\n"
  "tree, create an instance of vtkMutableDirectedGraph. Add vertices and\n"
  "edges with AddVertex() and AddEdge(). You may alternately start by\n"
  "adding a single vertex as the root then call graph->AddChild(parent)\n"
  "which adds a new vertex and connects the parent to the child. The\n"
  "tree MUST have all edges in the proper direction, from parent to\n"
  "child. After building the tree, call tree->CheckedShallowCopy(graph)\n"
  "to copy the structure into a vtkDirectedAcyclicGraph. This method\n"
  "will return false if the graph is an invalid tree.\n\n"
  "vtkDirectedAcyclicGraph provides some convenience methods for\n"
  "obtaining the parent and children of a vertex, for finding the root,\n"
  "and determining if a vertex is a leaf (a vertex with no children).\n\n"
  "@sa\n"
  "vtkDirectedGraph vtkMutableDirectedGraph vtkGraph\n\n";


static PyObject *
PyvtkDirectedAcyclicGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDirectedAcyclicGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDirectedAcyclicGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDirectedAcyclicGraph *tempr = vtkDirectedAcyclicGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectedAcyclicGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDirectedAcyclicGraph::NewInstance());

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
PyvtkDirectedAcyclicGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDirectedAcyclicGraph *op = static_cast<vtkDirectedAcyclicGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDirectedAcyclicGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDirectedAcyclicGraph_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDirectedAcyclicGraph *tempr = vtkDirectedAcyclicGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDirectedAcyclicGraph_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDirectedAcyclicGraph *tempr = vtkDirectedAcyclicGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDirectedAcyclicGraph_GetData_Methods[] = {
  {nullptr, PyvtkDirectedAcyclicGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, PyvtkDirectedAcyclicGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDirectedAcyclicGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDirectedAcyclicGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDirectedAcyclicGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyMethodDef PyvtkDirectedAcyclicGraph_Methods[] = {
  {"IsTypeOf", PyvtkDirectedAcyclicGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDirectedAcyclicGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDirectedAcyclicGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkDirectedAcyclicGraph\nC++: static vtkDirectedAcyclicGraph *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDirectedAcyclicGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkDirectedAcyclicGraph\nC++: vtkDirectedAcyclicGraph *NewInstance()\n\n"},
  {"GetDataObjectType", PyvtkDirectedAcyclicGraph_GetDataObjectType, METH_VARARGS,
   "V.GetDataObjectType() -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetData", PyvtkDirectedAcyclicGraph_GetData, METH_VARARGS,
   "V.GetData(vtkInformation) -> vtkDirectedAcyclicGraph\nC++: static vtkDirectedAcyclicGraph *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkDirectedAcyclicGraph\nC++: static vtkDirectedAcyclicGraph *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkDirectedAcyclicGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkCommonDataModelPython.vtkDirectedAcyclicGraph", // tp_name
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
  PyvtkDirectedAcyclicGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDirectedAcyclicGraph_StaticNew()
{
  return vtkDirectedAcyclicGraph::New();
}

PyObject *PyvtkDirectedAcyclicGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkDirectedAcyclicGraph_Type, PyvtkDirectedAcyclicGraph_Methods,
    "vtkDirectedAcyclicGraph",
 &PyvtkDirectedAcyclicGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkDirectedAcyclicGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkDirectedGraph_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDirectedAcyclicGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDirectedAcyclicGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDirectedAcyclicGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

