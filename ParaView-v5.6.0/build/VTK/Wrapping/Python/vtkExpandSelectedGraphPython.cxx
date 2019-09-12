// python wrapper for vtkExpandSelectedGraph
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
#include "vtkExpandSelectedGraph.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExpandSelectedGraph(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkExpandSelectedGraph_ClassNew(); }

#ifndef DECLARED_PyvtkSelectionAlgorithm_ClassNew
extern "C" { PyObject *PyvtkSelectionAlgorithm_ClassNew(); }
#define DECLARED_PyvtkSelectionAlgorithm_ClassNew
#endif

static const char *PyvtkExpandSelectedGraph_Doc =
  "vtkExpandSelectedGraph - expands a selection set of a vtkGraph\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "The first input is a vtkSelection containing the selected vertices.\n"
  "The second input is a vtkGraph. This filter 'grows' the selection set\n"
  "in one of the following ways\n"
  "1) SetBFSDistance controls how many 'hops' the selection is grown\n"
  "   from each seed point in the selection set (defaults to 1)\n"
  "2) IncludeShortestPaths controls whether this filter tries to\n"
  "   'connect' the vertices in the selection set by computing the\n"
  "   shortest path between the vertices (if such a path exists) Note:\n"
  "   IncludeShortestPaths is currently non-functional\n\n";


static PyObject *
PyvtkExpandSelectedGraph_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExpandSelectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExpandSelectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExpandSelectedGraph *tempr = vtkExpandSelectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExpandSelectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExpandSelectedGraph::NewInstance());

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
PyvtkExpandSelectedGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

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
      op->vtkExpandSelectedGraph::SetGraphConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkExpandSelectedGraph::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBFSDistance(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetBFSDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBFSDistance() :
      op->vtkExpandSelectedGraph::GetBFSDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeShortestPaths(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetIncludeShortestPaths(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeShortestPaths() :
      op->vtkExpandSelectedGraph::GetIncludeShortestPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeShortestPathsOn();
    }
    else
    {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeShortestPathsOff();
    }
    else
    {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDomain(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetDomain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDomain() :
      op->vtkExpandSelectedGraph::GetDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDomain(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetUseDomain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDomain() :
      op->vtkExpandSelectedGraph::GetUseDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDomainOn();
    }
    else
    {
      op->vtkExpandSelectedGraph::UseDomainOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDomainOff();
    }
    else
    {
      op->vtkExpandSelectedGraph::UseDomainOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExpandSelectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkExpandSelectedGraph_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExpandSelectedGraph_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExpandSelectedGraph_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkExpandSelectedGraph\nC++: static vtkExpandSelectedGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExpandSelectedGraph_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkExpandSelectedGraph\nC++: vtkExpandSelectedGraph *NewInstance()\n\n"},
  {"SetGraphConnection", PyvtkExpandSelectedGraph_SetGraphConnection, METH_VARARGS,
   "V.SetGraphConnection(vtkAlgorithmOutput)\nC++: void SetGraphConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\ngraph).\n"},
  {"FillInputPortInformation", PyvtkExpandSelectedGraph_FillInputPortInformation, METH_VARARGS,
   "V.FillInputPortInformation(int, vtkInformation) -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSpecify the first vtkSelection input and the second vtkGraph\ninput.\n"},
  {"SetBFSDistance", PyvtkExpandSelectedGraph_SetBFSDistance, METH_VARARGS,
   "V.SetBFSDistance(int)\nC++: virtual void SetBFSDistance(int _arg)\n\nSet/Get BFSDistance which controls how many 'hops' the selection\nis grown from each seed point in the selection set (defaults to\n1)\n"},
  {"GetBFSDistance", PyvtkExpandSelectedGraph_GetBFSDistance, METH_VARARGS,
   "V.GetBFSDistance() -> int\nC++: virtual int GetBFSDistance()\n\nSet/Get BFSDistance which controls how many 'hops' the selection\nis grown from each seed point in the selection set (defaults to\n1)\n"},
  {"SetIncludeShortestPaths", PyvtkExpandSelectedGraph_SetIncludeShortestPaths, METH_VARARGS,
   "V.SetIncludeShortestPaths(bool)\nC++: virtual void SetIncludeShortestPaths(bool _arg)\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {"GetIncludeShortestPaths", PyvtkExpandSelectedGraph_GetIncludeShortestPaths, METH_VARARGS,
   "V.GetIncludeShortestPaths() -> bool\nC++: virtual bool GetIncludeShortestPaths()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {"IncludeShortestPathsOn", PyvtkExpandSelectedGraph_IncludeShortestPathsOn, METH_VARARGS,
   "V.IncludeShortestPathsOn()\nC++: virtual void IncludeShortestPathsOn()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {"IncludeShortestPathsOff", PyvtkExpandSelectedGraph_IncludeShortestPathsOff, METH_VARARGS,
   "V.IncludeShortestPathsOff()\nC++: virtual void IncludeShortestPathsOff()\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {"SetDomain", PyvtkExpandSelectedGraph_SetDomain, METH_VARARGS,
   "V.SetDomain(string)\nC++: virtual void SetDomain(const char *_arg)\n\nSet/Get the vertex domain to use in the expansion.\n"},
  {"GetDomain", PyvtkExpandSelectedGraph_GetDomain, METH_VARARGS,
   "V.GetDomain() -> string\nC++: virtual char *GetDomain()\n\nSet/Get the vertex domain to use in the expansion.\n"},
  {"SetUseDomain", PyvtkExpandSelectedGraph_SetUseDomain, METH_VARARGS,
   "V.SetUseDomain(bool)\nC++: virtual void SetUseDomain(bool _arg)\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {"GetUseDomain", PyvtkExpandSelectedGraph_GetUseDomain, METH_VARARGS,
   "V.GetUseDomain() -> bool\nC++: virtual bool GetUseDomain()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {"UseDomainOn", PyvtkExpandSelectedGraph_UseDomainOn, METH_VARARGS,
   "V.UseDomainOn()\nC++: virtual void UseDomainOn()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {"UseDomainOff", PyvtkExpandSelectedGraph_UseDomainOff, METH_VARARGS,
   "V.UseDomainOff()\nC++: virtual void UseDomainOff()\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkExpandSelectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkInfovisCorePython.vtkExpandSelectedGraph", // tp_name
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
  PyvtkExpandSelectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExpandSelectedGraph_StaticNew()
{
  return vtkExpandSelectedGraph::New();
}

PyObject *PyvtkExpandSelectedGraph_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkExpandSelectedGraph_Type, PyvtkExpandSelectedGraph_Methods,
    "vtkExpandSelectedGraph",
 &PyvtkExpandSelectedGraph_StaticNew);

  PyTypeObject *pytype = &PyvtkExpandSelectedGraph_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSelectionAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExpandSelectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExpandSelectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExpandSelectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

