// python wrapper for vtkSMSelectionLink
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
#include "vtkSMSelectionLink.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMSelectionLink(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMSelectionLink_ClassNew(); }

#ifndef DECLARED_PyvtkSMLink_ClassNew
extern "C" { PyObject *PyvtkSMLink_ClassNew(); }
#define DECLARED_PyvtkSMLink_ClassNew
#endif

static const char *PyvtkSMSelectionLink_Doc =
  "vtkSMSelectionLink - Creates a link between two properties.\n\n"
  "Superclass: vtkSMLink\n\n"
  "Can create M->N links. At the time when the link is created every\n"
  "output Selection is synchronized with the first input Selection.\n\n";


static PyObject *
PyvtkSMSelectionLink_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMSelectionLink::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMSelectionLink::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMSelectionLink *tempr = vtkSMSelectionLink::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMSelectionLink *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMSelectionLink::NewInstance());

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
PyvtkSMSelectionLink_AddLinkedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMProxy") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddLinkedSelection(temp0, temp1);
    }
    else
    {
      op->vtkSMSelectionLink::AddLinkedSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_RemoveLinkedSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLinkedSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  vtkSMProxy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSMProxy"))
  {
    if (ap.IsBound())
    {
      op->RemoveLinkedSelection(temp0);
    }
    else
    {
      op->vtkSMSelectionLink::RemoveLinkedSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_GetNumberOfLinkedObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLinkedObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLinkedObjects() :
      op->vtkSMSelectionLink::GetNumberOfLinkedObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_GetLinkedProxy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedProxy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMProxy *tempr = (ap.IsBound() ?
      op->GetLinkedProxy(temp0) :
      op->vtkSMSelectionLink::GetLinkedProxy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_GetLinkedObjectDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkedObjectDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinkedObjectDirection(temp0) :
      op->vtkSMSelectionLink::GetLinkedObjectDirection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_RemoveAllLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLinks();
    }
    else
    {
      op->vtkSMSelectionLink::RemoveAllLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_LoadState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  vtkSMMessage *temp0 = nullptr;
  vtkSMProxyLocator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSMMessage") &&
      ap.GetVTKObject(temp1, "vtkSMProxyLocator"))
  {
    if (ap.IsBound())
    {
      op->LoadState(temp0, temp1);
    }
    else
    {
      op->vtkSMSelectionLink::LoadState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_SetConvertToIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertToIndices(temp0);
    }
    else
    {
      op->vtkSMSelectionLink::SetConvertToIndices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMSelectionLink_GetConvertToIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMSelectionLink *op = static_cast<vtkSMSelectionLink *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertToIndices() :
      op->vtkSMSelectionLink::GetConvertToIndices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMSelectionLink_Methods[] = {
  {"IsTypeOf", PyvtkSMSelectionLink_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMSelectionLink_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMSelectionLink_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMSelectionLink\nC++: static vtkSMSelectionLink *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMSelectionLink_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMSelectionLink\nC++: vtkSMSelectionLink *NewInstance()\n\n"},
  {"AddLinkedSelection", PyvtkSMSelectionLink_AddLinkedSelection, METH_VARARGS,
   "V.AddLinkedSelection(vtkSMProxy, int)\nC++: void AddLinkedSelection(vtkSMProxy *proxy, int updateDir)\n\nAdd a selection to the link. updateDir determines whether the\nproxy used is an input or an output. When a selection of an input\nproxy changes, it's selection is set to all other output proxies\nin the link. A selection can be set to be both input and output\nby adding 2 links, one to INPUT and the other to OUTPUT When a\nlink is added, all output Selection values are synchronized with\nthat of the input.\n"},
  {"RemoveLinkedSelection", PyvtkSMSelectionLink_RemoveLinkedSelection, METH_VARARGS,
   "V.RemoveLinkedSelection(vtkSMProxy)\nC++: void RemoveLinkedSelection(vtkSMProxy *proxy)\n\nAdd a selection to the link. updateDir determines whether the\nproxy used is an input or an output. When a selection of an input\nproxy changes, it's selection is set to all other output proxies\nin the link. A selection can be set to be both input and output\nby adding 2 links, one to INPUT and the other to OUTPUT When a\nlink is added, all output Selection values are synchronized with\nthat of the input.\n"},
  {"GetNumberOfLinkedObjects", PyvtkSMSelectionLink_GetNumberOfLinkedObjects, METH_VARARGS,
   "V.GetNumberOfLinkedObjects() -> int\nC++: unsigned int GetNumberOfLinkedObjects() override;\n\nGet the number of properties that are involved in this link.\n"},
  {"GetLinkedProxy", PyvtkSMSelectionLink_GetLinkedProxy, METH_VARARGS,
   "V.GetLinkedProxy(int) -> vtkSMProxy\nC++: vtkSMProxy *GetLinkedProxy(int index) override;\n\nGet a proxy involved in this link.\n"},
  {"GetLinkedObjectDirection", PyvtkSMSelectionLink_GetLinkedObjectDirection, METH_VARARGS,
   "V.GetLinkedObjectDirection(int) -> int\nC++: int GetLinkedObjectDirection(int index) override;\n\nGet the direction of a Selection involved in this link (see\nvtkSMLink::UpdateDirections)\n"},
  {"RemoveAllLinks", PyvtkSMSelectionLink_RemoveAllLinks, METH_VARARGS,
   "V.RemoveAllLinks()\nC++: void RemoveAllLinks() override;\n\nRemove all links.\n"},
  {"LoadState", PyvtkSMSelectionLink_LoadState, METH_VARARGS,
   "V.LoadState(vtkSMMessage, vtkSMProxyLocator)\nC++: void LoadState(const vtkSMMessage *msg,\n    vtkSMProxyLocator *locator) override;\n\nThis method is used to initialize the object to the given\nprotobuf state\n"},
  {"SetConvertToIndices", PyvtkSMSelectionLink_SetConvertToIndices, METH_VARARGS,
   "V.SetConvertToIndices(bool)\nC++: virtual void SetConvertToIndices(bool _arg)\n\nSet/Get the convert to indices flag. When on, the input selection\nwill always be converted into an indices based selection before\nbeing applied to outputs\n"},
  {"GetConvertToIndices", PyvtkSMSelectionLink_GetConvertToIndices, METH_VARARGS,
   "V.GetConvertToIndices() -> bool\nC++: virtual bool GetConvertToIndices()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMSelectionLink_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMSelectionLink", // tp_name
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
  PyvtkSMSelectionLink_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMSelectionLink_StaticNew()
{
  return vtkSMSelectionLink::New();
}

PyObject *PyvtkSMSelectionLink_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMSelectionLink_Type, PyvtkSMSelectionLink_Methods,
    "vtkSMSelectionLink",
 &PyvtkSMSelectionLink_StaticNew);

  PyTypeObject *pytype = &PyvtkSMSelectionLink_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMLink_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMSelectionLink(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMSelectionLink_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMSelectionLink", o) != 0)
  {
    Py_DECREF(o);
  }

}

