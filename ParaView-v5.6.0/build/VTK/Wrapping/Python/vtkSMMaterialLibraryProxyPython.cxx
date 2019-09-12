// python wrapper for vtkSMMaterialLibraryProxy
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
#include "vtkSMMaterialLibraryProxy.h"

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMMaterialLibraryProxy(PyObject *); }
extern "C" { VTK_ABI_EXPORT PyObject *PyvtkSMMaterialLibraryProxy_ClassNew(); }

#ifndef DECLARED_PyvtkSMProxy_ClassNew
extern "C" { PyObject *PyvtkSMProxy_ClassNew(); }
#define DECLARED_PyvtkSMProxy_ClassNew
#endif

static const char *PyvtkSMMaterialLibraryProxy_Doc =
  "vtkSMMaterialLibraryProxy - proxy for a camera.\n\n"
  "Superclass: vtkSMProxy\n\n"
  "This a proxy for controlling vtkOSPRayMaterialLibraries on various\n"
  "nodes. In particular we use it to ensure that all rendering processes\n"
  "have a consistent set of materials.\n\n";


static PyObject *
PyvtkSMMaterialLibraryProxy_IsTypeOf(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMMaterialLibraryProxy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMMaterialLibraryProxy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMMaterialLibraryProxy *tempr = vtkSMMaterialLibraryProxy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMMaterialLibraryProxy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMMaterialLibraryProxy::NewInstance());

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
PyvtkSMMaterialLibraryProxy_Synchronize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Synchronize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Synchronize();
    }
    else
    {
      op->vtkSMMaterialLibraryProxy::Synchronize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_LoadDefaultMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadDefaultMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LoadDefaultMaterials();
    }
    else
    {
      op->vtkSMMaterialLibraryProxy::LoadDefaultMaterials();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_LoadMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->LoadMaterials(temp0);
    }
    else
    {
      op->vtkSMMaterialLibraryProxy::LoadMaterials(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMMaterialLibraryProxy_UpdateVTKObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateVTKObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMMaterialLibraryProxy *op = static_cast<vtkSMMaterialLibraryProxy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateVTKObjects();
    }
    else
    {
      op->vtkSMMaterialLibraryProxy::UpdateVTKObjects();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMMaterialLibraryProxy_Methods[] = {
  {"IsTypeOf", PyvtkSMMaterialLibraryProxy_IsTypeOf, METH_VARARGS,
   "V.IsTypeOf(string) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMMaterialLibraryProxy_IsA, METH_VARARGS,
   "V.IsA(string) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMMaterialLibraryProxy_SafeDownCast, METH_VARARGS,
   "V.SafeDownCast(vtkObjectBase) -> vtkSMMaterialLibraryProxy\nC++: static vtkSMMaterialLibraryProxy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMMaterialLibraryProxy_NewInstance, METH_VARARGS,
   "V.NewInstance() -> vtkSMMaterialLibraryProxy\nC++: vtkSMMaterialLibraryProxy *NewInstance()\n\n"},
  {"Synchronize", PyvtkSMMaterialLibraryProxy_Synchronize, METH_VARARGS,
   "V.Synchronize()\nC++: void Synchronize()\n\nCopies the Material library on the root node of server to the\nclient.\n"},
  {"LoadDefaultMaterials", PyvtkSMMaterialLibraryProxy_LoadDefaultMaterials, METH_VARARGS,
   "V.LoadDefaultMaterials()\nC++: void LoadDefaultMaterials()\n\nReads default materials on the process.\n"},
  {"LoadMaterials", PyvtkSMMaterialLibraryProxy_LoadMaterials, METH_VARARGS,
   "V.LoadMaterials(string)\nC++: void LoadMaterials(const char *)\n\nReads and specified materials.\n"},
  {"UpdateVTKObjects", PyvtkSMMaterialLibraryProxy_UpdateVTKObjects, METH_VARARGS,
   "V.UpdateVTKObjects()\nC++: void UpdateVTKObjects() override;\n\nOverridden to control load from server file system.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static PyTypeObject PyvtkSMMaterialLibraryProxy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  "vtkPVServerManagerRenderingPython.vtkSMMaterialLibraryProxy", // tp_name
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
  PyvtkSMMaterialLibraryProxy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMMaterialLibraryProxy_StaticNew()
{
  return vtkSMMaterialLibraryProxy::New();
}

PyObject *PyvtkSMMaterialLibraryProxy_ClassNew()
{
  PyVTKClass_Add(
    &PyvtkSMMaterialLibraryProxy_Type, PyvtkSMMaterialLibraryProxy_Methods,
    "vtkSMMaterialLibraryProxy",
 &PyvtkSMMaterialLibraryProxy_StaticNew);

  PyTypeObject *pytype = &PyvtkSMMaterialLibraryProxy_Type;

  if ((pytype->tp_flags & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

#if !defined(VTK_PY3K) && PY_VERSION_HEX >= 0x02060000
  pytype->tp_flags |= Py_TPFLAGS_HAVE_NEWBUFFER;
#endif

  pytype->tp_base = (PyTypeObject *)PyvtkSMProxy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMMaterialLibraryProxy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMMaterialLibraryProxy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMMaterialLibraryProxy", o) != 0)
  {
    Py_DECREF(o);
  }

}

