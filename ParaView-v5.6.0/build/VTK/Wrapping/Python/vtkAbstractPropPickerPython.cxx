// python wrapper for vtkAbstractPropPicker
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
#include "vtkAbstractPropPicker.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractPropPicker(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkAbstractPropPicker_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPicker_ClassNew
extern "C" { PyObject *PyvtkAbstractPicker_ClassNew(); }
#define DECLARED_PyvtkAbstractPicker_ClassNew
#endif

static const char *PyvtkAbstractPropPicker_Doc =
  "vtkAbstractPropPicker - abstract API for pickers that can pick an\ninstance of vtkProp\n\n"
  "Superclass: vtkAbstractPicker\n\n"
  "vtkAbstractPropPicker is an abstract superclass for pickers that can\n"
  "pick an instance of vtkProp. Some pickers, like vtkWorldPointPicker\n"
  "(not a subclass of this class), cannot identify the prop that is\n"
  "picked. Subclasses of vtkAbstractPropPicker return a prop in the form\n"
  "of a vtkAssemblyPath when a pick is invoked. Note that an\n"
  "vtkAssemblyPath contain a list of vtkAssemblyNodes, each of which in\n"
  "turn contains a reference to a vtkProp and a 4x4 transformation\n"
  "matrix. The path fully describes the entire pick path, so you can\n"
  "pick assemblies or portions of assemblies, or just grab the tail end\n"
  "of the vtkAssemblyPath (which is the picked prop).\n\n"
  "@warning\n"
  "Because a vtkProp can be placed into different assemblies, or even in\n"
  "different leaf positions of the same assembly, the vtkAssemblyPath is\n"
  "used to fully qualify exactly which use of the vtkProp was picked,\n"
  "including its position (since vtkAssemblyPath includes a\n"
  "transformation matrix per node).\n\n"
  "@warning\n"
  "The class returns information about picked actors, props, etc. Note\n"
  "that what is returned by these methods is the top level of the\n"
  "assembly path. This can cause a lot of confusion! For example, if you\n"
  "pick a vtkAssembly, and the returned vtkAssemblyPath has as a leaf a\n"
  "vtkActor, then if you invoke GetActor(), you will get NULL, even\n"
  "though an actor was indeed picked. (GetAssembly() will return\n"
  "something.) Note that the safest thing to do is to do a\n"
  "GetViewProp(), which will always return something if something was\n"
  "picked. A better way to manage picking is to work with\n"
  "vtkAssemblyPath, since this completely defines the pick path from top\n"
  "to bottom in a assembly hierarchy, and avoids confusion when the same\n"
  "prop is used in different assemblies.\n\n"
  "@warning\n"
  "The returned assembly paths refer to assembly nodes that in turn\n"
  "refer to vtkProp and vtkMatrix. This association to vtkProp is not a\n"
  "reference counted association, meaning that dangling references are\n"
  "possible if you do a pick, get an assembly path, and then delete a\n"
  "vtkProp. (Reason: assembly paths create many self-referencing loops\n"
  "that destroy reference counting.)\n\n"
  "@sa\n"
  "vtkPropPicker vtkPicker vtkWorldPointPicker vtkCellPicker\n"
  "vtkPointPicker vtkAssemblyPath vtkAssemblyNode vtkAssemblyPaths\n"
  "vtkAbstractPicker vtkRenderer\n\n";


static PyObject *
PyvtkAbstractPropPicker_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractPropPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractPropPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractPropPicker *tempr = vtkAbstractPropPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractPropPicker::NewInstance());

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
PyvtkAbstractPropPicker_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  vtkAssemblyPath *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkAbstractPropPicker::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyPath *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkAbstractPropPicker::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkAbstractPropPicker::GetViewProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp3D *tempr = (ap.IsBound() ?
      op->GetProp3D() :
      op->vtkAbstractPropPicker::GetProp3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkAbstractPropPicker::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->GetActor2D() :
      op->vtkAbstractPropPicker::GetActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->GetVolume() :
      op->vtkAbstractPropPicker::GetVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkAbstractPropPicker::GetAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractPropPicker_GetPropAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractPropPicker *op = static_cast<vtkAbstractPropPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPropAssembly *tempr = (ap.IsBound() ?
      op->GetPropAssembly() :
      op->vtkAbstractPropPicker::GetPropAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractPropPicker_Methods[] = {
  {"IsTypeOf", PyvtkAbstractPropPicker_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractPropPicker_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractPropPicker_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkAbstractPropPicker\nC++: static vtkAbstractPropPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractPropPicker_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkAbstractPropPicker\nC++: vtkAbstractPropPicker *NewInstance()\n\n"},
  {"SetPath", PyvtkAbstractPropPicker_SetPath, METH_VARARGS,
   "V.SetPath(vtkAssemblyPath)\nC++: virtual void SetPath(vtkAssemblyPath *)\n\nReturn the vtkAssemblyPath that has been picked. The assembly\npath lists all the vtkProps that form an assembly. If no assembly\nis present, then the assembly path will have one node (which is\nthe picked prop). The set method is used internally to set the\npath. (Note: the structure of an assembly path is a collection of\nvtkAssemblyNode, each node pointing to a vtkProp and (possibly) a\ntransformation matrix.)\n"},
  {"GetPath", PyvtkAbstractPropPicker_GetPath, METH_VARARGS,
   "V.GetPath() -> vtkAssemblyPath\nC++: virtual vtkAssemblyPath *GetPath()\n\nReturn the vtkAssemblyPath that has been picked. The assembly\npath lists all the vtkProps that form an assembly. If no assembly\nis present, then the assembly path will have one node (which is\nthe picked prop). The set method is used internally to set the\npath. (Note: the structure of an assembly path is a collection of\nvtkAssemblyNode, each node pointing to a vtkProp and (possibly) a\ntransformation matrix.)\n"},
  {"GetViewProp", PyvtkAbstractPropPicker_GetViewProp, METH_VARARGS,
   "V.GetViewProp() -> vtkProp\nC++: virtual vtkProp *GetViewProp()\n\nReturn the vtkProp that has been picked. If NULL, nothing was\npicked. If anything at all was picked, this method will return\nsomething.\n"},
  {"GetProp3D", PyvtkAbstractPropPicker_GetProp3D, METH_VARARGS,
   "V.GetProp3D() -> vtkProp3D\nC++: virtual vtkProp3D *GetProp3D()\n\nReturn the vtkProp that has been picked. If NULL, no vtkProp3D\nwas picked.\n"},
  {"GetActor", PyvtkAbstractPropPicker_GetActor, METH_VARARGS,
   "V.GetActor() -> vtkActor\nC++: virtual vtkActor *GetActor()\n\nReturn the vtkActor that has been picked. If NULL, no actor was\npicked.\n"},
  {"GetActor2D", PyvtkAbstractPropPicker_GetActor2D, METH_VARARGS,
   "V.GetActor2D() -> vtkActor2D\nC++: virtual vtkActor2D *GetActor2D()\n\nReturn the vtkActor2D that has been picked. If NULL, no actor2D\nwas picked.\n"},
  {"GetVolume", PyvtkAbstractPropPicker_GetVolume, METH_VARARGS,
   "V.GetVolume() -> vtkVolume\nC++: virtual vtkVolume *GetVolume()\n\nReturn the vtkVolume that has been picked. If NULL, no volume was\npicked.\n"},
  {"GetAssembly", PyvtkAbstractPropPicker_GetAssembly, METH_VARARGS,
   "V.GetAssembly() -> vtkAssembly\nC++: virtual vtkAssembly *GetAssembly()\n\nReturn the vtkAssembly that has been picked. If NULL, no assembly\nwas picked. (Note: the returned assembly is the first node in the\nassembly path. If the path is one node long, then the assembly\nand the prop are the same, assuming that the first node is a\nvtkAssembly.)\n"},
  {"GetPropAssembly", PyvtkAbstractPropPicker_GetPropAssembly, METH_VARARGS,
   "V.GetPropAssembly() -> vtkPropAssembly\nC++: virtual vtkPropAssembly *GetPropAssembly()\n\nReturn the vtkPropAssembly that has been picked. If NULL, no prop\nassembly was picked. (Note: the returned prop assembly is the\nfirst node in the assembly path. If the path is one node long,\nthen the prop assembly and the prop are the same, assuming that\nthe first node is a vtkPropAssembly.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkAbstractPropPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkRenderingCorePython.vtkAbstractPropPicker", // tp_name
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
  PyvtkAbstractPropPicker_Doc, // tp_doc
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

PyObject *PyvtkAbstractPropPicker_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkAbstractPropPicker_Type, PyvtkAbstractPropPicker_Methods,
    "vtkAbstractPropPicker",
 nullptr);

  PyTypeObject *pytype = &PyvtkAbstractPropPicker_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractPropPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractPropPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractPropPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

