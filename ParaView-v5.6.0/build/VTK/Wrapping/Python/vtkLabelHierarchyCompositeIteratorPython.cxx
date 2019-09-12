// python wrapper for vtkLabelHierarchyCompositeIterator
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
#include "vtkLabelHierarchyCompositeIterator.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelHierarchyCompositeIterator(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkLabelHierarchyCompositeIterator_ClassNew(); }

#ifndef DECLARED_PyvtkLabelHierarchyIterator_ClassNew
extern "C" { PyObject *PyvtkLabelHierarchyIterator_ClassNew(); }
#define DECLARED_PyvtkLabelHierarchyIterator_ClassNew
#endif

static const char *PyvtkLabelHierarchyCompositeIterator_Doc =
  "vtkLabelHierarchyCompositeIterator - Iterator over sub-iterators\n\n"
  "Superclass: vtkLabelHierarchyIterator\n\n"
  "Iterates over child iterators in a round-robin order. Each iterator\n"
  "may have its own count, which is the number of times it is repeated\n"
  "until moving to the next iterator.\n\n"
  "For example, if you initialize the iterator with\n\n"
  "it->AddIterator(A, 1); it->AddIterator(B, 3);  The order of iterators\n"
  "will be A,B,B,B,A,B,B,B,...\n\n";


static PyObject *
PyvtkLabelHierarchyCompositeIterator_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelHierarchyCompositeIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelHierarchyCompositeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelHierarchyCompositeIterator *tempr = vtkLabelHierarchyCompositeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchyCompositeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelHierarchyCompositeIterator::NewInstance());

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
PyvtkLabelHierarchyCompositeIterator_AddIterator_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkLabelHierarchyIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLabelHierarchyIterator"))
  {
    if (ap.IsBound())
    {
      op->AddIterator(temp0);
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::AddIterator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchyCompositeIterator_AddIterator_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkLabelHierarchyIterator *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLabelHierarchyIterator") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddIterator(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::AddIterator(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabelHierarchyCompositeIterator_AddIterator(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLabelHierarchyCompositeIterator_AddIterator_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyCompositeIterator_AddIterator_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddIterator");
  return nullptr;
}



static PyObject *
PyvtkLabelHierarchyCompositeIterator_ClearIterators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIterators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearIterators();
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::ClearIterators();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->Begin(temp0);
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::Begin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_Next(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Next");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Next();
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::Next();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_IsAtEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAtEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsAtEnd() :
      op->vtkLabelHierarchyCompositeIterator::IsAtEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetLabelId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdType tempr = (ap.IsBound() ?
      op->GetLabelId() :
      op->vtkLabelHierarchyCompositeIterator::GetLabelId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelHierarchy *tempr = (ap.IsBound() ?
      op->GetHierarchy() :
      op->vtkLabelHierarchyCompositeIterator::GetHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_GetNodeGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    ap.Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNodeGeometry(temp0, temp1);
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::GetNodeGeometry(temp0, temp1);
    }

    if (ap.HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_BoxNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoxNode();
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::BoxNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelHierarchyCompositeIterator_BoxAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyCompositeIterator *op = static_cast<vtkLabelHierarchyCompositeIterator *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->BoxAllNodes(temp0);
    }
    else
    {
      op->vtkLabelHierarchyCompositeIterator::BoxAllNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelHierarchyCompositeIterator_Methods[] = {
  {"IsTypeOf", PyvtkLabelHierarchyCompositeIterator_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelHierarchyCompositeIterator_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelHierarchyCompositeIterator_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase)\n    -> vtkLabelHierarchyCompositeIterator\nC++: static vtkLabelHierarchyCompositeIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelHierarchyCompositeIterator_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkLabelHierarchyCompositeIterator\nC++: vtkLabelHierarchyCompositeIterator *NewInstance()\n\n"},
  {"AddIterator", PyvtkLabelHierarchyCompositeIterator_AddIterator, METH_VARARGS,
   "V.AddIterator(vtkLabelHierarchyIterator)\nC++: virtual void AddIterator(vtkLabelHierarchyIterator *it)\nV.AddIterator(vtkLabelHierarchyIterator, int)\nC++: virtual void AddIterator(vtkLabelHierarchyIterator *it,\n    int count)\n\nAdds a label iterator to this composite iterator. The second\noptional argument is the number of times to repeat the iterator\nbefore moving to the next one round-robin style. Default is 1.\n"},
  {"ClearIterators", PyvtkLabelHierarchyCompositeIterator_ClearIterators, METH_VARARGS,
   "V.ClearIterators()\nC++: virtual void ClearIterators()\n\nRemove all iterators from this composite iterator.\n"},
  {"Begin", PyvtkLabelHierarchyCompositeIterator_Begin, METH_VARARGS,
   "V.Begin(vtkIdTypeArray)\nC++: void Begin(vtkIdTypeArray *) override;\n\nInitializes the iterator. lastLabels is an array holding labels\nwhich should be traversed before any other labels in the\nhierarchy. This could include labels placed during a previous\nrendering or a label located under the mouse pointer. You may\npass a null pointer.\n"},
  {"Next", PyvtkLabelHierarchyCompositeIterator_Next, METH_VARARGS,
   "V.Next()\nC++: void Next() override;\n\nAdvance the iterator.\n"},
  {"IsAtEnd", PyvtkLabelHierarchyCompositeIterator_IsAtEnd, METH_VARARGS,
   "V.IsAtEnd() -> bool\nC++: bool IsAtEnd() override;\n\nReturns true if the iterator is at the end.\n"},
  {"GetLabelId", PyvtkLabelHierarchyCompositeIterator_GetLabelId, METH_VARARGS,
   "V.GetLabelId() -> int\nC++: vtkIdType GetLabelId() override;\n\nRetrieves the current label id.\n"},
  {"GetHierarchy", PyvtkLabelHierarchyCompositeIterator_GetHierarchy, METH_VARARGS,
   "V.GetHierarchy() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetHierarchy() override;\n\nRetrieve the current label hierarchy.\n"},
  {"GetNodeGeometry", PyvtkLabelHierarchyCompositeIterator_GetNodeGeometry, METH_VARARGS,
   "V.GetNodeGeometry([float, float, float], float)\nC++: void GetNodeGeometry(double ctr[3], double &size) override;\n\nRetrieve the coordinates of the center of the current hierarchy\nnode and the size of the node. Nodes are n-cubes, so the size is\nthe length of any edge of the cube. This is used by BoxNode().\n"},
  {"BoxNode", PyvtkLabelHierarchyCompositeIterator_BoxNode, METH_VARARGS,
   "V.BoxNode()\nC++: void BoxNode() override;\n\nNot implemented.\n"},
  {"BoxAllNodes", PyvtkLabelHierarchyCompositeIterator_BoxAllNodes, METH_VARARGS,
   "V.BoxAllNodes(vtkPolyData)\nC++: void BoxAllNodes(vtkPolyData *) override;\n\nNot implemented.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkLabelHierarchyCompositeIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingLabelPython.vtkLabelHierarchyCompositeIterator", // tp_name
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
  PyvtkLabelHierarchyCompositeIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelHierarchyCompositeIterator_StaticNew()
{
  return vtkLabelHierarchyCompositeIterator::New();
}

PyObject *PyvtkLabelHierarchyCompositeIterator_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkLabelHierarchyCompositeIterator_Type, PyvtkLabelHierarchyCompositeIterator_Methods,
    "vtkLabelHierarchyCompositeIterator",
 &PyvtkLabelHierarchyCompositeIterator_StaticNew);

  PyTypeObject *pytype = &PyvtkLabelHierarchyCompositeIterator_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkLabelHierarchyIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelHierarchyCompositeIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelHierarchyCompositeIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelHierarchyCompositeIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

