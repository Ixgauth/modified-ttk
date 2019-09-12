// python wrapper for vtkKCoreDecomposition
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
#include "vtkKCoreDecomposition.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKCoreDecomposition(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkKCoreDecomposition_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkKCoreDecomposition_Doc =
  "vtkKCoreDecomposition - Compute the k-core decomposition of the input\ngraph.\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "The k-core decomposition is a graph partitioning strategy that is\n"
  "useful for analyzing the structure of large networks. A k-core of a\n"
  "graph G is a maximal connected subgraph of G in which all vertices\n"
  "have degree at least k.  The k-core membership for each vertex of the\n"
  "input graph is found on the vertex data of the output graph as an\n"
  "array named 'KCoreDecompositionNumbers' by default.  The algorithm\n"
  "used to find the k-cores has O(number of graph edges) running time,\n"
  "and is described in the following reference paper.\n\n"
  "An O(m) Algorithm for Cores Decomposition of Networks\n"
  "  V. Batagelj, M. Zaversnik, 2001\n\n"
  "@par Thanks: Thanks to Thomas Otahal from Sandia National\n"
  "Laboratories for providing this implementation.\n\n";


static PyObject *
PyvtkKCoreDecomposition_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKCoreDecomposition::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKCoreDecomposition::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKCoreDecomposition *tempr = vtkKCoreDecomposition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKCoreDecomposition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKCoreDecomposition::NewInstance());

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
PyvtkKCoreDecomposition_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayName(temp0);
    }
    else
    {
      op->vtkKCoreDecomposition::SetOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetUseInDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInDegreeNeighbors(temp0);
    }
    else
    {
      op->vtkKCoreDecomposition::SetUseInDegreeNeighbors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetUseInDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInDegreeNeighbors() :
      op->vtkKCoreDecomposition::GetUseInDegreeNeighbors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseInDegreeNeighborsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInDegreeNeighborsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInDegreeNeighborsOn();
    }
    else
    {
      op->vtkKCoreDecomposition::UseInDegreeNeighborsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseInDegreeNeighborsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInDegreeNeighborsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInDegreeNeighborsOff();
    }
    else
    {
      op->vtkKCoreDecomposition::UseInDegreeNeighborsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetUseOutDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOutDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOutDegreeNeighbors(temp0);
    }
    else
    {
      op->vtkKCoreDecomposition::SetUseOutDegreeNeighbors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetUseOutDegreeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOutDegreeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseOutDegreeNeighbors() :
      op->vtkKCoreDecomposition::GetUseOutDegreeNeighbors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseOutDegreeNeighborsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOutDegreeNeighborsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOutDegreeNeighborsOn();
    }
    else
    {
      op->vtkKCoreDecomposition::UseOutDegreeNeighborsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_UseOutDegreeNeighborsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOutDegreeNeighborsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOutDegreeNeighborsOff();
    }
    else
    {
      op->vtkKCoreDecomposition::UseOutDegreeNeighborsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_SetCheckInputGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckInputGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckInputGraph(temp0);
    }
    else
    {
      op->vtkKCoreDecomposition::SetCheckInputGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_GetCheckInputGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckInputGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCheckInputGraph() :
      op->vtkKCoreDecomposition::GetCheckInputGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_CheckInputGraphOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputGraphOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckInputGraphOn();
    }
    else
    {
      op->vtkKCoreDecomposition::CheckInputGraphOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreDecomposition_CheckInputGraphOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckInputGraphOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreDecomposition *op = static_cast<vtkKCoreDecomposition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckInputGraphOff();
    }
    else
    {
      op->vtkKCoreDecomposition::CheckInputGraphOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKCoreDecomposition_Methods[] = {
  {"IsTypeOf", PyvtkKCoreDecomposition_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKCoreDecomposition_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKCoreDecomposition_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkKCoreDecomposition\nC++: static vtkKCoreDecomposition *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKCoreDecomposition_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkKCoreDecomposition\nC++: vtkKCoreDecomposition *NewInstance()\n\n"},
  {"SetOutputArrayName", PyvtkKCoreDecomposition_SetOutputArrayName, METH_VARARGS,
   "V.SetOutputArrayName(string)\nC++: virtual void SetOutputArrayName(const char *_arg)\n\nSet the output array name. If no output array name is set then\nthe name 'KCoreDecompositionNumbers' is used.\n"},
  {"SetUseInDegreeNeighbors", PyvtkKCoreDecomposition_SetUseInDegreeNeighbors, METH_VARARGS,
   "V.SetUseInDegreeNeighbors(bool)\nC++: virtual void SetUseInDegreeNeighbors(bool _arg)\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"GetUseInDegreeNeighbors", PyvtkKCoreDecomposition_GetUseInDegreeNeighbors, METH_VARARGS,
   "V.GetUseInDegreeNeighbors() -> bool\nC++: virtual bool GetUseInDegreeNeighbors()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"UseInDegreeNeighborsOn", PyvtkKCoreDecomposition_UseInDegreeNeighborsOn, METH_VARARGS,
   "V.UseInDegreeNeighborsOn()\nC++: virtual void UseInDegreeNeighborsOn()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"UseInDegreeNeighborsOff", PyvtkKCoreDecomposition_UseInDegreeNeighborsOff, METH_VARARGS,
   "V.UseInDegreeNeighborsOff()\nC++: virtual void UseInDegreeNeighborsOff()\n\nDirected graphs only.  Use only the in edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"SetUseOutDegreeNeighbors", PyvtkKCoreDecomposition_SetUseOutDegreeNeighbors, METH_VARARGS,
   "V.SetUseOutDegreeNeighbors(bool)\nC++: virtual void SetUseOutDegreeNeighbors(bool _arg)\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"GetUseOutDegreeNeighbors", PyvtkKCoreDecomposition_GetUseOutDegreeNeighbors, METH_VARARGS,
   "V.GetUseOutDegreeNeighbors() -> bool\nC++: virtual bool GetUseOutDegreeNeighbors()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"UseOutDegreeNeighborsOn", PyvtkKCoreDecomposition_UseOutDegreeNeighborsOn, METH_VARARGS,
   "V.UseOutDegreeNeighborsOn()\nC++: virtual void UseOutDegreeNeighborsOn()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"UseOutDegreeNeighborsOff", PyvtkKCoreDecomposition_UseOutDegreeNeighborsOff, METH_VARARGS,
   "V.UseOutDegreeNeighborsOff()\nC++: virtual void UseOutDegreeNeighborsOff()\n\nDirected graphs only.  Use only the out edges to compute the\nvertex degree of a vertex.  The default is to use both in and out\nedges to compute vertex degree.\n"},
  {"SetCheckInputGraph", PyvtkKCoreDecomposition_SetCheckInputGraph, METH_VARARGS,
   "V.SetCheckInputGraph(bool)\nC++: virtual void SetCheckInputGraph(bool _arg)\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {"GetCheckInputGraph", PyvtkKCoreDecomposition_GetCheckInputGraph, METH_VARARGS,
   "V.GetCheckInputGraph() -> bool\nC++: virtual bool GetCheckInputGraph()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {"CheckInputGraphOn", PyvtkKCoreDecomposition_CheckInputGraphOn, METH_VARARGS,
   "V.CheckInputGraphOn()\nC++: virtual void CheckInputGraphOn()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {"CheckInputGraphOff", PyvtkKCoreDecomposition_CheckInputGraphOff, METH_VARARGS,
   "V.CheckInputGraphOff()\nC++: virtual void CheckInputGraphOff()\n\nCheck the input graph for self loops and parallel edges.  The\nk-core is not defined for graphs that contain either of these. \nDefault is on.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkKCoreDecomposition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkKCoreDecomposition", // tp_name
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
  PyvtkKCoreDecomposition_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKCoreDecomposition_StaticNew()
{
  return vtkKCoreDecomposition::New();
}

PyObject *PyvtkKCoreDecomposition_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkKCoreDecomposition_Type, PyvtkKCoreDecomposition_Methods,
    "vtkKCoreDecomposition",
 &PyvtkKCoreDecomposition_StaticNew);

  PyTypeObject *pytype = &PyvtkKCoreDecomposition_Type;

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

void PyVTKAddFile_vtkKCoreDecomposition(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKCoreDecomposition_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKCoreDecomposition", o) != 0)
  {
    Py_DECREF(o);
  }

}

