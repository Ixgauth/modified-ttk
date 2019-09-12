// python wrapper for vtkAssemblyPath
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
#include "vtkAssemblyPath.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssemblyPath(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAssemblyPath_ClassNew(); }

#ifndef DECLARED_PyvtkCollection_ClassNew
extern "C" { PyObject *PyvtkCollection_ClassNew(); }
#define DECLARED_PyvtkCollection_ClassNew
#endif

static const char *PyvtkAssemblyPath_Doc =
  "vtkAssemblyPath - a list of nodes that form an assembly path\n\n"
  "Superclass: vtkCollection\n\n"
  "vtkAssemblyPath represents an ordered list of assembly nodes that\n"
  "represent a fully evaluated assembly path. This class is used\n"
  "primarily for picking. Note that the use of this class is to add one\n"
  "or more assembly nodes to form the path. (An assembly node consists\n"
  "of an instance of vtkProp and vtkMatrix4x4, the matrix may be NULL.)\n"
  "As each node is added, the matrices are concatenated to create a\n"
  "final, evaluated matrix.\n\n"
  "@sa\n"
  "vtkAssemblyNode vtkAssembly vtkActor vtkMatrix4x4 vtkProp\n"
  "vtkAbstractPicker\n\n";


static PyObject *
PyvtkAssemblyPath_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssemblyPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssemblyPath *tempr = vtkAssemblyPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyPath::NewInstance());

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
PyvtkAssemblyPath_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkProp *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->AddNode(temp0, temp1);
    }
    else
    {
      op->vtkAssemblyPath::AddNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetNextNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetNextNode() :
      op->vtkAssemblyPath::GetNextNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetFirstNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetFirstNode() :
      op->vtkAssemblyPath::GetFirstNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->GetLastNode() :
      op->vtkAssemblyPath::GetLastNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteLastNode();
    }
    else
    {
      op->vtkAssemblyPath::DeleteLastNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAssemblyPath::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyPath::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAssemblyPath_Methods[] = {
  {"IsTypeOf", PyvtkAssemblyPath_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssemblyPath_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssemblyPath_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAssemblyPath\nC++: static vtkAssemblyPath *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssemblyPath_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAssemblyPath\nC++: vtkAssemblyPath *NewInstance()\n\n"},
  {"AddNode", PyvtkAssemblyPath_AddNode, METH_VARARGS,
   "V.AddNode(vtkProp, vtkMatrix4x4)\nC++: void AddNode(vtkProp *p, vtkMatrix4x4 *m)\n\nConvenience method adds a prop and matrix together, creating an\nassembly node transparently. The matrix pointer m may be NULL.\nNote: that matrix is the one, if any, associated with the prop.\n"},
  {"GetNextNode", PyvtkAssemblyPath_GetNextNode, METH_VARARGS,
   "V.GetNextNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetNextNode()\n\nGet the next assembly node in the list. The node returned\ncontains a pointer to a prop and a 4x4 matrix. The matrix is\nevaluated based on the preceding assembly hierarchy (i.e., the\nmatrix is not necessarily as the same as the one that was added\nwith AddNode() because of the concatenation of matrices in the\nassembly hierarchy).\n"},
  {"GetFirstNode", PyvtkAssemblyPath_GetFirstNode, METH_VARARGS,
   "V.GetFirstNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetFirstNode()\n\nGet the first assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node. (Note:\nThis node corresponds to the vtkProp associated with the\nvtkRenderer.\n"},
  {"GetLastNode", PyvtkAssemblyPath_GetLastNode, METH_VARARGS,
   "V.GetLastNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetLastNode()\n\nGet the last assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node.\n"},
  {"DeleteLastNode", PyvtkAssemblyPath_DeleteLastNode, METH_VARARGS,
   "V.DeleteLastNode()\nC++: void DeleteLastNode()\n\nDelete the last assembly node in the list. This is like a stack\npop.\n"},
  {"ShallowCopy", PyvtkAssemblyPath_ShallowCopy, METH_VARARGS,
   "V.ShallowCopy(vtkAssemblyPath)\nC++: void ShallowCopy(vtkAssemblyPath *path)\n\nPerform a shallow copy (reference counted) on the incoming path.\n"},
  {"GetMTime", PyvtkAssemblyPath_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the standard GetMTime() to check for the modified times\nof the nodes in this path.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAssemblyPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAssemblyPath", // tp_name
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
  PyvtkAssemblyPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssemblyPath_StaticNew()
{
  return vtkAssemblyPath::New();
}

PyObject *PyvtkAssemblyPath_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAssemblyPath_Type, PyvtkAssemblyPath_Methods,
    "vtkAssemblyPath",
 &PyvtkAssemblyPath_StaticNew);

  PyTypeObject *pytype = &PyvtkAssemblyPath_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkCollection_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssemblyPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssemblyPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssemblyPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

