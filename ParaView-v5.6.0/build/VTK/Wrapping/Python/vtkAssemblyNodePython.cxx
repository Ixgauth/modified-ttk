// python wrapper for vtkAssemblyNode
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
#include "vtkAssemblyNode.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssemblyNode(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAssemblyNode_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static const char *PyvtkAssemblyNode_Doc =
  "vtkAssemblyNode - represent a node in an assembly\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAssemblyNode represents a node in an assembly. It is used by\n"
  "vtkAssemblyPath to create hierarchical assemblies of props. The props\n"
  "can be either 2D or 3D.\n\n"
  "An assembly node refers to a vtkProp, and possibly a vtkMatrix4x4.\n"
  "Nodes are used by vtkAssemblyPath to build fully evaluated path\n"
  "(matrices are concatenated through the path) that is used by picking\n"
  "and other operations involving assemblies.\n\n"
  "@warning\n"
  "The assembly node is guaranteed to contain a reference to an instance\n"
  "of vtkMatrix4x4 if the prop referred to by the node is of type\n"
  "vtkProp3D (or subclass). The matrix is evaluated through the assembly\n"
  "path, so the assembly node's matrix is a function of its location in\n"
  "the vtkAssemblyPath.\n\n"
  "@warning\n"
  "vtkAssemblyNode does not reference count its association with\n"
  "vtkProp. Therefore, do not create an assembly node, associate a prop\n"
  "with it, delete the prop, and then try to dereference the prop. The\n"
  "program will break! (Reason: vtkAssemblyPath (which uses\n"
  "vtkAssemblyNode) create self-referencing loops that destroy reference\n"
  "counting.)\n\n"
  "@sa\n"
  "vtkAssemblyPath vtkProp vtkPicker vtkMatrix4x4\n\n";


static PyObject *
PyvtkAssemblyNode_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssemblyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssemblyNode *tempr = vtkAssemblyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyNode::NewInstance());

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
PyvtkAssemblyNode_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->SetViewProp(temp0);
    }
    else
    {
      op->vtkAssemblyNode::SetViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkAssemblyNode::GetViewProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkAssemblyNode::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkAssemblyNode::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyNode::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAssemblyNode_Methods[] = {
  {"IsTypeOf", PyvtkAssemblyNode_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssemblyNode_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssemblyNode_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAssemblyNode\nC++: static vtkAssemblyNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssemblyNode_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAssemblyNode\nC++: vtkAssemblyNode *NewInstance()\n\n"},
  {"SetViewProp", PyvtkAssemblyNode_SetViewProp, METH_VARARGS,
   "V.SetViewProp(vtkProp)\nC++: virtual void SetViewProp(vtkProp *prop)\n\nSet/Get the prop that this assembly node refers to.\n"},
  {"GetViewProp", PyvtkAssemblyNode_GetViewProp, METH_VARARGS,
   "V.GetViewProp() -> vtkProp\nC++: virtual vtkProp *GetViewProp()\n\nSet/Get the prop that this assembly node refers to.\n"},
  {"SetMatrix", PyvtkAssemblyNode_SetMatrix, METH_VARARGS,
   "V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {"GetMatrix", PyvtkAssemblyNode_GetMatrix, METH_VARARGS,
   "V.GetMatrix() -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {"GetMTime", PyvtkAssemblyNode_GetMTime, METH_VARARGS,
   "V.GetMTime() -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the standard GetMTime() to check for the modified times\nof the prop and matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAssemblyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAssemblyNode", // tp_name
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
  PyvtkAssemblyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssemblyNode_StaticNew()
{
  return vtkAssemblyNode::New();
}

PyObject *PyvtkAssemblyNode_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAssemblyNode_Type, PyvtkAssemblyNode_Methods,
    "vtkAssemblyNode",
 &PyvtkAssemblyNode_StaticNew);

  PyTypeObject *pytype = &PyvtkAssemblyNode_Type;

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

void PyVTKAddFile_vtkAssemblyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssemblyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssemblyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

