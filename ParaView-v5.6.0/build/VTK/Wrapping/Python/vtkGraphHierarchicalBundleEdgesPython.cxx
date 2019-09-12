// python wrapper for vtkGraphHierarchicalBundleEdges
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
#include "vtkGraphHierarchicalBundleEdges.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphHierarchicalBundleEdges(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkGraphHierarchicalBundleEdges_ClassNew(); }

#ifndef DECLARED_PyvtkGraphAlgorithm_ClassNew
extern "C" { PyObject *PyvtkGraphAlgorithm_ClassNew(); }
#define DECLARED_PyvtkGraphAlgorithm_ClassNew
#endif

static const char *PyvtkGraphHierarchicalBundleEdges_Doc =
  "vtkGraphHierarchicalBundleEdges - layout graph arcs in bundles\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "This algorithm creates a vtkPolyData from a vtkGraph.  As opposed to\n"
  "vtkGraphToPolyData, which converts each arc into a straight line,\n"
  "each arc is converted to a polyline, following a tree structure.  The\n"
  "filter requires both a vtkGraph and vtkTree as input.  The tree\n"
  "vertices must be a superset of the graph vertices.  A common example\n"
  "is when the graph vertices correspond to the leaves of the tree, but\n"
  "the internal vertices of the tree represent groupings of graph\n"
  "vertices.  The algorithm matches the vertices using the array\n"
  "\"PedigreeId\".  The user may alternately set the DirectMapping flag to\n"
  "indicate that the two structures must have directly corresponding\n"
  "offsets (i.e. node i in the graph must correspond to node i in the\n"
  "tree).\n\n"
  "The vtkGraph defines the topology of the output vtkPolyData (i.e. the\n"
  "connections between nodes) while the vtkTree defines the geometry\n"
  "(i.e. the location of nodes and arc routes).  Thus, the tree must\n"
  "have been assigned vertex locations, but the graph does not need\n"
  "locations, in fact they will be ignored.  The edges approximately\n"
  "follow the path from the source to target nodes in the tree.  A\n"
  "bundling parameter controls how closely the edges are bundled\n"
  "together along the tree structure.\n\n"
  "You may follow this algorithm with vtkSplineFilter in order to make\n"
  "nicely curved edges.\n\n"
  "@par Thanks: This algorithm was developed in the paper Danny Holten.\n"
  "Hierarchical Edge Bundles: Visualization of Adjacency Relations\n"
  "Relations in Hierarchical Data. IEEE Transactions on Visualization\n"
  "and Computer Graphics, Vol. 12, No. 5, 2006. pp. 741-748.\n\n";


static PyObject *
PyvtkGraphHierarchicalBundleEdges_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphHierarchicalBundleEdges::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphHierarchicalBundleEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphHierarchicalBundleEdges *tempr = vtkGraphHierarchicalBundleEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphHierarchicalBundleEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphHierarchicalBundleEdges::NewInstance());

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
PyvtkGraphHierarchicalBundleEdges_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBundlingStrength(temp0);
    }
    else
    {
      op->vtkGraphHierarchicalBundleEdges::SetBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrengthMinValue() :
      op->vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrengthMaxValue() :
      op->vtkGraphHierarchicalBundleEdges::GetBundlingStrengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength() :
      op->vtkGraphHierarchicalBundleEdges::GetBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_SetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectMapping(temp0);
    }
    else
    {
      op->vtkGraphHierarchicalBundleEdges::SetDirectMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_GetDirectMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirectMapping() :
      op->vtkGraphHierarchicalBundleEdges::GetDirectMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_DirectMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOn();
    }
    else
    {
      op->vtkGraphHierarchicalBundleEdges::DirectMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_DirectMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectMappingOff();
    }
    else
    {
      op->vtkGraphHierarchicalBundleEdges::DirectMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphHierarchicalBundleEdges_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphHierarchicalBundleEdges *op = static_cast<vtkGraphHierarchicalBundleEdges *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkGraphHierarchicalBundleEdges::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphHierarchicalBundleEdges_Methods[] = {
  {"IsTypeOf", PyvtkGraphHierarchicalBundleEdges_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphHierarchicalBundleEdges_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphHierarchicalBundleEdges_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkGraphHierarchicalBundleEdges\nC++: static vtkGraphHierarchicalBundleEdges *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphHierarchicalBundleEdges_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkGraphHierarchicalBundleEdges\nC++: vtkGraphHierarchicalBundleEdges *NewInstance()\n\n"},
  {"SetBundlingStrength", PyvtkGraphHierarchicalBundleEdges_SetBundlingStrength, METH_VARARGS,
   "V.SetBundlingStrength(float)\nC++: virtual void SetBundlingStrength(double _arg)\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {"GetBundlingStrengthMinValue", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMinValue, METH_VARARGS,
   "V.GetBundlingStrengthMinValue() -> float\nC++: virtual double GetBundlingStrengthMinValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {"GetBundlingStrengthMaxValue", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrengthMaxValue, METH_VARARGS,
   "V.GetBundlingStrengthMaxValue() -> float\nC++: virtual double GetBundlingStrengthMaxValue()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {"GetBundlingStrength", PyvtkGraphHierarchicalBundleEdges_GetBundlingStrength, METH_VARARGS,
   "V.GetBundlingStrength() -> float\nC++: virtual double GetBundlingStrength()\n\nThe level of arc bundling in the graph. A strength of 0 creates\nstraight lines, while a strength of 1 forces arcs to pass\ndirectly through hierarchy node points. The default value is 0.8.\n"},
  {"SetDirectMapping", PyvtkGraphHierarchicalBundleEdges_SetDirectMapping, METH_VARARGS,
   "V.SetDirectMapping(bool)\nC++: virtual void SetDirectMapping(bool _arg)\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"GetDirectMapping", PyvtkGraphHierarchicalBundleEdges_GetDirectMapping, METH_VARARGS,
   "V.GetDirectMapping() -> bool\nC++: virtual bool GetDirectMapping()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"DirectMappingOn", PyvtkGraphHierarchicalBundleEdges_DirectMappingOn, METH_VARARGS,
   "V.DirectMappingOn()\nC++: virtual void DirectMappingOn()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"DirectMappingOff", PyvtkGraphHierarchicalBundleEdges_DirectMappingOff, METH_VARARGS,
   "V.DirectMappingOff()\nC++: virtual void DirectMappingOff()\n\nIf on, uses direct mapping from tree to graph vertices. If off,\nboth the graph and tree must contain PedigreeId arrays which are\nused to match graph and tree vertices. Default is off.\n"},
  {"FillInputPortInformation", PyvtkGraphHierarchicalBundleEdges_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSet the input type of the algorithm to vtkGraph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkGraphHierarchicalBundleEdges_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkGraphHierarchicalBundleEdges", // tp_name
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
  PyvtkGraphHierarchicalBundleEdges_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphHierarchicalBundleEdges_StaticNew()
{
  return vtkGraphHierarchicalBundleEdges::New();
}

PyObject *PyvtkGraphHierarchicalBundleEdges_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkGraphHierarchicalBundleEdges_Type, PyvtkGraphHierarchicalBundleEdges_Methods,
    "vtkGraphHierarchicalBundleEdges",
 &PyvtkGraphHierarchicalBundleEdges_StaticNew);

  PyTypeObject *pytype = &PyvtkGraphHierarchicalBundleEdges_Type;

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

void PyVTKAddFile_vtkGraphHierarchicalBundleEdges(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphHierarchicalBundleEdges_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphHierarchicalBundleEdges", o) != 0)
  {
    Py_DECREF(o);
  }

}

