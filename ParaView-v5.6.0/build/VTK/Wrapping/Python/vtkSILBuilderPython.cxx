// python wrapper for vtkSILBuilder
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
#include "vtkSILBuilder.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSILBuilder(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSILBuilder_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkSILBuilder_Doc =
  "vtkSILBuilder - helper class to build a SIL i.e.\n\n"
  "Superclass: vtkObject\n\n"
  "a directed graph used by reader producing composite datasets to\n"
  "describes the relationships among the blocks.\n\n"
  "vtkSILBuilder is a helper class to build a SIL i.e. a directed graph\n"
  "used by reader producing composite datasets to describes the\n"
  "relationships among the blocks. Refer to\n"
  "http://www.paraview.org/Wiki/Block_Hierarchy_Meta_Data for details.\n\n";


static PyObject *
PyvtkSILBuilder_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSILBuilder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSILBuilder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSILBuilder *tempr = vtkSILBuilder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSILBuilder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSILBuilder::NewInstance());

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
PyvtkSILBuilder_SetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkMutableDirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
  {
    if (ap.IsBound())
    {
      op->SetSIL(temp0);
    }
    else
    {
      op->vtkSILBuilder::SetSIL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_GetSIL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSIL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->GetSIL() :
      op->vtkSILBuilder::GetSIL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSILBuilder::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddVertex(temp0) :
      op->vtkSILBuilder::AddVertex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddChildEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddChildEdge(temp0, temp1) :
      op->vtkSILBuilder::AddChildEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_AddCrossEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCrossEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->AddCrossEdge(temp0, temp1) :
      op->vtkSILBuilder::AddCrossEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSILBuilder_GetRootVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSILBuilder *op = static_cast<vtkSILBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetRootVertex() :
      op->vtkSILBuilder::GetRootVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSILBuilder_Methods[] = {
  {"IsTypeOf", PyvtkSILBuilder_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSILBuilder_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSILBuilder_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSILBuilder\nC++: static vtkSILBuilder *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSILBuilder_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSILBuilder\nC++: vtkSILBuilder *NewInstance()\n\n"},
  {"SetSIL", PyvtkSILBuilder_SetSIL, METH_VARARGS,
   "V.SetSIL(vtkMutableDirectedGraph)\nC++: void SetSIL(vtkMutableDirectedGraph *)\n\nGet/Set the graph to populate.\n"},
  {"GetSIL", PyvtkSILBuilder_GetSIL, METH_VARARGS,
   "V.GetSIL() -> vtkMutableDirectedGraph\nC++: virtual vtkMutableDirectedGraph *GetSIL()\n\nGet/Set the graph to populate.\n"},
  {"Initialize", PyvtkSILBuilder_Initialize, METH_VARARGS,
   "V.Initialize()\nC++: void Initialize()\n\nInitializes the data-structures.\n"},
  {"AddVertex", PyvtkSILBuilder_AddVertex, METH_VARARGS,
   "V.AddVertex(string) -> int\nC++: vtkIdType AddVertex(const char *name)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {"AddChildEdge", PyvtkSILBuilder_AddChildEdge, METH_VARARGS,
   "V.AddChildEdge(int, int) -> int\nC++: vtkIdType AddChildEdge(vtkIdType parent, vtkIdType child)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {"AddCrossEdge", PyvtkSILBuilder_AddCrossEdge, METH_VARARGS,
   "V.AddCrossEdge(int, int) -> int\nC++: vtkIdType AddCrossEdge(vtkIdType src, vtkIdType dst)\n\nAdd vertex, child-edge or cross-edge to the graph.\n"},
  {"GetRootVertex", PyvtkSILBuilder_GetRootVertex, METH_VARARGS,
   "V.GetRootVertex() -> int\nC++: virtual vtkIdType GetRootVertex()\n\nReturns the vertex id for the root vertex.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSILBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkIOXdmf2Python.vtkSILBuilder", // tp_name
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
  PyvtkSILBuilder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSILBuilder_StaticNew()
{
  return vtkSILBuilder::New();
}

PyObject *PyvtkSILBuilder_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSILBuilder_Type, PyvtkSILBuilder_Methods,
    "vtkSILBuilder",
 &PyvtkSILBuilder_StaticNew);

  PyTypeObject *pytype = &PyvtkSILBuilder_Type;

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

void PyVTKAddFile_vtkSILBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSILBuilder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSILBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

