// python wrapper for vtkCollapseGraph
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
#include "vtkCollapseGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollapseGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkCollapseGraph_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkCollapseGraph_Doc =
  "vtkCollapseGraph - \"Collapses\" vertices onto their neighbors.\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkCollapseGraph \"collapses\" vertices onto their neighbors, while\n"
  "maintaining connectivity.  Two inputs are required - a graph\n"
  "(directed or undirected), and a vertex selection that can be\n"
  "converted to indices.\n\n"
  "Conceptually, each of the vertices specified in the input selection\n"
  "expands, \"swallowing\" adacent vertices.  Edges to-or-from the\n"
  "\"swallowed\" vertices become edges to-or-from the expanding vertices,\n"
  "maintaining the overall graph connectivity.\n\n"
  "In the case of directed graphs, expanding vertices only swallow\n"
  "vertices that are connected via out edges.  This rule provides\n"
  "intuitive behavior when working with trees, so that \"child\" vertices\n"
  "collapse into their parents when the parents are part of the input\n"
  "selection.\n\n"
  "Input port 0: graph Input port 1: selection\n\n";


static PyObject *
PyvtkCollapseGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollapseGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollapseGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollapseGraph *tempr = vtkCollapseGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollapseGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollapseGraph::NewInstance());

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
PyvtkCollapseGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetGraphConnection(temp0);
    }
    else
    {
      op->vtkCollapseGraph::SetGraphConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollapseGraph_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollapseGraph *op = static_cast<vtkCollapseGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkCollapseGraph::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCollapseGraph_Methods[] = {
  {"IsTypeOf", PyvtkCollapseGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollapseGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollapseGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkCollapseGraph\nC++: static vtkCollapseGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollapseGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkCollapseGraph\nC++: vtkCollapseGraph *NewInstance()\n\n"},
  {"SetGraphConnection", PyvtkCollapseGraph_SetGraphConnection, METH_VARARGS,
   "V.SetGraphConnection(vtkAlgorithmOutput)\nC++: void SetGraphConnection(vtkAlgorithmOutput *)\n\nConvenience function provided for setting the graph input.\n"},
  {"SetSelectionConnection", PyvtkCollapseGraph_SetSelectionConnection, METH_VARARGS,
   "V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *)\n\nConvenience function provided for setting the selection input.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkCollapseGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkCollapseGraph", // tp_name
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
  PyvtkCollapseGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCollapseGraph_StaticNew()
{
  return vtkCollapseGraph::New();
}

PyObject *PyvtkCollapseGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkCollapseGraph_Type, PyvtkCollapseGraph_Methods,
    "vtkCollapseGraph",
 &PyvtkCollapseGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkCollapseGraph_Type;

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

void PyVTKAddFile_vtkCollapseGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollapseGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollapseGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

