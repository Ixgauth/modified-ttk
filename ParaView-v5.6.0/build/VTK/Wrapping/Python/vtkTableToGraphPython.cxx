// python wrapper for vtkTableToGraph
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
#include "vtkTableToGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkTableToGraph_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkTableToGraph_Doc =
  "vtkTableToGraph - convert a vtkTable into a vtkGraph\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkTableToGraph converts a table to a graph using an auxiliary link\n"
  "graph.  The link graph specifies how each row in the table should be\n"
  "converted to an edge, or a collection of edges.  It also specifies\n"
  "which columns of the table should be considered part of the same\n"
  "domain, and which columns should be hidden.\n\n"
  "A second, optional, table may be provided as the vertex table. This\n"
  "vertex table must have one or more domain columns whose values match\n"
  "values in the edge table.  The linked column name is specified in the\n"
  "domain array in the link graph.  The output graph will only contain\n"
  "vertices corresponding to a row in the vertex table.  For\n"
  "heterogeneous graphs, you may want to use vtkMergeTables to create a\n"
  "single vertex table.\n\n"
  "The link graph contains the following arrays:\n\n"
  "(1) The \"column\" array has the names of the columns to connect in\n"
  "each table row. This array is required.\n\n"
  "(2) The optional \"domain\" array provides user-defined domain names\n"
  "for each column. Matching domains in multiple columns will merge\n"
  "vertices with the same value from those columns.  By default, all\n"
  "columns are in the same domain. If a vertex table is supplied, the\n"
  "domain indicates the column in the vertex table that the edge table\n"
  "column associates with.  If the user provides a vertex table but no\n"
  "domain names, the output will be an empty graph. Hidden columns do\n"
  "not need valid domain names.\n\n"
  "(3) The optional \"hidden\" array is a bit array specifying whether the\n"
  "column should be hidden.  The resulting graph will contain edges\n"
  "representing connections \"through\" the hidden column, but the\n"
  "vertices for that column will not be present.  By default, no columns\n"
  "are hidden.  Hiding a column in a particular domain hides all columns\n"
  "in that domain.\n\n"
  "The output graph will contain three additional arrays in the vertex\n"
  "data. The \"domain\" column is a string array containing the domain of\n"
  "each vertex. The \"label\" column is a string version of the distinct\n"
  "value that, along with the domain, defines that vertex. The \"ids\"\n"
  "column also contains the distinguishing value, but as a vtkVariant\n"
  "holding the raw value instead of being converted to a string. The\n"
  "\"ids\" column is set as the vertex pedigree ID attribute.\n\n";


static PyObject *
PyvtkTableToGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToGraph *tempr = vtkTableToGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToGraph::NewInstance());

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
PyvtkTableToGraph_AddLinkVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddLinkVertex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTableToGraph::AddLinkVertex(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLinkVertices();
    }
    else
    {
      op->vtkTableToGraph::ClearLinkVertices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_AddLinkEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddLinkEdge(temp0, temp1);
    }
    else
    {
      op->vtkTableToGraph::AddLinkEdge(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLinkEdges();
    }
    else
    {
      op->vtkTableToGraph::ClearLinkEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->GetLinkGraph() :
      op->vtkTableToGraph::GetLinkGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkMutableDirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
  {
    if (ap.IsBound())
    {
      op->SetLinkGraph(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetLinkGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_LinkColumnPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkColumnPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  vtkBitArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkBitArray")))
  {
    if (ap.IsBound())
    {
      op->LinkColumnPath(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTableToGraph::LinkColumnPath(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirected(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetDirected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkTableToGraph::GetDirected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOn();
    }
    else
    {
      op->vtkTableToGraph::DirectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOff();
    }
    else
    {
      op->vtkTableToGraph::DirectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableToGraph::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetVertexTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetVertexTableConnection(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetVertexTableConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToGraph_Methods[] = {
  {"IsTypeOf", PyvtkTableToGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkTableToGraph\nC++: static vtkTableToGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkTableToGraph\nC++: vtkTableToGraph *NewInstance()\n\n"},
  {"AddLinkVertex", PyvtkTableToGraph_AddLinkVertex, METH_VARARGS,
   "V.AddLinkVertex(string, string, int)\nC++: void AddLinkVertex(const char *column,\n    const char *domain=nullptr, int hidden=0)\n\nAdd a vertex to the link graph.  Specify the column name, the\ndomain name for the column, and whether the column is hidden.\n"},
  {"ClearLinkVertices", PyvtkTableToGraph_ClearLinkVertices, METH_VARARGS,
   "V.ClearLinkVertices()\nC++: void ClearLinkVertices()\n\nClear the link graph vertices.  This also clears all edges.\n"},
  {"AddLinkEdge", PyvtkTableToGraph_AddLinkEdge, METH_VARARGS,
   "V.AddLinkEdge(string, string)\nC++: void AddLinkEdge(const char *column1, const char *column2)\n\nAdd an edge to the link graph.  Specify the names of the columns\nto link.\n"},
  {"ClearLinkEdges", PyvtkTableToGraph_ClearLinkEdges, METH_VARARGS,
   "V.ClearLinkEdges()\nC++: void ClearLinkEdges()\n\nClear the link graph edges.  The graph vertices will remain.\n"},
  {"GetLinkGraph", PyvtkTableToGraph_GetLinkGraph, METH_VARARGS,
   "V.GetLinkGraph() -> vtkMutableDirectedGraph\nC++: virtual vtkMutableDirectedGraph *GetLinkGraph()\n\nThe graph describing how to link the columns in the table.\n"},
  {"SetLinkGraph", PyvtkTableToGraph_SetLinkGraph, METH_VARARGS,
   "V.SetLinkGraph(vtkMutableDirectedGraph)\nC++: void SetLinkGraph(vtkMutableDirectedGraph *g)\n\nThe graph describing how to link the columns in the table.\n"},
  {"LinkColumnPath", PyvtkTableToGraph_LinkColumnPath, METH_VARARGS,
   "V.LinkColumnPath(vtkStringArray, vtkStringArray, vtkBitArray)\nC++: void LinkColumnPath(vtkStringArray *column,\n    vtkStringArray *domain=nullptr, vtkBitArray *hidden=nullptr)\n\nLinks the columns in a specific order. This creates a simple path\nas the link graph.\n"},
  {"SetDirected", PyvtkTableToGraph_SetDirected, METH_VARARGS,
   "V.SetDirected(bool)\nC++: virtual void SetDirected(bool _arg)\n\nSpecify the directedness of the output graph.\n"},
  {"GetDirected", PyvtkTableToGraph_GetDirected, METH_VARARGS,
   "V.GetDirected() -> bool\nC++: virtual bool GetDirected()\n\nSpecify the directedness of the output graph.\n"},
  {"DirectedOn", PyvtkTableToGraph_DirectedOn, METH_VARARGS,
   "V.DirectedOn()\nC++: virtual void DirectedOn()\n\nSpecify the directedness of the output graph.\n"},
  {"DirectedOff", PyvtkTableToGraph_DirectedOff, METH_VARARGS,
   "V.DirectedOff()\nC++: virtual void DirectedOff()\n\nSpecify the directedness of the output graph.\n"},
  {"GetMTime", PyvtkTableToGraph_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the current modified time.\n"},
  {"SetVertexTableConnection", PyvtkTableToGraph_SetVertexTableConnection, METH_VARARGS,
   "V.SetVertexTableConnection(vtkAlgorithmOutput)\nC++: void SetVertexTableConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the vertex table input.  This is\nmainly for the benefit of the VTK client/server layer, vanilla\nVTK code should use e.g:\n\n* table_to_graph->SetInputConnection(1, vertex_table->output());\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkTableToGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkTableToGraph", // tp_name
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
  PyvtkTableToGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToGraph_StaticNew()
{
  return vtkTableToGraph::New();
}

PyObject *PyvtkTableToGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkTableToGraph_Type, PyvtkTableToGraph_Methods,
    "vtkTableToGraph",
 &PyvtkTableToGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkTableToGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkGraphAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

